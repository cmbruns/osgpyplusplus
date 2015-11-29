// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgGA.h"
#include "wrap_referenced.h"
#include "PointerData.pypp.hpp"

namespace bp = boost::python;

struct PointerData_wrapper : osgGA::PointerData, bp::wrapper< osgGA::PointerData > {

    PointerData_wrapper( )
    : osgGA::PointerData( )
      , bp::wrapper< osgGA::PointerData >(){
        // null constructor
    
    }

    PointerData_wrapper(::osg::Object * obj, float in_x, float in_xMin, float in_xMax, float in_y, float in_yMin, float in_yMax )
    : osgGA::PointerData( boost::python::ptr(obj), in_x, in_xMin, in_xMax, in_y, in_yMin, in_yMax )
      , bp::wrapper< osgGA::PointerData >(){
        // constructor
    
    }

    PointerData_wrapper(::osgGA::PointerData const & pd )
    : osgGA::PointerData( boost::ref(pd) )
      , bp::wrapper< osgGA::PointerData >(){
        // copy constructor
    
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Referenced::setThreadSafeRefUnref( threadSafe );
    }

};

void register_PointerData_class(){

    { //::osgGA::PointerData
        typedef bp::class_< PointerData_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< PointerData_wrapper > > PointerData_exposer_t;
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
