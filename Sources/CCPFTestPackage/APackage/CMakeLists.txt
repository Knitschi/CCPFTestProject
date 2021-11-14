
include(cpfAddCppPackageComponent)

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
	CCPFTestPackage::BPackage
	CCPFTestPackage::CPackage
	CCPFTestPackage::EPackage
)

set( pluginOptions 
	PLUGIN
		PLUGIN_DIRECTORY plugins PLUGIN_TARGETS CCPFTestPackage::DPackage
)

############################################## Add Package #################################
cpfAddCppPackageComponent( 
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
	ENABLE_ABI_API_COMPATIBILITY_REPORT_TARGETS 	FALSE
)
