cmake_minimum_required(VERSION 3.2)
project (user)
set (CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

add_subdirectory(ourlib)

add_executable(user user.cpp)
set_property(TARGET user PROPERTY CXX_STANDARD 17)

target_link_libraries(user ourlib)