// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/list.hpp"
#include "wrap_osgUtil.h"
#include "_ref_ptr_less__osg_scope_TemplateIndexArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__1_comma__5125__greater___greater___value_traits.pypp.hpp"
#include "std_list_tiarray_uint_5125.pypp.hpp"

namespace bp = boost::python;

void register_std_list_tiarray_uint_5125_class(){

    { //::std::list< osg::ref_ptr<osg::TemplateIndexArray<unsigned int, (osg::Array::Type)6, 1, 5125> > >
        typedef bp::class_< std::list< osg::ref_ptr<osg::TemplateIndexArray<unsigned int, (osg::Array::Type)6, 1, 5125> > > > std_list_tiarray_uint_5125_exposer_t;
        std_list_tiarray_uint_5125_exposer_t std_list_tiarray_uint_5125_exposer = std_list_tiarray_uint_5125_exposer_t( "std_list_tiarray_uint_5125" );
        bp::scope std_list_tiarray_uint_5125_scope( std_list_tiarray_uint_5125_exposer );
        std_list_tiarray_uint_5125_exposer.def( bp::indexing::list_suite< std::list< osg::ref_ptr<osg::TemplateIndexArray<unsigned int, (osg::Array::Type)6, 1, 5125> > > >() );
    }

}
