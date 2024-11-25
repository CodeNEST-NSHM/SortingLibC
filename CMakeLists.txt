# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(SortingLibrary)

# Specify the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Automatically collect all source and header files in the 'headers' folder
file(GLOB HEADER_FILES "${CMAKE_SOURCE_DIR}/headers/*.h")
file(GLOB SOURCE_FILES "${CMAKE_SOURCE_DIR}/headers/*.c")

# Add an executable for the main program
add_executable(main_program main.c)

# Add a library for the sorting functions
add_library(sorting_lib ${SOURCE_FILES})

# Include the headers folder so it can be used in the library and main
target_include_directories(sorting_lib PUBLIC ${CMAKE_SOURCE_DIR}/headers)
target_include_directories(main_program PUBLIC ${CMAKE_SOURCE_DIR}/headers)

# Link the library to the main executable
target_link_libraries(main_program PRIVATE sorting_lib)
