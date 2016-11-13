cmake_minimum_required(VERSION 3.7)
project(gameboop)

add_subdirectory(src)

add_definitions(-std=c11)
add_definitions(-Wall -Wextra -Wpedantic)

add_executable(gameboop ${SOURCE})
