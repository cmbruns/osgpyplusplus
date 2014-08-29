// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/set.hpp"
#include "wrap_osgutil.h"
#include "geodestodividelist.pypp.hpp"

namespace bp = boost::python;

void register_GeodesToDivideList_class(){

    bp::class_< std::set< osg::Geode* > >( "GeodesToDivideList" )    
        .def( bp::indexing::set_suite< std::set< osg::Geode* > >::with_policies(bp::return_internal_reference< >()) );

}
