
include(cpfAddCppPackageComponent)

cpfPackageProject(
	TARGET_NAMESPACE D
    BRIEF DESCRIPTION "Used for testing package archives for components of type LIB but is fixed to be a shared library because it is used as a plubin dependency.\
It is not actuallyloaded during runtime though."
    LONG_DESCRIPTION "DPackage long description."
	COMPONENTS SINGLE_COMPONENT
)

set( PACKAGE_PUBLIC_HEADER
	function.h
)

set( PACKAGE_PRODUCTION_FILES
	function.cpp
)

set(BUILD_SHARED_LIBS ON)

############################################## Add Package #################################
cpfAddCppPackageComponent( 
	TYPE											LIB
	BRIEF_DESCRIPTION								${briefDescription}
	LONG_DESCRIPTION								${longDescription}
	PUBLIC_HEADER									${PACKAGE_PUBLIC_HEADER}
	PRODUCTION_FILES								${PACKAGE_PRODUCTION_FILES}
	ENABLE_ABI_API_COMPATIBILITY_REPORT_TARGETS 	FALSE
)

cpfFinalizePackageProject()