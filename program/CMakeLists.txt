cmake_minimum_required(VERSION 3.28)
project(Program)

set(SOURCE_FILES
        src/main.cpp
)

add_executable(PROJECT NAME ${SOURCE_FILES})

target_link_libraries(PROJECT NAME Library)

target_include_directories(PROJECT NAME PUBLIC include)