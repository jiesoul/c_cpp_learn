cmake_minimum_required(VERSION 3.15)
project(cppl VERSION 0.1)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


configure_file(cpplConfig.h.in cpplConfig.h)

add_executable(intro main.cpp)
target_compile_feature(intro PRIVATE )

target_include_directories(cppl PUBLIC "${PROJECT_BINARY_DIR}")