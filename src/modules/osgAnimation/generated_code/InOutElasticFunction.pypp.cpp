// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "InOutElasticFunction.pypp.hpp"

namespace bp = boost::python;

void register_InOutElasticFunction_class(){

    bp::class_< osgAnimation::InOutElasticFunction >( "InOutElasticFunction" )    
        .def( 
            "getValueAt"
            , (void (*)( float,float & ))( &::osgAnimation::InOutElasticFunction::getValueAt )
            , ( bp::arg("t"), bp::arg("result") ) )    
        .staticmethod( "getValueAt" );

}
