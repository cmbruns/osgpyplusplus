// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/set.hpp"
#include "wrap_osgutil.h"
#include "set_less__osg_scope_drawable_ptr___greater_.pypp.hpp"

namespace bp = boost::python;

void register_set_less__osg_scope_Drawable_ptr___greater__class(){

    bp::class_< std::set< osg::Drawable* > >( "set_less__osg_scope_Drawable_ptr___greater_" )    
        .def( bp::indexing::set_suite< std::set< osg::Drawable* > >::with_policies(bp::return_internal_reference< >()) );

}
