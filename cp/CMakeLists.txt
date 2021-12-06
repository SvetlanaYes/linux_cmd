cmake_minimum_required(VERSION 3.10)

project(cp)

add_executable(cp cp.c)



set( EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin )



install(TARGETS cp DESTINATION "${EXECUTABLE_OUTPUT_PATH}")
