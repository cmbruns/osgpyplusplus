// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "indexing_helpers.h"
#include "Vec4s.pypp.hpp"

namespace bp = boost::python;

void register_Vec4s_class(){

    { //::osg::Vec4s
        typedef bp::class_< osg::Vec4s > Vec4s_exposer_t;
        Vec4s_exposer_t Vec4s_exposer = Vec4s_exposer_t( "Vec4s", "\n General purpose float quad. Uses include representation\n of color coordinates.\n No support yet added for float * Vec4f - is it necessary?\n Need to define a non-member non-friend operator*  etc.\n    Vec4f * float is okay\n", bp::init< >("\n Constructor that sets all components of the vector to zero\n") );
        bp::scope Vec4s_scope( Vec4s_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec4s::num_components;
        Vec4s_exposer.def( bp::init< short int, short int, short int, short int >(( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") )) );
        Vec4s_exposer.def( bp::self != bp::self );
        Vec4s_exposer.def( bp::self * bp::other< short int >() );
        Vec4s_exposer.def( bp::self * bp::self );
        Vec4s_exposer.def( bp::self *= bp::other< short int >() );
        Vec4s_exposer.def( bp::self + bp::self );
        Vec4s_exposer.def( bp::self += bp::self );
        Vec4s_exposer.def( bp::self - bp::self );
        Vec4s_exposer.def( -bp::self );
        Vec4s_exposer.def( bp::self -= bp::self );
        Vec4s_exposer.def( bp::self / bp::other< short int >() );
        Vec4s_exposer.def( bp::self /= bp::other< short int >() );
        Vec4s_exposer.def( bp::self < bp::self );
        Vec4s_exposer.def( bp::self == bp::self );
        { //::osg::Vec4s::operator[]
        
            typedef short int & ( ::osg::Vec4s::*__getitem___function_type )( unsigned int ) ;
            
            Vec4s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec4s::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4s::operator[]
        
            typedef short int ( ::osg::Vec4s::*__getitem___function_type )( unsigned int ) const;
            
            Vec4s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec4s::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec4s::set
        
            typedef void ( ::osg::Vec4s::*set_function_type )( short int,short int,short int,short int ) ;
            
            Vec4s_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec4s::set )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") ) );
        
        }
        { //property "x"[fget=::osg::Vec4s::x]
        
            typedef short int & ( ::osg::Vec4s::*fget )(  ) ;
            
            Vec4s_exposer.add_property( 
                "x"
                , bp::make_function( 
                      fget( &::osg::Vec4s::x )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "x"[fget=::osg::Vec4s::x]
        
            typedef short int ( ::osg::Vec4s::*fget )(  ) const;
            
            Vec4s_exposer.add_property( 
                "x"
                , fget( &::osg::Vec4s::x ) );
        
        }
        { //property "y"[fget=::osg::Vec4s::y]
        
            typedef short int & ( ::osg::Vec4s::*fget )(  ) ;
            
            Vec4s_exposer.add_property( 
                "y"
                , bp::make_function( 
                      fget( &::osg::Vec4s::y )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "y"[fget=::osg::Vec4s::y]
        
            typedef short int ( ::osg::Vec4s::*fget )(  ) const;
            
            Vec4s_exposer.add_property( 
                "y"
                , fget( &::osg::Vec4s::y ) );
        
        }
        { //property "z"[fget=::osg::Vec4s::z]
        
            typedef short int & ( ::osg::Vec4s::*fget )(  ) ;
            
            Vec4s_exposer.add_property( 
                "z"
                , bp::make_function( 
                      fget( &::osg::Vec4s::z )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "z"[fget=::osg::Vec4s::z]
        
            typedef short int ( ::osg::Vec4s::*fget )(  ) const;
            
            Vec4s_exposer.add_property( 
                "z"
                , fget( &::osg::Vec4s::z ) );
        
        }
        { //property "w"[fget=::osg::Vec4s::w]
        
            typedef short int & ( ::osg::Vec4s::*fget )(  ) ;
            
            Vec4s_exposer.add_property( 
                "w"
                , bp::make_function( 
                      fget( &::osg::Vec4s::w )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "w"[fget=::osg::Vec4s::w]
        
            typedef short int ( ::osg::Vec4s::*fget )(  ) const;
            
            Vec4s_exposer.add_property( 
                "w"
                , fget( &::osg::Vec4s::w ) );
        
        }
        { //property "r"[fget=::osg::Vec4s::r]
        
            typedef short int & ( ::osg::Vec4s::*fget )(  ) ;
            
            Vec4s_exposer.add_property( 
                "r"
                , bp::make_function( 
                      fget( &::osg::Vec4s::r )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "r"[fget=::osg::Vec4s::r]
        
            typedef short int ( ::osg::Vec4s::*fget )(  ) const;
            
            Vec4s_exposer.add_property( 
                "r"
                , fget( &::osg::Vec4s::r ) );
        
        }
        { //property "g"[fget=::osg::Vec4s::g]
        
            typedef short int & ( ::osg::Vec4s::*fget )(  ) ;
            
            Vec4s_exposer.add_property( 
                "g"
                , bp::make_function( 
                      fget( &::osg::Vec4s::g )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "g"[fget=::osg::Vec4s::g]
        
            typedef short int ( ::osg::Vec4s::*fget )(  ) const;
            
            Vec4s_exposer.add_property( 
                "g"
                , fget( &::osg::Vec4s::g ) );
        
        }
        { //property "b"[fget=::osg::Vec4s::b]
        
            typedef short int & ( ::osg::Vec4s::*fget )(  ) ;
            
            Vec4s_exposer.add_property( 
                "b"
                , bp::make_function( 
                      fget( &::osg::Vec4s::b )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "b"[fget=::osg::Vec4s::b]
        
            typedef short int ( ::osg::Vec4s::*fget )(  ) const;
            
            Vec4s_exposer.add_property( 
                "b"
                , fget( &::osg::Vec4s::b ) );
        
        }
        { //property "a"[fget=::osg::Vec4s::a]
        
            typedef short int & ( ::osg::Vec4s::*fget )(  ) ;
            
            Vec4s_exposer.add_property( 
                "a"
                , bp::make_function( 
                      fget( &::osg::Vec4s::a )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "a"[fget=::osg::Vec4s::a]
        
            typedef short int ( ::osg::Vec4s::*fget )(  ) const;
            
            Vec4s_exposer.add_property( 
                "a"
                , fget( &::osg::Vec4s::a ) );
        
        }
        Vec4s_exposer.def( bp::self_ns::str( bp::self ) );
        Vec4s_exposer.def( bp::self_ns::str(bp::self) );
        Vec4s_exposer.def(bp::indexing::container_suite<
                                    osg::Vec4s, 
                                    bp::indexing::all_methods, 
                                    OsgVec_algorithms<osg::Vec4s, osg::Vec4s::value_type, osg::Vec4s::num_components> >());
    }

}
