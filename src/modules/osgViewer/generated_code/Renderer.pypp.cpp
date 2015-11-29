// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgViewer.h"
#include "wrap_referenced.h"
#include "Renderer.pypp.hpp"

namespace bp = boost::python;

struct Renderer_wrapper : osgViewer::Renderer, bp::wrapper< osgViewer::Renderer > {

    Renderer_wrapper(::osg::Camera * camera )
    : osgViewer::Renderer( boost::python::ptr(camera) )
      , bp::wrapper< osgViewer::Renderer >(){
        // constructor
    
    }

    virtual void compile(  ) {
        if( bp::override func_compile = this->get_override( "compile" ) )
            func_compile(  );
        else{
            this->osgViewer::Renderer::compile(  );
        }
    }
    
    void default_compile(  ) {
        osgViewer::Renderer::compile( );
    }

    virtual void cull(  ) {
        if( bp::override func_cull = this->get_override( "cull" ) )
            func_cull(  );
        else{
            this->osgViewer::Renderer::cull(  );
        }
    }
    
    void default_cull(  ) {
        osgViewer::Renderer::cull( );
    }

    virtual void cull_draw(  ) {
        if( bp::override func_cull_draw = this->get_override( "cull_draw" ) )
            func_cull_draw(  );
        else{
            this->osgViewer::Renderer::cull_draw(  );
        }
    }
    
    void default_cull_draw(  ) {
        osgViewer::Renderer::cull_draw( );
    }

    virtual void draw(  ) {
        if( bp::override func_draw = this->get_override( "draw" ) )
            func_draw(  );
        else{
            this->osgViewer::Renderer::draw(  );
        }
    }
    
    void default_draw(  ) {
        osgViewer::Renderer::draw( );
    }

    virtual void operator()( ::osg::Object * object ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( boost::python::ptr(object) );
        else{
            this->osgViewer::Renderer::operator()( boost::python::ptr(object) );
        }
    }
    
    void default___call__( ::osg::Object * object ) {
        osgViewer::Renderer::operator()( boost::python::ptr(object) );
    }

    virtual void operator()( ::osg::GraphicsContext * context ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( boost::python::ptr(context) );
        else{
            this->osgViewer::Renderer::operator()( boost::python::ptr(context) );
        }
    }
    
    void default___call__( ::osg::GraphicsContext * context ) {
        osgViewer::Renderer::operator()( boost::python::ptr(context) );
    }

    virtual void release(  ) {
        if( bp::override func_release = this->get_override( "release" ) )
            func_release(  );
        else{
            this->osgViewer::Renderer::release(  );
        }
    }
    
    void default_release(  ) {
        osgViewer::Renderer::release( );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osgViewer::Renderer::reset(  );
        }
    }
    
    void default_reset(  ) {
        osgViewer::Renderer::reset( );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Referenced::setThreadSafeRefUnref( threadSafe );
    }

};

