cmake_minimum_required(VERSION 3.28)
project(Model)

include_directories(include)

set(SOURCE_FILES
        src/Example.cpp
)

add_library(Model ${SOURCE_FILES})

target_include_directories(Model PUBLIC include)

enable_testing()

set(BOOST_ROOT "C:\\MinGW")
set(BOOST_INCLUDEDIR "${BOOST_ROOT}\\include")
set(BOOST_LIBRARYDIR "${BOOST_ROOT}\\lib")

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif()

set(SOURCE_TEST_FILES
	    test/Check.cpp
)

add_executable(ModelTester ${SOURCE_TEST_FILES})

target_link_libraries(
        ModelTester
        Model
        ${Boost_LIBRARIES}
)

add_test(ModelTest ModelTester)

add_custom_target(check
        ${CMAKE_COMMAND} -E env
        ${CMAKE_BINARY_DIR}/Model/ModelTester
        --report_level=detailed
        --log_level=all
        DEPENDS ModelTester
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

# LOG COLORS NOT WORKING
#add_custom_target(check
#        ${CMAKE_COMMAND} -E env
#        CTEST_OUTPUT_ON_FAILURE=1
#        BOOST_TEST_LOG_LEVEL=all
#        ${CMAKE_CTEST_COMMAND}
#        -C $<CONFIGURATION>
#        --verbose
#        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
#)