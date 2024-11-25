cmake_minimum_required(VERSION 3.10)
project(SortingLibraryProject)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Add the 'headers' directory to the include path
include_directories(headers)

# Create a library from bubble_sort.c and quick_sort.c
add_library(sorting STATIC headers/bubble_sort.c headers/quick_sort.c)
# For a shared library:
# add_library(sorting SHARED headers/bubble_sort.c headers/quick_sort.c)

# Add the main executable
add_executable(sorting_program main.c)

# Link the library to the executable
target_link_libraries(sorting_program PRIVATE sorting)

# Add compiler warnings for better code quality
target_compile_options(sorting_program PRIVATE -Wall -Wextra -pedantic)
