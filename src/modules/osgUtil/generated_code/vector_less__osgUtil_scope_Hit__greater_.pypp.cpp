// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osgutil.h"
#include "_Hit__value_traits.pypp.hpp"
#include "vector_less__osgutil_scope_hit__greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__osgUtil_scope_Hit__greater__class(){

    { //::std::vector< osgUtil::Hit >
        typedef bp::class_< std::vector< osgUtil::Hit > > vector_less__osgUtil_scope_Hit__greater__exposer_t;
        vector_less__osgUtil_scope_Hit__greater__exposer_t vector_less__osgUtil_scope_Hit__greater__exposer = vector_less__osgUtil_scope_Hit__greater__exposer_t( "vector_less__osgUtil_scope_Hit__greater_" );
        bp::scope vector_less__osgUtil_scope_Hit__greater__scope( vector_less__osgUtil_scope_Hit__greater__exposer );
        vector_less__osgUtil_scope_Hit__greater__exposer.def( bp::indexing::vector_suite< std::vector< osgUtil::Hit > >() );
    }

}
