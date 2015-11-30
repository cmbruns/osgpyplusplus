// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgWidget.h"
#include "wrap_referenced.h"
#include "Callback.pypp.hpp"

namespace bp = boost::python;

struct Callback_wrapper : osgWidget::Callback, bp::wrapper< osgWidget::Callback > {

    Callback_wrapper( )
    : osgWidget::Callback( )
      , bp::wrapper< osgWidget::Callback >(){
        // null constructor
    
    }

    Callback_wrapper(::osgWidget::Callback const & rhs )
    : osgWidget::Callback( boost::ref(rhs) )
      , bp::wrapper< osgWidget::Callback >(){
        // copy constructor
    
    }

    Callback_wrapper(::osgWidget::EventType type, void * data=0 )
    : osgWidget::Callback( type, data )
      , bp::wrapper< osgWidget::Callback >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgWidget::Callback::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgWidget::Callback::className( );
    }

    virtual bool operator()( ::osgWidget::Event & ev ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            return func___call__( boost::ref(ev) );
        else{
            return this->osgWidget::Callback::operator()( boost::ref(ev) );
        }
    }
    
    bool default___call__( ::osgWidget::Event & ev ) {
        return osgWidget::Callback::operator()( boost::ref(ev) );
    }

};

void register_Callback_class(){

    { //::osgWidget::Callback
        typedef bp::class_< Callback_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< Callback_wrapper > > Callback_exposer_t;
        Callback_exposer_t Callback_exposer = Callback_exposer_t( "Callback", bp::init< >() );
        bp::scope Callback_scope( Callback_exposer );
        Callback_exposer.def( bp::init< osgWidget::Callback const & >(( bp::arg("rhs") )) );
        Callback_exposer.def( bp::init< osgWidget::EventType, bp::optional< void * > >(( bp::arg("type"), bp::arg("data")=bp::object() )) );
        bp::implicitly_convertible< osgWidget::EventType, osgWidget::Callback >();
        { //::osgWidget::Callback::className
        
            typedef char const * ( ::osgWidget::Callback::*className_function_type )(  ) const;
            typedef char const * ( Callback_wrapper::*default_className_function_type )(  ) const;
            
            Callback_exposer.def( 
                "className"
                , className_function_type(&::osgWidget::Callback::className)
                , default_className_function_type(&Callback_wrapper::default_className) );
        
        }
        { //::osgWidget::Callback::getType
        
            typedef ::osgWidget::EventType ( ::osgWidget::Callback::*getType_function_type )(  ) const;
            
            Callback_exposer.def( 
                "getType"
                , getType_function_type( &::osgWidget::Callback::getType ) );
        
        }
        { //::osgWidget::Callback::operator()
        
            typedef bool ( ::osgWidget::Callback::*__call___function_type )( ::osgWidget::Event & ) ;
            typedef bool ( Callback_wrapper::*default___call___function_type )( ::osgWidget::Event & ) ;
            
            Callback_exposer.def( 
                "__call__"
                , __call___function_type(&::osgWidget::Callback::operator())
                , default___call___function_type(&Callback_wrapper::default___call__)
                , ( bp::arg("ev") ) );
        
        }
    }

}
