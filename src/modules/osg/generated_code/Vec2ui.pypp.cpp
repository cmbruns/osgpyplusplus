// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "indexing_helpers.h"
#include "Vec2ui.pypp.hpp"

namespace bp = boost::python;

void register_Vec2ui_class(){

    { //::osg::Vec2ui
        typedef bp::class_< osg::Vec2ui > Vec2ui_exposer_t;
        Vec2ui_exposer_t Vec2ui_exposer = Vec2ui_exposer_t( "Vec2ui", "\n General purpose integer pair.\n", bp::init< >() );
        bp::scope Vec2ui_scope( Vec2ui_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec2ui::num_components;
        Vec2ui_exposer.def( bp::init< unsigned int, unsigned int >(( bp::arg("x"), bp::arg("y") )) );
        Vec2ui_exposer.def( bp::self != bp::self );
        Vec2ui_exposer.def( bp::self * bp::other< unsigned int >() );
        Vec2ui_exposer.def( bp::self * bp::self );
        Vec2ui_exposer.def( bp::self + bp::other< unsigned int >() );
        Vec2ui_exposer.def( bp::self + bp::self );
        Vec2ui_exposer.def( bp::self - bp::other< unsigned int >() );
        Vec2ui_exposer.def( bp::self - bp::self );
        Vec2ui_exposer.def( bp::self / bp::other< unsigned int >() );
        Vec2ui_exposer.def( bp::self < bp::self );
        Vec2ui_exposer.def( bp::self == bp::self );
        { //::osg::Vec2ui::operator[]
        
            typedef unsigned int & ( ::osg::Vec2ui::*__getitem___function_type )( int ) ;
            
            Vec2ui_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec2ui::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec2ui::operator[]
        
            typedef unsigned int ( ::osg::Vec2ui::*__getitem___function_type )( int ) const;
            
            Vec2ui_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec2ui::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec2ui::set
        
            typedef void ( ::osg::Vec2ui::*set_function_type )( unsigned int,unsigned int ) ;
            
            Vec2ui_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec2ui::set )
                , ( bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::osg::Vec2ui::set
        
            typedef void ( ::osg::Vec2ui::*set_function_type )( ::osg::Vec2ui const & ) ;
            
            Vec2ui_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec2ui::set )
                , ( bp::arg("rhs") ) );
        
        }
        { //property "x"[fget=::osg::Vec2ui::x]
        
            typedef unsigned int & ( ::osg::Vec2ui::*fget )(  ) ;
            
            Vec2ui_exposer.add_property( 
                "x"
                , bp::make_function( 
                      fget( &::osg::Vec2ui::x )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "x"[fget=::osg::Vec2ui::x]
        
            typedef unsigned int ( ::osg::Vec2ui::*fget )(  ) const;
            
            Vec2ui_exposer.add_property( 
                "x"
                , fget( &::osg::Vec2ui::x ) );
        
        }
        { //property "y"[fget=::osg::Vec2ui::y]
        
            typedef unsigned int & ( ::osg::Vec2ui::*fget )(  ) ;
            
            Vec2ui_exposer.add_property( 
                "y"
                , bp::make_function( 
                      fget( &::osg::Vec2ui::y )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "y"[fget=::osg::Vec2ui::y]
        
            typedef unsigned int ( ::osg::Vec2ui::*fget )(  ) const;
            
            Vec2ui_exposer.add_property( 
                "y"
                , fget( &::osg::Vec2ui::y ) );
        
        }
        { //property "r"[fget=::osg::Vec2ui::r]
        
            typedef unsigned int & ( ::osg::Vec2ui::*fget )(  ) ;
            
            Vec2ui_exposer.add_property( 
                "r"
                , bp::make_function( 
                      fget( &::osg::Vec2ui::r )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "r"[fget=::osg::Vec2ui::r]
        
            typedef unsigned int ( ::osg::Vec2ui::*fget )(  ) const;
            
            Vec2ui_exposer.add_property( 
                "r"
                , fget( &::osg::Vec2ui::r ) );
        
        }
        { //property "g"[fget=::osg::Vec2ui::g]
        
            typedef unsigned int & ( ::osg::Vec2ui::*fget )(  ) ;
            
            Vec2ui_exposer.add_property( 
                "g"
                , bp::make_function( 
                      fget( &::osg::Vec2ui::g )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "g"[fget=::osg::Vec2ui::g]
        
            typedef unsigned int ( ::osg::Vec2ui::*fget )(  ) const;
            
            Vec2ui_exposer.add_property( 
                "g"
                , fget( &::osg::Vec2ui::g ) );
        
        }
        Vec2ui_exposer.def(bp::indexing::container_suite<
                                    osg::Vec2ui, 
                                    bp::indexing::all_methods, 
                                    OsgVec_algorithms<osg::Vec2ui, osg::Vec2ui::value_type, osg::Vec2ui::num_components> >());
    }

}
