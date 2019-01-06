
include(cpfInitPackageProject)
include(cpfAddCppPackage)

cpfInitPackageProject()

set( briefDescription "A C++ interface libary used for testing the CPF" )
set( longDescription "This package is used to test the distribution packages of an interface library." )


set( PACKAGE_PUBLIC_HEADER
	function.h
)

set( PACKAGE_PUBLIC_FIXTURE_HEADER
	Tests/fixture.h
)

set( PACKAGE_FIXTURE_FILES
	Tests/fixture.cpp
)
	
set( PACKAGE_TEST_FILES
	Tests/test_main.cpp
)

set( archiveDevPackageOptions
	DISTRIBUTION_PACKAGES 						
	DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_DEVELOPER
	DISTRIBUTION_PACKAGE_FORMATS 		7Z
	DISTRIBUTION_PACKAGES
	DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_SOURCES
	DISTRIBUTION_PACKAGE_FORMATS 		7Z
	# Runtime packages do not exist for header only libraries
	# DISTRIBUTION_PACKAGES
	# DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_RUNTIME
	# DISTRIBUTION_PACKAGE_FORMATS 		7Z
)

############################################## Add Package #################################
cpfAddCppPackage( 
	PACKAGE_NAMESPACE							e
	TYPE										INTERFACE_LIB
	BRIEF_DESCRIPTION							${briefDescription}
	LONG_DESCRIPTION							${longDescription}
	PUBLIC_HEADER								${PACKAGE_PUBLIC_HEADER}
	PUBLIC_FIXTURE_HEADER						${PACKAGE_PUBLIC_FIXTURE_HEADER}
	FIXTURE_FILES								${PACKAGE_FIXTURE_FILES}
	TEST_FILES									${PACKAGE_TEST_FILES}
	${archiveDevPackageOptions}
	ENABLE_ABI_API_COMPATIBILITY_CHECK_TARGETS 	FALSE
)
