// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "inoutquartfunction.pypp.hpp"

namespace bp = boost::python;

void register_InOutQuartFunction_class(){

    bp::class_< osgAnimation::InOutQuartFunction >( "InOutQuartFunction" )    
        .def( 
            "getValueAt"
            , (void (*)( float,float & ))( &::osgAnimation::InOutQuartFunction::getValueAt )
            , ( bp::arg("t"), bp::arg("result") ) )    
        .staticmethod( "getValueAt" );

}
