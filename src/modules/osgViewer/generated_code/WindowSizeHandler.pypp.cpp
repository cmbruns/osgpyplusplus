// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgViewer.h"
#include "wrap_referenced.h"
#include "WindowSizeHandler.pypp.hpp"

namespace bp = boost::python;

struct WindowSizeHandler_wrapper : osgViewer::WindowSizeHandler, bp::wrapper< osgViewer::WindowSizeHandler > {

    WindowSizeHandler_wrapper( )
    : osgViewer::WindowSizeHandler( )
      , bp::wrapper< osgViewer::WindowSizeHandler >(){
        // null constructor
    
    }

    virtual void getUsage( ::osg::ApplicationUsage & usage ) const  {
        if( bp::override func_getUsage = this->get_override( "getUsage" ) )
            func_getUsage( boost::ref(usage) );
        else{
            this->osgViewer::WindowSizeHandler::getUsage( boost::ref(usage) );
        }
    }
    
    void default_getUsage( ::osg::ApplicationUsage & usage ) const  {
        osgViewer::WindowSizeHandler::getUsage( boost::ref(usage) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgGA::GUIEventHandler::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgGA::GUIEventHandler::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgGA::GUIEventHandler::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgGA::GUIEventHandler::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgGA::GUIEventHandler::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgGA::GUIEventHandler::cloneType( );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Object::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Object::computeDataVariance( );
    }

    virtual void event( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable ) {
        if( bp::override func_event = this->get_override( "event" ) )
            func_event( boost::python::ptr(nv), boost::python::ptr(drawable) );
        else{
            this->osgGA::GUIEventHandler::event( boost::python::ptr(nv), boost::python::ptr(drawable) );
        }
    }
    
    void default_event( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable ) {
        osgGA::GUIEventHandler::event( boost::python::ptr(nv), boost::python::ptr(drawable) );
    }

    virtual ::osg::Referenced * getUserData(  ) {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced * default_getUserData(  ) {
        return osg::Object::getUserData( );
    }

    virtual ::osg::Referenced const * getUserData(  ) const  {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced const * default_getUserData(  ) const  {
        return osg::Object::getUserData( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgGA::GUIEventHandler::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgGA::GUIEventHandler::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgGA::GUIEventHandler::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgGA::GUIEventHandler::libraryName( );
    }

    virtual void setName( ::std::string const & name ) {
        if( bp::override func_setName = this->get_override( "setName" ) )
            func_setName( name );
        else{
            this->osg::Object::setName( name );
        }
    }
    
    void default_setName( ::std::string const & name ) {
        osg::Object::setName( name );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Object::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Object::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUserData( ::osg::Referenced * obj ) {
        if( bp::override func_setUserData = this->get_override( "setUserData" ) )
            func_setUserData( boost::python::ptr(obj) );
        else{
            this->osg::Object::setUserData( boost::python::ptr(obj) );
        }
    }
    
    void default_setUserData( ::osg::Referenced * obj ) {
        osg::Object::setUserData( boost::python::ptr(obj) );
    }

};

void register_WindowSizeHandler_class(){

    bp::class_< WindowSizeHandler_wrapper, bp::bases< ::osgGA::GUIEventHandler >, osg::ref_ptr< WindowSizeHandler_wrapper >, boost::noncopyable >( "WindowSizeHandler", bp::init< >() )    
        .def( 
            "getChangeWindowedResolution"
            , (bool ( ::osgViewer::WindowSizeHandler::* )(  ) const)( &::osgViewer::WindowSizeHandler::getChangeWindowedResolution ) )    
        .def( 
            "getKeyEventToggleFullscreen"
            , (int ( ::osgViewer::WindowSizeHandler::* )(  ) const)( &::osgViewer::WindowSizeHandler::getKeyEventToggleFullscreen ) )    
        .def( 
            "getKeyEventWindowedResolutionDown"
            , (int ( ::osgViewer::WindowSizeHandler::* )(  ) const)( &::osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionDown ) )    
        .def( 
            "getKeyEventWindowedResolutionUp"
            , (int ( ::osgViewer::WindowSizeHandler::* )(  ) const)( &::osgViewer::WindowSizeHandler::getKeyEventWindowedResolutionUp ) )    
        .def( 
            "getToggleFullscreen"
            , (bool ( ::osgViewer::WindowSizeHandler::* )(  ) const)( &::osgViewer::WindowSizeHandler::getToggleFullscreen ) )    
        .def( 
            "getUsage"
            , (void ( ::osgViewer::WindowSizeHandler::* )( ::osg::ApplicationUsage & ) const)(&::osgViewer::WindowSizeHandler::getUsage)
            , (void ( WindowSizeHandler_wrapper::* )( ::osg::ApplicationUsage & ) const)(&WindowSizeHandler_wrapper::default_getUsage)
            , ( bp::arg("usage") ) )    
        .def( 
            "setChangeWindowedResolution"
            , (void ( ::osgViewer::WindowSizeHandler::* )( bool ) )( &::osgViewer::WindowSizeHandler::setChangeWindowedResolution )
            , ( bp::arg("flag") ) )    
        .def( 
            "setKeyEventToggleFullscreen"
            , (void ( ::osgViewer::WindowSizeHandler::* )( int ) )( &::osgViewer::WindowSizeHandler::setKeyEventToggleFullscreen )
            , ( bp::arg("key") ) )    
        .def( 
            "setKeyEventWindowedResolutionDown"
            , (void ( ::osgViewer::WindowSizeHandler::* )( int ) )( &::osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionDown )
            , ( bp::arg("key") ) )    
        .def( 
            "setKeyEventWindowedResolutionUp"
            , (void ( ::osgViewer::WindowSizeHandler::* )( int ) )( &::osgViewer::WindowSizeHandler::setKeyEventWindowedResolutionUp )
            , ( bp::arg("key") ) )    
        .def( 
            "setToggleFullscreen"
            , (void ( ::osgViewer::WindowSizeHandler::* )( bool ) )( &::osgViewer::WindowSizeHandler::setToggleFullscreen )
            , ( bp::arg("flag") ) );

}
