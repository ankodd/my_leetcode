cmake_minimum_required(VERSION 3.5.0)

set(VERSION "0.0.1")
set(PROJECT_NAME "leetcode")

project(${PROJECT_NAME} VERSION ${VERSION} LANGUAGES CXX)

add_executable(${PROJECT_NAME} main.cxx pascal_triangle.cxx)
