// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osgAnimation.h"
#include "_pair_less__unsigned_int_comma__osg_scope_ref_ptr_less__osgAnimation_scope_Action__greater___greater___value_traits.pypp.hpp"
#include "vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater__class(){

    { //::std::vector< std::pair<unsigned int, osg::ref_ptr<osgAnimation::Action> > >
        typedef bp::class_< std::vector< std::pair<unsigned int, osg::ref_ptr<osgAnimation::Action> > > > vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater__exposer_t;
        vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater__exposer_t vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater__exposer = vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater__exposer_t( "vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater_", "\n  A standard container which offers fixed time access to\n  individual elements in any order.\n\n  fngroup sequences\n\n  Tparam: _Tp  Type of element.\n  Tparam: _Alloc  Allocator type, defaults to allocator<_Tp>.\n\n  Meets the requirements of a <a href=tables.html#65>container</a>, a\n  <a href=tables.html#66>reversible container</a>, and a\n  <a href=tables.html#67>sequence</a>, including the\n  <a href=tables.html#68>optional sequence requirements</a> with the\n  %exception of @c push_front and @c pop_front.\n\n  In some terminology a %vector can be described as a dynamic\n  C-style array, it offers fast and efficient access to individual\n  elements in any order and saves the user from worrying about\n  memory and size allocation.  Subscripting ( @c [] ) access is\n  also provided as with C-style arrays.\n" );
        bp::scope vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater__scope( vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater__exposer );
        vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater__exposer.def( bp::indexing::vector_suite< std::vector< std::pair<unsigned int, osg::ref_ptr<osgAnimation::Action> > > >() );
    }

}
