cmake_minimum_required(VERSION 3.21)
project(Module_6)

set(CMAKE_CXX_STANDARD 98)
add_compile_options(-Wall -Wextra -Werror)

add_executable(Module_6_ex00 ex00/main.cpp ex00/Conversion.cpp ex00/Conversion.hpp)
add_executable(Module_6_ex01 ex01/main.cpp ex01/Serialization.hpp ex01/Serialization.cpp)
add_executable(Module_6_ex02 ex02/main.cpp ex02/Base.hpp ex02/A.hpp ex02/B.hpp ex02/C.hpp ex02/Identify.cpp ex02/Identify.hpp)
