cmake_minimum_required(VERSION 3.14)
project(Hypodermic)

set(CMAKE_CXX_STANDARD 17)

add_library(Hypodermic INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE ${PROJECT_SOURCE_DIR}/lib/Hypodermic)
target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_11)