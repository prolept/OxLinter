
OxLinter is a command line executable that is employed by the visual code extension [OxCode](https://github.com/prolept/OxCode)

OxLinter depends of the Wave (Boost) library and the ANTLR library. Wave acts as a preprocessor and the ANTLR library is employed to parse/analyse ox. 

[Nlohmann JSON](https://github.com/nlohmann/json) library for Modern C++ and [Artistic Style](http://astyle.sourceforge.net/) are also needed and are part of this repository.
 
# Step 1 - Dependencies:

OxLinter uses Boost and Antlr libraries, both need to be built inside the /Lib Folder before building OxLinter. 

## BOOST 1_76 :

Download [Boost_1_76_0](https://www.boost.org/users/download) and unzip it in folder "\Lib\Boost_1_76_0" 
 
	Wave needs to be patched to support ox syntax:
	1) Copy (replace)token_ids.hpp,cpp_re2c_lexer.hpp and cpp_iterator.hpp located in folder filesForWawe to 
		..\Lib\boost_1_76_0\boost\wave\token_ids.hpp
		..\Lib\boost_1_76_0\boost\wave\cpplexer\re2clex\cpp_re2c_lexer.hpp
		..\Lib\boost_1_76_0\boost\wave\util\cpp_iterator.hpp
	2) Copy and past the three files ( \filesForWave\re2clex\cpp_re.inc, \filesForWave\re2clex\strict_cpp.re, \filesForWave\re2clex\cpp.re) to folder 
	    "Lib\boost_1_76_0\boost\wave\cpplexer\re2clex"

	Next goes to the boost root directory and  run : 
	>bootsrap.bat (or ./boostrap.sh for unix)

	Next build the boost libraries using the following command: 
	- WINDOWS :
		>b2 address-model=64 toolset=msvc --build-type=complete stage --with-filesystem --with-program_options --with-wave --with-thread --with-chrono --with-date_time --stagedir=libout64
	-OSX :
		>./b2  --with-system --with-thread --with-serialization --with-wave --with-date_time --with-regex --with-thread --with-program_options link=static threading=multi  address-model=32_64  --stagedir=libosx  define=BOOST_ALL_NO_LIB=1 define=BOOST_CHRONO_STATIC_LINK=1 define=BOOST_FILESYSTEM_STATIC_LINK=1 define=BOOST_SYSTEM_STATIC_LINK=1 define=BOOST_THREAD_BUILD_LIB=1 define=BOOST_THREAD_POSIX define=BOOST_THREAD_USE_LIB=1 define=BOOST_WAVE_SUPPORT_THREADING=0 -a  

	-LINUX :
		>./b2 cxxflags=-fPIC --with-system --with-thread --with-serialization --with-wave --with-date_time --with-regex --with-thread --with-program_options link=static threading=multi  address-model=64  --stagedir=libosx  define=BOOST_ALL_NO_LIB=1 define=BOOST_CHRONO_STATIC_LINK=1 define=BOOST_FILESYSTEM_STATIC_LINK=1 define=BOOST_SYSTEM_STATIC_LINK=1 define=BOOST_THREAD_BUILD_LIB=1 define=BOOST_THREAD_POSIX define=BOOST_THREAD_USE_LIB=1 define=BOOST_WAVE_SUPPORT_THREADING=0 -a  

## ANTLR 4.9.2 :

Download "antlr4-cpp-runtime-4.9.2-source.zip" from the [C++ target](https://www.antlr.org/download.html) and unzip it in "\Lib\antlr4-cpp-runtime-4.9.2-source"

	for windows (visual studio) :
		Build the static release version ANTLR using  ".\OxLinter\Lib\antlr4-cpp-runtime-4.9.2-source\runtime\antlr4cpp-vs2019.vcxproj""
		Important : before to build, change the runtime setting to Multithread /MT
		to obtain : .\OxLinter\Lib\antlr4-cpp-runtime-4.9.2-source\runtime\bin\vs-2019\x64\Release Static\antlr4-runtime.lib

	for Mac Osx :
	    build ANTLR using the xcode project
		before to build, select the scheme antrl4_static (in Product->scheme) and select the release version (Product / Scheme / Edit Scheme.. and select Release under "Build Configuration".)
		Once it has been built, copy the generated lib file "libantlr4-runtime.a" to the  /Lib Folder
    
	for Linux:
		cd Lib\antlr4-cpp-runtime-4.9.2-source
		mkdir build && mkdir run && cd build
		cmake ..
		make


# Step 2 - Build OxLinter

[cmake](https://cmake.org/download/) is required to build OxLinter. 

Once the dependencies have been built (step 1), you can use cmake to build the executable OxLinter. A single CMakeLists.txt is used for all platforms.

To build Ox Linter :

	- Windows (from visual studio Command Prompt) :
		mkdir build
		cd build
		cmake ..
		devenv oxlinter.sln /build  Release

UNIX (from terminal) :

	-   mkdir build
		cd build
		cmake ..
        make

  