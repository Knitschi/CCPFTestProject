include(cpfAddPackage)

# define namespace name for module
set( PACKAGE_NAMESPACE a )

set( briefDescription "An empty C++ command line application used for testing the CPF." )
set( longDescription "A long description of the APackage." )

cpfInitPackageProject(
	PACKAGE_NAME
	${PACKAGE_NAMESPACE}
)

############################################## Define code files ###################################################

set( PACKAGE_PRODUCTION_FILES
	main.cpp
	function.cpp
	function.h
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

# names of the libraries that are linked to this target
set(PACKAGE_LINKED_LIBRARIES
	BPackage
)

set( distPackageOptions
	DISTRIBUTION_PACKAGES
		DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_RUNTIME
		DISTRIBUTION_PACKAGE_FORMATS 		7Z ZIP TGZ
	DISTRIBUTION_PACKAGES
		DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_RUNTIME_PORTABLE
		DISTRIBUTION_PACKAGE_FORMATS 		7Z
	DISTRIBUTION_PACKAGES
		DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_DEVELOPER
		DISTRIBUTION_PACKAGE_FORMATS 		7Z
	DISTRIBUTION_PACKAGES
		DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_SOURCES
		DISTRIBUTION_PACKAGE_FORMATS 		7Z
)

############################################## Add Package #################################
cpfAddPackage( 
	PACKAGE_NAME			${PACKAGE_NAME}
	PACKAGE_NAMESPACE		${PACKAGE_NAMESPACE}
	TYPE					CONSOLE_APP
	BRIEF_DESCRIPTION		${briefDescription}
	LONG_DESCRIPTION		${longDescription}
	PRODUCTION_FILES		${PACKAGE_PRODUCTION_FILES}
	PUBLIC_FIXTURE_HEADER	${PACKAGE_PUBLIC_FIXTURE_HEADER}
	FIXTURE_FILES			${PACKAGE_FIXTURE_FILES}
	TEST_FILES				${PACKAGE_TEST_FILES}
	LINKED_LIBRARIES		${PACKAGE_LINKED_LIBRARIES}
	${distPackageOptions}
	ENABLE_ABI_API_COMPATIBILITY_CHECK_TARGETS FALSE
)
