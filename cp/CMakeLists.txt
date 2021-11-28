cmake_minimum_required(VERSION 3.10)

project(cp)

add_executable(cp cp.c)

install(TARGETS cp DESTINATION "${CMAKE_BINARY_DIR}/bin")
