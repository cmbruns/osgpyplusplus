// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "ValueObjectClassNameTrait_less__float__greater_.pypp.hpp"

namespace bp = boost::python;

void register_ValueObjectClassNameTrait_less__float__greater__class(){

    bp::class_< osg::ValueObjectClassNameTrait< float > >( "ValueObjectClassNameTrait_less__float__greater_" )    
        .def( 
            "className"
            , (char const * (*)(  ))( &::osg::ValueObjectClassNameTrait< float >::className ) )    
        .staticmethod( "className" );

}
