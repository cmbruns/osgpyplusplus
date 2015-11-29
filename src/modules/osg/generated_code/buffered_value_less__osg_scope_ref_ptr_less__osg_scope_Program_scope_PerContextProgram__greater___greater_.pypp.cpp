// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater_.pypp.hpp"

namespace bp = boost::python;

void register_buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__class(){

    { //::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >
        typedef bp::class_< osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > > buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer_t;
        buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer_t buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer = buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer_t( "buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater_", "\n Implements a simple buffered value for values that need to be buffered on\n a per graphics context basis.\n", bp::init< >("\n Implements a simple buffered value for values that need to be buffered on\n a per graphics context basis.\n") );
        bp::scope buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__scope( buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer );
        buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer.def( bp::init< unsigned int >(( bp::arg("size") ), "\n Implements a simple buffered value for values that need to be buffered on\n a per graphics context basis.\n") );
        bp::implicitly_convertible< unsigned int, osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > >();
        { //::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::clear
        
            typedef osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > exported_class_t;
            typedef void ( exported_class_t::*clear_function_type )(  ) ;
            
            buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer.def( 
                "clear"
                , clear_function_type( &::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::clear ) );
        
        }
        { //::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::empty
        
            typedef osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > exported_class_t;
            typedef bool ( exported_class_t::*empty_function_type )(  ) const;
            
            buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer.def( 
                "empty"
                , empty_function_type( &::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::empty ) );
        
        }
        { //::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::operator=
        
            typedef osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > exported_class_t;
            typedef ::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > & ( exported_class_t::*assign_function_type )( ::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > const & ) ;
            
            buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer.def( 
                "assign"
                , assign_function_type( &::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::operator= )
                , ( bp::arg("rhs") )
                , bp::return_self< >()
                , "\n Implements a simple buffered value for values that need to be buffered on\n a per graphics context basis.\n" );
        
        }
        { //::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::operator[]
        
            typedef osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > exported_class_t;
            typedef ::osg::ref_ptr< osg::Program::PerContextProgram > & ( exported_class_t::*__getitem___function_type )( unsigned int ) ;
            
            buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::operator[] )
                , ( bp::arg("pos") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::operator[]
        
            typedef osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > exported_class_t;
            typedef ::osg::ref_ptr< osg::Program::PerContextProgram > ( exported_class_t::*__getitem___function_type )( unsigned int ) const;
            
            buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::operator[] )
                , ( bp::arg("pos") ) );
        
        }
        { //::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::resize
        
            typedef osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > exported_class_t;
            typedef void ( exported_class_t::*resize_function_type )( unsigned int ) ;
            
            buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer.def( 
                "resize"
                , resize_function_type( &::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::resize )
                , ( bp::arg("newSize") ) );
        
        }
        { //::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::setAllElementsTo
        
            typedef osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > exported_class_t;
            typedef void ( exported_class_t::*setAllElementsTo_function_type )( ::osg::ref_ptr< osg::Program::PerContextProgram > const & ) ;
            
            buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer.def( 
                "setAllElementsTo"
                , setAllElementsTo_function_type( &::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::setAllElementsTo )
                , ( bp::arg("t") ) );
        
        }
        { //::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::size
        
            typedef osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > > exported_class_t;
            typedef unsigned int ( exported_class_t::*size_function_type )(  ) const;
            
            buffered_value_less__osg_scope_ref_ptr_less__osg_scope_Program_scope_PerContextProgram__greater___greater__exposer.def( 
                "size"
                , size_function_type( &::osg::buffered_value< osg::ref_ptr< osg::Program::PerContextProgram > >::size ) );
        
        }
    }

}
