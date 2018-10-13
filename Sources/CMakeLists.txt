# Root CMakeLists file for the "CMakeProjectFramework"
cmake_minimum_required (VERSION 3.12.0) 

include("CPFCMake/Functions/cpfInit.cmake")
include("${CMAKE_TOOLCHAIN_FILE}")					# make sure the compiler is set before the project call

project(CCPFTestProject)
cpfInit()

set( externalPackages
	CPFCMake
	CPFBuildscripts
)

set( globalFiles
	documentation/CCPFTestProjectDocs.dox
)

cpfAddCppPackages( "${externalPackages}" "${globalFiles}")
