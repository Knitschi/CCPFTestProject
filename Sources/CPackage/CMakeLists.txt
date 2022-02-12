
include(cpfAddCppPackageComponent)

cpfPackageProject(
	TARGET_NAMESPACE C
    BRIEF DESCRIPTION "Used for testing package archives for components of type LIB."
    LONG_DESCRIPTION "CPackage long description."
    COMPONENTS SINGLE_COMPONENT
)

set( PACKAGE_PUBLIC_HEADER
	function.h
)

set( PACKAGE_PRODUCTION_FILES
	function.cpp
)


############################################## Add Package #################################
cpfAddCppPackageComponent( 
	TYPE										LIB
	BRIEF_DESCRIPTION							${briefDescription}
	LONG_DESCRIPTION							${longDescription}
	PUBLIC_HEADER								${PACKAGE_PUBLIC_HEADER}
	PRODUCTION_FILES							${PACKAGE_PRODUCTION_FILES}
	ENABLE_ABI_API_COMPATIBILITY_REPORT_TARGETS 	FALSE
)

cpfFinalizePackageProject()