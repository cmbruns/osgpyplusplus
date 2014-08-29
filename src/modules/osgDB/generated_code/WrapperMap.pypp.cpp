// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osgdb.h"
#include "_ref_ptr_less__osgDB_scope_ObjectWrapper__greater___value_traits.pypp.hpp"
#include "wrappermap.pypp.hpp"

namespace bp = boost::python;

void register_WrapperMap_class(){

    bp::class_< std::map< std::string, osg::ref_ptr<osgDB::ObjectWrapper> > >( "WrapperMap" )    
        .def( bp::indexing::map_suite< std::map< std::string, osg::ref_ptr<osgDB::ObjectWrapper> > >() );

}