void register_Renderer_class(){

    { //::osgViewer::Renderer
        typedef bp::class_< Renderer_wrapper, bp::bases< ::osg::GraphicsOperation >, osg::ref_ptr< Renderer_wrapper >, boost::noncopyable > Renderer_exposer_t;
        Renderer_exposer_t Renderer_exposer = Renderer_exposer_t( "Renderer", bp::no_init );
        bp::scope Renderer_scope( Renderer_exposer );
        Renderer_exposer.def( bp::init< osg::Camera * >(( bp::arg("camera") )) );
        bp::implicitly_convertible< osg::Camera *, osgViewer::Renderer >();
        { //::osgViewer::Renderer::compile
        
            typedef void ( ::osgViewer::Renderer::*compile_function_type )(  ) ;
            typedef void ( Renderer_wrapper::*default_compile_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "compile"
                , compile_function_type(&::osgViewer::Renderer::compile)
                , default_compile_function_type(&Renderer_wrapper::default_compile) );
        
        }
        { //::osgViewer::Renderer::cull
        
            typedef void ( ::osgViewer::Renderer::*cull_function_type )(  ) ;
            typedef void ( Renderer_wrapper::*default_cull_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "cull"
                , cull_function_type(&::osgViewer::Renderer::cull)
                , default_cull_function_type(&Renderer_wrapper::default_cull) );
        
        }
        { //::osgViewer::Renderer::cull_draw
        
            typedef void ( ::osgViewer::Renderer::*cull_draw_function_type )(  ) ;
            typedef void ( Renderer_wrapper::*default_cull_draw_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "cull_draw"
                , cull_draw_function_type(&::osgViewer::Renderer::cull_draw)
                , default_cull_draw_function_type(&Renderer_wrapper::default_cull_draw) );
        
        }
        { //::osgViewer::Renderer::draw
        
            typedef void ( ::osgViewer::Renderer::*draw_function_type )(  ) ;
            typedef void ( Renderer_wrapper::*default_draw_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "draw"
                , draw_function_type(&::osgViewer::Renderer::draw)
                , default_draw_function_type(&Renderer_wrapper::default_draw) );
        
        }
        { //::osgViewer::Renderer::getCameraRequiresSetUp
        
            typedef bool ( ::osgViewer::Renderer::*getCameraRequiresSetUp_function_type )(  ) const;
            
            Renderer_exposer.def( 
                "getCameraRequiresSetUp"
                , getCameraRequiresSetUp_function_type( &::osgViewer::Renderer::getCameraRequiresSetUp ) );
        
        }
        { //::osgViewer::Renderer::getCompileOnNextDraw
        
            typedef bool ( ::osgViewer::Renderer::*getCompileOnNextDraw_function_type )(  ) const;
            
            Renderer_exposer.def( 
                "getCompileOnNextDraw"
                , getCompileOnNextDraw_function_type( &::osgViewer::Renderer::getCompileOnNextDraw ) );
        
        }
        { //::osgViewer::Renderer::getDone
        
            typedef bool ( ::osgViewer::Renderer::*getDone_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "getDone"
                , getDone_function_type( &::osgViewer::Renderer::getDone ) );
        
        }
        { //::osgViewer::Renderer::getGraphicsThreadDoesCull
        
            typedef bool ( ::osgViewer::Renderer::*getGraphicsThreadDoesCull_function_type )(  ) const;
            
            Renderer_exposer.def( 
                "getGraphicsThreadDoesCull"
                , getGraphicsThreadDoesCull_function_type( &::osgViewer::Renderer::getGraphicsThreadDoesCull ) );
        
        }
        { //::osgViewer::Renderer::getSceneView
        
            typedef ::osgUtil::SceneView * ( ::osgViewer::Renderer::*getSceneView_function_type )( unsigned int ) ;
            
            Renderer_exposer.def( 
                "getSceneView"
                , getSceneView_function_type( &::osgViewer::Renderer::getSceneView )
                , ( bp::arg("i") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgViewer::Renderer::getSceneView
        
            typedef ::osgUtil::SceneView const * ( ::osgViewer::Renderer::*getSceneView_function_type )( unsigned int ) const;
            
            Renderer_exposer.def( 
                "getSceneView"
                , getSceneView_function_type( &::osgViewer::Renderer::getSceneView )
                , ( bp::arg("i") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgViewer::Renderer::operator()
        
            typedef void ( ::osgViewer::Renderer::*__call___function_type )( ::osg::Object * ) ;
            typedef void ( Renderer_wrapper::*default___call___function_type )( ::osg::Object * ) ;
            
            Renderer_exposer.def( 
                "__call__"
                , __call___function_type(&::osgViewer::Renderer::operator())
                , default___call___function_type(&Renderer_wrapper::default___call__)
                , ( bp::arg("object") ) );
        
        }
        { //::osgViewer::Renderer::operator()
        
            typedef void ( ::osgViewer::Renderer::*__call___function_type )( ::osg::GraphicsContext * ) ;
            typedef void ( Renderer_wrapper::*default___call___function_type )( ::osg::GraphicsContext * ) ;
            
            Renderer_exposer.def( 
                "__call__"
                , __call___function_type(&::osgViewer::Renderer::operator())
                , default___call___function_type(&Renderer_wrapper::default___call__)
                , ( bp::arg("context") ) );
        
        }
        { //::osgViewer::Renderer::release
        
            typedef void ( ::osgViewer::Renderer::*release_function_type )(  ) ;
            typedef void ( Renderer_wrapper::*default_release_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "release"
                , release_function_type(&::osgViewer::Renderer::release)
                , default_release_function_type(&Renderer_wrapper::default_release) );
        
        }
        { //::osgViewer::Renderer::reset
        
            typedef void ( ::osgViewer::Renderer::*reset_function_type )(  ) ;
            typedef void ( Renderer_wrapper::*default_reset_function_type )(  ) ;
            
            Renderer_exposer.def( 
                "reset"
                , reset_function_type(&::osgViewer::Renderer::reset)
                , default_reset_function_type(&Renderer_wrapper::default_reset) );
        
        }
        { //::osgViewer::Renderer::setCameraRequiresSetUp
        
            typedef void ( ::osgViewer::Renderer::*setCameraRequiresSetUp_function_type )( bool ) ;
            
            Renderer_exposer.def( 
                "setCameraRequiresSetUp"
                , setCameraRequiresSetUp_function_type( &::osgViewer::Renderer::setCameraRequiresSetUp )
                , ( bp::arg("flag") ) );
        
        }
        { //::osgViewer::Renderer::setCompileOnNextDraw
        
            typedef void ( ::osgViewer::Renderer::*setCompileOnNextDraw_function_type )( bool ) ;
            
            Renderer_exposer.def( 
                "setCompileOnNextDraw"
                , setCompileOnNextDraw_function_type( &::osgViewer::Renderer::setCompileOnNextDraw )
                , ( bp::arg("flag") ) );
        
        }
        { //::osgViewer::Renderer::setDone
        
            typedef void ( ::osgViewer::Renderer::*setDone_function_type )( bool ) ;
            
            Renderer_exposer.def( 
                "setDone"
                , setDone_function_type( &::osgViewer::Renderer::setDone )
                , ( bp::arg("done") ) );
        
        }
        { //::osgViewer::Renderer::setGraphicsThreadDoesCull
        
            typedef void ( ::osgViewer::Renderer::*setGraphicsThreadDoesCull_function_type )( bool ) ;
            
            Renderer_exposer.def( 
                "setGraphicsThreadDoesCull"
                , setGraphicsThreadDoesCull_function_type( &::osgViewer::Renderer::setGraphicsThreadDoesCull )
                , ( bp::arg("flag") ) );
        
        }
    }

}
