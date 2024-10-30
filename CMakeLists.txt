cmake_minimum_required(VERSION 3.28)
project(PROJECT NAME)

#set(CMAKE_CXX_COMPILER "C:\\MinGW\\bin\\g++.exe")
#set(CMAKE_C_COMPILER "C:\\MinGW\\bin\\gcc.exe")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_C_FLAGS_DEBUG "-g3 -gdwarf-4")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -gdwarf-4")
set(-Wall -Wpedantic -Wextra -Werror)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_VERBOSE_MAKEFILE TRUE)

set(BOOST_ROOT "C:\\MinGW")
set(BOOST_INCLUDEDIR "${BOOST_ROOT}\\include")
set(BOOST_LIBRARYDIR "${BOOST_ROOT}\\lib")

add_subdirectory(library)
add_subdirectory(program)

enable_testing()