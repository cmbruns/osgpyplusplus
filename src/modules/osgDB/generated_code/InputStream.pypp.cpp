// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgDB.h"
#include "InputStream.pypp.hpp"

namespace bp = boost::python;

void register_InputStream_class(){

    { //::osgDB::InputStream
        typedef bp::class_< osgDB::InputStream > InputStream_exposer_t;
        InputStream_exposer_t InputStream_exposer = InputStream_exposer_t( "InputStream", bp::init< osgDB::Options const * >(( bp::arg("options") )) );
        bp::scope InputStream_scope( InputStream_exposer );
        bp::enum_< osgDB::InputStream::ReadType>("ReadType")
            .value("READ_UNKNOWN", osgDB::InputStream::READ_UNKNOWN)
            .value("READ_SCENE", osgDB::InputStream::READ_SCENE)
            .value("READ_IMAGE", osgDB::InputStream::READ_IMAGE)
            .value("READ_OBJECT", osgDB::InputStream::READ_OBJECT)
            .export_values()
            ;
        bp::implicitly_convertible< osgDB::Options const *, osgDB::InputStream >();
        { //::osgDB::InputStream::advanceToCurrentEndBracket
        
            typedef void ( ::osgDB::InputStream::*advanceToCurrentEndBracket_function_type )(  ) ;
            
            InputStream_exposer.def( 
                "advanceToCurrentEndBracket"
                , advanceToCurrentEndBracket_function_type( &::osgDB::InputStream::advanceToCurrentEndBracket ) );
        
        }
        { //::osgDB::InputStream::decompress
        
            typedef void ( ::osgDB::InputStream::*decompress_function_type )(  ) ;
            
            InputStream_exposer.def( 
                "decompress"
                , decompress_function_type( &::osgDB::InputStream::decompress ) );
        
        }
        { //::osgDB::InputStream::getException
        
            typedef ::osgDB::InputException const * ( ::osgDB::InputStream::*getException_function_type )(  ) const;
            
            InputStream_exposer.def( 
                "getException"
                , getException_function_type( &::osgDB::InputStream::getException )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::InputStream::getFileVersion
        
            typedef int ( ::osgDB::InputStream::*getFileVersion_function_type )( ::std::string const & ) const;
            
            InputStream_exposer.def( 
                "getFileVersion"
                , getFileVersion_function_type( &::osgDB::InputStream::getFileVersion )
                , ( bp::arg("d")=std::basic_string<char, std::char_traits<char>, std::allocator<char> >() ) );
        
        }
        { //::osgDB::InputStream::getOptions
        
            typedef ::osgDB::Options const * ( ::osgDB::InputStream::*getOptions_function_type )(  ) const;
            
            InputStream_exposer.def( 
                "getOptions"
                , getOptions_function_type( &::osgDB::InputStream::getOptions )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::InputStream::isBinary
        
            typedef bool ( ::osgDB::InputStream::*isBinary_function_type )(  ) const;
            
            InputStream_exposer.def( 
                "isBinary"
                , isBinary_function_type( &::osgDB::InputStream::isBinary ) );
        
        }
        { //::osgDB::InputStream::matchString
        
            typedef bool ( ::osgDB::InputStream::*matchString_function_type )( ::std::string const & ) ;
            
            InputStream_exposer.def( 
                "matchString"
                , matchString_function_type( &::osgDB::InputStream::matchString )
                , ( bp::arg("str") ) );
        
        }
        { //::osgDB::InputStream::readArray
        
            typedef ::osg::Array * ( ::osgDB::InputStream::*readArray_function_type )(  ) ;
            
            InputStream_exposer.def( 
                "readArray"
                , readArray_function_type( &::osgDB::InputStream::readArray )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::InputStream::readCharArray
        
            typedef void ( ::osgDB::InputStream::*readCharArray_function_type )( char *,unsigned int ) ;
            
            InputStream_exposer.def( 
                "readCharArray"
                , readCharArray_function_type( &::osgDB::InputStream::readCharArray )
                , ( bp::arg("s"), bp::arg("size") ) );
        
        }
        { //::osgDB::InputStream::readComponentArray
        
            typedef void ( ::osgDB::InputStream::*readComponentArray_function_type )( char *,unsigned int,unsigned int,unsigned int ) ;
            
            InputStream_exposer.def( 
                "readComponentArray"
                , readComponentArray_function_type( &::osgDB::InputStream::readComponentArray )
                , ( bp::arg("s"), bp::arg("numElements"), bp::arg("numComponentsPerElements"), bp::arg("componentSizeInBytes") ) );
        
        }
        { //::osgDB::InputStream::readImage
        
            typedef ::osg::Image * ( ::osgDB::InputStream::*readImage_function_type )( bool ) ;
            
            InputStream_exposer.def( 
                "readImage"
                , readImage_function_type( &::osgDB::InputStream::readImage )
                , ( bp::arg("readFromExternal")=(bool)(true) )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::InputStream::readObject
        
            typedef ::osg::Object * ( ::osgDB::InputStream::*readObject_function_type )( ::osg::Object * ) ;
            
            InputStream_exposer.def( 
                "readObject"
                , readObject_function_type( &::osgDB::InputStream::readObject )
                , ( bp::arg("existingObj")=bp::object() )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::InputStream::readObjectFields
        
            typedef ::osg::Object * ( ::osgDB::InputStream::*readObjectFields_function_type )( ::std::string const &,unsigned int,::osg::Object * ) ;
            
            InputStream_exposer.def( 
                "readObjectFields"
                , readObjectFields_function_type( &::osgDB::InputStream::readObjectFields )
                , ( bp::arg("className"), bp::arg("id"), bp::arg("existingObj")=bp::object() )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::InputStream::readPrimitiveSet
        
            typedef ::osg::PrimitiveSet * ( ::osgDB::InputStream::*readPrimitiveSet_function_type )(  ) ;
            
            InputStream_exposer.def( 
                "readPrimitiveSet"
                , readPrimitiveSet_function_type( &::osgDB::InputStream::readPrimitiveSet )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::InputStream::readSchema
        
            typedef void ( ::osgDB::InputStream::*readSchema_function_type )( ::std::istream & ) ;
            
            InputStream_exposer.def( 
                "readSchema"
                , readSchema_function_type( &::osgDB::InputStream::readSchema )
                , ( bp::arg("fin") ) );
        
        }
        { //::osgDB::InputStream::readSize
        
            typedef unsigned int ( ::osgDB::InputStream::*readSize_function_type )(  ) ;
            
            InputStream_exposer.def( 
                "readSize"
                , readSize_function_type( &::osgDB::InputStream::readSize ) );
        
        }
        { //::osgDB::InputStream::readWrappedString
        
            typedef void ( ::osgDB::InputStream::*readWrappedString_function_type )( ::std::string & ) ;
            
            InputStream_exposer.def( 
                "readWrappedString"
                , readWrappedString_function_type( &::osgDB::InputStream::readWrappedString )
                , ( bp::arg("str") ) );
        
        }
        { //::osgDB::InputStream::resetSchema
        
            typedef void ( ::osgDB::InputStream::*resetSchema_function_type )(  ) ;
            
            InputStream_exposer.def( 
                "resetSchema"
                , resetSchema_function_type( &::osgDB::InputStream::resetSchema ) );
        
        }
        { //::osgDB::InputStream::setFileVersion
        
            typedef void ( ::osgDB::InputStream::*setFileVersion_function_type )( ::std::string const &,int ) ;
            
            InputStream_exposer.def( 
                "setFileVersion"
                , setFileVersion_function_type( &::osgDB::InputStream::setFileVersion )
                , ( bp::arg("d"), bp::arg("v") ) );
        
        }
        { //::osgDB::InputStream::setInputIterator
        
            typedef void ( ::osgDB::InputStream::*setInputIterator_function_type )( ::osgDB::InputIterator * ) ;
            
            InputStream_exposer.def( 
                "setInputIterator"
                , setInputIterator_function_type( &::osgDB::InputStream::setInputIterator )
                , ( bp::arg("ii") ) );
        
        }
        { //::osgDB::InputStream::start
        
            typedef ::osgDB::InputStream::ReadType ( ::osgDB::InputStream::*start_function_type )( ::osgDB::InputIterator * ) ;
            
            InputStream_exposer.def( 
                "start"
                , start_function_type( &::osgDB::InputStream::start )
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgDB::InputStream::throwException
        
            typedef void ( ::osgDB::InputStream::*throwException_function_type )( ::std::string const & ) ;
            
            InputStream_exposer.def( 
                "throwException"
                , throwException_function_type( &::osgDB::InputStream::throwException )
                , ( bp::arg("msg") ) );
        
        }
        InputStream_exposer.def_readwrite( "BEGIN_BRACKET", &osgDB::InputStream::BEGIN_BRACKET );
        InputStream_exposer.def_readwrite( "END_BRACKET", &osgDB::InputStream::END_BRACKET );
        InputStream_exposer.def_readwrite( "PROPERTY", &osgDB::InputStream::PROPERTY );
    }

}
