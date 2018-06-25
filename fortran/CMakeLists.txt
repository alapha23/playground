cmake_minimum_required(VERSION 3.10)
project (HelloWorld)
set (HelloWorld_Version 0)
enable_language(Fortran)

#configure_file (
#	"${PROJECT_SOURCE_DIR}/helloworld.h")
#include_directories
project(project_name)
add_executable(hello1 helloworld.f90)
install(TARGETS hello1 DESTINATION bin)
