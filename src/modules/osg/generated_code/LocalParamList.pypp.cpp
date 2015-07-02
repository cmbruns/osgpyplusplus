// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osg.h"
#include "localparamlist.pypp.hpp"

namespace bp = boost::python;

void register_LocalParamList_class(){

    bp::class_< std::map< unsigned int, osg::Vec4f > >( "LocalParamList" )    
        .def( bp::indexing::map_suite< std::map< unsigned int, osg::Vec4f > >() );

}
