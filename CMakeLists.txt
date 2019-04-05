cmake_minimum_required(VERSION 3.13)
project(Heap)

set(CMAKE_CXX_STANDARD 14)

add_executable(Heap main.cpp heap.hpp patient_list.cpp patient_list.hpp patient.cpp patient.hpp)