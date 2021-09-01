/*
Copyright 2021 Prolept

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#include "oxlinter.h"
#include <ostream>
#include <iostream>
#include <boost/program_options.hpp>
#include <boost/process.hpp>
#include "antlr4-common.h"
#include "oxadvancedLexer.h"
#include <regex>
#include "waveidl/cpp.hpp"
#include <boost/filesystem/path.hpp>
#include "symbol.h"

#include "oxlintertool.h"
#include "oxmain.h"
 
using namespace antlr4;
//// TODO on_include_helper a modifier ? pour les probleme de BOM UT8...
/// #define ANTLR4CPP_STATIC must be defined in preprocessor ! 
namespace po = boost::program_options;
using std::istreambuf_iterator;
namespace bp = boost::process;
const std::string HelpMessage = " use --help to get a hint.";




static bool s_PrintDebug = false;
void LogConsole(std::string str)
{
	if(s_PrintDebug)
		std::cerr << "Log console: " << str << std::endl;
 
}
#ifndef OXLINTER_LIB

int main(int argc, char** argv)
{
	try
	{
		po::options_description desc_cmdline("Options allowed on the command line only");

		desc_cmdline.add_options()
			("help,h",
			 "print out program usage (this message)")
			("version,v",
			 "print the version number")
			("copyright,c",
			 "print out the copyright statement")
			("output,o", po::value<string>(),
			 "specify a file to use for output instead of stdout - need to be used with --complete")
			("include,I", po::value<vector< boost::filesystem::path>>(),
			 "specify an additional include directory")
			("file,f", po::value<string>(),
			 "specify the file to preprocess")
			("filestdin,s", po::value<string>(),
			 "specify the file name to preprocess, must be transmitted via std:cin")
			("complete",
			 "complete analysis (preprocess), otherwise only the current file")
			("symbol",
			 "Display symbol information, otherwise display errors")
			("debug,d",
			 "Display debug  information")

			("cleanup,a", po::value<string>(),
			 "Cleanup using Astyle")

			("FindImplementation,F", po::value<string>(),
			 "Find implementation of the given word  - Go To Implementation - need to be used with --offset")

			("FindDefinition,D", po::value<string>(),
			 "Find definition of the given word - Go To Definition - need to be used with --offset")

			("autocompletion,A", po::value<string>(),
			 "autocompletion argument : wordtosearch  or \"allmembres\" ")
			("gendoc,g", po::value<string>(),
			 "generate documentation, argument : function prototype ")
			("line,L", po::value<int>(),
			 "Line for autocompletion argument  ")
			("offset,r", po::value<std::vector<int>>()->multitoken(),
			 "offset in document - line column (ex: -offset=5 120")
			;
	
		oxMain ox_main;
		using namespace boost::program_options::command_line_style;
		po::parsed_options opts = po::parse_command_line(argc, argv, desc_cmdline, default_style);	// Parse arguments and store results
		po::variables_map vm;
		
		po::store(opts, vm);
		po::notify(vm);
	
		
		std::string file;
		std::string fileNameStdin;
		std::string filecontentstdin;
		/* Setting changed by the user */
		bool IsFile = false;
		bool IsFilestdin = false;
		bool DebugMode = false;
		if (vm.count("file"))
		{
			file = (vm["file"].as<string>());
			std::ifstream ifs;
			ifs.open(file);
			if (ifs.fail())
			{
				cerr << "OxLinter :invalid --file, " << endl;
				std::cerr << "fail to load the file (55)" << std::endl;
				return eFailure_to_load_file;
			}
			else
			{
				ox_main.SetFilePath(file);
				IsFile = true;
			}
		}

		if (vm.count("filestdin"))
		{
			fileNameStdin = (vm["filestdin"].as<string>());

			if (IsFile)
			{
				cerr << "OxLinter :--filestdin cannot be used with --file, " << endl;
				return eInvalidArgument;
			}

			std::string line;
			std::stringstream ss;
			while (std::getline(std::cin, line))
			{
				ss << line << endl;
			}
			if (std::cin.bad())
			{
				cerr << "OxLinter : IO error[1] " << endl;
				return eInvalidArgument;
			}
			if (!std::cin.eof())
			{
				cerr << "OxLinter : IO error[2] " << endl;
				return eInvalidArgument;
			}

			filecontentstdin = ss.str();
			if (filecontentstdin.length() < 1)
			{
				cerr << "OxLinter :--filestdin no input, " << endl;
				return eInvalidArgument;
			}
			IsFilestdin = true;
			ox_main.SetFilePathStdIn(fileNameStdin);
		}


		if (vm.count("help") || argc == 1)
		{
			po::options_description desc_help("Usage: OxLinter [options]  file");
			desc_help.add(desc_cmdline) ;
			cout << desc_help << endl;
			return eSucces;
		}
		if (vm.count("debug"))
		{
			DebugMode = true;
			s_PrintDebug = true;
			ox_main.SetDebugMode(true);
		}
		if (vm.count("version"))
		{
			ox_main.printVersion();
			return eSucces;
		}
		if (vm.count("copyright"))
		{
			ox_main.printCopyright();
			return eSucces;
		}
		if (vm.count("autocompletion"))
		{
			if (IsFile)
			{
				cerr << "autocompletion: no working with file" << HelpMessage << endl;
				return eInvalidArgument;
			}
			if (!IsFilestdin)
			{
				cerr << "missing file content" << HelpMessage << endl;
				return eInvalidArgument;
			}
			std::string variableToSearch = (vm["autocompletion"].as<string>());
			if (!vm.count("line"))
			{
				cerr << "autocompletion: no line  given" << HelpMessage << endl;
				return eInvalidArgument;
			}
			int LineOfVariable = (vm["line"].as<int>());
			
			return ox_main.PrintAutoCompletion(variableToSearch, filecontentstdin, LineOfVariable, vm);
		}
		if (vm.count("cleanup"))
		{
			if (!IsFilestdin)
			{
				cerr << " Filestdin missing";
				 
				return eInvalidArgument;
			}
			const char* options = "--pad-header --break-blocks  --pad-oper --keep-one-line-blocks --delete-empty-lines --unpad-paren --style=java";
			auto params = (vm["cleanup"].as<string>());
			if (!params.empty())
			{
				options = params.c_str();
			}
			// call the Artistic Style formatting function
			char* textOut = AStyleMain(filecontentstdin.c_str(),
			                           options,
			                           ASErrorHandler,
			                           ASMemoryAlloc);
			if (textOut == NULL)
				error(string("Cannot format " + file));
			// return the formatted text;
			cout << textOut;
			delete [] textOut;
			return eSucces;
		}
		if (vm.count("FindImplementation") && vm.count("FindDefinition"))
		{
			return eInvalidArgument;
		}
		if (vm.count("FindDefinition"))
		{
			LogConsole("FindDefinition");
			
			if (IsFile)
			{
				ifstream instream(file.c_str());
				if (!instream.is_open()) {
					cerr << "could not open input file: " << endl;
					return -1;
				}
				instream.unsetf(std::ios::skipws);
				fileNameStdin = file;
				filecontentstdin = string(istreambuf_iterator<char>(instream.rdbuf()),
					istreambuf_iterator<char>());

				ox_main.SetFilePathStdIn(fileNameStdin);
			}

			if (!IsFilestdin && !IsFile)
			{
				cerr << "missing file content , " << HelpMessage << endl;
				return eInvalidArgument;
			}

			string wordToSearch = (vm["FindDefinition"].as<string>());
			vector<int> linecol;
			if (vm["offset"].empty() || (linecol = vm["offset"].as<vector<int>>()).size() != 2)
			{
				return eInvalidArgument;
			}
			linecol = (vm["offset"].as<vector<int>>());


			return ox_main.FindDefinition(wordToSearch, linecol,filecontentstdin, vm);

		}
		if (vm.count("FindImplementation")) // -> Go To Implementation
		{
			if (IsFile)
			{
				ifstream instream(file.c_str());
				if (!instream.is_open()) {
					cerr << "could not open input file: " << endl;
					return -1;
				}
				instream.unsetf(std::ios::skipws);
				fileNameStdin = file;
				filecontentstdin = string(istreambuf_iterator<char>(instream.rdbuf()),
					istreambuf_iterator<char>());
				ox_main.SetFilePathStdIn(fileNameStdin);
			}

			if (!IsFilestdin && !IsFile)
			{
				cerr << "missing file content , " << HelpMessage << endl;
				return eInvalidArgument;
			}
			LogConsole("FindImplementation");
			vector<int> linecol;
			if (vm["offset"].empty() || (linecol = vm["offset"].as<vector<int>>()).size() != 2)
			{
				return eInvalidArgument;
			}
			linecol = (vm["offset"].as<vector<int>>());
			string wordToSearch = (vm["FindImplementation"].as<string>());

			return ox_main.FindImplementation(wordToSearch, linecol,filecontentstdin, vm);
		}
		if (vm.count("gendoc"))  
		{
			std::string text = (vm["gendoc"].as<string>());;
			return ox_main.GenerateDocumentation(text);
			
		}
		bool analyseError = true;
		bool analyseSymbol = false;
		if (vm.count("symbol"))
		{
			analyseError = false;
			analyseSymbol = true;
		}
		if (vm.count("complete"))
		{
			if (IsFile)
			{
				ifstream instream(file.c_str());
				if (!instream.is_open()) {
					cerr << "could not open input file: " << endl;
					return -1;
				}
				instream.unsetf(std::ios::skipws);
				fileNameStdin = file;
				filecontentstdin = string(istreambuf_iterator<char>(instream.rdbuf()),
					istreambuf_iterator<char>());
			}

			if (!IsFilestdin && !IsFile)
			{
				cerr << "missing file content , " << HelpMessage << endl;
				return eInvalidArgument;
			}
			LogConsole("preprocessed complete");
			std::stringstream text;
			int res = do_preprocessing(fileNameStdin, filecontentstdin, vm, text.rdbuf(), true);
			if (res != 0)
			{
				cerr << "Internal error [DLG8]";
				return res;
			}
			std::ofstream output;
			if (vm.count("output"))
			{
				string out_file(vm["output"].as<string>());
				boost::filesystem::path abs_path = boost::filesystem::complete(".//" + out_file);
				std::string abs_path_str = abs_path.string();
				output.open(abs_path_str.c_str());
				if (!output.is_open())
				{
					cerr << "OxLinter: could not open output file: " << abs_path_str
						<< endl;
					return -1;
				}
				std::cout << "Only output preprocessed file to :" << abs_path_str << endl;
				output << text.rdbuf();
				output.close();
				return eSucces;
			}
			else
			{
				unsigned char runArg = RunNothing;
				if (analyseError)
					runArg |= RunIssue;
				if (analyseSymbol)
					runArg |= RunImplementationAndSymbols;
				if(!analyseError && !analyseSymbol)
					throw  std::runtime_error("Failure Linter [96]");
				antlr4::ANTLRInputStream input(text);  
				LinterOx linter(file, true, DebugMode);
				if (linter.InitLinter(&input), runArg)
				{
					linter.Run();
					//linter.printIncludeFound()					
					std::vector<json> AdditionalIssuesReported;
					std::vector<SymbolItem> AdditionalvSymboleItem;
					std::vector<SymbolItem> AdditionalvImpItem;
					SimpleClassDef class_def_empty;
					class_def_empty.classeName = "";
					class_def_empty.baseclasseName = "";
					linter.RunAssociatedOxFiles(vm, fileNameStdin, filecontentstdin, analyseError, analyseSymbol, false, AdditionalIssuesReported, AdditionalvSymboleItem, "", class_def_empty);

					if (analyseError)
						linter.PrintErrors(AdditionalIssuesReported);

					if (analyseSymbol)
						linter.PrintSymbols();
				}
				return eSucces;
			}
		}
		else // only a single file - not preprocessed.
		{
			if (IsFile)
			{
				ifstream instream(file.c_str());
				if (!instream.is_open()) {
					cerr << "could not open input file: " << endl;
					return -1;
				}
				instream.unsetf(std::ios::skipws);
				fileNameStdin = file;
				filecontentstdin = string(istreambuf_iterator<char>(instream.rdbuf()),
					istreambuf_iterator<char>());
			}

			if (!IsFilestdin && !IsFile)
			{
				cerr << "missing file content , " << HelpMessage << endl;
				return eInvalidArgument;
			}
			antlr4::ANTLRInputStream input(filecontentstdin);
			LinterOx linter(fileNameStdin, false, DebugMode);
			if(analyseSymbol && !analyseError)
			{
				if (linter.InitLinter(&input, (RunImplementationAndSymbols)))
				{
					linter.Run();
					linter.PrintSymbols();
				}
			}
			else if (!analyseSymbol && analyseError)
			{
				if (linter.InitLinter(&input, (RunIssue  )))
				{
					linter.Run();
					linter.PrintErrors();
					 
				}
			}
			else
			{
				if (linter.InitLinter(&input, (RunIssue | RunImplementationAndSymbols)))
				{
					linter.Run();
					linter.PrintErrors();
					linter.PrintSymbols();
				}
			}
			

			return eSucces;
		}
	}
	catch (IllegalArgumentException il)
	{
		std::cerr << "OxLinter : IllegalArgumentException " << std::endl;
		std::cerr << il.what() << std::endl;
		return eIllegalArgumentException;
	}	
	catch (const std::runtime_error& e) {
		cerr << "OxLinter: exception caught: " << e.what() << endl;
		return 6;
	}
	catch (po::error& e)
	{
		cout << e.what();
		return 8;
	}
	catch (...)
	{
		cerr << "OxLinter: unexpected exception caught." << endl;
		return 7;
	}

	return eSucces;
}
#endif
