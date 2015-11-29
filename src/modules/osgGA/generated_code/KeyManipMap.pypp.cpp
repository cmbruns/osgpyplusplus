// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osgGA.h"
#include "KeyManipMap.pypp.hpp"

namespace bp = boost::python;

void register_KeyManipMap_class(){

    { //::std::map< int, std::pair<std::string, osg::ref_ptr<osgGA::CameraManipulator> > >
        typedef bp::class_< std::map< int, std::pair<std::string, osg::ref_ptr<osgGA::CameraManipulator> > > > KeyManipMap_exposer_t;
        KeyManipMap_exposer_t KeyManipMap_exposer = KeyManipMap_exposer_t( "KeyManipMap", "\n  A standard container made up of (key,value) pairs, which can be\n  retrieved based on a key, in logarithmic time.\n\n  fngroup associative_containers\n\n  Tparam: _Key  Type of key objects.\n  Tparam:  _Tp  Type of mapped objects.\n  Tparam: _Compare  Comparison function object type, defaults to less<_Key>.\n  Tparam: _Alloc  Allocator type, defaults to\n                  allocator<pair<const _Key, _Tp>.\n\n  Meets the requirements of a <a href=tables.html#65>container</a>, a\n  <a href=tables.html#66>reversible container</a>, and an\n  <a href=tables.html#69>associative container</a> (using unique keys).\n  For a @c map<Key,T> the key_type is Key, the mapped_type is T, and the\n  value_type is std::pair<const Key,T>.\n\n  Maps support bidirectional iterators.\n\n  The private tree data is declared exactly the same way for map and\n  multimap; the distinction is made entirely in how the tree functions are\n  called (*_unique versus *_equal, same as the standard).\n" );
        bp::scope KeyManipMap_scope( KeyManipMap_exposer );
        KeyManipMap_exposer.def( bp::indexing::map_suite< std::map< int, std::pair<std::string, osg::ref_ptr<osgGA::CameraManipulator> > > >() );
    }

}
