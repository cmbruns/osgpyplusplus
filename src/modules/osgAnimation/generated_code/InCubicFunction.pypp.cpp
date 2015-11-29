// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "InCubicFunction.pypp.hpp"

namespace bp = boost::python;

void register_InCubicFunction_class(){

    bp::class_< osgAnimation::InCubicFunction >( "InCubicFunction" )    
        .def( 
            "getValueAt"
            , (void (*)( float,float & ))( &::osgAnimation::InCubicFunction::getValueAt )
            , ( bp::arg("t"), bp::arg("result") ) )    
        .staticmethod( "getValueAt" );

}
