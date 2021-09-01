/*=============================================================================
    Boost.Wave: A Standard compliant C++ preprocessor library

    Sample: IDL oriented preprocessor
    
    http://www.boost.org/

    Copyright (c) 2001-2010 Hartmut Kaiser. Distributed under the Boost 
    Software License, Version 1.0. (See accompanying file 
    LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
/*
 *  J'essaie de suivre le plus proche possible le programme wave tool .
 *
 *
 *
 */

//#define BOOST_WAVE_SUPPORT_INCLUDE_NEXT 0 //malick
//#define BOOST_WAVE_SEPARATE_LEXER_INSTANTIATION 0// pour utilser le instantion re2c lexer ???
// #include "custom_directives.hpp" //malick
#include "cpp.hpp"                  // global configuration


///////////////////////////////////////////////////////////////////////////////
// Include additional Boost libraries
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/convenience.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/timer.hpp>
#include <boost/any.hpp>
#include <boost/algorithm/cxx11/any_of.hpp>
#include <boost/algorithm/string/join.hpp>
#include <boost/range/algorithm/find.hpp>
#include <boost/range/end.hpp>
#include <boost/foreach.hpp>
//#include <boost/assert.hpp>
#include <boost/program_options.hpp>
#include <boost/filesystem/path.hpp>

///////////////////////////////////////////////////////////////////////////////
//  Include Wave itself
#include <boost/wave.hpp>

///////////////////////////////////////////////////////////////////////////////
//  Include the lexer related stuff
#include <boost/wave/cpplexer/cpp_lex_token.hpp>  // token type
#include <boost/wave/cpplexer/cpp_lex_iterator.hpp> // lexer class
//#include "idllexer/idl_lex_iterator.hpp"          // lexer type


///////////////////////////////////////////////////////////////////////////////
//  Include serialization support, if requested
#if BOOST_WAVE_SERIALIZATION != 0
#include <boost/serialization/serialization.hpp>
#if BOOST_WAVE_BINARY_SERIALIZATION != 0
#include <boost/archive/binary_iarchive.hpp>
#include <boost/archive/binary_oarchive.hpp>
typedef boost::archive::binary_iarchive iarchive;
typedef boost::archive::binary_oarchive oarchive;
#elif BOOST_WAVE_XML_SERIALIZATION != 0
#include <boost/archive/xml_iarchive.hpp>
#include <boost/archive/xml_oarchive.hpp>
typedef boost::archive::xml_iarchive iarchive;
typedef boost::archive::xml_oarchive oarchive;
#else
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
typedef boost::archive::text_iarchive iarchive;
typedef boost::archive::text_oarchive oarchive;
#endif
#endif
/////////////////////////////////////////////////////////////////////////////////
////  include lexer specifics, import lexer names
////
//#if BOOST_WAVE_SEPARATE_LEXER_INSTANTIATION == 0
//#include "idllexer/idl_re2c_lexer.hpp"
//#endif 

#include "custom_directives.hpp" 


///////////////////////////////////////////////////////////////////////////////
//  import required names
using namespace boost::spirit::classic;

using std::string;
using std::pair;
using std::vector;
using std::ifstream;
using std::cout;
using std::cerr;
using std::endl;
using std::ostream;
using std::istreambuf_iterator;

namespace po = boost::program_options;
namespace fs = boost::filesystem;

///////////////////////////////////////////////////////////////////////////////
// print the current version
//int print_version()
//{
//    typedef boost::wave::idllexer::lex_iterator<
//            boost::wave::cpplexer::lex_token<> >
//        lex_iterator_type;
//    typedef boost::wave::context<std::string::iterator, lex_iterator_type>
//        context_type;
//        
//    string version (context_type::get_version_string());
//    cout 
//        << version.substr(1, version.size()-2)  // strip quotes
//        << " (" << IDL_VERSION_DATE << ")"      // add date
//        << endl;
//    return 0;                       // exit app
//}

///////////////////////////////////////////////////////////////////////////////
// print the copyright statement
//int print_copyright()
//{
//    char const *copyright[] = {
//        "",
//        "Sample: IDL oriented preprocessor",
//        "Based on: Wave, A Standard conformant C++ preprocessor library",
//        "It is hosted by http://www.boost.org/.", 
//        "",
//        "Copyright (c) 2001-2010 Hartmut Kaiser, Distributed under the Boost",
//        "Software License, Version 1.0. (See accompanying file",
//        "LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)",
//        0
//    };
//    
//    for (int i = 0; 0 != copyright[i]; ++i)
//        cout << copyright[i] << endl;
//        
//    return 0;                       // exit app
//}
struct cout_redirect {
    cout_redirect( std::streambuf * new_buffer ) 
        : old( std::cout.rdbuf( new_buffer ) )
    { }

