cmake_minimum_required(VERSION 3.2)
set (CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")
project(ourlib)

add_library(ourlib ourlib.cpp)
set_property(TARGET ourlib PROPERTY CXX_STANDARD 17)