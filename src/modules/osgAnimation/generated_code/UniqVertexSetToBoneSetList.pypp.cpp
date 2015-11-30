// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osgAnimation.h"
#include "_UniqVertexSetToBoneSet__value_traits.pypp.hpp"
#include "UniqVertexSetToBoneSetList.pypp.hpp"

namespace bp = boost::python;

void register_UniqVertexSetToBoneSetList_class(){

    { //::std::vector< osgAnimation::VertexInfluenceSet::UniqVertexSetToBoneSet >
        typedef bp::class_< std::vector< osgAnimation::VertexInfluenceSet::UniqVertexSetToBoneSet > > UniqVertexSetToBoneSetList_exposer_t;
        UniqVertexSetToBoneSetList_exposer_t UniqVertexSetToBoneSetList_exposer = UniqVertexSetToBoneSetList_exposer_t( "UniqVertexSetToBoneSetList", "\n  A standard container which offers fixed time access to\n  individual elements in any order.\n\n  fngroup sequences\n\n  Tparam: _Tp  Type of element.\n  Tparam: _Alloc  Allocator type, defaults to allocator<_Tp>.\n\n  Meets the requirements of a <a href=tables.html#65>container</a>, a\n  <a href=tables.html#66>reversible container</a>, and a\n  <a href=tables.html#67>sequence</a>, including the\n  <a href=tables.html#68>optional sequence requirements</a> with the\n  %exception of @c push_front and @c pop_front.\n\n  In some terminology a %vector can be described as a dynamic\n  C-style array, it offers fast and efficient access to individual\n  elements in any order and saves the user from worrying about\n  memory and size allocation.  Subscripting ( @c [] ) access is\n  also provided as with C-style arrays.\n" );
        bp::scope UniqVertexSetToBoneSetList_scope( UniqVertexSetToBoneSetList_exposer );
        UniqVertexSetToBoneSetList_exposer.def( bp::indexing::vector_suite< std::vector< osgAnimation::VertexInfluenceSet::UniqVertexSetToBoneSet > >() );
    }

}
