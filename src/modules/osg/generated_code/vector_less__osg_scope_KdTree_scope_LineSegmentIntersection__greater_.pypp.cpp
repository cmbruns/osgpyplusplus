// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osg.h"
#include "_LineSegmentIntersection__value_traits.pypp.hpp"
#include "vector_less__osg_scope_KdTree_scope_LineSegmentIntersection__greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__osg_scope_KdTree_scope_LineSegmentIntersection__greater__class(){

    bp::class_< std::vector< osg::KdTree::LineSegmentIntersection > >("vector_less__osg_scope_KdTree_scope_LineSegmentIntersection__greater_")    
        .def( bp::indexing::vector_suite< std::vector< osg::KdTree::LineSegmentIntersection > >() );

}
