cmake_minimum_required( VERSION 2.8 )

project( kalman)

SET ( CMAKE_CXX_FLAGS "-std=c++0x" )

set( EIGEN3_DIR /usr/local/include/eigen3 )
include_directories( ${EIGEN3_DIR} )

set(SOURCE_FILES kalman.cpp )



