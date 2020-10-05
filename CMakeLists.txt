cmake_minimum_required(VERSION 3.17)
project(QuikMafs)

set(CMAKE_CXX_STANDARD 17)

add_library(sse4_1 INTERFACE IMPORTED)
if(MSVC)
    target_compile_options(sse4_1 INTERFACE /arch:AVX512 /arch:AVX2)
else()
    target_compile_options(sse4_1 INTERFACE -msse4.1)
endif()

add_executable(QuikMafs main.cpp Vector3.cpp Vector3.hpp Vector3Slow.cpp Vector3Slow.hpp)