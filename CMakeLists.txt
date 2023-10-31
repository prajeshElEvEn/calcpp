cmake_minimum_required(VERSION 3.10)

project(calcpp)

include_directories(include)

add_library(get_sum src/get_sum.cpp get_diff src/get_diff.cpp get_pro src/get_pro.cpp get_quo src/get_quo.cpp get_mod src/get_mod.cpp)

target_include_directories(calculator PUBLIC include)

add_executable(calculator src/calculator.cpp)
target_link_libraries(calculator, get_sum, get_diff, get_pro, get_quo, get_mod)