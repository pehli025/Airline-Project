cmake_minimum_required(VERSION 3.21)
project(Airline)

set(CMAKE_CXX_STANDARD 23)

add_executable(Airline airline.cpp customer.cpp check_in_customer.cpp airline.h customer.h check_in_customer.h main.cpp plane.h plane.cpp)
