// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgText.h"
#include "_osgText_free_functions.pypp.hpp"

namespace bp = boost::python;

void register_free_functions(){

    { //::osgText::findFont3DFile
    
        typedef ::std::string ( *findFont3DFile_function_type )( ::std::string const & );
        
        bp::def( 
            "findFont3DFile"
            , findFont3DFile_function_type( &::osgText::findFont3DFile )
            , ( bp::arg("str") )
            , " deprecated, use findFontFile() instead." );
    
    }

    { //::osgText::findFontFile
    
        typedef ::std::string ( *findFontFile_function_type )( ::std::string const & );
        
        bp::def( 
            "findFontFile"
            , findFontFile_function_type( &::osgText::findFontFile )
            , ( bp::arg("str") ) );
    
    }

    { //::osgTextGetLibraryName
    
        typedef char const * ( *osgTextGetLibraryName_function_type )(  );
        
        bp::def( 
            "osgTextGetLibraryName"
            , osgTextGetLibraryName_function_type( &::osgTextGetLibraryName )
            , " osgTextGetLibraryName() returns the library name in human friendly form." );
    
    }

    { //::osgTextGetVersion
    
        typedef char const * ( *osgTextGetVersion_function_type )(  );
        
        bp::def( 
            "osgTextGetVersion"
            , osgTextGetVersion_function_type( &::osgTextGetVersion )
            , " osgTextGetVersion() returns the library version number.\n Numbering convention : OpenSceneGraph-1.0 will return 1.0 from osgTextGetVersion.\n\n This C function can be also used to check for the existence of the OpenSceneGraph\n library using autoconf and its m4 macro AC_CHECK_LIB.\n\n Here is the code to add to your configure.in:\n Verbatim:\n #\n # Check for the OpenSceneGraph (OSG) Text library\n #\n AC_CHECK_LIB(osg, osgTextGetVersion, ,\n    [AC_MSG_ERROR(OpenSceneGraph Text library not found. See http://www.openscenegraph.org)],)\n E:ndverbatim" );
    
    }

    { //::osgText::readFont3DFile
    
        typedef ::osgText::Font * ( *readFont3DFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readFont3DFile"
            , readFont3DFile_function_type( &::osgText::readFont3DFile )
            , ( bp::arg("filename"), bp::arg("userOptions")=bp::object() )
            , bp::return_value_policy< bp::reference_existing_object >()
            , " deprecated, use readFontFile() instead." );
    
    }

    { //::osgText::readFont3DStream
    
        typedef ::osgText::Font * ( *readFont3DStream_function_type )( ::std::istream &,::osgDB::Options const * );
        
        bp::def( 
            "readFont3DStream"
            , readFont3DStream_function_type( &::osgText::readFont3DStream )
            , ( bp::arg("stream"), bp::arg("userOptions")=bp::object() )
            , bp::return_value_policy< bp::reference_existing_object >()
            , " deprecated, use readFontStream() instead." );
    
    }

    { //::osgText::readFontFile
    
        typedef ::osgText::Font * ( *readFontFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readFontFile"
            , readFontFile_function_type( &::osgText::readFontFile )
            , ( bp::arg("filename"), bp::arg("userOptions")=bp::object() )
            , bp::return_value_policy< bp::reference_existing_object >()
            , " Read a font from specified file. The filename may contain a path.\n It will search for the font file in the following places in this order:\n - In the current directory\n - All paths defined in OSG_FILE_PATH or OSGFILEPATH environment variable\n - Filename with path stripped: In the current directory\n - Filename with path stripped: All paths defined in OSG_FILE_PATH or OSGFILEPATH\n\n Then the file will be searched in OS specific directories in the following order:\n - Again in the current directory\n - Windows: In C:/winnt/fonts\n - Windows: In C:/windows/fonts\n - Windows: In the fonts directory of the windows install directory\n - Other OS: In /usr/share/fonts/ttf\n - Other OS: In /usr/share/fonts/ttf/western\n - Other OS: In /usr/share/fonts/ttf/decoratives\n\n If the given file could not be found, the path part will be stripped and\n the file will be searched again in the OS specific directories." );
    
    }

    { //::osgText::readFontStream
    
        typedef ::osgText::Font * ( *readFontStream_function_type )( ::std::istream &,::osgDB::Options const * );
        
        bp::def( 
            "readFontStream"
            , readFontStream_function_type( &::osgText::readFontStream )
            , ( bp::arg("stream"), bp::arg("userOptions")=bp::object() )
            , bp::return_value_policy< bp::reference_existing_object >()
            , " read a font from specified stream." );
    
    }

    { //::osgText::readRefFont3DFile
    
        typedef ::osg::ref_ptr< osgText::Font > ( *readRefFont3DFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readRefFont3DFile"
            , readRefFont3DFile_function_type( &::osgText::readRefFont3DFile )
            , ( bp::arg("filename"), bp::arg("userOptions")=bp::object() )
            , " deprecated, use readRefFontFile() instead." );
    
    }

    { //::osgText::readRefFont3DStream
    
        typedef ::osg::ref_ptr< osgText::Font > ( *readRefFont3DStream_function_type )( ::std::istream &,::osgDB::Options const * );
        
        bp::def( 
            "readRefFont3DStream"
            , readRefFont3DStream_function_type( &::osgText::readRefFont3DStream )
            , ( bp::arg("stream"), bp::arg("userOptions")=bp::object() )
            , " deprecated, use readRefFontStream() instead." );
    
    }

    { //::osgText::readRefFontFile
    
        typedef ::osg::ref_ptr< osgText::Font > ( *readRefFontFile_function_type )( ::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "readRefFontFile"
            , readRefFontFile_function_type( &::osgText::readRefFontFile )
            , ( bp::arg("filename"), bp::arg("userOptions")=bp::object() ) );
    
    }

    { //::osgText::readRefFontStream
    
        typedef ::osg::ref_ptr< osgText::Font > ( *readRefFontStream_function_type )( ::std::istream &,::osgDB::Options const * );
        
        bp::def( 
            "readRefFontStream"
            , readRefFontStream_function_type( &::osgText::readRefFontStream )
            , ( bp::arg("stream"), bp::arg("userOptions")=bp::object() ) );
    
    }

}
