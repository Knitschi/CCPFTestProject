
include(cpfAddPackage)

set( PACKAGE_NAMESPACE b )
cpfInitPackageProject(
	PACKAGE_NAME
	${PACKAGE_NAMESPACE}
)
set( briefDescription "A C++ libary used for testing the CPF" )
set( longDescription "A long description of the BPackage." )


set( PACKAGE_PUBLIC_HEADER
	function.h
)

set( PACKAGE_PRODUCTION_FILES
	function.cpp
)

set( PACKAGE_PUBLIC_FIXTURE_HEADER
	fixture.h
)

set( PACKAGE_FIXTURE_FILES
	fixture.cpp
)
	
set( PACKAGE_TEST_FILES
	tests_main.cpp
)

set( archiveDevPackageOptions
	DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_DEVELOPER
	DISTRIBUTION_PACKAGE_FORMATS 		7Z
)

############################################## Add Package #################################
cpfAddPackage( 
	PACKAGE_NAME			${PACKAGE_NAME}
	PACKAGE_NAMESPACE		${PACKAGE_NAMESPACE}
	TYPE					LIB
	BRIEF_DESCRIPTION		${briefDescription}
	LONG_DESCRIPTION		${longDescription}
	PUBLIC_HEADER			${PACKAGE_PUBLIC_HEADER}
	PRODUCTION_FILES		${PACKAGE_PRODUCTION_FILES}
	PUBLIC_FIXTURE_HEADER	${PACKAGE_PUBLIC_FIXTURE_HEADER}
	FIXTURE_FILES			${PACKAGE_FIXTURE_FILES}
	TEST_FILES				${PACKAGE_TEST_FILES}
	DISTRIBUTION_PACKAGES 	${archiveDevPackageOptions}
)
