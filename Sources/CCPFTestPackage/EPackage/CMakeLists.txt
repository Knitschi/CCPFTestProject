
include(cpfAddCppPackageComponent)

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
	Tests/tests_main.cpp
)

############################################## Add Package #################################
cpfAddCppPackageComponent( 
	TYPE											INTERFACE_LIB
	BRIEF_DESCRIPTION								${briefDescription}
	LONG_DESCRIPTION								${longDescription}
	PUBLIC_HEADER									${PACKAGE_PUBLIC_HEADER}
	PUBLIC_FIXTURE_HEADER							${PACKAGE_PUBLIC_FIXTURE_HEADER}
	FIXTURE_FILES									${PACKAGE_FIXTURE_FILES}
	TEST_FILES										${PACKAGE_TEST_FILES}
	ENABLE_ABI_API_COMPATIBILITY_REPORT_TARGETS 	FALSE
)
