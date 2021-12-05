cmake_minimum_required(VERSION 3.10)

project(mv)

add_executable(mv mv.c)

set( EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin )



install(TARGETS mv DESTINATION "${EXECUTABLE_OUTPUT_PATH}")
