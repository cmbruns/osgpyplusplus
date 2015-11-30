// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "wrap_referenced.h"
#include "UpdateActionVisitor.pypp.hpp"

namespace bp = boost::python;

struct UpdateActionVisitor_wrapper : osgAnimation::UpdateActionVisitor, bp::wrapper< osgAnimation::UpdateActionVisitor > {

    UpdateActionVisitor_wrapper( )
    : osgAnimation::UpdateActionVisitor( )
      , bp::wrapper< osgAnimation::UpdateActionVisitor >(){
        // null constructor
    
    }

    virtual void apply( ::osgAnimation::Timeline & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::Timeline & action ) {
        osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::Action & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::Action & action ) {
        osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionBlendIn & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionBlendIn & action ) {
        osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionBlendOut & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionBlendOut & action ) {
        osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionAnimation & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionAnimation & action ) {
        osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionStripAnimation & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionStripAnimation & action ) {
        osgAnimation::UpdateActionVisitor::apply( boost::ref(action) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgAnimation::UpdateActionVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgAnimation::UpdateActionVisitor::className( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgAnimation::UpdateActionVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgAnimation::UpdateActionVisitor::libraryName( );
    }

};

void register_UpdateActionVisitor_class(){

    bp::class_< UpdateActionVisitor_wrapper, bp::bases< osgAnimation::ActionVisitor >, osg::ref_ptr< UpdateActionVisitor_wrapper >, boost::noncopyable >( "UpdateActionVisitor", bp::init< >() )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::UpdateActionVisitor::* )( ::osgAnimation::Timeline & ) )(&::osgAnimation::UpdateActionVisitor::apply)
            , (void ( UpdateActionVisitor_wrapper::* )( ::osgAnimation::Timeline & ) )(&UpdateActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::UpdateActionVisitor::* )( ::osgAnimation::Action & ) )(&::osgAnimation::UpdateActionVisitor::apply)
            , (void ( UpdateActionVisitor_wrapper::* )( ::osgAnimation::Action & ) )(&UpdateActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::UpdateActionVisitor::* )( ::osgAnimation::ActionBlendIn & ) )(&::osgAnimation::UpdateActionVisitor::apply)
            , (void ( UpdateActionVisitor_wrapper::* )( ::osgAnimation::ActionBlendIn & ) )(&UpdateActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::UpdateActionVisitor::* )( ::osgAnimation::ActionBlendOut & ) )(&::osgAnimation::UpdateActionVisitor::apply)
            , (void ( UpdateActionVisitor_wrapper::* )( ::osgAnimation::ActionBlendOut & ) )(&UpdateActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::UpdateActionVisitor::* )( ::osgAnimation::ActionAnimation & ) )(&::osgAnimation::UpdateActionVisitor::apply)
            , (void ( UpdateActionVisitor_wrapper::* )( ::osgAnimation::ActionAnimation & ) )(&UpdateActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::UpdateActionVisitor::* )( ::osgAnimation::ActionStripAnimation & ) )(&::osgAnimation::UpdateActionVisitor::apply)
            , (void ( UpdateActionVisitor_wrapper::* )( ::osgAnimation::ActionStripAnimation & ) )(&UpdateActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "className"
            , (char const * ( ::osgAnimation::UpdateActionVisitor::* )(  ) const)(&::osgAnimation::UpdateActionVisitor::className)
            , (char const * ( UpdateActionVisitor_wrapper::* )(  ) const)(&UpdateActionVisitor_wrapper::default_className) )    
        .def( 
            "getLocalFrame"
            , (unsigned int ( ::osgAnimation::UpdateActionVisitor::* )(  ) const)( &::osgAnimation::UpdateActionVisitor::getLocalFrame ) )    
        .def( 
            "isActive"
            , (bool ( ::osgAnimation::UpdateActionVisitor::* )( ::osgAnimation::Action & ) const)( &::osgAnimation::UpdateActionVisitor::isActive )
            , ( bp::arg("action") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgAnimation::UpdateActionVisitor::* )(  ) const)(&::osgAnimation::UpdateActionVisitor::libraryName)
            , (char const * ( UpdateActionVisitor_wrapper::* )(  ) const)(&UpdateActionVisitor_wrapper::default_libraryName) )    
        .def( 
            "setFrame"
            , (void ( ::osgAnimation::UpdateActionVisitor::* )( unsigned int ) )( &::osgAnimation::UpdateActionVisitor::setFrame )
            , ( bp::arg("frame") ) );

}
