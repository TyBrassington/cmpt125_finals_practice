cmake_minimum_required(VERSION 3.27.8)
project(finals_practice C)

set(CMAKE_C_STANDARD 11)

add_executable(finals_practice EmployeeQ.c
        Stack.cpp
        LinkedListQ.c
        2DArrToFile.c
        Stack.h
        QuickSort.c
        reverseArray.c
        MedianOfLinkedList.c)
