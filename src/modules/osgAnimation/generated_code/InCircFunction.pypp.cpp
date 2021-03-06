// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "InCircFunction.pypp.hpp"

namespace bp = boost::python;

void register_InCircFunction_class(){

    bp::class_< osgAnimation::InCircFunction >( "InCircFunction" )    
        .def( 
            "getValueAt"
            , (void (*)( float,float & ))( &::osgAnimation::InCircFunction::getValueAt )
            , ( bp::arg("t"), bp::arg("result") ) )    
        .staticmethod( "getValueAt" );

}
