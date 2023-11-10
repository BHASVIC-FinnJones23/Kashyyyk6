cmake_minimum_required(VERSION 3.26)
project(code C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(code
        checkIn.c
        main.c
        utilities.h
        validation.c
        fileHandling.c)
