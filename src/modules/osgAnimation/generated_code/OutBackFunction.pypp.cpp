// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "OutBackFunction.pypp.hpp"

namespace bp = boost::python;

void register_OutBackFunction_class(){

    bp::class_< osgAnimation::OutBackFunction >( "OutBackFunction" )    
        .def( 
            "getValueAt"
            , (void (*)( float,float & ))( &::osgAnimation::OutBackFunction::getValueAt )
            , ( bp::arg("t"), bp::arg("result") ) )    
        .staticmethod( "getValueAt" );

}
