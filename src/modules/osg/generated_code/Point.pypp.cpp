// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "Point.pypp.hpp"

namespace bp = boost::python;

struct Point_wrapper : osg::Point, bp::wrapper< osg::Point > {

    Point_wrapper( )
    : osg::Point( )
      , bp::wrapper< osg::Point >(){
        // null constructor
    
    }

    Point_wrapper(float size )
    : osg::Point( size )
      , bp::wrapper< osg::Point >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::Point::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::Point::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Point::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Point::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Point::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Point::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Point::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Point::cloneType( );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::Point::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::Point::getModeUsage( boost::ref(usage) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Point::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Point::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Point::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Point::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Point::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Point::libraryName( );
    }

    virtual ::osg::Texture * asTexture(  ) {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::StateAttribute::asTexture(  );
        }
    }
    
    ::osg::Texture * default_asTexture(  ) {
        return osg::StateAttribute::asTexture( );
    }

    virtual ::osg::Texture const * asTexture(  ) const  {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::StateAttribute::asTexture(  );
        }
    }
    
    ::osg::Texture const * default_asTexture(  ) const  {
        return osg::StateAttribute::asTexture( );
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

    virtual void compileGLObjects( ::osg::State & arg0 ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(arg0) );
        else{
            this->osg::StateAttribute::compileGLObjects( boost::ref(arg0) );
        }
    }
    
    void default_compileGLObjects( ::osg::State & arg0 ) const  {
        osg::StateAttribute::compileGLObjects( boost::ref(arg0) );
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

    virtual bool isTextureAttribute(  ) const  {
        if( bp::override func_isTextureAttribute = this->get_override( "isTextureAttribute" ) )
            return func_isTextureAttribute(  );
        else{
            return this->osg::StateAttribute::isTextureAttribute(  );
        }
    }
    
    bool default_isTextureAttribute(  ) const  {
        return osg::StateAttribute::isTextureAttribute( );
    }

    virtual void resizeGLObjectBuffers( unsigned int arg0 ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( arg0 );
        else{
            this->osg::StateAttribute::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::StateAttribute::resizeGLObjectBuffers( arg0 );
    }

};

static void lowestCommonDenominator_8ae9c5332b2c65e56a1c6dad3b8ac5e6( ::osg::Point::Extensions & inst, ::osg::Point::Extensions & rhs ){
    inst.lowestCommonDenominator(rhs);
}

void register_Point_class(){

    { //::osg::Point
        typedef bp::class_< Point_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::Point >, boost::noncopyable > Point_exposer_t;
        Point_exposer_t Point_exposer = Point_exposer_t( "Point", "\n Point - encapsulates the OpenGL point smoothing and size state.\n", bp::no_init );
        bp::scope Point_scope( Point_exposer );
        { //::osg::Point::Extensions
            typedef bp::class_< osg::Point::Extensions, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::Point::Extensions > > Extensions_exposer_t;
            Extensions_exposer_t Extensions_exposer = Extensions_exposer_t( "Extensions", "\n Encapsulates queries of extension availability, obtains extension\n function pointers, and provides convenience wrappers for\n calling extension functions.\n", bp::no_init );
            bp::scope Extensions_scope( Extensions_exposer );
            Extensions_exposer.def( bp::init< unsigned int >(( bp::arg("contextID") ), "\n Encapsulates queries of extension availability, obtains extension\n function pointers, and provides convenience wrappers for\n calling extension functions.\n") );
            bp::implicitly_convertible< unsigned int, osg::Point::Extensions >();
            { //::osg::Point::Extensions::glPointParameterf
            
                typedef void ( ::osg::Point::Extensions::*glPointParameterf_function_type )( ::GLenum,::GLfloat ) const;
                
                Extensions_exposer.def( 
                    "glPointParameterf"
                    , glPointParameterf_function_type( &::osg::Point::Extensions::glPointParameterf )
                    , ( bp::arg("pname"), bp::arg("param") ) );
            
            }
            { //::osg::Point::Extensions::glPointParameterfv
            
                typedef void ( ::osg::Point::Extensions::*glPointParameterfv_function_type )( ::GLenum,::GLfloat const * ) const;
                
                Extensions_exposer.def( 
                    "glPointParameterfv"
                    , glPointParameterfv_function_type( &::osg::Point::Extensions::glPointParameterfv )
                    , ( bp::arg("pname"), bp::arg("params") ) );
            
            }
            { //::osg::Point::Extensions::glPointParameteri
            
                typedef void ( ::osg::Point::Extensions::*glPointParameteri_function_type )( ::GLenum,::GLint ) const;
                
                Extensions_exposer.def( 
                    "glPointParameteri"
                    , glPointParameteri_function_type( &::osg::Point::Extensions::glPointParameteri )
                    , ( bp::arg("pname"), bp::arg("param") ) );
            
            }
            { //::osg::Point::Extensions::isPointParametersSupported
            
                typedef bool ( ::osg::Point::Extensions::*isPointParametersSupported_function_type )(  ) const;
                
                Extensions_exposer.def( 
                    "isPointParametersSupported"
                    , isPointParametersSupported_function_type( &::osg::Point::Extensions::isPointParametersSupported ) );
            
            }
            { //::osg::Point::Extensions::isPointSpriteCoordOriginSupported
            
                typedef bool ( ::osg::Point::Extensions::*isPointSpriteCoordOriginSupported_function_type )(  ) const;
                
                Extensions_exposer.def( 
                    "isPointSpriteCoordOriginSupported"
                    , isPointSpriteCoordOriginSupported_function_type( &::osg::Point::Extensions::isPointSpriteCoordOriginSupported ) );
            
            }
            { //::osg::Point::Extensions::lowestCommonDenominator
            
                typedef void ( *lowestCommonDenominator_function_type )( ::osg::Point::Extensions &,::osg::Point::Extensions & );
                
                Extensions_exposer.def( 
                    "lowestCommonDenominator"
                    , lowestCommonDenominator_function_type( &lowestCommonDenominator_8ae9c5332b2c65e56a1c6dad3b8ac5e6 )
                    , ( bp::arg("inst"), bp::arg("rhs") ) );
            
            }
            { //::osg::Point::Extensions::setPointParametersSupported
            
                typedef void ( ::osg::Point::Extensions::*setPointParametersSupported_function_type )( bool ) ;
                
                Extensions_exposer.def( 
                    "setPointParametersSupported"
                    , setPointParametersSupported_function_type( &::osg::Point::Extensions::setPointParametersSupported )
                    , ( bp::arg("flag") ) );
            
            }
            { //::osg::Point::Extensions::setPointSpriteCoordOriginSupported
            
                typedef void ( ::osg::Point::Extensions::*setPointSpriteCoordOriginSupported_function_type )( bool ) ;
                
                Extensions_exposer.def( 
                    "setPointSpriteCoordOriginSupported"
                    , setPointSpriteCoordOriginSupported_function_type( &::osg::Point::Extensions::setPointSpriteCoordOriginSupported )
                    , ( bp::arg("flag") ) );
            
            }
            { //::osg::Point::Extensions::setupGLExtensions
            
                typedef void ( ::osg::Point::Extensions::*setupGLExtensions_function_type )( unsigned int ) ;
                
                Extensions_exposer.def( 
                    "setupGLExtensions"
                    , setupGLExtensions_function_type( &::osg::Point::Extensions::setupGLExtensions )
                    , ( bp::arg("contextID") ) );
            
            }
        }
        Point_exposer.def( bp::init< >("\n Point - encapsulates the OpenGL point smoothing and size state.\n") );
        Point_exposer.def( bp::init< float >(( bp::arg("size") )) );
        bp::implicitly_convertible< float, osg::Point >();
        { //::osg::Point::apply
        
            typedef void ( ::osg::Point::*apply_function_type )( ::osg::State & ) const;
            typedef void ( Point_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            Point_exposer.def( 
                "apply"
                , apply_function_type(&::osg::Point::apply)
                , default_apply_function_type(&Point_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::Point::className
        
            typedef char const * ( ::osg::Point::*className_function_type )(  ) const;
            typedef char const * ( Point_wrapper::*default_className_function_type )(  ) const;
            
            Point_exposer.def( 
                "className"
                , className_function_type(&::osg::Point::className)
                , default_className_function_type(&Point_wrapper::default_className) );
        
        }
        { //::osg::Point::clone
        
            typedef ::osg::Object * ( ::osg::Point::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( Point_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            Point_exposer.def( 
                "clone"
                , clone_function_type(&::osg::Point::clone)
                , default_clone_function_type(&Point_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Point::cloneType
        
            typedef ::osg::Object * ( ::osg::Point::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( Point_wrapper::*default_cloneType_function_type )(  ) const;
            
            Point_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::Point::cloneType)
                , default_cloneType_function_type(&Point_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Point::getDistanceAttenuation
        
            typedef ::osg::Vec3 const & ( ::osg::Point::*getDistanceAttenuation_function_type )(  ) const;
            
            Point_exposer.def( 
                "getDistanceAttenuation"
                , getDistanceAttenuation_function_type( &::osg::Point::getDistanceAttenuation )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Point::getExtensions
        
            typedef ::osg::Point::Extensions * ( *getExtensions_function_type )( unsigned int,bool );
            
            Point_exposer.def( 
                "getExtensions"
                , getExtensions_function_type( &::osg::Point::getExtensions )
                , ( bp::arg("contextID"), bp::arg("createIfNotInitalized") )
                , bp::return_internal_reference< >()
                , "\n Returns the Extensions object for the given context.\n If createIfNotInitalized is true and the Extensions object doesnt\n exist, getExtensions() creates it on the given context.\n Returns NULL if createIfNotInitalized is false and the Extensions\n object doesnt exist.\n" );
        
        }
        { //::osg::Point::getFadeThresholdSize
        
            typedef float ( ::osg::Point::*getFadeThresholdSize_function_type )(  ) const;
            
            Point_exposer.def( 
                "getFadeThresholdSize"
                , getFadeThresholdSize_function_type( &::osg::Point::getFadeThresholdSize ) );
        
        }
        { //::osg::Point::getMaxSize
        
            typedef float ( ::osg::Point::*getMaxSize_function_type )(  ) const;
            
            Point_exposer.def( 
                "getMaxSize"
                , getMaxSize_function_type( &::osg::Point::getMaxSize ) );
        
        }
        { //::osg::Point::getMinSize
        
            typedef float ( ::osg::Point::*getMinSize_function_type )(  ) const;
            
            Point_exposer.def( 
                "getMinSize"
                , getMinSize_function_type( &::osg::Point::getMinSize ) );
        
        }
        { //::osg::Point::getModeUsage
        
            typedef bool ( ::osg::Point::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( Point_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            Point_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::Point::getModeUsage)
                , default_getModeUsage_function_type(&Point_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::Point::getSize
        
            typedef float ( ::osg::Point::*getSize_function_type )(  ) const;
            
            Point_exposer.def( 
                "getSize"
                , getSize_function_type( &::osg::Point::getSize ) );
        
        }
        { //::osg::Point::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::Point::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( Point_wrapper::*default_getType_function_type )(  ) const;
            
            Point_exposer.def( 
                "getType"
                , getType_function_type(&::osg::Point::getType)
                , default_getType_function_type(&Point_wrapper::default_getType) );
        
        }
        { //::osg::Point::isSameKindAs
        
            typedef bool ( ::osg::Point::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( Point_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            Point_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::Point::isSameKindAs)
                , default_isSameKindAs_function_type(&Point_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Point::libraryName
        
            typedef char const * ( ::osg::Point::*libraryName_function_type )(  ) const;
            typedef char const * ( Point_wrapper::*default_libraryName_function_type )(  ) const;
            
            Point_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::Point::libraryName)
                , default_libraryName_function_type(&Point_wrapper::default_libraryName) );
        
        }
        { //::osg::Point::setDistanceAttenuation
        
            typedef void ( ::osg::Point::*setDistanceAttenuation_function_type )( ::osg::Vec3 const & ) ;
            
            Point_exposer.def( 
                "setDistanceAttenuation"
                , setDistanceAttenuation_function_type( &::osg::Point::setDistanceAttenuation )
                , ( bp::arg("distanceAttenuation") ) );
        
        }
        { //::osg::Point::setExtensions
        
            typedef void ( *setExtensions_function_type )( unsigned int,::osg::Point::Extensions * );
            
            Point_exposer.def( 
                "setExtensions"
                , setExtensions_function_type( &::osg::Point::setExtensions )
                , ( bp::arg("contextID"), bp::arg("extensions") )
                , "\n setExtensions() allows users to override the extensions across graphics contexts.\n Typically used when you have different extensions supported across graphics pipes,\n but need to ensure that they all use the same low common denominator extensions.\n" );
        
        }
        { //::osg::Point::setFadeThresholdSize
        
            typedef void ( ::osg::Point::*setFadeThresholdSize_function_type )( float ) ;
            
            Point_exposer.def( 
                "setFadeThresholdSize"
                , setFadeThresholdSize_function_type( &::osg::Point::setFadeThresholdSize )
                , ( bp::arg("fadeThresholdSize") ) );
        
        }
        { //::osg::Point::setMaxSize
        
            typedef void ( ::osg::Point::*setMaxSize_function_type )( float ) ;
            
            Point_exposer.def( 
                "setMaxSize"
                , setMaxSize_function_type( &::osg::Point::setMaxSize )
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::Point::setMinSize
        
            typedef void ( ::osg::Point::*setMinSize_function_type )( float ) ;
            
            Point_exposer.def( 
                "setMinSize"
                , setMinSize_function_type( &::osg::Point::setMinSize )
                , ( bp::arg("minSize") ) );
        
        }
        { //::osg::Point::setSize
        
            typedef void ( ::osg::Point::*setSize_function_type )( float ) ;
            
            Point_exposer.def( 
                "setSize"
                , setSize_function_type( &::osg::Point::setSize )
                , ( bp::arg("size") ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( Point_wrapper::*default_asTexture_function_type )(  ) ;
            
            Point_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&Point_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( Point_wrapper::*default_asTexture_function_type )(  ) const;
            
            Point_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&Point_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( Point_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            Point_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&Point_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( Point_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            Point_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&Point_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type )(  ) const;
            typedef unsigned int ( Point_wrapper::*default_getMember_function_type )(  ) const;
            
            Point_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&Point_wrapper::default_getMember) );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( Point_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            Point_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&Point_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( Point_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            Point_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&Point_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        Point_exposer.staticmethod( "getExtensions" );
        Point_exposer.staticmethod( "setExtensions" );
    }

}
