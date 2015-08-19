// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "outexpofunction.pypp.hpp"

namespace bp = boost::python;

void register_OutExpoFunction_class(){

    bp::class_< osgAnimation::OutExpoFunction >( "OutExpoFunction" )    
        .def( 
            "getValueAt"
            , (void (*)( float,float & ))( &::osgAnimation::OutExpoFunction::getValueAt )
            , ( bp::arg("t"), bp::arg("result") ) )    
        .staticmethod( "getValueAt" );

}
