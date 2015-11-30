// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgViewer.h"
#include "wrap_referenced.h"
#include "InteractiveImageHandler.pypp.hpp"

namespace bp = boost::python;

struct InteractiveImageHandler_wrapper : osgViewer::InteractiveImageHandler, bp::wrapper< osgViewer::InteractiveImageHandler > {

    InteractiveImageHandler_wrapper(::osg::Image * image )
    : osgViewer::InteractiveImageHandler( boost::python::ptr(image) )
      , bp::wrapper< osgViewer::InteractiveImageHandler >(){
        // constructor
    
    }

    InteractiveImageHandler_wrapper(::osg::Image * image, ::osg::Texture2D * texture, ::osg::Camera * camera )
    : osgViewer::InteractiveImageHandler( boost::python::ptr(image), boost::python::ptr(texture), boost::python::ptr(camera) )
      , bp::wrapper< osgViewer::InteractiveImageHandler >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgViewer::InteractiveImageHandler::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgViewer::InteractiveImageHandler::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgViewer::InteractiveImageHandler::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgViewer::InteractiveImageHandler::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgViewer::InteractiveImageHandler::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgViewer::InteractiveImageHandler::cloneType( );
    }

    virtual bool cull( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable, ::osg::RenderInfo * renderInfo ) const  {
        if( bp::override func_cull = this->get_override( "cull" ) )
            return func_cull( boost::python::ptr(nv), boost::python::ptr(drawable), boost::python::ptr(renderInfo) );
        else{
            return this->osgViewer::InteractiveImageHandler::cull( boost::python::ptr(nv), boost::python::ptr(drawable), boost::python::ptr(renderInfo) );
        }
    }
    
    bool default_cull( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable, ::osg::RenderInfo * renderInfo ) const  {
        return osgViewer::InteractiveImageHandler::cull( boost::python::ptr(nv), boost::python::ptr(drawable), boost::python::ptr(renderInfo) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgViewer::InteractiveImageHandler::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgViewer::InteractiveImageHandler::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgViewer::InteractiveImageHandler::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgViewer::InteractiveImageHandler::libraryName( );
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

    virtual bool cull( ::osg::NodeVisitor * arg0, ::osg::Drawable * arg1, ::osg::State * arg2 ) const  {
        if( bp::override func_cull = this->get_override( "cull" ) )
            return func_cull( boost::python::ptr(arg0), boost::python::ptr(arg1), boost::python::ptr(arg2) );
        else{
            return this->osg::Drawable::CullCallback::cull( boost::python::ptr(arg0), boost::python::ptr(arg1), boost::python::ptr(arg2) );
        }
    }
    
    bool default_cull( ::osg::NodeVisitor * arg0, ::osg::Drawable * arg1, ::osg::State * arg2 ) const  {
        return osg::Drawable::CullCallback::cull( boost::python::ptr(arg0), boost::python::ptr(arg1), boost::python::ptr(arg2) );
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

    virtual void getUsage( ::osg::ApplicationUsage & arg0 ) const  {
        if( bp::override func_getUsage = this->get_override( "getUsage" ) )
            func_getUsage( boost::ref(arg0) );
        else{
            this->osgGA::GUIEventHandler::getUsage( boost::ref(arg0) );
        }
    }
    
    void default_getUsage( ::osg::ApplicationUsage & arg0 ) const  {
        osgGA::GUIEventHandler::getUsage( boost::ref(arg0) );
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

void register_InteractiveImageHandler_class(){

    { //::osgViewer::InteractiveImageHandler
        typedef bp::class_< InteractiveImageHandler_wrapper, bp::bases< ::osgGA::GUIEventHandler, ::osg::Drawable::CullCallback >, osg::ref_ptr< InteractiveImageHandler_wrapper >, boost::noncopyable > InteractiveImageHandler_exposer_t;
        InteractiveImageHandler_exposer_t InteractiveImageHandler_exposer = InteractiveImageHandler_exposer_t( "InteractiveImageHandler", "\n InteractiveImage is an event handler that computes the mouse coordinates in an images coordinate frame\n and then passes keyboard and mouse events to it.  This event handler is useful for vnc or browser\n surfaces in the 3D scene.\n", bp::no_init );
        bp::scope InteractiveImageHandler_scope( InteractiveImageHandler_exposer );
        InteractiveImageHandler_exposer.def( bp::init< osg::Image * >(( bp::arg("image") ), "\n Constructor to use when the InteractiveImage is in the 3D scene (i.e. not in a fullscreen HUD overlay).\n") );
        bp::implicitly_convertible< osg::Image *, osgViewer::InteractiveImageHandler >();
        InteractiveImageHandler_exposer.def( bp::init< osg::Image *, osg::Texture2D *, osg::Camera * >(( bp::arg("image"), bp::arg("texture"), bp::arg("camera") ), "\n Constructor to use when the InteractiveImage is in a fullscreen HUD overlay.\n") );
        { //::osgViewer::InteractiveImageHandler::className
        
            typedef char const * ( ::osgViewer::InteractiveImageHandler::*className_function_type )(  ) const;
            typedef char const * ( InteractiveImageHandler_wrapper::*default_className_function_type )(  ) const;
            
            InteractiveImageHandler_exposer.def( 
                "className"
                , className_function_type(&::osgViewer::InteractiveImageHandler::className)
                , default_className_function_type(&InteractiveImageHandler_wrapper::default_className) );
        
        }
        { //::osgViewer::InteractiveImageHandler::clone
        
            typedef ::osg::Object * ( ::osgViewer::InteractiveImageHandler::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( InteractiveImageHandler_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            InteractiveImageHandler_exposer.def( 
                "clone"
                , clone_function_type(&::osgViewer::InteractiveImageHandler::clone)
                , default_clone_function_type(&InteractiveImageHandler_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgViewer::InteractiveImageHandler::cloneType
        
            typedef ::osg::Object * ( ::osgViewer::InteractiveImageHandler::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( InteractiveImageHandler_wrapper::*default_cloneType_function_type )(  ) const;
            
            InteractiveImageHandler_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osgViewer::InteractiveImageHandler::cloneType)
                , default_cloneType_function_type(&InteractiveImageHandler_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgViewer::InteractiveImageHandler::cull
        
            typedef bool ( ::osgViewer::InteractiveImageHandler::*cull_function_type )( ::osg::NodeVisitor *,::osg::Drawable *,::osg::RenderInfo * ) const;
            typedef bool ( InteractiveImageHandler_wrapper::*default_cull_function_type )( ::osg::NodeVisitor *,::osg::Drawable *,::osg::RenderInfo * ) const;
            
            InteractiveImageHandler_exposer.def( 
                "cull"
                , cull_function_type(&::osgViewer::InteractiveImageHandler::cull)
                , default_cull_function_type(&InteractiveImageHandler_wrapper::default_cull)
                , ( bp::arg("nv"), bp::arg("drawable"), bp::arg("renderInfo") ) );
        
        }
        { //::osgViewer::InteractiveImageHandler::isSameKindAs
        
            typedef bool ( ::osgViewer::InteractiveImageHandler::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( InteractiveImageHandler_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            InteractiveImageHandler_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osgViewer::InteractiveImageHandler::isSameKindAs)
                , default_isSameKindAs_function_type(&InteractiveImageHandler_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osgViewer::InteractiveImageHandler::libraryName
        
            typedef char const * ( ::osgViewer::InteractiveImageHandler::*libraryName_function_type )(  ) const;
            typedef char const * ( InteractiveImageHandler_wrapper::*default_libraryName_function_type )(  ) const;
            
            InteractiveImageHandler_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgViewer::InteractiveImageHandler::libraryName)
                , default_libraryName_function_type(&InteractiveImageHandler_wrapper::default_libraryName) );
        
        }
    }

}
