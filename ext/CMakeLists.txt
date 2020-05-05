cmake_minimum_required(VERSION 2.8)
set(PROJECT_NAME task1) 
project(${PROJECT_NAME})
set(CMAKE_CXX_FLAGS "-g -Wall")
set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${COMMON_INCLUDES})
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)
set(SRC_FILES ${PROJECT_SOURCE_DIR}/src/Ocean.cpp
              ${PROJECT_SOURCE_DIR}/src/Cell.cpp
              ${PROJECT_SOURCE_DIR}/src/Object.cpp
              ${PROJECT_SOURCE_DIR}/src/Stone.cpp
              ${PROJECT_SOURCE_DIR}/src/Prey.cpp
              ${PROJECT_SOURCE_DIR}/src/Predator.cpp)
set(CMAKE_CXX_STANDARD 11)