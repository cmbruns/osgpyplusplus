// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgDB.h"
#include "_osgDB_free_functions.pypp.hpp"

namespace bp = boost::python;

void register_free_functions(){

    { //::osgDB::appendPlatformSpecificLibraryFilePaths
    
        typedef void ( *appendPlatformSpecificLibraryFilePaths_function_type )( ::osgDB::FilePathList & );
        
        bp::def( 
            "appendPlatformSpecificLibraryFilePaths"
            , appendPlatformSpecificLibraryFilePaths_function_type( &::osgDB::appendPlatformSpecificLibraryFilePaths )
            , ( bp::arg("filepath") ) );
    
    }

    { //::osgDB::appendPlatformSpecificResourceFilePaths
    
        typedef void ( *appendPlatformSpecificResourceFilePaths_function_type )( ::osgDB::FilePathList & );
        
        bp::def( 
            "appendPlatformSpecificResourceFilePaths"
            , appendPlatformSpecificResourceFilePaths_function_type( &::osgDB::appendPlatformSpecificResourceFilePaths )
            , ( bp::arg("filepath") ) );
    
    }

    { //::osgDB::concatPaths
    
        typedef ::std::string ( *concatPaths_function_type )( ::std::string const &,::std::string const & );
        
        bp::def( 
            "concatPaths"
            , concatPaths_function_type( &::osgDB::concatPaths )
            , ( bp::arg("left"), bp::arg("right") ) );
    
    }

    { //::osgDB::containsCurrentWorkingDirectoryReference
    
        typedef bool ( *containsCurrentWorkingDirectoryReference_function_type )( ::osgDB::FilePathList const & );
        
        bp::def( 
            "containsCurrentWorkingDirectoryReference"
            , containsCurrentWorkingDirectoryReference_function_type( &::osgDB::containsCurrentWorkingDirectoryReference )
            , ( bp::arg("paths") ) );
    
    }

    { //::osgDB::containsServerAddress
    
        typedef bool ( *containsServerAddress_function_type )( ::std::string const & );
        
        bp::def( 
            "containsServerAddress"
            , containsServerAddress_function_type( &::osgDB::containsServerAddress )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::convertFileNameToNativeStyle
    
        typedef ::std::string ( *convertFileNameToNativeStyle_function_type )( ::std::string const & );
        
        bp::def( 
            "convertFileNameToNativeStyle"
            , convertFileNameToNativeStyle_function_type( &::osgDB::convertFileNameToNativeStyle )
            , ( bp::arg("fileName") ) );
    
    }

    { //::osgDB::convertFileNameToUnixStyle
    
        typedef ::std::string ( *convertFileNameToUnixStyle_function_type )( ::std::string const & );
        
        bp::def( 
            "convertFileNameToUnixStyle"
            , convertFileNameToUnixStyle_function_type( &::osgDB::convertFileNameToUnixStyle )
            , ( bp::arg("fileName") ) );
    
    }

    { //::osgDB::convertFileNameToWindowsStyle
    
        typedef ::std::string ( *convertFileNameToWindowsStyle_function_type )( ::std::string const & );
        
        bp::def( 
            "convertFileNameToWindowsStyle"
            , convertFileNameToWindowsStyle_function_type( &::osgDB::convertFileNameToWindowsStyle )
            , ( bp::arg("fileName") ) );
    
    }

    { //::osgDB::convertStringFromCurrentCodePageToUTF8
    
        typedef ::std::string ( *convertStringFromCurrentCodePageToUTF8_function_type )( char const * );
        
        bp::def( 
            "convertStringFromCurrentCodePageToUTF8"
            , convertStringFromCurrentCodePageToUTF8_function_type( &::osgDB::convertStringFromCurrentCodePageToUTF8 )
            , ( bp::arg("s") ) );
    
    }

    { //::osgDB::convertStringFromCurrentCodePageToUTF8
    
        typedef ::std::string ( *convertStringFromCurrentCodePageToUTF8_function_type )( ::std::string const & );
        
        bp::def( 
            "convertStringFromCurrentCodePageToUTF8"
            , convertStringFromCurrentCodePageToUTF8_function_type( &::osgDB::convertStringFromCurrentCodePageToUTF8 )
            , ( bp::arg("s") ) );
    
    }

    { //::osgDB::convertStringFromCurrentCodePageToUTF8
    
        typedef ::std::string ( *convertStringFromCurrentCodePageToUTF8_function_type )( char const *,unsigned int );
        
        bp::def( 
            "convertStringFromCurrentCodePageToUTF8"
            , convertStringFromCurrentCodePageToUTF8_function_type( &::osgDB::convertStringFromCurrentCodePageToUTF8 )
            , ( bp::arg("source"), bp::arg("sourceLength") ) );
    
    }

    { //::osgDB::convertStringFromUTF8toCurrentCodePage
    
        typedef ::std::string ( *convertStringFromUTF8toCurrentCodePage_function_type )( char const * );
        
        bp::def( 
            "convertStringFromUTF8toCurrentCodePage"
            , convertStringFromUTF8toCurrentCodePage_function_type( &::osgDB::convertStringFromUTF8toCurrentCodePage )
            , ( bp::arg("s") ) );
    
    }

    { //::osgDB::convertStringFromUTF8toCurrentCodePage
    
        typedef ::std::string ( *convertStringFromUTF8toCurrentCodePage_function_type )( ::std::string const & );
        
        bp::def( 
            "convertStringFromUTF8toCurrentCodePage"
            , convertStringFromUTF8toCurrentCodePage_function_type( &::osgDB::convertStringFromUTF8toCurrentCodePage )
            , ( bp::arg("s") ) );
    
    }

    { //::osgDB::convertStringFromUTF8toCurrentCodePage
    
        typedef ::std::string ( *convertStringFromUTF8toCurrentCodePage_function_type )( char const *,unsigned int );
        
        bp::def( 
            "convertStringFromUTF8toCurrentCodePage"
            , convertStringFromUTF8toCurrentCodePage_function_type( &::osgDB::convertStringFromUTF8toCurrentCodePage )
            , ( bp::arg("source"), bp::arg("sourceLength") ) );
    
    }

    { //::osgDB::convertStringPathIntoFilePathList
    
        typedef void ( *convertStringPathIntoFilePathList_function_type )( ::std::string const &,::osgDB::FilePathList & );
        
        bp::def( 
            "convertStringPathIntoFilePathList"
            , convertStringPathIntoFilePathList_function_type( &::osgDB::convertStringPathIntoFilePathList )
            , ( bp::arg("paths"), bp::arg("filepath") ) );
    
    }

    { //::osgDB::convertToLowerCase
    
        typedef ::std::string ( *convertToLowerCase_function_type )( ::std::string const & );
        
        bp::def( 
            "convertToLowerCase"
            , convertToLowerCase_function_type( &::osgDB::convertToLowerCase )
            , ( bp::arg("fileName") ) );
    
    }

    { //::osgDB::convertUTF16toUTF8
    
        typedef ::std::string ( *convertUTF16toUTF8_function_type )( wchar_t const * );
        
        bp::def( 
            "convertUTF16toUTF8"
            , convertUTF16toUTF8_function_type( &::osgDB::convertUTF16toUTF8 )
            , ( bp::arg("s") ) );
    
    }

    { //::osgDB::convertUTF16toUTF8
    
        typedef ::std::string ( *convertUTF16toUTF8_function_type )( ::std::wstring const & );
        
        bp::def( 
            "convertUTF16toUTF8"
            , convertUTF16toUTF8_function_type( &::osgDB::convertUTF16toUTF8 )
            , ( bp::arg("s") ) );
    
    }

    { //::osgDB::convertUTF16toUTF8
    
        typedef ::std::string ( *convertUTF16toUTF8_function_type )( wchar_t const *,unsigned int );
        
        bp::def( 
            "convertUTF16toUTF8"
            , convertUTF16toUTF8_function_type( &::osgDB::convertUTF16toUTF8 )
            , ( bp::arg("source"), bp::arg("sourceLength") ) );
    
    }

    { //::osgDB::convertUTF8toUTF16
    
        typedef ::std::wstring ( *convertUTF8toUTF16_function_type )( char const * );
        
        bp::def( 
            "convertUTF8toUTF16"
            , convertUTF8toUTF16_function_type( &::osgDB::convertUTF8toUTF16 )
            , ( bp::arg("s") ) );
    
    }

    { //::osgDB::convertUTF8toUTF16
    
        typedef ::std::wstring ( *convertUTF8toUTF16_function_type )( ::std::string const & );
        
        bp::def( 
            "convertUTF8toUTF16"
            , convertUTF8toUTF16_function_type( &::osgDB::convertUTF8toUTF16 )
            , ( bp::arg("s") ) );
    
    }

    { //::osgDB::convertUTF8toUTF16
    
        typedef ::std::wstring ( *convertUTF8toUTF16_function_type )( char const *,unsigned int );
        
        bp::def( 
            "convertUTF8toUTF16"
            , convertUTF8toUTF16_function_type( &::osgDB::convertUTF8toUTF16 )
            , ( bp::arg("source"), bp::arg("sourceLength") ) );
    
    }

    { //::osgDB::copyFile
    
        typedef ::osgDB::FileOpResult::Value ( *copyFile_function_type )( ::std::string const &,::std::string const & );
        
        bp::def( 
            "copyFile"
            , copyFile_function_type( &::osgDB::copyFile )
            , ( bp::arg("source"), bp::arg("destination") ) );
    
    }

    { //::osgDB::equalCaseInsensitive
    
        typedef bool ( *equalCaseInsensitive_function_type )( ::std::string const &,char const * );
        
        bp::def( 
            "equalCaseInsensitive"
            , equalCaseInsensitive_function_type( &::osgDB::equalCaseInsensitive )
            , ( bp::arg("lhs"), bp::arg("rhs") ) );
    
    }

    { //::osgDB::equalCaseInsensitive
    
        typedef bool ( *equalCaseInsensitive_function_type )( ::std::string const &,::std::string const & );
        
        bp::def( 
            "equalCaseInsensitive"
            , equalCaseInsensitive_function_type( &::osgDB::equalCaseInsensitive )
            , ( bp::arg("lhs"), bp::arg("rhs") ) );
    
    }

    { //::osgDB::expandWildcardsInFilename
    
        typedef ::osgDB::DirectoryContents ( *expandWildcardsInFilename_function_type )( ::std::string const & );
        
        bp::def( 
            "expandWildcardsInFilename"
            , expandWildcardsInFilename_function_type( &::osgDB::expandWildcardsInFilename )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::fileExists
    
        typedef bool ( *fileExists_function_type )( ::std::string const & );
        
        bp::def( 
            "fileExists"
            , fileExists_function_type( &::osgDB::fileExists )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::fileType
    
        typedef ::osgDB::FileType ( *fileType_function_type )( ::std::string const & );
        
        bp::def( 
            "fileType"
            , fileType_function_type( &::osgDB::fileType )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::findDataFile
    
        typedef ::std::string ( *findDataFile_function_type )( ::std::string const &,::osgDB::Options const *,::osgDB::CaseSensitivity );
        
        bp::def( 
            "findDataFile"
            , findDataFile_function_type( &::osgDB::findDataFile )
            , ( bp::arg("filename"), bp::arg("options"), bp::arg("caseSensitivity")=::osgDB::CASE_SENSITIVE ) );
    
    }

    { //::osgDB::findDataFile
    
        typedef ::std::string ( *findDataFile_function_type )( ::std::string const &,::osgDB::CaseSensitivity );
        
        bp::def( 
            "findDataFile"
            , findDataFile_function_type( &::osgDB::findDataFile )
            , ( bp::arg("filename"), bp::arg("caseSensitivity")=::osgDB::CASE_SENSITIVE ) );
    
    }

    { //::osgDB::findFileInDirectory
    
        typedef ::std::string ( *findFileInDirectory_function_type )( ::std::string const &,::std::string const &,::osgDB::CaseSensitivity );
        
        bp::def( 
            "findFileInDirectory"
            , findFileInDirectory_function_type( &::osgDB::findFileInDirectory )
            , ( bp::arg("fileName"), bp::arg("dirName"), bp::arg("caseSensitivity")=::osgDB::CASE_SENSITIVE ) );
    
    }

    { //::osgDB::findFileInPath
    
        typedef ::std::string ( *findFileInPath_function_type )( ::std::string const &,::osgDB::FilePathList const &,::osgDB::CaseSensitivity );
        
        bp::def( 
            "findFileInPath"
            , findFileInPath_function_type( &::osgDB::findFileInPath )
            , ( bp::arg("filename"), bp::arg("filePath"), bp::arg("caseSensitivity")=::osgDB::CASE_SENSITIVE ) );
    
    }

    { //::osgDB::findLibraryFile
    
        typedef ::std::string ( *findLibraryFile_function_type )( ::std::string const &,::osgDB::CaseSensitivity );
        
        bp::def( 
            "findLibraryFile"
            , findLibraryFile_function_type( &::osgDB::findLibraryFile )
            , ( bp::arg("filename"), bp::arg("caseSensitivity")=::osgDB::CASE_SENSITIVE ) );
    
    }

    { //::osgDB::getCurrentWorkingDirectory
    
        typedef ::std::string ( *getCurrentWorkingDirectory_function_type )(  );
        
        bp::def( 
            "getCurrentWorkingDirectory"
            , getCurrentWorkingDirectory_function_type( &::osgDB::getCurrentWorkingDirectory ) );
    
    }

    { //::osgDB::getDataFilePathList
    
        typedef ::osgDB::FilePathList & ( *getDataFilePathList_function_type )(  );
        
        bp::def( 
            "getDataFilePathList"
            , getDataFilePathList_function_type( &::osgDB::getDataFilePathList )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::getDirectoryContents
    
        typedef ::osgDB::DirectoryContents ( *getDirectoryContents_function_type )( ::std::string const & );
        
        bp::def( 
            "getDirectoryContents"
            , getDirectoryContents_function_type( &::osgDB::getDirectoryContents )
            , ( bp::arg("dirName") ) );
    
    }

    { //::osgDB::getFileExtension
    
        typedef ::std::string ( *getFileExtension_function_type )( ::std::string const & );
        
        bp::def( 
            "getFileExtension"
            , getFileExtension_function_type( &::osgDB::getFileExtension )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::getFileExtensionIncludingDot
    
        typedef ::std::string ( *getFileExtensionIncludingDot_function_type )( ::std::string const & );
        
        bp::def( 
            "getFileExtensionIncludingDot"
            , getFileExtensionIncludingDot_function_type( &::osgDB::getFileExtensionIncludingDot )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::getFilePath
    
        typedef ::std::string ( *getFilePath_function_type )( ::std::string const & );
        
        bp::def( 
            "getFilePath"
            , getFilePath_function_type( &::osgDB::getFilePath )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::getLibraryFilePathList
    
        typedef ::osgDB::FilePathList & ( *getLibraryFilePathList_function_type )(  );
        
        bp::def( 
            "getLibraryFilePathList"
            , getLibraryFilePathList_function_type( &::osgDB::getLibraryFilePathList )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::getLowerCaseFileExtension
    
        typedef ::std::string ( *getLowerCaseFileExtension_function_type )( ::std::string const & );
        
        bp::def( 
            "getLowerCaseFileExtension"
            , getLowerCaseFileExtension_function_type( &::osgDB::getLowerCaseFileExtension )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::getNameLessAllExtensions
    
        typedef ::std::string ( *getNameLessAllExtensions_function_type )( ::std::string const & );
        
        bp::def( 
            "getNameLessAllExtensions"
            , getNameLessAllExtensions_function_type( &::osgDB::getNameLessAllExtensions )
            , ( bp::arg("fileName") ) );
    
    }

    { //::osgDB::getNameLessExtension
    
        typedef ::std::string ( *getNameLessExtension_function_type )( ::std::string const & );
        
        bp::def( 
            "getNameLessExtension"
            , getNameLessExtension_function_type( &::osgDB::getNameLessExtension )
            , ( bp::arg("fileName") ) );
    
    }

    { //::osgDB::getNativePathSeparator
    
        typedef char ( *getNativePathSeparator_function_type )(  );
        
        bp::def( 
            "getNativePathSeparator"
            , getNativePathSeparator_function_type( &::osgDB::getNativePathSeparator ) );
    
    }

    { //::osgDB::getPathElements
    
        typedef void ( *getPathElements_function_type )( ::std::string const &,::std::vector< std::string > & );
        
        bp::def( 
            "getPathElements"
            , getPathElements_function_type( &::osgDB::getPathElements )
            , ( bp::arg("path"), bp::arg("out_elements") ) );
    
    }

    { //::osgDB::getPathRelative
    
        typedef ::std::string ( *getPathRelative_function_type )( ::std::string const &,::std::string const & );
        
        bp::def( 
            "getPathRelative"
            , getPathRelative_function_type( &::osgDB::getPathRelative )
            , ( bp::arg("from"), bp::arg("to") ) );
    
    }

    { //::osgDB::getPathRoot
    
        typedef ::std::string ( *getPathRoot_function_type )( ::std::string const & );
        
        bp::def( 
            "getPathRoot"
            , getPathRoot_function_type( &::osgDB::getPathRoot )
            , ( bp::arg("path") ) );
    
    }

    { //::osgDB::getRealPath
    
        typedef ::std::string ( *getRealPath_function_type )( ::std::string const & );
        
        bp::def( 
            "getRealPath"
            , getRealPath_function_type( &::osgDB::getRealPath )
            , ( bp::arg("path") ) );
    
    }

    { //::osgDB::getServerAddress
    
        typedef ::std::string ( *getServerAddress_function_type )( ::std::string const & );
        
        bp::def( 
            "getServerAddress"
            , getServerAddress_function_type( &::osgDB::getServerAddress )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::getServerFileName
    
        typedef ::std::string ( *getServerFileName_function_type )( ::std::string const & );
        
        bp::def( 
            "getServerFileName"
            , getServerFileName_function_type( &::osgDB::getServerFileName )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::getServerProtocol
    
        typedef ::std::string ( *getServerProtocol_function_type )( ::std::string const & );
        
        bp::def( 
            "getServerProtocol"
            , getServerProtocol_function_type( &::osgDB::getServerProtocol )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::getSimpleFileName
    
        typedef ::std::string ( *getSimpleFileName_function_type )( ::std::string const & );
        
        bp::def( 
            "getSimpleFileName"
            , getSimpleFileName_function_type( &::osgDB::getSimpleFileName )
            , ( bp::arg("fileName") ) );
    
    }

    { //::osgDB::getSortedDirectoryContents
    
        typedef ::osgDB::DirectoryContents ( *getSortedDirectoryContents_function_type )( ::std::string const & );
        
        bp::def( 
            "getSortedDirectoryContents"
            , getSortedDirectoryContents_function_type( &::osgDB::getSortedDirectoryContents )
            , ( bp::arg("dirName") ) );
    
    }

    { //::osgDB::getStrippedName
    
        typedef ::std::string ( *getStrippedName_function_type )( ::std::string const & );
        
        bp::def( 
            "getStrippedName"
            , getStrippedName_function_type( &::osgDB::getStrippedName )
            , ( bp::arg("fileName") ) );
    
    }

    { //::osgDB::isAbsolutePath
    
        typedef bool ( *isAbsolutePath_function_type )( ::std::string const & );
        
        bp::def( 
            "isAbsolutePath"
            , isAbsolutePath_function_type( &::osgDB::isAbsolutePath )
            , ( bp::arg("path") ) );
    
    }

    { //::osgDB::isFileNameNativeStyle
    
        typedef bool ( *isFileNameNativeStyle_function_type )( ::std::string const & );
        
        bp::def( 
            "isFileNameNativeStyle"
            , isFileNameNativeStyle_function_type( &::osgDB::isFileNameNativeStyle )
            , ( bp::arg("fileName") ) );
    
    }

    { //::osgDB::listAllAvailablePlugins
    
        typedef ::osgDB::FileNameList ( *listAllAvailablePlugins_function_type )(  );
        
        bp::def( 
            "listAllAvailablePlugins"
            , listAllAvailablePlugins_function_type( &::osgDB::listAllAvailablePlugins ) );
    
    }

    { //::osgDB::makeDirectory
    
        typedef bool ( *makeDirectory_function_type )( ::std::string const & );
        
        bp::def( 
            "makeDirectory"
            , makeDirectory_function_type( &::osgDB::makeDirectory )
            , ( bp::arg("directoryPath") ) );
    
    }

    { //::osgDB::makeDirectoryForFile
    
        typedef bool ( *makeDirectoryForFile_function_type )( ::std::string const & );
        
        bp::def( 
            "makeDirectoryForFile"
            , makeDirectoryForFile_function_type( &::osgDB::makeDirectoryForFile )
            , ( bp::arg("filePath") ) );
    
    }

    { //::osgDB::open
    
        typedef void ( *open_function_type )( ::std::fstream &,char const *,::std::_Ios_Openmode );
        
        bp::def( 
            "open"
            , open_function_type( &::osgDB::open )
            , ( bp::arg("fs"), bp::arg("filename"), bp::arg("mode") ) );
    
    }

    { //::osgDB::openArchive
    
        typedef ::osgDB::Archive * ( *openArchive_function_type )( ::std::string const &,::osgDB::ReaderWriter::ArchiveStatus,unsigned int,::osgDB::Options * );
        
        bp::def( 
            "openArchive"
            , openArchive_function_type( &::osgDB::openArchive )
            , ( bp::arg("filename"), bp::arg("status"), bp::arg("indexBlockSizeHint"), bp::arg("options") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::openArchive
    
        typedef ::osgDB::Archive * ( *openArchive_function_type )( ::std::string const &,::osgDB::ReaderWriter::ArchiveStatus,unsigned int );
        
        bp::def( 
            "openArchive"
            , openArchive_function_type( &::osgDB::openArchive )
            , ( bp::arg("filename"), bp::arg("status"), bp::arg("indexBlockSizeHint")=(unsigned int)(4096) )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDBGetLibraryName
    
        typedef char const * ( *osgDBGetLibraryName_function_type )(  );
        
        bp::def( 
            "osgDBGetLibraryName"
            , osgDBGetLibraryName_function_type( &::osgDBGetLibraryName ) );
    
    }

    { //::osgDBGetVersion
    
        typedef char const * ( *osgDBGetVersion_function_type )(  );
        
        bp::def( 
            "osgDBGetVersion"
            , osgDBGetVersion_function_type( &::osgDBGetVersion ) );
    
    }

    { //::osgDB::outputPluginDetails
    
        typedef bool ( *outputPluginDetails_function_type )( ::std::ostream &,::std::string const & );
        
        bp::def( 
            "outputPluginDetails"
            , outputPluginDetails_function_type( &::osgDB::outputPluginDetails )
            , ( bp::arg("out"), bp::arg("fileName") ) );
    
    }

    { //::osgDB::queryPlugin
    
        typedef bool ( *queryPlugin_function_type )( ::std::string const &,::osgDB::ReaderWriterInfoList & );
        
        bp::def( 
            "queryPlugin"
            , queryPlugin_function_type( &::osgDB::queryPlugin )
            , ( bp::arg("fileName"), bp::arg("infoList") ) );
    
    }

    { //::osgDB::readCommandLine
    
        typedef void ( *readCommandLine_function_type )( ::osg::ArgumentParser & );
        
        bp::def( 
            "readCommandLine"
            , readCommandLine_function_type( &::osgDB::readCommandLine )
            , ( bp::arg("parser") ) );
    
    }

    { //::osgDB::readHeightFieldFile
    
        typedef ::osg::HeightField * ( *readHeightFieldFile_function_type )( ::std::string const & );
        
        bp::def( 
            "readHeightFieldFile"
            , readHeightFieldFile_function_type( &::osgDB::readHeightFieldFile )
            , ( bp::arg("filename") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readHeightFieldFile
    
        typedef ::osg::HeightField * ( *readHeightFieldFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readHeightFieldFile"
            , readHeightFieldFile_function_type( &::osgDB::readHeightFieldFile )
            , ( bp::arg("filename"), bp::arg("options") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readImageFile
    
        typedef ::osg::Image * ( *readImageFile_function_type )( ::std::string const & );
        
        bp::def( 
            "readImageFile"
            , readImageFile_function_type( &::osgDB::readImageFile )
            , ( bp::arg("filename") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readImageFile
    
        typedef ::osg::Image * ( *readImageFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readImageFile"
            , readImageFile_function_type( &::osgDB::readImageFile )
            , ( bp::arg("filename"), bp::arg("options") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readNodeFile
    
        typedef ::osg::Node * ( *readNodeFile_function_type )( ::std::string const & );
        
        bp::def( 
            "readNodeFile"
            , readNodeFile_function_type( &::osgDB::readNodeFile )
            , ( bp::arg("filename") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readNodeFile
    
        typedef ::osg::Node * ( *readNodeFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readNodeFile"
            , readNodeFile_function_type( &::osgDB::readNodeFile )
            , ( bp::arg("filename"), bp::arg("options") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readNodeFiles
    
        typedef ::osg::Node * ( *readNodeFiles_function_type )( ::osg::ArgumentParser & );
        
        bp::def( 
            "readNodeFiles"
            , readNodeFiles_function_type( &::osgDB::readNodeFiles )
            , ( bp::arg("parser") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readNodeFiles
    
        typedef ::osg::Node * ( *readNodeFiles_function_type )( ::osg::ArgumentParser &,::osgDB::Options const * );
        
        bp::def( 
            "readNodeFiles"
            , readNodeFiles_function_type( &::osgDB::readNodeFiles )
            , ( bp::arg("parser"), bp::arg("options") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readNodeFiles
    
        typedef ::osg::Node * ( *readNodeFiles_function_type )( ::std::vector< std::string > & );
        
        bp::def( 
            "readNodeFiles"
            , readNodeFiles_function_type( &::osgDB::readNodeFiles )
            , ( bp::arg("fileList") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readNodeFiles
    
        typedef ::osg::Node * ( *readNodeFiles_function_type )( ::std::vector< std::string > &,::osgDB::Options const * );
        
        bp::def( 
            "readNodeFiles"
            , readNodeFiles_function_type( &::osgDB::readNodeFiles )
            , ( bp::arg("fileList"), bp::arg("options") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readObjectFile
    
        typedef ::osg::Object * ( *readObjectFile_function_type )( ::std::string const & );
        
        bp::def( 
            "readObjectFile"
            , readObjectFile_function_type( &::osgDB::readObjectFile )
            , ( bp::arg("filename") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readObjectFile
    
        typedef ::osg::Object * ( *readObjectFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readObjectFile"
            , readObjectFile_function_type( &::osgDB::readObjectFile )
            , ( bp::arg("filename"), bp::arg("options") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readRefHeightFieldFile
    
        typedef ::osg::ref_ptr< osg::HeightField > ( *readRefHeightFieldFile_function_type )( ::std::string const & );
        
        bp::def( 
            "readRefHeightFieldFile"
            , readRefHeightFieldFile_function_type( &::osgDB::readRefHeightFieldFile )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::readRefHeightFieldFile
    
        typedef ::osg::ref_ptr< osg::HeightField > ( *readRefHeightFieldFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readRefHeightFieldFile"
            , readRefHeightFieldFile_function_type( &::osgDB::readRefHeightFieldFile )
            , ( bp::arg("filename"), bp::arg("options") ) );
    
    }

    { //::osgDB::readRefImageFile
    
        typedef ::osg::ref_ptr< osg::Image > ( *readRefImageFile_function_type )( ::std::string const & );
        
        bp::def( 
            "readRefImageFile"
            , readRefImageFile_function_type( &::osgDB::readRefImageFile )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::readRefImageFile
    
        typedef ::osg::ref_ptr< osg::Image > ( *readRefImageFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readRefImageFile"
            , readRefImageFile_function_type( &::osgDB::readRefImageFile )
            , ( bp::arg("filename"), bp::arg("options") ) );
    
    }

    { //::osgDB::readRefNodeFile
    
        typedef ::osg::ref_ptr< osg::Node > ( *readRefNodeFile_function_type )( ::std::string const & );
        
        bp::def( 
            "readRefNodeFile"
            , readRefNodeFile_function_type( &::osgDB::readRefNodeFile )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::readRefNodeFile
    
        typedef ::osg::ref_ptr< osg::Node > ( *readRefNodeFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readRefNodeFile"
            , readRefNodeFile_function_type( &::osgDB::readRefNodeFile )
            , ( bp::arg("filename"), bp::arg("options") ) );
    
    }

    { //::osgDB::readRefObjectFile
    
        typedef ::osg::ref_ptr< osg::Object > ( *readRefObjectFile_function_type )( ::std::string const & );
        
        bp::def( 
            "readRefObjectFile"
            , readRefObjectFile_function_type( &::osgDB::readRefObjectFile )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::readRefObjectFile
    
        typedef ::osg::ref_ptr< osg::Object > ( *readRefObjectFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readRefObjectFile"
            , readRefObjectFile_function_type( &::osgDB::readRefObjectFile )
            , ( bp::arg("filename"), bp::arg("options") ) );
    
    }

    { //::osgDB::readRefShaderFile
    
        typedef ::osg::ref_ptr< osg::Shader > ( *readRefShaderFile_function_type )( ::std::string const & );
        
        bp::def( 
            "readRefShaderFile"
            , readRefShaderFile_function_type( &::osgDB::readRefShaderFile )
            , ( bp::arg("filename") ) );
    
    }

    { //::osgDB::readRefShaderFile
    
        typedef ::osg::ref_ptr< osg::Shader > ( *readRefShaderFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readRefShaderFile"
            , readRefShaderFile_function_type( &::osgDB::readRefShaderFile )
            , ( bp::arg("filename"), bp::arg("options") ) );
    
    }

    { //::osgDB::readShaderFile
    
        typedef ::osg::Shader * ( *readShaderFile_function_type )( ::osg::Shader::Type,::std::string const & );
        
        bp::def( 
            "readShaderFile"
            , readShaderFile_function_type( &::osgDB::readShaderFile )
            , ( bp::arg("type"), bp::arg("filename") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readShaderFile
    
        typedef ::osg::Shader * ( *readShaderFile_function_type )( ::osg::Shader::Type,::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readShaderFile"
            , readShaderFile_function_type( &::osgDB::readShaderFile )
            , ( bp::arg("type"), bp::arg("filename"), bp::arg("options") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readShaderFile
    
        typedef ::osg::Shader * ( *readShaderFile_function_type )( ::std::string const & );
        
        bp::def( 
            "readShaderFile"
            , readShaderFile_function_type( &::osgDB::readShaderFile )
            , ( bp::arg("filename") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readShaderFile
    
        typedef ::osg::Shader * ( *readShaderFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readShaderFile"
            , readShaderFile_function_type( &::osgDB::readShaderFile )
            , ( bp::arg("filename"), bp::arg("options") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readXmlFile
    
        typedef ::osgDB::XmlNode * ( *readXmlFile_function_type )( ::std::string const & );
        
        bp::def( 
            "readXmlFile"
            , readXmlFile_function_type( &::osgDB::readXmlFile )
            , ( bp::arg("filename") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readXmlFile
    
        typedef ::osgDB::XmlNode * ( *readXmlFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readXmlFile"
            , readXmlFile_function_type( &::osgDB::readXmlFile )
            , ( bp::arg("filename"), bp::arg("options") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::readXmlStream
    
        typedef ::osgDB::XmlNode * ( *readXmlStream_function_type )( ::std::istream & );
        
        bp::def( 
            "readXmlStream"
            , readXmlStream_function_type( &::osgDB::readXmlStream )
            , ( bp::arg("fin") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgDB::setCurrentWorkingDirectory
    
        typedef bool ( *setCurrentWorkingDirectory_function_type )( ::std::string const & );
        
        bp::def( 
            "setCurrentWorkingDirectory"
            , setCurrentWorkingDirectory_function_type( &::osgDB::setCurrentWorkingDirectory )
            , ( bp::arg("newCurrentWorkingDirectory") ) );
    
    }

    { //::osgDB::setDataFilePathList
    
        typedef void ( *setDataFilePathList_function_type )( ::std::string const & );
        
        bp::def( 
            "setDataFilePathList"
            , setDataFilePathList_function_type( &::osgDB::setDataFilePathList )
            , ( bp::arg("paths") ) );
    
    }

    { //::osgDB::setDataFilePathList
    
        typedef void ( *setDataFilePathList_function_type )( ::osgDB::FilePathList const & );
        
        bp::def( 
            "setDataFilePathList"
            , setDataFilePathList_function_type( &::osgDB::setDataFilePathList )
            , ( bp::arg("filepath") ) );
    
    }

    { //::osgDB::setLibraryFilePathList
    
        typedef void ( *setLibraryFilePathList_function_type )( ::std::string const & );
        
        bp::def( 
            "setLibraryFilePathList"
            , setLibraryFilePathList_function_type( &::osgDB::setLibraryFilePathList )
            , ( bp::arg("paths") ) );
    
    }

    { //::osgDB::setLibraryFilePathList
    
        typedef void ( *setLibraryFilePathList_function_type )( ::osgDB::FilePathList const & );
        
        bp::def( 
            "setLibraryFilePathList"
            , setLibraryFilePathList_function_type( &::osgDB::setLibraryFilePathList )
            , ( bp::arg("filepaths") ) );
    
    }

    { //::osgDB::split
    
        typedef void ( *split_function_type )( ::std::string const &,::osgDB::StringList &,char );
        
        bp::def( 
            "split"
            , split_function_type( &::osgDB::split )
            , ( bp::arg("src"), bp::arg("list"), bp::arg("separator")=(char)(' ') ) );
    
    }

    { //::osgDB::trimEnclosingSpaces
    
        typedef ::std::string ( *trimEnclosingSpaces_function_type )( ::std::string const & );
        
        bp::def( 
            "trimEnclosingSpaces"
            , trimEnclosingSpaces_function_type( &::osgDB::trimEnclosingSpaces )
            , ( bp::arg("str") ) );
    
    }

}
