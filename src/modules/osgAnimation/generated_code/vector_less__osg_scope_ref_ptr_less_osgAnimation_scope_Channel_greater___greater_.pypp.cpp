// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osganimation.h"
#include "_ref_ptr_less__osgAnimation_scope_Channel__greater___value_traits.pypp.hpp"
#include "vector_less__osg_scope_ref_ptr_less_osganimation_scope_channel_greater___greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Channel_greater___greater__class(){

    { //::std::vector< osg::ref_ptr<osgAnimation::Channel> >
        typedef bp::class_< std::vector< osg::ref_ptr<osgAnimation::Channel> > > vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Channel_greater___greater__exposer_t;
        vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Channel_greater___greater__exposer_t vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Channel_greater___greater__exposer = vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Channel_greater___greater__exposer_t( "vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Channel_greater___greater_" );
        bp::scope vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Channel_greater___greater__scope( vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Channel_greater___greater__exposer );
        vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Channel_greater___greater__exposer.def( bp::indexing::vector_suite< std::vector< osg::ref_ptr<osgAnimation::Channel> > >() );
    }

}
