// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osgSim.h"
#include "vector_less__osg_scope_ref_ptr_less_osgSim_scope_ImpostorSprite_greater___greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__osg_scope_ref_ptr_less_osgSim_scope_ImpostorSprite_greater___greater__class(){

    bp::class_< std::vector< osg::ref_ptr<osgSim::ImpostorSprite> > >("vector_less__osg_scope_ref_ptr_less_osgSim_scope_ImpostorSprite_greater___greater_")    
        .def( bp::indexing::vector_suite< std::vector< osg::ref_ptr<osgSim::ImpostorSprite> > >() );

}
