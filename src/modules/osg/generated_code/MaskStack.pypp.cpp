// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "MaskStack.pypp.hpp"

namespace bp = boost::python;

void register_MaskStack_class(){

    { //::osg::fast_back_stack< unsigned int >
        typedef bp::class_< osg::fast_back_stack< unsigned int > > MaskStack_exposer_t;
        MaskStack_exposer_t MaskStack_exposer = MaskStack_exposer_t( "MaskStack", "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n", bp::init< >("\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n") );
        bp::scope MaskStack_scope( MaskStack_exposer );
        MaskStack_exposer.def( bp::init< osg::fast_back_stack< unsigned int > const & >(( bp::arg("fbs") ), "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n") );
        MaskStack_exposer.def( bp::init< unsigned int const & >(( bp::arg("value") ), "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n") );
        bp::implicitly_convertible< unsigned int const &, osg::fast_back_stack< unsigned int > >();
        { //::osg::fast_back_stack< unsigned int >::back
        
            typedef osg::fast_back_stack< unsigned int > exported_class_t;
            typedef unsigned int & ( exported_class_t::*back_function_type )(  ) ;
            
            MaskStack_exposer.def( 
                "back"
                , back_function_type( &::osg::fast_back_stack< unsigned int >::back )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::fast_back_stack< unsigned int >::back
        
            typedef osg::fast_back_stack< unsigned int > exported_class_t;
            typedef unsigned int const & ( exported_class_t::*back_function_type )(  ) const;
            
            MaskStack_exposer.def( 
                "back"
                , back_function_type( &::osg::fast_back_stack< unsigned int >::back )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::osg::fast_back_stack< unsigned int >::clear
        
            typedef osg::fast_back_stack< unsigned int > exported_class_t;
            typedef void ( exported_class_t::*clear_function_type )(  ) ;
            
            MaskStack_exposer.def( 
                "clear"
                , clear_function_type( &::osg::fast_back_stack< unsigned int >::clear ) );
        
        }
        { //::osg::fast_back_stack< unsigned int >::empty
        
            typedef osg::fast_back_stack< unsigned int > exported_class_t;
            typedef bool ( exported_class_t::*empty_function_type )(  ) const;
            
            MaskStack_exposer.def( 
                "empty"
                , empty_function_type( &::osg::fast_back_stack< unsigned int >::empty ) );
        
        }
        { //::osg::fast_back_stack< unsigned int >::operator=
        
            typedef osg::fast_back_stack< unsigned int > exported_class_t;
            typedef ::osg::fast_back_stack< unsigned int > & ( exported_class_t::*assign_function_type )( ::osg::fast_back_stack< unsigned int > const & ) ;
            
            MaskStack_exposer.def( 
                "assign"
                , assign_function_type( &::osg::fast_back_stack< unsigned int >::operator= )
                , ( bp::arg("fbs") )
                , bp::return_self< >()
                , "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n" );
        
        }
        { //::osg::fast_back_stack< unsigned int >::pop_back
        
            typedef osg::fast_back_stack< unsigned int > exported_class_t;
            typedef void ( exported_class_t::*pop_back_function_type )(  ) ;
            
            MaskStack_exposer.def( 
                "pop_back"
                , pop_back_function_type( &::osg::fast_back_stack< unsigned int >::pop_back ) );
        
        }
        { //::osg::fast_back_stack< unsigned int >::push_back
        
            typedef osg::fast_back_stack< unsigned int > exported_class_t;
            typedef void ( exported_class_t::*push_back_function_type )(  ) ;
            
            MaskStack_exposer.def( 
                "push_back"
                , push_back_function_type( &::osg::fast_back_stack< unsigned int >::push_back ) );
        
        }
        { //::osg::fast_back_stack< unsigned int >::push_back
        
            typedef osg::fast_back_stack< unsigned int > exported_class_t;
            typedef void ( exported_class_t::*push_back_function_type )( unsigned int const & ) ;
            
            MaskStack_exposer.def( 
                "push_back"
                , push_back_function_type( &::osg::fast_back_stack< unsigned int >::push_back )
                , ( bp::arg("value") ) );
        
        }
        { //::osg::fast_back_stack< unsigned int >::size
        
            typedef osg::fast_back_stack< unsigned int > exported_class_t;
            typedef unsigned int ( exported_class_t::*size_function_type )(  ) const;
            
            MaskStack_exposer.def( 
                "size"
                , size_function_type( &::osg::fast_back_stack< unsigned int >::size ) );
        
        }
        MaskStack_exposer.def_readwrite( "_size", &osg::fast_back_stack< unsigned int >::_size );
        MaskStack_exposer.def_readwrite( "_stack", &osg::fast_back_stack< unsigned int >::_stack );
        MaskStack_exposer.def_readwrite( "_value", &osg::fast_back_stack< unsigned int >::_value );
    }

}
