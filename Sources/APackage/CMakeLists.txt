

cpfPackageProject(
	TARGET_NAMESPACE A
    BRIEF DESCRIPTION "Provides the top level APackage consumer and the documentation package."
    LONG_DESCRIPTION ""
    COMPONENTS 
        APackage
        documentation
	PACKAGE_ARCHIVES
		PACKAGE_ARCHIVE_CONTENT_TYPE 	CT_RUNTIME
		PACKAGE_ARCHIVE_FORMATS 		7Z ZIP TGZ
	PACKAGE_ARCHIVES
		PACKAGE_ARCHIVE_CONTENT_TYPE 	CT_RUNTIME_PORTABLE CPackage
		PACKAGE_ARCHIVE_FORMATS 		7Z
	PACKAGE_ARCHIVES
		PACKAGE_ARCHIVE_CONTENT_TYPE 	CT_DEVELOPER
		PACKAGE_ARCHIVE_FORMATS 		7Z
	PACKAGE_ARCHIVES
		PACKAGE_ARCHIVE_CONTENT_TYPE 	CT_SOURCES
		PACKAGE_ARCHIVE_FORMATS 		7Z
)

