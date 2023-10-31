cmake_minimum_required(VERSION 3.10)

project(calcpp)

include_directories(include)

set(SOURCES src/calculator.cpp src/get_sum.cpp src/get_diff.cpp src/get_pro.cpp src/get_quo.cpp src/get_mod.cpp src/get_operator.cpp)

add_executable(calculator ${SOURCES})