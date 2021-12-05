cmake_minimum_required(VERSION 3.10)

project(cd)

add_executable(cd cd.c)

set( EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin )



install(TARGETS cd DESTINATION "${EXECUTABLE_OUTPUT_PATH}")
