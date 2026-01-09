cmake_minimum_required(VERSION 3.23)

set(CMAKE_CXX_STANDARD 17)

add_executable(Raycer)

target_sources(Raycer
	PRIVATE
	main.cpp)