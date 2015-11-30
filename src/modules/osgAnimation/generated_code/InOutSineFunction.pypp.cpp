// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "InOutSineFunction.pypp.hpp"

namespace bp = boost::python;

void register_InOutSineFunction_class(){

    bp::class_< osgAnimation::InOutSineFunction >( "InOutSineFunction" )    
        .def( 
            "getValueAt"
            , (void (*)( float,float & ))( &::osgAnimation::InOutSineFunction::getValueAt )
            , ( bp::arg("t"), bp::arg("result") ) )    
        .staticmethod( "getValueAt" );

}
