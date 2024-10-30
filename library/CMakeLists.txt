cmake_minimum_required(VERSION 3.28)
project(Library)

include_directories(include)

set(SOURCE_FILES
	# source files
)

add_library(Library ${SOURCE_FILES})

target_include_directories(Library PUBLIC include)

enable_testing()

set(BOOST_ROOT "C:\\MinGW")
set(BOOST_INCLUDEDIR "${BOOST_ROOT}\\include")
set(BOOST_LIBRARYDIR "${BOOST_ROOT}\\lib")

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif()

set(SOURCE_TEST_FILES
	# test source files here
	test/Check.cpp
)

add_executable(LibraryTester ${SOURCE_TEST_FILES})

target_link_libraries(
        LibraryTester
        Library
        ${Boost_LIBRARIES}
)

add_test(LibraryTest LibraryTester
        --report_level=detailed
        --log_level=all
        --color_output=yes
)

add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIGURATION> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

#foreach(TEST_SRC ${SOURCE_TEST_FILES})
#    get_filename_component(TEST_NAME ${TEST_SRC} NAME_WE)
#
#    add_test(
#            NAME ${TEST_NAME}
#            COMMAND LibraryTester ${TEST_SRC}
#            --report_level=detailed
#            --log_level=all
#            --color_output=yes
#    )
#endforeach ()