    ~cout_redirect( ) {
        std::cout.rdbuf( old );
    }

private:
    std::streambuf * old;
};
#include "ANTLRInputStream.h"

namespace boost {
	namespace wave {
		namespace iteration_context_policies {
			// TO  DO CODE  TO FIX
			//https://github.com/imageworks/OpenShadingLanguage/pull/660/commits/2b8801a89e197bc01db0b5c6ad8768ea731bee34

			    ///////////////////////////////////////////////////////////////////////////
    //
    //  load_file_to_string
    //
    //      Loads a file into a string and returns the iterators pointing to
    //      the beginning and the end of the loaded string.
    //
    ///////////////////////////////////////////////////////////////////////////
			// ca fonctionne mais c'est super long je ne sais pas pourquoi
			struct utf8_load_file_to_string
			{
				template <typename IterContextT>
				class inner
				{
				public:
					template <typename PositionT>
					static void init_iterators(IterContextT &iter_ctx,
						PositionT const &act_pos, boost::wave::language_support language)
					{
						//std::cerr << "Load utf :: " << iter_ctx.filename.c_str() << std::endl;
						typedef typename IterContextT::iterator_type iterator_type;
						// read in the file using Unicode on Windows
						//std::ifstream ifs;
					    std::ifstream ifs ;
						ifs.open(iter_ctx.filename.c_str(), std::ifstream::in);
	
						if (!ifs.is_open())
						{
							//std::cerr << " FAIL 1 "  << std::endl;
							BOOST_WAVE_THROW_CTX(iter_ctx.ctx, boost::wave::preprocess_exception,
								bad_include_file, iter_ctx.filename.c_str(), act_pos);
							return;
						}
						
					    antlr4::ANTLRInputStream instream(ifs);
						std::string str = instream.toString();
//#ifdef _WIN32 
//						std::wstring wpath = OIIO::Strutil::utf8_to_utf16(iter_ctx.filename.c_str());
//						std::ifstream instream(wpath);
//#else
//						std::ifstream instream(iter_ctx.filename.c_str());
//#endif
						//antlrcpp::utf8_to_utf32(input.data() + 3, input.data() + input.size());
						if (str.empty()) {
								//std::cerr << " FAIL 2 "  << std::endl;
							BOOST_WAVE_THROW_CTX(iter_ctx.ctx, boost::wave::preprocess_exception,
								bad_include_file, iter_ctx.filename.c_str(), act_pos);
							return;
						}
							//std::cerr << " SUCESS "  << std::endl;
						//instream.unsetf(std::ios::skipws);
						 
						iter_ctx.instring.assign(str);
						iter_ctx.first = iterator_type(
							iter_ctx.instring.begin(), iter_ctx.instring.end(),
							PositionT(iter_ctx.filename), language);
						iter_ctx.last = iterator_type();
						ifs.close();
					/*	iter_ctx.instring.assign(
							std::istreambuf_iterator<char>(instream.rdbuf()),
							std::istreambuf_iterator<char>());
						iter_ctx.first = iterator_type(
							iter_ctx.instring.begin(), iter_ctx.instring.end(),
							PositionT(iter_ctx.filename), language);
						iter_ctx.last = iterator_type();*/
					}
				private:
					std::string instring;
				};
			};
		}
	}
}

		 //  This token type is one of the central types used throughout the library. 
		//  It is a template parameter to some of the public classes and instances 
		//  of this type are returned from the iterators.
		 typedef boost::wave::cpplexer::lex_token<> token_type; // -> utilise cpp_re.inc 

		 //  The template boost::wave::cpplexer::lex_iterator<> is the lexer type to
		 //  to use as the token source for the preprocessing engine. It is 
		 //  parametrized with the token type.
		 typedef boost::wave::cpplexer::lex_iterator<token_type> lex_iterator_type;// -> utilise cpp_re.inc 
        
		//	ajout de custom_directives_hooks --> par malick	 BOOST_WAVE_STRINGTYPE::iterator
        typedef boost::wave::context<std::string::iterator, 
				   lex_iterator_type,
                   boost::wave::iteration_context_policies::utf8_load_file_to_string, //CURRENTLY DOING
			      //boost::wave::iteration_context_policies::load_file_to_string , //ORIGINAL VERSIONN
				   custom_directives_hooks>   context_type;

