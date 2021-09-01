#pragma once
#include <string>
#include <boost/program_options.hpp>

#define OXLINTER_VERSION "0.0.20"

namespace po = boost::program_options;
enum oxlinter_error_code 
{
	eFailure_to_load_file = 55,
	eIllegalArgumentException = 8,
	eSucces = 0,
	eInvalidArgument = 5,
	eError=6
};

class oxMain
{
	
public:
    int  FindDefinition(std::string  variableToSearch, std::vector<int> linecol, std::string const& filecontentstdin,  boost::program_options::variables_map const &vm);
    int  FindImplementation(std::string  variableToSearch, std::vector<int> linecol, std::string const& filecontentstdin,  boost::program_options::variables_map const &vm);
	void Log(std::string log);
	void printCopyright();
	void printVersion();
	int  PrintAutoCompletion(std::string  variableToSearch, std::string const& filecontentstdin, int LineOfVariable, boost::program_options::variables_map const &vm);

	void SetDebugMode(bool debug);
	void SetFilePath(std::string filepath);
	void SetFilePathStdIn(std::string filepath);
	oxlinter_error_code GenerateDocumentation(std::string prototypeFunction);
private:
	std::string m_FilePath;
    std::string m_FileStdInPath;
	bool m_IsFilePath = false;
	bool m_IsFileStdInPath = false;
	bool m_IsDebugMode = false;
};
