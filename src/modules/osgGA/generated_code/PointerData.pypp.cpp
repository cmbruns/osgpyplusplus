// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgGA.h"
#include "wrap_referenced.h"
#include "PointerData.pypp.hpp"

namespace bp = boost::python;

void register_PointerData_class(){

    { //::osgGA::PointerData
        typedef bp::class_< osgGA::PointerData, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgGA::PointerData > > PointerData_exposer_t;
        PointerData_exposer_t PointerData_exposer = PointerData_exposer_t( "PointerData", bp::init< >() );
        bp::scope PointerData_scope( PointerData_exposer );
        PointerData_exposer.def( bp::init< osg::Object *, float, float, float, float, float, float >(( bp::arg("obj"), bp::arg("in_x"), bp::arg("in_xMin"), bp::arg("in_xMax"), bp::arg("in_y"), bp::arg("in_yMin"), bp::arg("in_yMax") )) );
        PointerData_exposer.def( bp::init< osgGA::PointerData const & >(( bp::arg("pd") )) );
        { //::osgGA::PointerData::getXnormalized
        
            typedef float ( ::osgGA::PointerData::*getXnormalized_function_type )(  ) const;
            
            PointerData_exposer.def( 
                "getXnormalized"
                , getXnormalized_function_type( &::osgGA::PointerData::getXnormalized ) );
        
        }
        { //::osgGA::PointerData::getYnormalized
        
            typedef float ( ::osgGA::PointerData::*getYnormalized_function_type )(  ) const;
            
            PointerData_exposer.def( 
                "getYnormalized"
                , getYnormalized_function_type( &::osgGA::PointerData::getYnormalized ) );
        
        }
        PointerData_exposer.def_readwrite( "object", &osgGA::PointerData::object );
        PointerData_exposer.def_readwrite( "x", &osgGA::PointerData::x );
        PointerData_exposer.def_readwrite( "xMax", &osgGA::PointerData::xMax );
        PointerData_exposer.def_readwrite( "xMin", &osgGA::PointerData::xMin );
        PointerData_exposer.def_readwrite( "y", &osgGA::PointerData::y );
        PointerData_exposer.def_readwrite( "yMax", &osgGA::PointerData::yMax );
        PointerData_exposer.def_readwrite( "yMin", &osgGA::PointerData::yMin );
    }

}
