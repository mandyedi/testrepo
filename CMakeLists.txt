cmake_minimum_required(VERSION 3.1)

project(rtf VERSION 1.0
            DESCRIPTION "test repo"
            LANGUAGES CXX)

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")

add_executable(test test.cpp)

