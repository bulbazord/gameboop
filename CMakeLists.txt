cmake_minimum_required(VERSION 3.7)
project(gameboop)

add_subdirectory(src)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic")

add_executable(gameboop ${SOURCE})
