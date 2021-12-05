cmake_minimum_required(VERSION 3.10)

project(ls)

add_executable(ls ls.c)

set( EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin )



install(TARGETS ls DESTINATION "${EXECUTABLE_OUTPUT_PATH}")