///////////////////////////////////////////////////////////////////////////////
//  do the actual preprocessing
int 
do_preprocessing(std::string file_name,std::string file_content, po::variables_map const &vm,  std::streambuf *outputBuffer, bool IsFileContent)
{
// current file position is saved for exception handling
boost::wave::util::file_position_type current_position;
// using namespace boost::spirit::classic;

    try {
		 string instring;
		 if(IsFileContent)
		 {
		  instring = file_content;
			
		 }
		 else
		 {
			  // process the given file
			ifstream instream(file_name.c_str());
   
				if (!instream.is_open()) {
					cerr << "waveidl: could not open input file: " << file_name << endl;
					return -1;
				}
				instream.unsetf(std::ios::skipws);
        
				instring = string(istreambuf_iterator<char>(instream.rdbuf()),
								  istreambuf_iterator<char>());
		 }
	

    // The C++ preprocessor iterators shouldn't be constructed directly. They 
    // are to be generated through a boost::wave::context<> object. This 
    // boost::wave::context object is additionally to be used to initialize and 
    // define different parameters of the actual preprocessing.
    // The preprocessing of the input stream is done on the fly behind the 
    // scenes during iteration over the context_type::iterator_type stream.
    context_type ctx (instring.begin(), instring.end(), file_name.c_str());
        
    // add include directories to the include search paths
        if (vm.count("include")) {
           /* cmd_line_util::include_paths const &ip = 
                vm["include"].as<cmd_line_util::include_paths>();*/
			vector<fs::path> vec = vm["include"].as< vector<fs::path> >();
			size_t length = vec.size();
			for (size_t i = 0; i < length; i++)
			{
				std::string path = vec.at(i).string();
				 //cerr << " include taken into accout " << path << endl;
				 ctx.add_include_path(path.c_str());;
				 ctx.add_sysinclude_path(path.c_str());;
			} 

			// add folder containing the current file
			
				boost::filesystem::path p(file_name);
				boost::filesystem::path dir = p.parent_path();
				
				ctx.add_include_path(dir.string().c_str());
				ctx.add_sysinclude_path(dir.string().c_str());;
        }

	 cout_redirect red2 =  cout_redirect(outputBuffer); //RAII
     ctx.set_language(boost::wave::enable_emit_line_directives(ctx.get_language()));
	 ctx.set_language(boost::wave::enable_preserve_comments(ctx.get_language()));
	 ctx.set_language(boost::wave::enable_single_line(ctx.get_language())); // permettre la derniere ligne sans saut

    // analyze the input file
    context_type::iterator_type first = ctx.begin();
    context_type::iterator_type last = ctx.end();
	 
    // loop over all generated tokens outputing the generated text
	  while (first != last) {
            current_position = (*first).get_position();
            std::cout << (*first).get_value();
            ++first;
        }


#pragma region Archives

   //     while (first != last) {
   //     // print out the string representation of this token (skip comments)
   //         using namespace boost::wave;
   //     // store the last known good token position
   //         current_position = (*first).get_position();
			// 
			//token_id id = token_id(*first);
   //         if (T_CPPCOMMENT == id || T_NEWLINE == id) {
   //         // C++ comment tokens contain the trailing newline
			//	  std::cout << endl;
			//	/*if (writetofile)
			//		 output << (*first).get_value() <<  endl; ///output << endl;
			//	else
			//		capturecout   << (*first).get_value() <<  endl;*/
   //         }
   //         else if (id != T_CCOMMENT) {
			//	  std::cout <<(*first).get_value();
   //         // print out the current token value
			///*	if (writetofile)
			//	    output << (*first).get_value();
			//	else
			//		capturecout << (*first).get_value();*/
   //         }
   //         ++first;        // advance to the next token
		 //
   //     }

			 //if (writetofile)
					 //std::cout.rdbuf(coutbuf); //reset to standard output again
			 //else
				//   std::cout.rdbuf(oldbuffer); //reset to standard output again
#pragma endregion


    }
    catch (boost::wave::cpp_exception const& e) {
		std::cerr << "some preprocessing error" << '\n';
       	std::cerr 
            << e.file_name() << "(" << e.line_no() << "): "
            << e.description() << endl;
		string mess = e.description();
		string warn = "warning";
		if (mess.find(warn) != std::string::npos) {
			//std::cout << "found!" << '\n';
			return 0;
		}
        return 1;
    }
    catch (boost::wave::cpplexer::lexing_exception const& e) {
    // some lexing error
        std::cerr 
            << e.file_name() << "(" << e.line_no() << "): "
            << e.description() << endl;
        return 2;
    }
    catch (std::runtime_error const& e) {
    // use last recognized token to retrieve the error position
        std::cerr 
            << current_position.get_file() 
            << "(" << current_position.get_line() << "): "
            << "exception caught: " << e.what()
            << endl;
        return 3;
    }
    catch (...) {
    // use last recognized token to retrieve the error position
         std::cerr 
            << current_position.get_file() 
            << "(" << current_position.get_line() << "): "
            << "unexpected exception caught." << endl;
        return 4;
    }
	 
    return 0;
}

