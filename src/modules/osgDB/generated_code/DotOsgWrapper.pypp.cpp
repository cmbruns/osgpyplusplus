// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgDB.h"
#include "wrap_referenced.h"
#include "DotOsgWrapper.pypp.hpp"

namespace bp = boost::python;

void register_DotOsgWrapper_class(){

    { //::osgDB::DotOsgWrapper
        typedef bp::class_< osgDB::DotOsgWrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgDB::DotOsgWrapper >, boost::noncopyable > DotOsgWrapper_exposer_t;
        DotOsgWrapper_exposer_t DotOsgWrapper_exposer = DotOsgWrapper_exposer_t( "DotOsgWrapper", bp::no_init );
        bp::scope DotOsgWrapper_scope( DotOsgWrapper_exposer );
        bp::enum_< osgDB::DotOsgWrapper::ReadWriteMode>("ReadWriteMode")
            .value("READ_AND_WRITE", osgDB::DotOsgWrapper::READ_AND_WRITE)
            .value("READ_ONLY", osgDB::DotOsgWrapper::READ_ONLY)
            .export_values()
            ;
        { //::osgDB::DotOsgWrapper::getAssociates
        
            typedef ::std::vector< std::string > const & ( ::osgDB::DotOsgWrapper::*getAssociates_function_type )(  ) const;
            
            DotOsgWrapper_exposer.def( 
                "getAssociates"
                , getAssociates_function_type( &::osgDB::DotOsgWrapper::getAssociates )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::DotOsgWrapper::getName
        
            typedef ::std::string const & ( ::osgDB::DotOsgWrapper::*getName_function_type )(  ) const;
            
            DotOsgWrapper_exposer.def( 
                "getName"
                , getName_function_type( &::osgDB::DotOsgWrapper::getName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::osgDB::DotOsgWrapper::getPrototype
        
            typedef ::osg::Object const * ( ::osgDB::DotOsgWrapper::*getPrototype_function_type )(  ) const;
            
            DotOsgWrapper_exposer.def( 
                "getPrototype"
                , getPrototype_function_type( &::osgDB::DotOsgWrapper::getPrototype )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::DotOsgWrapper::getReadWriteMode
        
            typedef ::osgDB::DotOsgWrapper::ReadWriteMode ( ::osgDB::DotOsgWrapper::*getReadWriteMode_function_type )(  ) const;
            
            DotOsgWrapper_exposer.def( 
                "getReadWriteMode"
                , getReadWriteMode_function_type( &::osgDB::DotOsgWrapper::getReadWriteMode ) );
        
        }
    }

}
