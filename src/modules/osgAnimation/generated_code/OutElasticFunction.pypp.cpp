// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "OutElasticFunction.pypp.hpp"

namespace bp = boost::python;

void register_OutElasticFunction_class(){

    bp::class_< osgAnimation::OutElasticFunction >( "OutElasticFunction", "\n Elastic function\n" )    
        .def( 
            "getValueAt"
            , (void (*)( float,float & ))( &::osgAnimation::OutElasticFunction::getValueAt )
            , ( bp::arg("t"), bp::arg("result") )
            , "\n Elastic function\n" )    
        .staticmethod( "getValueAt" );

}
