// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "Texture2D.pypp.hpp"

namespace bp = boost::python;

struct Texture2D_wrapper : osg::Texture2D, bp::wrapper< osg::Texture2D > {

    Texture2D_wrapper( )
    : osg::Texture2D( )
      , bp::wrapper< osg::Texture2D >(){
        // null constructor
    
    }

    Texture2D_wrapper(::osg::Image * image )
    : osg::Texture2D( boost::python::ptr(image) )
      , bp::wrapper< osg::Texture2D >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::Texture2D::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::Texture2D::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Texture2D::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Texture2D::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Texture2D::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Texture2D::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Texture2D::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Texture2D::cloneType( );
    }

    virtual ::osg::Image * getImage( unsigned int arg0 ) {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::Texture2D::getImage( arg0 );
        }
    }
    
    ::osg::Image * default_getImage( unsigned int arg0 ) {
        return osg::Texture2D::getImage( arg0 );
    }

    virtual ::osg::Image const * getImage( unsigned int arg0 ) const  {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::Texture2D::getImage( arg0 );
        }
    }
    
    ::osg::Image const * default_getImage( unsigned int arg0 ) const  {
        return osg::Texture2D::getImage( arg0 );
    }

    virtual unsigned int getNumImages(  ) const  {
        if( bp::override func_getNumImages = this->get_override( "getNumImages" ) )
            return func_getNumImages(  );
        else{
            return this->osg::Texture2D::getNumImages(  );
        }
    }
    
    unsigned int default_getNumImages(  ) const  {
        return osg::Texture2D::getNumImages( );
    }

    virtual int getTextureDepth(  ) const  {
        if( bp::override func_getTextureDepth = this->get_override( "getTextureDepth" ) )
            return func_getTextureDepth(  );
        else{
            return this->osg::Texture2D::getTextureDepth(  );
        }
    }
    
    int default_getTextureDepth(  ) const  {
        return osg::Texture2D::getTextureDepth( );
    }

    virtual int getTextureHeight(  ) const  {
        if( bp::override func_getTextureHeight = this->get_override( "getTextureHeight" ) )
            return func_getTextureHeight(  );
        else{
            return this->osg::Texture2D::getTextureHeight(  );
        }
    }
    
    int default_getTextureHeight(  ) const  {
        return osg::Texture2D::getTextureHeight( );
    }

    virtual ::GLenum getTextureTarget(  ) const  {
        if( bp::override func_getTextureTarget = this->get_override( "getTextureTarget" ) )
            return func_getTextureTarget(  );
        else{
            return this->osg::Texture2D::getTextureTarget(  );
        }
    }
    
    ::GLenum default_getTextureTarget(  ) const  {
        return osg::Texture2D::getTextureTarget( );
    }

    virtual int getTextureWidth(  ) const  {
        if( bp::override func_getTextureWidth = this->get_override( "getTextureWidth" ) )
            return func_getTextureWidth(  );
        else{
            return this->osg::Texture2D::getTextureWidth(  );
        }
    }
    
    int default_getTextureWidth(  ) const  {
        return osg::Texture2D::getTextureWidth( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Texture2D::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Texture2D::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Texture2D::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Texture2D::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Texture2D::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Texture2D::libraryName( );
    }

    virtual void setImage( unsigned int arg0, ::osg::Image * image ) {
        if( bp::override func_setImage = this->get_override( "setImage" ) )
            func_setImage( arg0, boost::python::ptr(image) );
        else{
            this->osg::Texture2D::setImage( arg0, boost::python::ptr(image) );
        }
    }
    
    void default_setImage( unsigned int arg0, ::osg::Image * image ) {
        osg::Texture2D::setImage( arg0, boost::python::ptr(image) );
    }

    virtual ::osg::Texture * asTexture(  ) {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::Texture::asTexture(  );
        }
    }
    
    ::osg::Texture * default_asTexture(  ) {
        return osg::Texture::asTexture( );
    }

    virtual ::osg::Texture const * asTexture(  ) const  {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::Texture::asTexture(  );
        }
    }
    
    ::osg::Texture const * default_asTexture(  ) const  {
        return osg::Texture::asTexture( );
    }

    virtual bool checkValidityOfAssociatedModes( ::osg::State & arg0 ) const  {
        if( bp::override func_checkValidityOfAssociatedModes = this->get_override( "checkValidityOfAssociatedModes" ) )
            return func_checkValidityOfAssociatedModes( boost::ref(arg0) );
        else{
            return this->osg::StateAttribute::checkValidityOfAssociatedModes( boost::ref(arg0) );
        }
    }
    
    bool default_checkValidityOfAssociatedModes( ::osg::State & arg0 ) const  {
        return osg::StateAttribute::checkValidityOfAssociatedModes( boost::ref(arg0) );
    }

    virtual void compileGLObjects( ::osg::State & state ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(state) );
        else{
            this->osg::Texture::compileGLObjects( boost::ref(state) );
        }
    }
    
    void default_compileGLObjects( ::osg::State & state ) const  {
        osg::Texture::compileGLObjects( boost::ref(state) );
    }

    virtual unsigned int getMember(  ) const  {
        if( bp::override func_getMember = this->get_override( "getMember" ) )
            return func_getMember(  );
        else{
            return this->osg::StateAttribute::getMember(  );
        }
    }
    
    unsigned int default_getMember(  ) const  {
        return osg::StateAttribute::getMember( );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::Texture::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::Texture::getModeUsage( boost::ref(usage) );
    }

    virtual bool isTextureAttribute(  ) const  {
        if( bp::override func_isTextureAttribute = this->get_override( "isTextureAttribute" ) )
            return func_isTextureAttribute(  );
        else{
            return this->osg::Texture::isTextureAttribute(  );
        }
    }
    
    bool default_isTextureAttribute(  ) const  {
        return osg::Texture::isTextureAttribute( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Texture::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Texture::resizeGLObjectBuffers( maxSize );
    }

};

