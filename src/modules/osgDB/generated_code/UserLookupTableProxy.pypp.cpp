// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "userlookuptableproxy.pypp.hpp"

namespace bp = boost::python;

void register_UserLookupTableProxy_class(){

    bp::class_< osgDB::UserLookupTableProxy >( "UserLookupTableProxy", bp::no_init )    
        .def_readwrite( "_lookup", &osgDB::UserLookupTableProxy::_lookup );

}