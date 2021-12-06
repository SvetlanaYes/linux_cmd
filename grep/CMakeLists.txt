cmake_minimum_required(VERSION 3.10)

project(grep)

add_executable(grep grep.c)

set( EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin )



install(TARGETS grep DESTINATION "${EXECUTABLE_OUTPUT_PATH}")
