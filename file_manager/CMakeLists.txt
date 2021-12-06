cmake_minimum_required(VERSION 3.10)

project(file_manager)

add_executable(file_manager file_manager.c)

set( EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin )


install(TARGETS file_manager DESTINATION "${EXECUTABLE_OUTPUT_PATH}")