void register_Texture2D_class(){

    { //::osg::Texture2D
        typedef bp::class_< Texture2D_wrapper, bp::bases< osg::Texture >, osg::ref_ptr< ::osg::Texture2D >, boost::noncopyable > Texture2D_exposer_t;
        Texture2D_exposer_t Texture2D_exposer = Texture2D_exposer_t( "Texture2D", "\n Encapsulates OpenGL 2D texture functionality. Doesnt support cube maps,\n so ignore C{face} parameters.\n", bp::no_init );
        bp::scope Texture2D_scope( Texture2D_exposer );
        Texture2D_exposer.def( bp::init< >("\n Encapsulates OpenGL 2D texture functionality. Doesnt support cube maps,\n so ignore C{face} parameters.\n") );
        Texture2D_exposer.def( bp::init< osg::Image * >(( bp::arg("image") )) );
        bp::implicitly_convertible< osg::Image *, osg::Texture2D >();
        { //::osg::Texture2D::apply
        
            typedef void ( ::osg::Texture2D::*apply_function_type )( ::osg::State & ) const;
            typedef void ( Texture2D_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            Texture2D_exposer.def( 
                "apply"
                , apply_function_type(&::osg::Texture2D::apply)
                , default_apply_function_type(&Texture2D_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::Texture2D::className
        
            typedef char const * ( ::osg::Texture2D::*className_function_type )(  ) const;
            typedef char const * ( Texture2D_wrapper::*default_className_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "className"
                , className_function_type(&::osg::Texture2D::className)
                , default_className_function_type(&Texture2D_wrapper::default_className) );
        
        }
        { //::osg::Texture2D::clone
        
            typedef ::osg::Object * ( ::osg::Texture2D::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( Texture2D_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            Texture2D_exposer.def( 
                "clone"
                , clone_function_type(&::osg::Texture2D::clone)
                , default_clone_function_type(&Texture2D_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Texture2D::cloneType
        
            typedef ::osg::Object * ( ::osg::Texture2D::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( Texture2D_wrapper::*default_cloneType_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::Texture2D::cloneType)
                , default_cloneType_function_type(&Texture2D_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Texture2D::copyTexImage2D
        
            typedef void ( ::osg::Texture2D::*copyTexImage2D_function_type )( ::osg::State &,int,int,int,int ) ;
            
            Texture2D_exposer.def( 
                "copyTexImage2D"
                , copyTexImage2D_function_type( &::osg::Texture2D::copyTexImage2D )
                , ( bp::arg("state"), bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") )
                , " Copies pixels into a 2D texture image, as per glCopyTexImage2D.\n Creates an OpenGL texture object from the current OpenGL background\n framebuffer contents at position C{x,} C{y} with width C{width} and\n height C{height.} C{width} and C{height} must be a power of two." );
        
        }
        { //::osg::Texture2D::copyTexSubImage2D
        
            typedef void ( ::osg::Texture2D::*copyTexSubImage2D_function_type )( ::osg::State &,int,int,int,int,int,int ) ;
            
            Texture2D_exposer.def( 
                "copyTexSubImage2D"
                , copyTexSubImage2D_function_type( &::osg::Texture2D::copyTexSubImage2D )
                , ( bp::arg("state"), bp::arg("xoffset"), bp::arg("yoffset"), bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") )
                , " Copies a two-dimensional texture subimage, as per\n glCopyTexSubImage2D. Updates a portion of an existing OpenGL\n texture object from the current OpenGL background framebuffer\n contents at position C{x,} C{y} with width C{width} and height\n C{height.} Loads framebuffer data into the texture using offsets\n C{xoffset} and C{yoffset.} C{width} and C{height} must be powers\n of two." );
        
        }
        { //::osg::Texture2D::getImage
        
            typedef ::osg::Image * ( ::osg::Texture2D::*getImage_function_type )(  ) ;
            
            Texture2D_exposer.def( 
                "getImage"
                , getImage_function_type( &::osg::Texture2D::getImage )
                , bp::return_internal_reference< >()
                , " Gets the texture image." );
        
        }
        { //::osg::Texture2D::getImage
        
            typedef ::osg::Image const * ( ::osg::Texture2D::*getImage_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "getImage"
                , getImage_function_type( &::osg::Texture2D::getImage )
                , bp::return_internal_reference< >()
                , " Gets the const texture image." );
        
        }
        { //::osg::Texture2D::getImage
        
            typedef ::osg::Image * ( ::osg::Texture2D::*getImage_function_type )( unsigned int ) ;
            typedef ::osg::Image * ( Texture2D_wrapper::*default_getImage_function_type )( unsigned int ) ;
            
            Texture2D_exposer.def( 
                "getImage"
                , getImage_function_type(&::osg::Texture2D::getImage)
                , default_getImage_function_type(&Texture2D_wrapper::default_getImage)
                , ( bp::arg("arg0") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture2D::getImage
        
            typedef ::osg::Image const * ( ::osg::Texture2D::*getImage_function_type )( unsigned int ) const;
            typedef ::osg::Image const * ( Texture2D_wrapper::*default_getImage_function_type )( unsigned int ) const;
            
            Texture2D_exposer.def( 
                "getImage"
                , getImage_function_type(&::osg::Texture2D::getImage)
                , default_getImage_function_type(&Texture2D_wrapper::default_getImage)
                , ( bp::arg("arg0") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture2D::getModifiedCount
        
            typedef unsigned int & ( ::osg::Texture2D::*getModifiedCount_function_type )( unsigned int ) const;
            
            Texture2D_exposer.def( 
                "getModifiedCount"
                , getModifiedCount_function_type( &::osg::Texture2D::getModifiedCount )
                , ( bp::arg("contextID") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Texture2D::getNumImages
        
            typedef unsigned int ( ::osg::Texture2D::*getNumImages_function_type )(  ) const;
            typedef unsigned int ( Texture2D_wrapper::*default_getNumImages_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "getNumImages"
                , getNumImages_function_type(&::osg::Texture2D::getNumImages)
                , default_getNumImages_function_type(&Texture2D_wrapper::default_getNumImages) );
        
        }
        { //::osg::Texture2D::getNumMipmapLevels
        
            typedef unsigned int ( ::osg::Texture2D::*getNumMipmapLevels_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "getNumMipmapLevels"
                , getNumMipmapLevels_function_type( &::osg::Texture2D::getNumMipmapLevels )
                , " Gets the number of mipmap levels created." );
        
        }
        { //::osg::Texture2D::getSubloadCallback
        
            typedef ::osg::Texture2D::SubloadCallback * ( ::osg::Texture2D::*getSubloadCallback_function_type )(  ) ;
            
            Texture2D_exposer.def( 
                "getSubloadCallback"
                , getSubloadCallback_function_type( &::osg::Texture2D::getSubloadCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture2D::getSubloadCallback
        
            typedef ::osg::Texture2D::SubloadCallback const * ( ::osg::Texture2D::*getSubloadCallback_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "getSubloadCallback"
                , getSubloadCallback_function_type( &::osg::Texture2D::getSubloadCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture2D::getTextureDepth
        
            typedef int ( ::osg::Texture2D::*getTextureDepth_function_type )(  ) const;
            typedef int ( Texture2D_wrapper::*default_getTextureDepth_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "getTextureDepth"
                , getTextureDepth_function_type(&::osg::Texture2D::getTextureDepth)
                , default_getTextureDepth_function_type(&Texture2D_wrapper::default_getTextureDepth) );
        
        }
        { //::osg::Texture2D::getTextureHeight
        
            typedef int ( ::osg::Texture2D::*getTextureHeight_function_type )(  ) const;
            typedef int ( Texture2D_wrapper::*default_getTextureHeight_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "getTextureHeight"
                , getTextureHeight_function_type(&::osg::Texture2D::getTextureHeight)
                , default_getTextureHeight_function_type(&Texture2D_wrapper::default_getTextureHeight) );
        
        }
        { //::osg::Texture2D::getTextureTarget
        
            typedef ::GLenum ( ::osg::Texture2D::*getTextureTarget_function_type )(  ) const;
            typedef ::GLenum ( Texture2D_wrapper::*default_getTextureTarget_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "getTextureTarget"
                , getTextureTarget_function_type(&::osg::Texture2D::getTextureTarget)
                , default_getTextureTarget_function_type(&Texture2D_wrapper::default_getTextureTarget) );
        
        }
        { //::osg::Texture2D::getTextureWidth
        
            typedef int ( ::osg::Texture2D::*getTextureWidth_function_type )(  ) const;
            typedef int ( Texture2D_wrapper::*default_getTextureWidth_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "getTextureWidth"
                , getTextureWidth_function_type(&::osg::Texture2D::getTextureWidth)
                , default_getTextureWidth_function_type(&Texture2D_wrapper::default_getTextureWidth) );
        
        }
        { //::osg::Texture2D::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::Texture2D::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( Texture2D_wrapper::*default_getType_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "getType"
                , getType_function_type(&::osg::Texture2D::getType)
                , default_getType_function_type(&Texture2D_wrapper::default_getType) );
        
        }
        { //::osg::Texture2D::isSameKindAs
        
            typedef bool ( ::osg::Texture2D::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( Texture2D_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            Texture2D_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::Texture2D::isSameKindAs)
                , default_isSameKindAs_function_type(&Texture2D_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Texture2D::libraryName
        
            typedef char const * ( ::osg::Texture2D::*libraryName_function_type )(  ) const;
            typedef char const * ( Texture2D_wrapper::*default_libraryName_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::Texture2D::libraryName)
                , default_libraryName_function_type(&Texture2D_wrapper::default_libraryName) );
        
        }
        { //::osg::Texture2D::setImage
        
            typedef void ( ::osg::Texture2D::*setImage_function_type )( ::osg::Image * ) ;
            
            Texture2D_exposer.def( 
                "setImage"
                , setImage_function_type( &::osg::Texture2D::setImage )
                , ( bp::arg("image") )
                , " Sets the texture image." );
        
        }
        { //::osg::Texture2D::setImage
        
            typedef void ( ::osg::Texture2D::*setImage_function_type )( unsigned int,::osg::Image * ) ;
            typedef void ( Texture2D_wrapper::*default_setImage_function_type )( unsigned int,::osg::Image * ) ;
            
            Texture2D_exposer.def( 
                "setImage"
                , setImage_function_type(&::osg::Texture2D::setImage)
                , default_setImage_function_type(&Texture2D_wrapper::default_setImage)
                , ( bp::arg("arg0"), bp::arg("image") ) );
        
        }
        { //::osg::Texture2D::setNumMipmapLevels
        
            typedef void ( ::osg::Texture2D::*setNumMipmapLevels_function_type )( unsigned int ) const;
            
            Texture2D_exposer.def( 
                "setNumMipmapLevels"
                , setNumMipmapLevels_function_type( &::osg::Texture2D::setNumMipmapLevels )
                , ( bp::arg("num") )
                , " Helper function. Sets the number of mipmap levels created for this\n texture. Should only be called within an osg::Texture::apply(), or\n during a custom OpenGL texture load." );
        
        }
        { //::osg::Texture2D::setSubloadCallback
        
            typedef void ( ::osg::Texture2D::*setSubloadCallback_function_type )( ::osg::Texture2D::SubloadCallback * ) ;
            
            Texture2D_exposer.def( 
                "setSubloadCallback"
                , setSubloadCallback_function_type( &::osg::Texture2D::setSubloadCallback )
                , ( bp::arg("cb") ) );
        
        }
        { //::osg::Texture2D::setTextureHeight
        
            typedef void ( ::osg::Texture2D::*setTextureHeight_function_type )( int ) ;
            
            Texture2D_exposer.def( 
                "setTextureHeight"
                , setTextureHeight_function_type( &::osg::Texture2D::setTextureHeight )
                , ( bp::arg("height") ) );
        
        }
        { //::osg::Texture2D::setTextureSize
        
            typedef void ( ::osg::Texture2D::*setTextureSize_function_type )( int,int ) const;
            
            Texture2D_exposer.def( 
                "setTextureSize"
                , setTextureSize_function_type( &::osg::Texture2D::setTextureSize )
                , ( bp::arg("width"), bp::arg("height") )
                , " Sets the texture width and height. If width or height are zero,\n calculate the respective value from the source image size." );
        
        }
        { //::osg::Texture2D::setTextureWidth
        
            typedef void ( ::osg::Texture2D::*setTextureWidth_function_type )( int ) ;
            
            Texture2D_exposer.def( 
                "setTextureWidth"
                , setTextureWidth_function_type( &::osg::Texture2D::setTextureWidth )
                , ( bp::arg("width") ) );
        
        }
        { //::osg::Texture::asTexture
        
            typedef ::osg::Texture * ( ::osg::Texture::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( Texture2D_wrapper::*default_asTexture_function_type )(  ) ;
            
            Texture2D_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::Texture::asTexture)
                , default_asTexture_function_type(&Texture2D_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture::asTexture
        
            typedef ::osg::Texture const * ( ::osg::Texture::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( Texture2D_wrapper::*default_asTexture_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::Texture::asTexture)
                , default_asTexture_function_type(&Texture2D_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( Texture2D_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            Texture2D_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&Texture2D_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Texture::compileGLObjects
        
            typedef void ( ::osg::Texture::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( Texture2D_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            Texture2D_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::Texture::compileGLObjects)
                , default_compileGLObjects_function_type(&Texture2D_wrapper::default_compileGLObjects)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type )(  ) const;
            typedef unsigned int ( Texture2D_wrapper::*default_getMember_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&Texture2D_wrapper::default_getMember) );
        
        }
        { //::osg::Texture::getModeUsage
        
            typedef bool ( ::osg::Texture::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( Texture2D_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            Texture2D_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::Texture::getModeUsage)
                , default_getModeUsage_function_type(&Texture2D_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::Texture::isTextureAttribute
        
            typedef bool ( ::osg::Texture::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( Texture2D_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            Texture2D_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::Texture::isTextureAttribute)
                , default_isTextureAttribute_function_type(&Texture2D_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::Texture::resizeGLObjectBuffers
        
            typedef void ( ::osg::Texture::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( Texture2D_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            Texture2D_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Texture::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&Texture2D_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
    }

}
