// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/set.hpp"
#include "wrap_osgUtil.h"
#include "ContextSet.pypp.hpp"

namespace bp = boost::python;

void register_ContextSet_class(){

    { //::std::set< osg::GraphicsContext* >
        typedef bp::class_< std::set< osg::GraphicsContext* > > ContextSet_exposer_t;
        ContextSet_exposer_t ContextSet_exposer = ContextSet_exposer_t( "ContextSet", "\n  A standard container made up of unique keys, which can be\n  retrieved in logarithmic time.\n\n  fngroup associative_containers\n\n  Tparam: _Key  Type of key objects.\n  Tparam: _Compare  Comparison function object type, defaults to less<_Key>.\n  Tparam: _Alloc  Allocator type, defaults to allocator<_Key>.\n\n  Meets the requirements of a <a href=tables.html#65>container</a>, a\n  <a href=tables.html#66>reversible container</a>, and an\n  <a href=tables.html#69>associative container</a> (using unique keys).\n\n  Sets support bidirectional iterators.\n\n  The private tree data is declared exactly the same way for set and\n  multiset; the distinction is made entirely in how the tree functions are\n  called (*_unique versus *_equal, same as the standard).\n" );
        bp::scope ContextSet_scope( ContextSet_exposer );
        ContextSet_exposer.def( bp::indexing::set_suite< std::set< osg::GraphicsContext* > >::with_policies(bp::return_internal_reference< >()) );
    }

}
