// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osgDB.h"
#include "map_less__int_comma__std_scope_string__greater_.pypp.hpp"

namespace bp = boost::python;

void register_map_less__int_comma__std_scope_string__greater__class(){

    { //::std::map< int, std::string >
        typedef bp::class_< std::map< int, std::string > > map_less__int_comma__std_scope_string__greater__exposer_t;
        map_less__int_comma__std_scope_string__greater__exposer_t map_less__int_comma__std_scope_string__greater__exposer = map_less__int_comma__std_scope_string__greater__exposer_t( "map_less__int_comma__std_scope_string__greater_" );
        bp::scope map_less__int_comma__std_scope_string__greater__scope( map_less__int_comma__std_scope_string__greater__exposer );
        map_less__int_comma__std_scope_string__greater__exposer.def( bp::indexing::map_suite< std::map< int, std::string > >() );
    }

}
