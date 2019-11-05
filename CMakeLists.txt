cmake_minimum_required(VERSION 3.15)
project(ListIterator)

set(CMAKE_CXX_STANDARD 14)

add_executable(ListIterator main.cpp s_list.cpp s_list.h s_iterator.cpp s_iterator.h)