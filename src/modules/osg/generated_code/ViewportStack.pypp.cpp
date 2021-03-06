// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "ViewportStack.pypp.hpp"

namespace bp = boost::python;

void register_ViewportStack_class(){

    { //::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >
        typedef bp::class_< osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > > ViewportStack_exposer_t;
        ViewportStack_exposer_t ViewportStack_exposer = ViewportStack_exposer_t( "ViewportStack", "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n", bp::init< >("\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n") );
        bp::scope ViewportStack_scope( ViewportStack_exposer );
        ViewportStack_exposer.def( bp::init< osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > const & >(( bp::arg("fbs") ), "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n") );
        ViewportStack_exposer.def( bp::init< osg::ref_ptr< osg::Viewport > const & >(( bp::arg("value") ), "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n") );
        bp::implicitly_convertible< osg::ref_ptr< osg::Viewport > const &, osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > >();
        { //::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::back
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > exported_class_t;
            typedef ::osg::ref_ptr< osg::Viewport > & ( exported_class_t::*back_function_type )(  ) ;
            
            ViewportStack_exposer.def( 
                "back"
                , back_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::back )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::back
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > exported_class_t;
            typedef ::osg::ref_ptr< osg::Viewport > const & ( exported_class_t::*back_function_type )(  ) const;
            
            ViewportStack_exposer.def( 
                "back"
                , back_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::back )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::clear
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > exported_class_t;
            typedef void ( exported_class_t::*clear_function_type )(  ) ;
            
            ViewportStack_exposer.def( 
                "clear"
                , clear_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::clear ) );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::empty
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > exported_class_t;
            typedef bool ( exported_class_t::*empty_function_type )(  ) const;
            
            ViewportStack_exposer.def( 
                "empty"
                , empty_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::empty ) );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::operator=
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > exported_class_t;
            typedef ::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > & ( exported_class_t::*assign_function_type )( ::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > const & ) ;
            
            ViewportStack_exposer.def( 
                "assign"
                , assign_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::operator= )
                , ( bp::arg("fbs") )
                , bp::return_self< >()
                , "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n" );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::pop_back
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > exported_class_t;
            typedef void ( exported_class_t::*pop_back_function_type )(  ) ;
            
            ViewportStack_exposer.def( 
                "pop_back"
                , pop_back_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::pop_back ) );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::push_back
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > exported_class_t;
            typedef void ( exported_class_t::*push_back_function_type )(  ) ;
            
            ViewportStack_exposer.def( 
                "push_back"
                , push_back_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::push_back ) );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::push_back
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > exported_class_t;
            typedef void ( exported_class_t::*push_back_function_type )( ::osg::ref_ptr< osg::Viewport > const & ) ;
            
            ViewportStack_exposer.def( 
                "push_back"
                , push_back_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::push_back )
                , ( bp::arg("value") ) );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::size
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::Viewport > > exported_class_t;
            typedef unsigned int ( exported_class_t::*size_function_type )(  ) const;
            
            ViewportStack_exposer.def( 
                "size"
                , size_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::size ) );
        
        }
        ViewportStack_exposer.def_readwrite( "_size", &osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::_size );
        ViewportStack_exposer.def_readwrite( "_stack", &osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::_stack );
        ViewportStack_exposer.def_readwrite( "_value", &osg::fast_back_stack< osg::ref_ptr< osg::Viewport > >::_value );
    }

}
