cmake_minimum_required(VERSION 3.10)

project(cd)

add_executable(cd cd.c)

install(TARGETS ls DESTINATION "/home/svetlana/linux_cmd/bin")
