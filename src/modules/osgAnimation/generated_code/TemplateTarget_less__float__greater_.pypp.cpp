// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "wrap_referenced.h"
#include "TemplateTarget_less__float__greater_.pypp.hpp"

namespace bp = boost::python;

void register_TemplateTarget_less__float__greater__class(){

    { //::osgAnimation::TemplateTarget< float >
        typedef bp::class_< osgAnimation::TemplateTarget< float >, bp::bases< osgAnimation::Target >, osg::ref_ptr< ::osgAnimation::TemplateTarget<float> > > TemplateTarget_less__float__greater__exposer_t;
        TemplateTarget_less__float__greater__exposer_t TemplateTarget_less__float__greater__exposer = TemplateTarget_less__float__greater__exposer_t( "TemplateTarget_less__float__greater_", bp::init< >() );
        bp::scope TemplateTarget_less__float__greater__scope( TemplateTarget_less__float__greater__exposer );
        TemplateTarget_less__float__greater__exposer.def( bp::init< float const & >(( bp::arg("v") )) );
        bp::implicitly_convertible< float const &, osgAnimation::TemplateTarget< float > >();
        TemplateTarget_less__float__greater__exposer.def( bp::init< osgAnimation::TemplateTarget< float > const & >(( bp::arg("v") )) );
        { //::osgAnimation::TemplateTarget< float >::getValue
        
            typedef osgAnimation::TemplateTarget< float > exported_class_t;
            typedef float const & ( exported_class_t::*getValue_function_type )(  ) const;
            
            TemplateTarget_less__float__greater__exposer.def( 
                "getValue"
                , getValue_function_type( &::osgAnimation::TemplateTarget< float >::getValue )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::osgAnimation::TemplateTarget< float >::lerp
        
            typedef osgAnimation::TemplateTarget< float > exported_class_t;
            typedef void ( exported_class_t::*lerp_function_type )( float,float const &,float const & ) ;
            
            TemplateTarget_less__float__greater__exposer.def( 
                "lerp"
                , lerp_function_type( &::osgAnimation::TemplateTarget< float >::lerp )
                , ( bp::arg("t"), bp::arg("a"), bp::arg("b") ) );
        
        }
        { //::osgAnimation::TemplateTarget< float >::setValue
        
            typedef osgAnimation::TemplateTarget< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( float const & ) ;
            
            TemplateTarget_less__float__greater__exposer.def( 
                "setValue"
                , setValue_function_type( &::osgAnimation::TemplateTarget< float >::setValue )
                , ( bp::arg("value") ) );
        
        }
        { //::osgAnimation::TemplateTarget< float >::update
        
            typedef osgAnimation::TemplateTarget< float > exported_class_t;
            typedef void ( exported_class_t::*update_function_type )( float,float const &,int ) ;
            
            TemplateTarget_less__float__greater__exposer.def( 
                "update"
                , update_function_type( &::osgAnimation::TemplateTarget< float >::update )
                , ( bp::arg("weight"), bp::arg("val"), bp::arg("priority") )
                , "\n  The priority is used to detect a change of priority\n  Its important to update animation target in priority\n  order. eg:\n  all animation with priority 1\n  all animation with priority 0\n  all animation with priority -1\n  ...\n" );
        
        }
    }

}
