// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "wrap_referenced.h"
#include "RigTransform.pypp.hpp"

namespace bp = boost::python;

struct RigTransform_wrapper : osgAnimation::RigTransform, bp::wrapper< osgAnimation::RigTransform > {

    RigTransform_wrapper( )
    : osgAnimation::RigTransform( )
      , bp::wrapper< osgAnimation::RigTransform >(){
        // null constructor
    
    }

    virtual void operator()( ::osgAnimation::RigGeometry & arg0 ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( boost::ref(arg0) );
        else{
            this->osgAnimation::RigTransform::operator()( boost::ref(arg0) );
        }
    }
    
    void default___call__( ::osgAnimation::RigGeometry & arg0 ) {
        osgAnimation::RigTransform::operator()( boost::ref(arg0) );
    }

};

void register_RigTransform_class(){

    bp::class_< RigTransform_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< RigTransform_wrapper >, boost::noncopyable >( "RigTransform", bp::init< >() )    
        .def( 
            "__call__"
            , (void ( ::osgAnimation::RigTransform::* )( ::osgAnimation::RigGeometry & ) )(&::osgAnimation::RigTransform::operator())
            , (void ( RigTransform_wrapper::* )( ::osgAnimation::RigGeometry & ) )(&RigTransform_wrapper::default___call__)
            , ( bp::arg("arg0") ) );

}
