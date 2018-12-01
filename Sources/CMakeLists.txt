# Root CMakeLists file for the CCPFTestProject

include("CPFCMake/cpfInit.cmake")
cmake_minimum_required(VERSION ${CPF_MINIMUM_CMAKE_VERSION}) 

# Make sure a precompiled header is used.
# This is required to test if the generated prefix headers
# is handled correctly when packaging source files.
set( COTIRE_MINIMUM_NUMBER_OF_TARGET_SOURCES 0 ) 	

project(CCPFTestProject)

cpfAddPackages()
