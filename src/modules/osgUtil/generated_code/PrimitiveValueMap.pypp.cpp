// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osgUtil.h"
#include "_pair_less__unsigned_int_comma__unsigned_int__greater___value_traits.pypp.hpp"
#include "PrimitiveValueMap.pypp.hpp"

namespace bp = boost::python;

void register_PrimitiveValueMap_class(){

    { //::std::map< unsigned int, std::pair<unsigned int, unsigned int> >
        typedef bp::class_< std::map< unsigned int, std::pair<unsigned int, unsigned int> > > PrimitiveValueMap_exposer_t;
        PrimitiveValueMap_exposer_t PrimitiveValueMap_exposer = PrimitiveValueMap_exposer_t( "PrimitiveValueMap" );
        bp::scope PrimitiveValueMap_scope( PrimitiveValueMap_exposer );
        PrimitiveValueMap_exposer.def( bp::indexing::map_suite< std::map< unsigned int, std::pair<unsigned int, unsigned int> > >() );
    }

}
