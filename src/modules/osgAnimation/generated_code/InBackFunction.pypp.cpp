// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "inbackfunction.pypp.hpp"

namespace bp = boost::python;

void register_InBackFunction_class(){

    bp::class_< osgAnimation::InBackFunction >( "InBackFunction" )    
        .def( 
            "getValueAt"
            , (void (*)( float,float & ))( &::osgAnimation::InBackFunction::getValueAt )
            , ( bp::arg("t"), bp::arg("result") ) )    
        .staticmethod( "getValueAt" );

}
