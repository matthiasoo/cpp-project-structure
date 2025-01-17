# C++ Project Skeleton

This repository provides a skeleton for a C++ project with CMake configuration and unit testing using Boost Test. It's designed to help those who face challenges configuring unit tests in CMake.

## Current Features
- Uses MinGW as the compiler.
- Utilizes the Boost library for unit testing.

## Planned Improvements
- Adding support for Google Test and Catch2.
- Enhancing the skeleton to a more professional standard.

## Setup Instructions

**Before You Begin:**

1. Download the MinGW Distro archive from [nuwen.net](https://nuwen.net/mingw.html).
2. Install CMake on your device from [cmake.org](https://cmake.org/).
3. Extract the MinGW archive to the `C:\` folder.
4. Add `C:\MinGW\bin` to your system PATH.

## Building the Project and Running Tests
1. Navigate to the project directory:
   ```
   cd <Project Directory>
   ```
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
5. Generate build files with MinGW Makefiles:
   ```
   cmake -G "MinGW Makefiles" ..
   ```
7. Build the project:
   ```
   make
   ```
9. Run the tests:
   ```
   make check
   ```

Stay tuned for new updates!
