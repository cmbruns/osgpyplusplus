// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgDB.h"
#include "ObjectProperty.pypp.hpp"

namespace bp = boost::python;

void register_ObjectProperty_class(){

    { //::osgDB::ObjectProperty
        typedef bp::class_< osgDB::ObjectProperty > ObjectProperty_exposer_t;
        ObjectProperty_exposer_t ObjectProperty_exposer = ObjectProperty_exposer_t( "ObjectProperty", bp::init< >() );
        bp::scope ObjectProperty_scope( ObjectProperty_exposer );
        ObjectProperty_exposer.def( bp::init< char const *, bp::optional< int, bool > >(( bp::arg("name"), bp::arg("value")=(int)(0), bp::arg("useMap")=(bool)(false) )) );
        bp::implicitly_convertible< char const *, osgDB::ObjectProperty >();
        ObjectProperty_exposer.def( bp::init< osgDB::ObjectProperty const & >(( bp::arg("copy") )) );
        { //::osgDB::ObjectProperty::get
        
            typedef int ( ::osgDB::ObjectProperty::*get_function_type )(  ) const;
            
            ObjectProperty_exposer.def( 
                "get"
                , get_function_type( &::osgDB::ObjectProperty::get ) );
        
        }
        { //::osgDB::ObjectProperty::operator()
        
            typedef ::osgDB::ObjectProperty & ( ::osgDB::ObjectProperty::*__call___function_type )( char const * ) ;
            
            ObjectProperty_exposer.def( 
                "__call__"
                , __call___function_type( &::osgDB::ObjectProperty::operator() )
                , ( bp::arg("name") )
                , bp::return_self< >() );
        
        }
        { //::osgDB::ObjectProperty::set
        
            typedef void ( ::osgDB::ObjectProperty::*set_function_type )( int ) ;
            
            ObjectProperty_exposer.def( 
                "set"
                , set_function_type( &::osgDB::ObjectProperty::set )
                , ( bp::arg("v") ) );
        
        }
        ObjectProperty_exposer.def_readwrite( "_mapProperty", &osgDB::ObjectProperty::_mapProperty );
        ObjectProperty_exposer.def_readwrite( "_name", &osgDB::ObjectProperty::_name );
        ObjectProperty_exposer.def_readwrite( "_value", &osgDB::ObjectProperty::_value );
    }

}
