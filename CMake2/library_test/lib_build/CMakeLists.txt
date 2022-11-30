cmake_minimum_required(VERSION 3.0.2)
project(LinuxProg)
find_package(Threads)
set(CMAKE_BUILD_TYPE Release)

include_directories(bus display gpio motor network sensor)
file(GLOB_RECURSE SOURCES "./*.cpp")

add_library(LinuxProg SHARED ${SOURCES})
target_link_libraries(LinuxProg ${CMAKE_THREAD_LIBS_INIT})
install (TARGETS LinuxProg DESTINATION /usr/lib)