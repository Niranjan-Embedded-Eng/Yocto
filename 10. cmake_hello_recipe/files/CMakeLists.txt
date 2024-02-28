cmake_minimum_required(VERSION 3.16.3)
project(cmake_recipe)
add_executable(chello chello.c)
install (TARGETS chello DESTINATION bin)

