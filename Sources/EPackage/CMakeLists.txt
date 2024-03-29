
include(cpfAddCppPackageComponent)

cpfPackageProject(
	TARGET_NAMESPACE E
    BRIEF DESCRIPTION "Used for testing package archives for components of type INTERFACE_LIB."
    LONG_DESCRIPTION "EPackage long description."
    COMPONENTS SINGLE_COMPONENT
	PACKAGE_ARCHIVES 						
		PACKAGE_ARCHIVE_CONTENT_TYPE 	CT_DEVELOPER
		PACKAGE_ARCHIVE_FORMATS 		7Z
	PACKAGE_ARCHIVES
		PACKAGE_ARCHIVE_CONTENT_TYPE 	CT_SOURCES
		PACKAGE_ARCHIVE_FORMATS 		7Z
	# Runtime packages do not exist for header only libraries.
	# Uncommenting this should yield a descriptive error.
	# PACKAGE_ARCHIVES
	#	PACKAGE_ARCHIVE_CONTENT_TYPE 	CT_RUNTIME
	#	PACKAGE_ARCHIVE_FORMATS 		7Z
)

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

cpfFinalizePackageProject()
