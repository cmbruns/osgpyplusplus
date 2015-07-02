// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "renderbuffer.pypp.hpp"

namespace bp = boost::python;

struct RenderBuffer_wrapper : osg::RenderBuffer, bp::wrapper< osg::RenderBuffer > {

    RenderBuffer_wrapper( )
    : osg::RenderBuffer( )
      , bp::wrapper< osg::RenderBuffer >(){
        // null constructor
    
    }

    RenderBuffer_wrapper(int width, int height, ::GLenum internalFormat, int samples=0, int colorSamples=0 )
    : osg::RenderBuffer( width, height, internalFormat, samples, colorSamples )
      , bp::wrapper< osg::RenderBuffer >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::RenderBuffer::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::RenderBuffer::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::RenderBuffer::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::RenderBuffer::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::RenderBuffer::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::RenderBuffer::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::RenderBuffer::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::RenderBuffer::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::RenderBuffer::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::RenderBuffer::libraryName( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::RenderBuffer::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::RenderBuffer::resizeGLObjectBuffers( maxSize );
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

void register_RenderBuffer_class(){

    bp::class_< RenderBuffer_wrapper, bp::bases< osg::Object >, osg::ref_ptr< ::osg::RenderBuffer >, boost::noncopyable >( "RenderBuffer", "\n RenderBuffer\n", bp::no_init )    
        .def( bp::init< >("\n RenderBuffer\n") )    
        .def( bp::init< int, int, GLenum, bp::optional< int, int > >(( bp::arg("width"), bp::arg("height"), bp::arg("internalFormat"), bp::arg("samples")=(int)(0), bp::arg("colorSamples")=(int)(0) )) )    
        .def( 
            "className"
            , (char const * ( ::osg::RenderBuffer::* )(  )const)(&::osg::RenderBuffer::className)
            , (char const * ( RenderBuffer_wrapper::* )(  )const)(&RenderBuffer_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::RenderBuffer::* )( ::osg::CopyOp const & )const)(&::osg::RenderBuffer::clone)
            , (::osg::Object * ( RenderBuffer_wrapper::* )( ::osg::CopyOp const & )const)(&RenderBuffer_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::RenderBuffer::* )(  )const)(&::osg::RenderBuffer::cloneType)
            , (::osg::Object * ( RenderBuffer_wrapper::* )(  )const)(&RenderBuffer_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "compare"
            , (int ( ::osg::RenderBuffer::* )( ::osg::RenderBuffer const & )const)( &::osg::RenderBuffer::compare )
            , ( bp::arg("rb") ) )    
        .def( 
            "deleteRenderBuffer"
            , (void (*)( unsigned int,::GLuint ))( &::osg::RenderBuffer::deleteRenderBuffer )
            , ( bp::arg("contextID"), bp::arg("rb") )
            , " Mark internal RenderBuffer for deletion.\n Deletion requests are queued until they can be executed\n in the proper GL context." )    
        .def( 
            "discardDeletedRenderBuffers"
            , (void (*)( unsigned int ))( &::osg::RenderBuffer::discardDeletedRenderBuffers )
            , ( bp::arg("contextID") )
            , " discard all the cached RenderBuffers which need to be deleted in the OpenGL context related to contextID.\n Note, unlike flush no OpenGL calls are made, instead the handles are all removed.\n this call is useful for when an OpenGL context has been destroyed." )    
        .def( 
            "flushDeletedRenderBuffers"
            , (void (*)( unsigned int,double,double & ))( &::osg::RenderBuffer::flushDeletedRenderBuffers )
            , ( bp::arg("contextID"), bp::arg("currentTime"), bp::arg("availableTime") )
            , " flush all the cached RenderBuffers which need to be deleted\n in the OpenGL context related to contextID." )    
        .def( 
            "getColorSamples"
            , (int ( ::osg::RenderBuffer::* )(  )const)( &::osg::RenderBuffer::getColorSamples ) )    
        .def( 
            "getHeight"
            , (int ( ::osg::RenderBuffer::* )(  )const)( &::osg::RenderBuffer::getHeight ) )    
        .def( 
            "getInternalFormat"
            , (::GLenum ( ::osg::RenderBuffer::* )(  )const)( &::osg::RenderBuffer::getInternalFormat ) )    
        .def( 
            "getMaxSamples"
            , (int (*)( unsigned int,::osg::FBOExtensions const * ))( &::osg::RenderBuffer::getMaxSamples )
            , ( bp::arg("contextID"), bp::arg("ext") ) )    
        .def( 
            "getObjectID"
            , (::GLuint ( ::osg::RenderBuffer::* )( unsigned int,::osg::FBOExtensions const * )const)( &::osg::RenderBuffer::getObjectID )
            , ( bp::arg("contextID"), bp::arg("ext") ) )    
        .def( 
            "getSamples"
            , (int ( ::osg::RenderBuffer::* )(  )const)( &::osg::RenderBuffer::getSamples ) )    
        .def( 
            "getWidth"
            , (int ( ::osg::RenderBuffer::* )(  )const)( &::osg::RenderBuffer::getWidth ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::RenderBuffer::* )( ::osg::Object const * )const)(&::osg::RenderBuffer::isSameKindAs)
            , (bool ( RenderBuffer_wrapper::* )( ::osg::Object const * )const)(&RenderBuffer_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::RenderBuffer::* )(  )const)(&::osg::RenderBuffer::libraryName)
            , (char const * ( RenderBuffer_wrapper::* )(  )const)(&RenderBuffer_wrapper::default_libraryName) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::RenderBuffer::* )( unsigned int ))(&::osg::RenderBuffer::resizeGLObjectBuffers)
            , (void ( RenderBuffer_wrapper::* )( unsigned int ))(&RenderBuffer_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("maxSize") ) )    
        .def( 
            "setColorSamples"
            , (void ( ::osg::RenderBuffer::* )( int ))( &::osg::RenderBuffer::setColorSamples )
            , ( bp::arg("colorSamples") ) )    
        .def( 
            "setHeight"
            , (void ( ::osg::RenderBuffer::* )( int ))( &::osg::RenderBuffer::setHeight )
            , ( bp::arg("h") ) )    
        .def( 
            "setInternalFormat"
            , (void ( ::osg::RenderBuffer::* )( ::GLenum ))( &::osg::RenderBuffer::setInternalFormat )
            , ( bp::arg("format") ) )    
        .def( 
            "setSamples"
            , (void ( ::osg::RenderBuffer::* )( int ))( &::osg::RenderBuffer::setSamples )
            , ( bp::arg("samples") ) )    
        .def( 
            "setSize"
            , (void ( ::osg::RenderBuffer::* )( int,int ))( &::osg::RenderBuffer::setSize )
            , ( bp::arg("w"), bp::arg("h") ) )    
        .def( 
            "setWidth"
            , (void ( ::osg::RenderBuffer::* )( int ))( &::osg::RenderBuffer::setWidth )
            , ( bp::arg("w") ) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( RenderBuffer_wrapper::* )(  ))(&RenderBuffer_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( RenderBuffer_wrapper::* )(  ))(&RenderBuffer_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( RenderBuffer_wrapper::* )(  )const)(&RenderBuffer_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( RenderBuffer_wrapper::* )( ::std::string const & ))(&RenderBuffer_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Object::* )( bool ))(&::osg::Object::setThreadSafeRefUnref)
            , (void ( RenderBuffer_wrapper::* )( bool ))(&RenderBuffer_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( RenderBuffer_wrapper::* )( ::osg::Referenced * ))(&RenderBuffer_wrapper::default_setUserData)
            , ( bp::arg("obj") ) )    
        .staticmethod( "deleteRenderBuffer" )    
        .staticmethod( "discardDeletedRenderBuffers" )    
        .staticmethod( "flushDeletedRenderBuffers" )    
        .staticmethod( "getMaxSamples" );

}
