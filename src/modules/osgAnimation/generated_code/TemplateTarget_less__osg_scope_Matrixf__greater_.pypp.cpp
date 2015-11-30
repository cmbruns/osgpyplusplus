// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "wrap_referenced.h"
#include "TemplateTarget_less__osg_scope_Matrixf__greater_.pypp.hpp"

namespace bp = boost::python;

void register_TemplateTarget_less__osg_scope_Matrixf__greater__class(){

    { //::osgAnimation::TemplateTarget< osg::Matrixf >
        typedef bp::class_< osgAnimation::TemplateTarget< osg::Matrixf >, bp::bases< osgAnimation::Target >, osg::ref_ptr< ::osgAnimation::TemplateTarget<osg::Matrixf> > > TemplateTarget_less__osg_scope_Matrixf__greater__exposer_t;
        TemplateTarget_less__osg_scope_Matrixf__greater__exposer_t TemplateTarget_less__osg_scope_Matrixf__greater__exposer = TemplateTarget_less__osg_scope_Matrixf__greater__exposer_t( "TemplateTarget_less__osg_scope_Matrixf__greater_", bp::init< >() );
        bp::scope TemplateTarget_less__osg_scope_Matrixf__greater__scope( TemplateTarget_less__osg_scope_Matrixf__greater__exposer );
        TemplateTarget_less__osg_scope_Matrixf__greater__exposer.def( bp::init< osg::Matrixf const & >(( bp::arg("v") )) );
        bp::implicitly_convertible< osg::Matrixf const &, osgAnimation::TemplateTarget< osg::Matrixf > >();
        TemplateTarget_less__osg_scope_Matrixf__greater__exposer.def( bp::init< osgAnimation::TemplateTarget< osg::Matrixf > const & >(( bp::arg("v") )) );
        { //::osgAnimation::TemplateTarget< osg::Matrixf >::getValue
        
            typedef osgAnimation::TemplateTarget< osg::Matrixf > exported_class_t;
            typedef ::osg::Matrixf const & ( exported_class_t::*getValue_function_type )(  ) const;
            
            TemplateTarget_less__osg_scope_Matrixf__greater__exposer.def( 
                "getValue"
                , getValue_function_type( &::osgAnimation::TemplateTarget< osg::Matrixf >::getValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgAnimation::TemplateTarget< osg::Matrixf >::lerp
        
            typedef osgAnimation::TemplateTarget< osg::Matrixf > exported_class_t;
            typedef void ( exported_class_t::*lerp_function_type )( float,::osg::Matrixf const &,::osg::Matrixf const & ) ;
            
            TemplateTarget_less__osg_scope_Matrixf__greater__exposer.def( 
                "lerp"
                , lerp_function_type( &::osgAnimation::TemplateTarget< osg::Matrixf >::lerp )
                , ( bp::arg("t"), bp::arg("a"), bp::arg("b") ) );
        
        }
        { //::osgAnimation::TemplateTarget< osg::Matrixf >::setValue
        
            typedef osgAnimation::TemplateTarget< osg::Matrixf > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::osg::Matrixf const & ) ;
            
            TemplateTarget_less__osg_scope_Matrixf__greater__exposer.def( 
                "setValue"
                , setValue_function_type( &::osgAnimation::TemplateTarget< osg::Matrixf >::setValue )
                , ( bp::arg("value") ) );
        
        }
        { //::osgAnimation::TemplateTarget< osg::Matrixf >::update
        
            typedef osgAnimation::TemplateTarget< osg::Matrixf > exported_class_t;
            typedef void ( exported_class_t::*update_function_type )( float,::osg::Matrixf const &,int ) ;
            
            TemplateTarget_less__osg_scope_Matrixf__greater__exposer.def( 
                "update"
                , update_function_type( &::osgAnimation::TemplateTarget< osg::Matrixf >::update )
                , ( bp::arg("weight"), bp::arg("val"), bp::arg("priority") )
                , "\n  The priority is used to detect a change of priority\n  Its important to update animation target in priority\n  order. eg:\n  all animation with priority 1\n  all animation with priority 0\n  all animation with priority -1\n  ...\n" );
        
        }
    }

}
