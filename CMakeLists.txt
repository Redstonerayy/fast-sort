CMAKE_MINIMUM_REQUIRED(VERSION 3.15)

project(fastsort)

set(CMAKE_CXX_FLAGS "-O2 -mavx2 -std=c++20 -Wall")

# main project
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)

add_executable(main ${SOURCE_FILES})

target_include_directories(main PRIVATE
    src/radixsort
    src/quicksort
    src/mergesort
    src/random
    src/bench
)
