
include(cpfInitPackageProject)
include(cpfAddCppPackage)

cpfInitPackageProject()

set( briefDescription "An empty C++ command line application used for testing the CPF." )
set( longDescription "A long description of the APackage." )


############################################## Define code files ###################################################

# Generate a file in a subdirectory to test if it is included correctly in the source package.
set(sourcePath "${CMAKE_CURRENT_SOURCE_DIR}/Other/headerTemplate.h.in")
set(destPath "${CMAKE_CURRENT_BINARY_DIR}/Tests/generatedHeader.h")
set(MYNULL 0)
configure_file( ${sourcePath} ${destPath})

set( PACKAGE_PRODUCTION_FILES
	main.cpp
	function.cpp
)

set( PACKAGE_PUBLIC_HEADER
	function.h
	${destPath}
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

# names of the libraries that are linked to this target
set(PACKAGE_LINKED_LIBRARIES
	BPackage
	CPackage
	EPackage
)

set( distPackageOptions
	DISTRIBUTION_PACKAGES
		DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_RUNTIME
		DISTRIBUTION_PACKAGE_FORMATS 		7Z ZIP TGZ
	DISTRIBUTION_PACKAGES
		DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_RUNTIME_PORTABLE CPackage
		DISTRIBUTION_PACKAGE_FORMATS 		7Z
	DISTRIBUTION_PACKAGES
		DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_DEVELOPER
		DISTRIBUTION_PACKAGE_FORMATS 		7Z
	DISTRIBUTION_PACKAGES
		DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_SOURCES
		DISTRIBUTION_PACKAGE_FORMATS 		7Z
)

set( pluginOptions 
	PLUGIN
		PLUGIN_DIRECTORY plugins PLUGIN_TARGETS DPackage
)

############################################## Add Package #################################
cpfAddCppPackage( 
	PACKAGE_NAMESPACE							a
	TYPE										CONSOLE_APP
	BRIEF_DESCRIPTION							${briefDescription}
	LONG_DESCRIPTION							${longDescription}
	PUBLIC_HEADER								${PACKAGE_PUBLIC_HEADER}
	PRODUCTION_FILES							${PACKAGE_PRODUCTION_FILES}
	PUBLIC_FIXTURE_HEADER						${PACKAGE_PUBLIC_FIXTURE_HEADER}
	FIXTURE_FILES								${PACKAGE_FIXTURE_FILES}
	TEST_FILES									${PACKAGE_TEST_FILES}
	LINKED_LIBRARIES							${PACKAGE_LINKED_LIBRARIES}
	PLUGIN_DEPENDENCIES 						${pluginOptions}
	ENABLE_ABI_API_COMPATIBILITY_CHECK_TARGETS 	FALSE
	${distPackageOptions}
)
