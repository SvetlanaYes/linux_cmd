cmake_minimum_required(VERSION 3.10)

project(rm)

add_executable(rm rm.c)

set( EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin )



install(TARGETS rm DESTINATION "${EXECUTABLE_OUTPUT_PATH}")
