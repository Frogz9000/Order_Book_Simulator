cmake_minimum_required(VERSION 3.10)

project(Market_Order_Book VERSION 0.1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(${CMAKE_SOURCE_DIR}/market_binary_parser)
add_subdirectory(${CMAKE_SOURCE_DIR}/synthetic_data_producer)
