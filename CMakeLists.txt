cmake_minimum_required(VERSION 3.5)
project(leetcode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(main main.cpp )
add_executable(medium_151_reverse_string medium_151_reverse_string.cpp)
add_executable(medium_127_word_ladder medium_127_word_ladder.cpp)
add_executable(medium_853_car_fleet medium_853_car_fleet.cpp)
add_executable(easy_172_0_count easy_172_0_count.cpp)