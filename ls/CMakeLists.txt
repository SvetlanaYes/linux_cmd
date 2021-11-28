cmake_minimum_required(VERSION 3.10)

project(ls)

add_executable(ls ls.c)

install(TARGETS ls DESTINATION "/home/svetlana/linux_cmd/bin")
