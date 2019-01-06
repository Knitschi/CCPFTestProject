
include(cpfInitPackageProject)
include(cpfAddCppPackage)

cpfInitPackageProject()

set( briefDescription "A C++ libary used for testing the CPF" )
set( longDescription "This tests if we can have projects with mixed static and shared linkage." )


set( PACKAGE_PUBLIC_HEADER
	function.h
)

set( PACKAGE_PRODUCTION_FILES
	function.cpp
)

set(BUILD_SHARED_LIBS ON)

############################################## Add Package #################################
cpfAddCppPackage( 
	PACKAGE_NAMESPACE							d
	TYPE										LIB
	BRIEF_DESCRIPTION							${briefDescription}
	LONG_DESCRIPTION							${longDescription}
	PUBLIC_HEADER								${PACKAGE_PUBLIC_HEADER}
	PRODUCTION_FILES							${PACKAGE_PRODUCTION_FILES}
	ENABLE_ABI_API_COMPATIBILITY_CHECK_TARGETS 	FALSE
)
