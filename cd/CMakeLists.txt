cmake_minimum_required(VERSION 3.10)

project(cd)

add_executable(cd cd.c)

install(TARGETS cd DESTINATION "${CMAKE_BINARY_DIR}/bin")
