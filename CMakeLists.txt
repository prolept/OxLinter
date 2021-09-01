 cmake_minimum_required(VERSION 3.13)
#version 01/09/2021 
 project(OXLINTER)
 set(PROJECT_NAME OxLinter)

 if(NOT CMAKE_BUILD_TYPE)
     set(CMAKE_BUILD_TYPE "Release")
     message(STATUS "Build type not specified: Use Release by default.")
 endif(NOT CMAKE_BUILD_TYPE)

 if(MSVC)
     set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT /W3")
 endif(MSVC)
 if(NOT MSVC)
     message(STATUS "Not MSVC, use std=c++11")
     set (CMAKE_CXX_STANDARD 11)
     if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
         set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
     endif()
     message(STATUS "CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
 endif(NOT MSVC)

 if(WIN32)
     # set(CMAKE_CXX_FLAGS_RELEASE "/MT")
 else()
     if(UNIX AND NOT APPLE) 
	set(THREADS_PREFER_PTHREAD_FLAG ON)
	find_package(Threads REQUIRED)
	set(Boost_USE_STATIC_LIBS ON)
	set(Boost_USE_STATIC_RUNTIME ON)
        set(Boost_USE_MULTITHREADED ON)
     else()
         SET(CMAKE_OSX_ARCHITECTURES "x86_64")
     endif()
 endif()

 # Definition of Macros
 add_definitions(
         -D_CRT_SECURE_NO_WARNINGS
         -DASTYLE_LIB
         -D_SCL_SECURE_NO_WARNINGS
         -DANTLR4CPP_STATIC
         -DNDEBUG
         -D_CONSOLE
         -DUNICODEcl
         -D_UNICODE
 )

if(NOT WIN32)
add_definitions(
   -DANTLR4CPP_STATIC  
   -DBOOST_ALL_NO_LIB=1 
   -DBOOST_CHRONO_STATIC_LINK=1 
   -DBOOST_FILESYSTEM_STATIC_LINK=1 
   -DBOOST_SYSTEM_STATIC_LINK=1 
   -DBOOST_THREAD_BUILD_LIB=1 
   -DBOOST_THREAD_POSIX 
   -DBOOST_THREAD_USE_LIB=1 
   -DBOOST_WAVE_SUPPORT_THREADING=0 
   -DDATE_TIME_INLINE -DNDEBUG
)
endif()

 message(STATUS "CMAKE_CXX_COMPILER ${CMAKE_CXX_COMPILER}")
 message(STATUS "CMAKE_CXX_COMPILER_ID ${CMAKE_CXX_COMPILER_ID}")

 #set(Boost_USE_MULTITHREADED  ON)
 #set(Boost_USE_STATIC_LIBS ON)

 if(WIN32)
    message(STATUS "Windows platform detected")
	set(Boost_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Lib/boost_1_76_0/)
    set(Boost_LIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Lib/boost_1_76_0/libout64/lib)
	set(Antlr_LIBRARY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Lib/antlr4-cpp-runtime-4.9.2-source/runtime/bin/vs-2019/x64/Release Static/")
	set(Antlr_HEADER_DIR  ${CMAKE_CURRENT_SOURCE_DIR}/Lib/antlr4-cpp-runtime-4.9.2-source/runtime/src/)	
	if(NOT EXISTS "${Antlr_LIBRARY_DIR}antlr4-runtime.lib")
           message( SEND_ERROR "${Antlr_LIBRARY_DIR}antlr4-runtime.lib  does not exist" )
	endif()
 else()
     if(UNIX AND NOT APPLE)
		 message(STATUS "Unix platform detected")
		 set(Boost_NO_SYSTEM_PATHS ON)
		 set(Boost_USE_STATIC_LIBS   ON)
		 set(Antlr_HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Lib/antlr4-cpp-runtime-4.9.2-source/runtime/src/)
		 set(Antlr_LIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Lib/antlr4-cpp-runtime-4.9.2-source/dist/)
		 set(BOOST_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/Lib/boost_1_76_0)
		 set(Boost_LIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Lib/boost_1_76_0/libosx/lib)
		 set(Boost_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Lib/boost_1_76_0)
     else() #osx
		 set(Boost_LIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Lib/boost_1_76_0/libosx/Lib/)
         set(Boost_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Lib/boost_1_76_0/)
         set(Antlr_LIBRARY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Lib/")
         set(Antlr_HEADER_DIR  ${CMAKE_CURRENT_SOURCE_DIR}/Lib/antlr4-cpp-runtime-4.9.2-source/runtime/src/)	
     endif()
 endif()


find_package(Boost 1.76.0  EXACT COMPONENTS program_options filesystem wave chrono date_time REQUIRED)


set(disabled_compile_warnings "/wd4251")

 if(Boost_FOUND)
     # Obtain diagnostic information about Boost's automatic linking outputted
     # during compilation time. (MSVC case)
     add_definitions(${Boost_LIB_DIAGNOSTIC_DEFINITIONS})
     message(STATUS "Boost found !")
     message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
     message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
     message(STATUS "Boost_VERSION: ${Boost_VERSION}")
     include_directories(${Boost_INCLUDE_DIRS})
     link_directories(${Boost_LIBRARY_DIR} ${Antlr_LIBRARY_DIR})
     add_definitions(${Boost_LIB_DIAGNOSTIC_DEFINITIONS})
 else()
     message( SEND_ERROR "Boost librairies not found" )
 endif()

set(FOLDER_LINTER "${CMAKE_CURRENT_SOURCE_DIR}/")

 include_directories(${Antlr_HEADER_DIR})
 include_directories(${FOLDER_LINTER}generated)
 include_directories(${FOLDER_LINTER}include)
 include_directories(${FOLDER_LINTER})
 include_directories(${FOLDER_LINTER}generated/)
 include_directories(${FOLDER_LINTER}Astyle)
 include_directories(${FOLDER_LINTER}waveidl/)


 file(GLOB LINTER "${FOLDER_LINTER}src/*.cpp")
 file(GLOB ASTYLE "${FOLDER_LINTER}Astyle/*.cpp")
 file(GLOB WAVE "${FOLDER_LINTER}waveidl/*.cpp")

 add_executable(${PROJECT_NAME}  ${LINTER} ${ASTYLE} ${WAVE} "${FOLDER_LINTER}generated/oxadvancedParser.cpp" "${FOLDER_LINTER}generated/oxadvancedLexer.cpp" )

 if(Boost_FOUND)
     if(WIN32)
         #  On Visual Studio and Borland compilers Boost headers request automatic linking to corresponding libraries
         target_link_libraries(${PROJECT_NAME}  LINK_PUBLIC antlr4-runtime.lib)
     else()
         if(UNIX AND NOT APPLE)
			target_link_libraries(${PROJECT_NAME}  LINK_PUBLIC antlr4-runtime.a LINK_PUBLIC ${Boost_LIBRARIES})  
         else()    
			target_link_libraries(${PROJECT_NAME} LINK_PUBLIC libantlr4-runtime.a LINK_PUBLIC ${Boost_LIBRARIES})
         endif()
     endif()
 endif()
