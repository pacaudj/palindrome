cmake_minimum_required(VERSION 3.2)
project(palindrome)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    include/fasta.h
    my_factrec_synthese.c
    my_squareroot_synthese.c)

add_executable(palindrome ${SOURCE_FILES})