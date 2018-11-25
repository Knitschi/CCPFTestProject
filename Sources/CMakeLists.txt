# Root CMakeLists file for the "CMakeProjectFramework"
cmake_minimum_required (VERSION 3.12.0) 

include("CPFCMake/Functions/cpfAddPackages.cmake")
include("${CMAKE_TOOLCHAIN_FILE}")					# make sure the compiler is set before the project call

# Make sure a precompiled header is used.
# This is required to test if the generated prefix headers
# is handled correctly when packaging source files.
set( COTIRE_MINIMUM_NUMBER_OF_TARGET_SOURCES 0 ) 	

project(CCPFTestProject)

cpfAddPackages()
