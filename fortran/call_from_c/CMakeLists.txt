cmake_minimum_required(VERSION 3.10)
project (HelloWorld)
set (HelloWorld_Version 0)
enable_language(Fortran)
enable_language(C)

#configure_file (
#	"${PROJECT_SOURCE_DIR}/helloworld.h")
#include_directories


project(some_name)
add_executable(test main.c)
install(TARGETS test DESTINATION bin)
