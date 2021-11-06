cmake_minimum_required(VERSION 3.10)

project(linux_cmd)

add_executable(linux_cmd cd/cd.c)
add_executable(linux_cmd cp/cp.c)
add_executable(linux_cmd mv/mv.c)
add_executable(linux_cmd rm/rm.c)
add_executable(linux_cmd ls/ls.c)
add_subdirectory(cd)
add_subdirectory(cp)
add_subdirectory(rm)
add_subdirectory(mv)
add_subdirectory(ls)

