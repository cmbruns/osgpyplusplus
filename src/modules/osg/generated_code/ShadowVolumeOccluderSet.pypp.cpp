// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/set.hpp"
#include "wrap_osg.h"
#include "_ShadowVolumeOccluder__value_traits.pypp.hpp"
#include "shadowvolumeoccluderset.pypp.hpp"

namespace bp = boost::python;

void register_ShadowVolumeOccluderSet_class(){

    bp::class_< std::set< osg::ShadowVolumeOccluder > >( "ShadowVolumeOccluderSet" )    
        .def( bp::indexing::set_suite< std::set< osg::ShadowVolumeOccluder > >() );

}
