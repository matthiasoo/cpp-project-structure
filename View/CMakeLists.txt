cmake_minimum_required(VERSION 3.28)
project(View)

set(SOURCE_FILES
        src/main.cpp
)

add_executable(PROJECT_NAME ${SOURCE_FILES})

target_link_libraries(PROJECT_NAME Model)

target_include_directories(PROJECT_NAME PUBLIC include)