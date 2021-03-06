// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "Texture3D.pypp.hpp"

namespace bp = boost::python;

struct Texture3D_wrapper : osg::Texture3D, bp::wrapper< osg::Texture3D > {

    Texture3D_wrapper( )
    : osg::Texture3D( )
      , bp::wrapper< osg::Texture3D >(){
        // null constructor
    
    }

    Texture3D_wrapper(::osg::Image * image )
    : osg::Texture3D( boost::python::ptr(image) )
      , bp::wrapper< osg::Texture3D >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::Texture3D::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::Texture3D::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Texture3D::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Texture3D::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Texture3D::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Texture3D::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Texture3D::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Texture3D::cloneType( );
    }

    virtual ::osg::Image * getImage( unsigned int arg0 ) {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::Texture3D::getImage( arg0 );
        }
    }
    
    ::osg::Image * default_getImage( unsigned int arg0 ) {
        return osg::Texture3D::getImage( arg0 );
    }

    virtual ::osg::Image const * getImage( unsigned int arg0 ) const  {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::Texture3D::getImage( arg0 );
        }
    }
    
    ::osg::Image const * default_getImage( unsigned int arg0 ) const  {
        return osg::Texture3D::getImage( arg0 );
    }

    virtual unsigned int getNumImages(  ) const  {
        if( bp::override func_getNumImages = this->get_override( "getNumImages" ) )
            return func_getNumImages(  );
        else{
            return this->osg::Texture3D::getNumImages(  );
        }
    }
    
    unsigned int default_getNumImages(  ) const  {
        return osg::Texture3D::getNumImages( );
    }

    virtual int getTextureDepth(  ) const  {
        if( bp::override func_getTextureDepth = this->get_override( "getTextureDepth" ) )
            return func_getTextureDepth(  );
        else{
            return this->osg::Texture3D::getTextureDepth(  );
        }
    }
    
    int default_getTextureDepth(  ) const  {
        return osg::Texture3D::getTextureDepth( );
    }

    virtual int getTextureHeight(  ) const  {
        if( bp::override func_getTextureHeight = this->get_override( "getTextureHeight" ) )
            return func_getTextureHeight(  );
        else{
            return this->osg::Texture3D::getTextureHeight(  );
        }
    }
    
    int default_getTextureHeight(  ) const  {
        return osg::Texture3D::getTextureHeight( );
    }

    virtual ::GLenum getTextureTarget(  ) const  {
        if( bp::override func_getTextureTarget = this->get_override( "getTextureTarget" ) )
            return func_getTextureTarget(  );
        else{
            return this->osg::Texture3D::getTextureTarget(  );
        }
    }
    
    ::GLenum default_getTextureTarget(  ) const  {
        return osg::Texture3D::getTextureTarget( );
    }

    virtual int getTextureWidth(  ) const  {
        if( bp::override func_getTextureWidth = this->get_override( "getTextureWidth" ) )
            return func_getTextureWidth(  );
        else{
            return this->osg::Texture3D::getTextureWidth(  );
        }
    }
    
    int default_getTextureWidth(  ) const  {
        return osg::Texture3D::getTextureWidth( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Texture3D::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Texture3D::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Texture3D::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Texture3D::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Texture3D::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Texture3D::libraryName( );
    }

    virtual void setImage( unsigned int arg0, ::osg::Image * image ) {
        if( bp::override func_setImage = this->get_override( "setImage" ) )
            func_setImage( arg0, boost::python::ptr(image) );
        else{
            this->osg::Texture3D::setImage( arg0, boost::python::ptr(image) );
        }
    }
    
    void default_setImage( unsigned int arg0, ::osg::Image * image ) {
        osg::Texture3D::setImage( arg0, boost::python::ptr(image) );
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

static void lowestCommonDenominator_acefee199464937642a20017e378951d( ::osg::Texture3D::Extensions & inst, ::osg::Texture3D::Extensions & rhs ){
    inst.lowestCommonDenominator(rhs);
}

void register_Texture3D_class(){

    { //::osg::Texture3D
        typedef bp::class_< Texture3D_wrapper, bp::bases< osg::Texture >, osg::ref_ptr< ::osg::Texture3D >, boost::noncopyable > Texture3D_exposer_t;
        Texture3D_exposer_t Texture3D_exposer = Texture3D_exposer_t( "Texture3D", "\n Encapsulates OpenGL 3D texture functionality. Doesnt support cube maps,\n so ignore C{face} parameters.\n", bp::no_init );
        bp::scope Texture3D_scope( Texture3D_exposer );
        { //::osg::Texture3D::Extensions
            typedef bp::class_< osg::Texture3D::Extensions, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::Texture3D::Extensions > > Extensions_exposer_t;
            Extensions_exposer_t Extensions_exposer = Extensions_exposer_t( "Extensions", "\n Encapsulates queries of extension availability, obtains extension\n function pointers, and provides convenience wrappers for\n calling extension functions.\n", bp::no_init );
            bp::scope Extensions_scope( Extensions_exposer );
            Extensions_exposer.def( bp::init< unsigned int >(( bp::arg("contextID") ), "\n Encapsulates queries of extension availability, obtains extension\n function pointers, and provides convenience wrappers for\n calling extension functions.\n") );
            bp::implicitly_convertible< unsigned int, osg::Texture3D::Extensions >();
            { //::osg::Texture3D::Extensions::isCompressedTexImage3DSupported
            
                typedef bool ( ::osg::Texture3D::Extensions::*isCompressedTexImage3DSupported_function_type )(  ) const;
                
                Extensions_exposer.def( 
                    "isCompressedTexImage3DSupported"
                    , isCompressedTexImage3DSupported_function_type( &::osg::Texture3D::Extensions::isCompressedTexImage3DSupported ) );
            
            }
            { //::osg::Texture3D::Extensions::isCompressedTexSubImage3DSupported
            
                typedef bool ( ::osg::Texture3D::Extensions::*isCompressedTexSubImage3DSupported_function_type )(  ) const;
                
                Extensions_exposer.def( 
                    "isCompressedTexSubImage3DSupported"
                    , isCompressedTexSubImage3DSupported_function_type( &::osg::Texture3D::Extensions::isCompressedTexSubImage3DSupported ) );
            
            }
            { //::osg::Texture3D::Extensions::isTexture3DFast
            
                typedef bool ( ::osg::Texture3D::Extensions::*isTexture3DFast_function_type )(  ) const;
                
                Extensions_exposer.def( 
                    "isTexture3DFast"
                    , isTexture3DFast_function_type( &::osg::Texture3D::Extensions::isTexture3DFast ) );
            
            }
            { //::osg::Texture3D::Extensions::isTexture3DSupported
            
                typedef bool ( ::osg::Texture3D::Extensions::*isTexture3DSupported_function_type )(  ) const;
                
                Extensions_exposer.def( 
                    "isTexture3DSupported"
                    , isTexture3DSupported_function_type( &::osg::Texture3D::Extensions::isTexture3DSupported ) );
            
            }
            { //::osg::Texture3D::Extensions::lowestCommonDenominator
            
                typedef void ( *lowestCommonDenominator_function_type )( ::osg::Texture3D::Extensions &,::osg::Texture3D::Extensions & );
                
                Extensions_exposer.def( 
                    "lowestCommonDenominator"
                    , lowestCommonDenominator_function_type( &lowestCommonDenominator_acefee199464937642a20017e378951d )
                    , ( bp::arg("inst"), bp::arg("rhs") ) );
            
            }
            { //::osg::Texture3D::Extensions::maxTexture3DSize
            
                typedef ::GLint ( ::osg::Texture3D::Extensions::*maxTexture3DSize_function_type )(  ) const;
                
                Extensions_exposer.def( 
                    "maxTexture3DSize"
                    , maxTexture3DSize_function_type( &::osg::Texture3D::Extensions::maxTexture3DSize ) );
            
            }
            { //::osg::Texture3D::Extensions::setMaxTexture3DSize
            
                typedef void ( ::osg::Texture3D::Extensions::*setMaxTexture3DSize_function_type )( ::GLint ) ;
                
                Extensions_exposer.def( 
                    "setMaxTexture3DSize"
                    , setMaxTexture3DSize_function_type( &::osg::Texture3D::Extensions::setMaxTexture3DSize )
                    , ( bp::arg("maxsize") ) );
            
            }
            { //::osg::Texture3D::Extensions::setTexture3DFast
            
                typedef void ( ::osg::Texture3D::Extensions::*setTexture3DFast_function_type )( bool ) ;
                
                Extensions_exposer.def( 
                    "setTexture3DFast"
                    , setTexture3DFast_function_type( &::osg::Texture3D::Extensions::setTexture3DFast )
                    , ( bp::arg("flag") ) );
            
            }
            { //::osg::Texture3D::Extensions::setTexture3DSupported
            
                typedef void ( ::osg::Texture3D::Extensions::*setTexture3DSupported_function_type )( bool ) ;
                
                Extensions_exposer.def( 
                    "setTexture3DSupported"
                    , setTexture3DSupported_function_type( &::osg::Texture3D::Extensions::setTexture3DSupported )
                    , ( bp::arg("flag") ) );
            
            }
            { //::osg::Texture3D::Extensions::setupGLExtensions
            
                typedef void ( ::osg::Texture3D::Extensions::*setupGLExtensions_function_type )( unsigned int ) ;
                
                Extensions_exposer.def( 
                    "setupGLExtensions"
                    , setupGLExtensions_function_type( &::osg::Texture3D::Extensions::setupGLExtensions )
                    , ( bp::arg("contextID") ) );
            
            }
        }
        Texture3D_exposer.def( bp::init< >("\n Encapsulates OpenGL 3D texture functionality. Doesnt support cube maps,\n so ignore C{face} parameters.\n") );
        Texture3D_exposer.def( bp::init< osg::Image * >(( bp::arg("image") )) );
        bp::implicitly_convertible< osg::Image *, osg::Texture3D >();
        { //::osg::Texture3D::apply
        
            typedef void ( ::osg::Texture3D::*apply_function_type )( ::osg::State & ) const;
            typedef void ( Texture3D_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            Texture3D_exposer.def( 
                "apply"
                , apply_function_type(&::osg::Texture3D::apply)
                , default_apply_function_type(&Texture3D_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::Texture3D::className
        
            typedef char const * ( ::osg::Texture3D::*className_function_type )(  ) const;
            typedef char const * ( Texture3D_wrapper::*default_className_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "className"
                , className_function_type(&::osg::Texture3D::className)
                , default_className_function_type(&Texture3D_wrapper::default_className) );
        
        }
        { //::osg::Texture3D::clone
        
            typedef ::osg::Object * ( ::osg::Texture3D::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( Texture3D_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            Texture3D_exposer.def( 
                "clone"
                , clone_function_type(&::osg::Texture3D::clone)
                , default_clone_function_type(&Texture3D_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Texture3D::cloneType
        
            typedef ::osg::Object * ( ::osg::Texture3D::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( Texture3D_wrapper::*default_cloneType_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::Texture3D::cloneType)
                , default_cloneType_function_type(&Texture3D_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Texture3D::copyTexSubImage3D
        
            typedef void ( ::osg::Texture3D::*copyTexSubImage3D_function_type )( ::osg::State &,int,int,int,int,int,int,int ) ;
            
            Texture3D_exposer.def( 
                "copyTexSubImage3D"
                , copyTexSubImage3D_function_type( &::osg::Texture3D::copyTexSubImage3D )
                , ( bp::arg("state"), bp::arg("xoffset"), bp::arg("yoffset"), bp::arg("zoffset"), bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") )
                , "\n Copies a two-dimensional texture subimage, as per\n glCopyTexSubImage3D. Updates a portion of an existing OpenGL\n texture object from the current OpenGL background framebuffer\n contents at position C{x,} C{y} with width C{width} and height\n C{height.} Loads framebuffer data into the texture using offsets\n C{xoffset,} C{yoffset,} and C{zoffset.} C{width} and C{height}\n must be powers of two.\n" );
        
        }
        { //::osg::Texture3D::getExtensions
        
            typedef ::osg::Texture3D::Extensions * ( *getExtensions_function_type )( unsigned int,bool );
            
            Texture3D_exposer.def( 
                "getExtensions"
                , getExtensions_function_type( &::osg::Texture3D::getExtensions )
                , ( bp::arg("contextID"), bp::arg("createIfNotInitalized") )
                , bp::return_internal_reference< >()
                , "\n Encapsulates queries of extension availability, obtains extension\n function pointers, and provides convenience wrappers for\n calling extension functions.\n" );
        
        }
        { //::osg::Texture3D::getImage
        
            typedef ::osg::Image * ( ::osg::Texture3D::*getImage_function_type )(  ) ;
            
            Texture3D_exposer.def( 
                "getImage"
                , getImage_function_type( &::osg::Texture3D::getImage )
                , bp::return_internal_reference< >()
                , "\n Gets the texture image.\n" );
        
        }
        { //::osg::Texture3D::getImage
        
            typedef ::osg::Image const * ( ::osg::Texture3D::*getImage_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "getImage"
                , getImage_function_type( &::osg::Texture3D::getImage )
                , bp::return_internal_reference< >()
                , "\n Gets the const texture image.\n" );
        
        }
        { //::osg::Texture3D::getImage
        
            typedef ::osg::Image * ( ::osg::Texture3D::*getImage_function_type )( unsigned int ) ;
            typedef ::osg::Image * ( Texture3D_wrapper::*default_getImage_function_type )( unsigned int ) ;
            
            Texture3D_exposer.def( 
                "getImage"
                , getImage_function_type(&::osg::Texture3D::getImage)
                , default_getImage_function_type(&Texture3D_wrapper::default_getImage)
                , ( bp::arg("arg0") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture3D::getImage
        
            typedef ::osg::Image const * ( ::osg::Texture3D::*getImage_function_type )( unsigned int ) const;
            typedef ::osg::Image const * ( Texture3D_wrapper::*default_getImage_function_type )( unsigned int ) const;
            
            Texture3D_exposer.def( 
                "getImage"
                , getImage_function_type(&::osg::Texture3D::getImage)
                , default_getImage_function_type(&Texture3D_wrapper::default_getImage)
                , ( bp::arg("arg0") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture3D::getModifiedCount
        
            typedef unsigned int & ( ::osg::Texture3D::*getModifiedCount_function_type )( unsigned int ) const;
            
            Texture3D_exposer.def( 
                "getModifiedCount"
                , getModifiedCount_function_type( &::osg::Texture3D::getModifiedCount )
                , ( bp::arg("contextID") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Texture3D::getNumImages
        
            typedef unsigned int ( ::osg::Texture3D::*getNumImages_function_type )(  ) const;
            typedef unsigned int ( Texture3D_wrapper::*default_getNumImages_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "getNumImages"
                , getNumImages_function_type(&::osg::Texture3D::getNumImages)
                , default_getNumImages_function_type(&Texture3D_wrapper::default_getNumImages) );
        
        }
        { //::osg::Texture3D::getNumMipmapLevels
        
            typedef unsigned int ( ::osg::Texture3D::*getNumMipmapLevels_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "getNumMipmapLevels"
                , getNumMipmapLevels_function_type( &::osg::Texture3D::getNumMipmapLevels )
                , "\n Gets the number of mipmap levels created.\n" );
        
        }
        { //::osg::Texture3D::getSubloadCallback
        
            typedef ::osg::Texture3D::SubloadCallback * ( ::osg::Texture3D::*getSubloadCallback_function_type )(  ) ;
            
            Texture3D_exposer.def( 
                "getSubloadCallback"
                , getSubloadCallback_function_type( &::osg::Texture3D::getSubloadCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture3D::getSubloadCallback
        
            typedef ::osg::Texture3D::SubloadCallback const * ( ::osg::Texture3D::*getSubloadCallback_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "getSubloadCallback"
                , getSubloadCallback_function_type( &::osg::Texture3D::getSubloadCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture3D::getTextureDepth
        
            typedef int ( ::osg::Texture3D::*getTextureDepth_function_type )(  ) const;
            typedef int ( Texture3D_wrapper::*default_getTextureDepth_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "getTextureDepth"
                , getTextureDepth_function_type(&::osg::Texture3D::getTextureDepth)
                , default_getTextureDepth_function_type(&Texture3D_wrapper::default_getTextureDepth) );
        
        }
        { //::osg::Texture3D::getTextureHeight
        
            typedef int ( ::osg::Texture3D::*getTextureHeight_function_type )(  ) const;
            typedef int ( Texture3D_wrapper::*default_getTextureHeight_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "getTextureHeight"
                , getTextureHeight_function_type(&::osg::Texture3D::getTextureHeight)
                , default_getTextureHeight_function_type(&Texture3D_wrapper::default_getTextureHeight) );
        
        }
        { //::osg::Texture3D::getTextureSize
        
            typedef void ( ::osg::Texture3D::*getTextureSize_function_type )( int &,int &,int & ) const;
            
            Texture3D_exposer.def( 
                "getTextureSize"
                , getTextureSize_function_type( &::osg::Texture3D::getTextureSize )
                , ( bp::arg("width"), bp::arg("height"), bp::arg("depth") )
                , "\n Gets the texture subload width.\n" );
        
        }
        { //::osg::Texture3D::getTextureTarget
        
            typedef ::GLenum ( ::osg::Texture3D::*getTextureTarget_function_type )(  ) const;
            typedef ::GLenum ( Texture3D_wrapper::*default_getTextureTarget_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "getTextureTarget"
                , getTextureTarget_function_type(&::osg::Texture3D::getTextureTarget)
                , default_getTextureTarget_function_type(&Texture3D_wrapper::default_getTextureTarget) );
        
        }
        { //::osg::Texture3D::getTextureWidth
        
            typedef int ( ::osg::Texture3D::*getTextureWidth_function_type )(  ) const;
            typedef int ( Texture3D_wrapper::*default_getTextureWidth_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "getTextureWidth"
                , getTextureWidth_function_type(&::osg::Texture3D::getTextureWidth)
                , default_getTextureWidth_function_type(&Texture3D_wrapper::default_getTextureWidth) );
        
        }
        { //::osg::Texture3D::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::Texture3D::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( Texture3D_wrapper::*default_getType_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "getType"
                , getType_function_type(&::osg::Texture3D::getType)
                , default_getType_function_type(&Texture3D_wrapper::default_getType) );
        
        }
        { //::osg::Texture3D::isSameKindAs
        
            typedef bool ( ::osg::Texture3D::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( Texture3D_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            Texture3D_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::Texture3D::isSameKindAs)
                , default_isSameKindAs_function_type(&Texture3D_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Texture3D::libraryName
        
            typedef char const * ( ::osg::Texture3D::*libraryName_function_type )(  ) const;
            typedef char const * ( Texture3D_wrapper::*default_libraryName_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::Texture3D::libraryName)
                , default_libraryName_function_type(&Texture3D_wrapper::default_libraryName) );
        
        }
        { //::osg::Texture3D::setExtensions
        
            typedef void ( *setExtensions_function_type )( unsigned int,::osg::Texture3D::Extensions * );
            
            Texture3D_exposer.def( 
                "setExtensions"
                , setExtensions_function_type( &::osg::Texture3D::setExtensions )
                , ( bp::arg("contextID"), bp::arg("extensions") )
                , "\n Overrides Extensions objects across graphics contexts. Typically\n used to ensure the same lowest common denominator of extensions\n on systems with different graphics pipes.\n" );
        
        }
        { //::osg::Texture3D::setImage
        
            typedef void ( ::osg::Texture3D::*setImage_function_type )( ::osg::Image * ) ;
            
            Texture3D_exposer.def( 
                "setImage"
                , setImage_function_type( &::osg::Texture3D::setImage )
                , ( bp::arg("image") )
                , "\n Sets the texture image.\n" );
        
        }
        { //::osg::Texture3D::setImage
        
            typedef void ( ::osg::Texture3D::*setImage_function_type )( unsigned int,::osg::Image * ) ;
            typedef void ( Texture3D_wrapper::*default_setImage_function_type )( unsigned int,::osg::Image * ) ;
            
            Texture3D_exposer.def( 
                "setImage"
                , setImage_function_type(&::osg::Texture3D::setImage)
                , default_setImage_function_type(&Texture3D_wrapper::default_setImage)
                , ( bp::arg("arg0"), bp::arg("image") ) );
        
        }
        { //::osg::Texture3D::setNumMipmapLevels
        
            typedef void ( ::osg::Texture3D::*setNumMipmapLevels_function_type )( unsigned int ) const;
            
            Texture3D_exposer.def( 
                "setNumMipmapLevels"
                , setNumMipmapLevels_function_type( &::osg::Texture3D::setNumMipmapLevels )
                , ( bp::arg("num") )
                , "\n Helper function. Sets the number of mipmap levels created for this\n texture. Should only be called within an osg::Texture::apply(), or\n during a custom OpenGL texture load.\n" );
        
        }
        { //::osg::Texture3D::setSubloadCallback
        
            typedef void ( ::osg::Texture3D::*setSubloadCallback_function_type )( ::osg::Texture3D::SubloadCallback * ) ;
            
            Texture3D_exposer.def( 
                "setSubloadCallback"
                , setSubloadCallback_function_type( &::osg::Texture3D::setSubloadCallback )
                , ( bp::arg("cb") ) );
        
        }
        { //::osg::Texture3D::setTextureDepth
        
            typedef void ( ::osg::Texture3D::*setTextureDepth_function_type )( int ) ;
            
            Texture3D_exposer.def( 
                "setTextureDepth"
                , setTextureDepth_function_type( &::osg::Texture3D::setTextureDepth )
                , ( bp::arg("depth") ) );
        
        }
        { //::osg::Texture3D::setTextureHeight
        
            typedef void ( ::osg::Texture3D::*setTextureHeight_function_type )( int ) ;
            
            Texture3D_exposer.def( 
                "setTextureHeight"
                , setTextureHeight_function_type( &::osg::Texture3D::setTextureHeight )
                , ( bp::arg("height") ) );
        
        }
        { //::osg::Texture3D::setTextureSize
        
            typedef void ( ::osg::Texture3D::*setTextureSize_function_type )( int,int,int ) const;
            
            Texture3D_exposer.def( 
                "setTextureSize"
                , setTextureSize_function_type( &::osg::Texture3D::setTextureSize )
                , ( bp::arg("width"), bp::arg("height"), bp::arg("depth") )
                , "\n Sets the texture width, height, and depth. If width, height, or\n depth are zero, calculate the respective value from the source\n image size.\n" );
        
        }
        { //::osg::Texture3D::setTextureWidth
        
            typedef void ( ::osg::Texture3D::*setTextureWidth_function_type )( int ) ;
            
            Texture3D_exposer.def( 
                "setTextureWidth"
                , setTextureWidth_function_type( &::osg::Texture3D::setTextureWidth )
                , ( bp::arg("width") ) );
        
        }
        { //::osg::Texture::asTexture
        
            typedef ::osg::Texture * ( ::osg::Texture::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( Texture3D_wrapper::*default_asTexture_function_type )(  ) ;
            
            Texture3D_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::Texture::asTexture)
                , default_asTexture_function_type(&Texture3D_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture::asTexture
        
            typedef ::osg::Texture const * ( ::osg::Texture::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( Texture3D_wrapper::*default_asTexture_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::Texture::asTexture)
                , default_asTexture_function_type(&Texture3D_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( Texture3D_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            Texture3D_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&Texture3D_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Texture::compileGLObjects
        
            typedef void ( ::osg::Texture::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( Texture3D_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            Texture3D_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::Texture::compileGLObjects)
                , default_compileGLObjects_function_type(&Texture3D_wrapper::default_compileGLObjects)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type )(  ) const;
            typedef unsigned int ( Texture3D_wrapper::*default_getMember_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&Texture3D_wrapper::default_getMember) );
        
        }
        { //::osg::Texture::getModeUsage
        
            typedef bool ( ::osg::Texture::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( Texture3D_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            Texture3D_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::Texture::getModeUsage)
                , default_getModeUsage_function_type(&Texture3D_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::Texture::isTextureAttribute
        
            typedef bool ( ::osg::Texture::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( Texture3D_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            Texture3D_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::Texture::isTextureAttribute)
                , default_isTextureAttribute_function_type(&Texture3D_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::Texture::resizeGLObjectBuffers
        
            typedef void ( ::osg::Texture::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( Texture3D_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            Texture3D_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Texture::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&Texture3D_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        Texture3D_exposer.staticmethod( "getExtensions" );
        Texture3D_exposer.staticmethod( "setExtensions" );
    }

}
