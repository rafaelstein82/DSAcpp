cmake_minimum_required(VERSION 3.30)
project(C___Data_Structures_and_Algorithms)

set(CMAKE_CXX_STANDARD 14)

include_directories(BinarySearchTrees)

add_executable(C___Data_Structures_and_Algorithms
    BinarySearchTrees/BST_Node.cpp
    BinarySearchTrees/BST_Node.h
    BinarySearchTrees/BST_traverse.cpp
    BinarySearchTrees/BST_traverse.h
    BinarySearchTrees/SOLUTION-BST-Contains.cpp
    main.cpp)
