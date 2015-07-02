// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osg.h"
#include "_Polytope__value_traits.pypp.hpp"
#include "vector_less__osg_scope_polytope__greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__osg_scope_Polytope__greater__class(){

    { //::std::vector< osg::Polytope >
        typedef bp::class_< std::vector< osg::Polytope > > vector_less__osg_scope_Polytope__greater__exposer_t;
        vector_less__osg_scope_Polytope__greater__exposer_t vector_less__osg_scope_Polytope__greater__exposer = vector_less__osg_scope_Polytope__greater__exposer_t( "vector_less__osg_scope_Polytope__greater_" );
        bp::scope vector_less__osg_scope_Polytope__greater__scope( vector_less__osg_scope_Polytope__greater__exposer );
        vector_less__osg_scope_Polytope__greater__exposer.def( bp::indexing::vector_suite< std::vector< osg::Polytope > >() );
    }

}
