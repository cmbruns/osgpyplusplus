// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "Light.pypp.hpp"

namespace bp = boost::python;

struct Light_wrapper : osg::Light, bp::wrapper< osg::Light > {

    Light_wrapper( )
    : osg::Light( )
      , bp::wrapper< osg::Light >(){
        // null constructor
    
    }

    Light_wrapper(unsigned int lightnum )
    : osg::Light( lightnum )
      , bp::wrapper< osg::Light >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::Light::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::Light::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Light::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Light::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Light::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Light::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Light::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Light::cloneType( );
    }

    virtual unsigned int getMember(  ) const  {
        if( bp::override func_getMember = this->get_override( "getMember" ) )
            return func_getMember(  );
        else{
            return this->osg::Light::getMember(  );
        }
    }
    
    unsigned int default_getMember(  ) const  {
        return osg::Light::getMember( );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::Light::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::Light::getModeUsage( boost::ref(usage) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Light::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Light::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Light::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Light::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Light::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Light::libraryName( );
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

void register_Light_class(){

    { //::osg::Light
        typedef bp::class_< Light_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::Light >, boost::noncopyable > Light_exposer_t;
        Light_exposer_t Light_exposer = Light_exposer_t( "Light", "\n Light state class which encapsulates OpenGL glLight() functionality.\n", bp::no_init );
        bp::scope Light_scope( Light_exposer );
        Light_exposer.def( bp::init< >("\n Light state class which encapsulates OpenGL glLight() functionality.\n") );
        Light_exposer.def( bp::init< unsigned int >(( bp::arg("lightnum") )) );
        bp::implicitly_convertible< unsigned int, osg::Light >();
        { //::osg::Light::apply
        
            typedef void ( ::osg::Light::*apply_function_type )( ::osg::State & ) const;
            typedef void ( Light_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            Light_exposer.def( 
                "apply"
                , apply_function_type(&::osg::Light::apply)
                , default_apply_function_type(&Light_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::Light::captureLightState
        
            typedef void ( ::osg::Light::*captureLightState_function_type )(  ) ;
            
            Light_exposer.def( 
                "captureLightState"
                , captureLightState_function_type( &::osg::Light::captureLightState )
                , " Capture the lighting settings of the current OpenGL state\n and store them in this object." );
        
        }
        { //::osg::Light::className
        
            typedef char const * ( ::osg::Light::*className_function_type )(  ) const;
            typedef char const * ( Light_wrapper::*default_className_function_type )(  ) const;
            
            Light_exposer.def( 
                "className"
                , className_function_type(&::osg::Light::className)
                , default_className_function_type(&Light_wrapper::default_className) );
        
        }
        { //::osg::Light::clone
        
            typedef ::osg::Object * ( ::osg::Light::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( Light_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            Light_exposer.def( 
                "clone"
                , clone_function_type(&::osg::Light::clone)
                , default_clone_function_type(&Light_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Light::cloneType
        
            typedef ::osg::Object * ( ::osg::Light::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( Light_wrapper::*default_cloneType_function_type )(  ) const;
            
            Light_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::Light::cloneType)
                , default_cloneType_function_type(&Light_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Light::getAmbient
        
            typedef ::osg::Vec4 const & ( ::osg::Light::*getAmbient_function_type )(  ) const;
            
            Light_exposer.def( 
                "getAmbient"
                , getAmbient_function_type( &::osg::Light::getAmbient )
                , bp::return_internal_reference< >()
                , " Get the ambient component of the light." );
        
        }
        { //::osg::Light::getConstantAttenuation
        
            typedef float ( ::osg::Light::*getConstantAttenuation_function_type )(  ) const;
            
            Light_exposer.def( 
                "getConstantAttenuation"
                , getConstantAttenuation_function_type( &::osg::Light::getConstantAttenuation )
                , " Get the constant attenuation of the light." );
        
        }
        { //::osg::Light::getDiffuse
        
            typedef ::osg::Vec4 const & ( ::osg::Light::*getDiffuse_function_type )(  ) const;
            
            Light_exposer.def( 
                "getDiffuse"
                , getDiffuse_function_type( &::osg::Light::getDiffuse )
                , bp::return_internal_reference< >()
                , " Get the diffuse component of the light." );
        
        }
        { //::osg::Light::getDirection
        
            typedef ::osg::Vec3 const & ( ::osg::Light::*getDirection_function_type )(  ) const;
            
            Light_exposer.def( 
                "getDirection"
                , getDirection_function_type( &::osg::Light::getDirection )
                , bp::return_internal_reference< >()
                , " Get the direction of the light." );
        
        }
        { //::osg::Light::getLightNum
        
            typedef int ( ::osg::Light::*getLightNum_function_type )(  ) const;
            
            Light_exposer.def( 
                "getLightNum"
                , getLightNum_function_type( &::osg::Light::getLightNum )
                , " Get which OpenGL light this osg::Light operates on." );
        
        }
        { //::osg::Light::getLinearAttenuation
        
            typedef float ( ::osg::Light::*getLinearAttenuation_function_type )(  ) const;
            
            Light_exposer.def( 
                "getLinearAttenuation"
                , getLinearAttenuation_function_type( &::osg::Light::getLinearAttenuation )
                , " Get the linear attenuation of the light." );
        
        }
        { //::osg::Light::getMember
        
            typedef unsigned int ( ::osg::Light::*getMember_function_type )(  ) const;
            typedef unsigned int ( Light_wrapper::*default_getMember_function_type )(  ) const;
            
            Light_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::Light::getMember)
                , default_getMember_function_type(&Light_wrapper::default_getMember) );
        
        }
        { //::osg::Light::getModeUsage
        
            typedef bool ( ::osg::Light::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( Light_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            Light_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::Light::getModeUsage)
                , default_getModeUsage_function_type(&Light_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::Light::getPosition
        
            typedef ::osg::Vec4 const & ( ::osg::Light::*getPosition_function_type )(  ) const;
            
            Light_exposer.def( 
                "getPosition"
                , getPosition_function_type( &::osg::Light::getPosition )
                , bp::return_internal_reference< >()
                , " Get the position of the light." );
        
        }
        { //::osg::Light::getQuadraticAttenuation
        
            typedef float ( ::osg::Light::*getQuadraticAttenuation_function_type )(  ) const;
            
            Light_exposer.def( 
                "getQuadraticAttenuation"
                , getQuadraticAttenuation_function_type( &::osg::Light::getQuadraticAttenuation )
                , " Get the quadratic attenuation of the light." );
        
        }
        { //::osg::Light::getSpecular
        
            typedef ::osg::Vec4 const & ( ::osg::Light::*getSpecular_function_type )(  ) const;
            
            Light_exposer.def( 
                "getSpecular"
                , getSpecular_function_type( &::osg::Light::getSpecular )
                , bp::return_internal_reference< >()
                , " Get the specular component of the light." );
        
        }
        { //::osg::Light::getSpotCutoff
        
            typedef float ( ::osg::Light::*getSpotCutoff_function_type )(  ) const;
            
            Light_exposer.def( 
                "getSpotCutoff"
                , getSpotCutoff_function_type( &::osg::Light::getSpotCutoff )
                , " Get the spot cutoff of the light." );
        
        }
        { //::osg::Light::getSpotExponent
        
            typedef float ( ::osg::Light::*getSpotExponent_function_type )(  ) const;
            
            Light_exposer.def( 
                "getSpotExponent"
                , getSpotExponent_function_type( &::osg::Light::getSpotExponent )
                , " Get the spot exponent of the light." );
        
        }
        { //::osg::Light::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::Light::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( Light_wrapper::*default_getType_function_type )(  ) const;
            
            Light_exposer.def( 
                "getType"
                , getType_function_type(&::osg::Light::getType)
                , default_getType_function_type(&Light_wrapper::default_getType) );
        
        }
        { //::osg::Light::isSameKindAs
        
            typedef bool ( ::osg::Light::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( Light_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            Light_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::Light::isSameKindAs)
                , default_isSameKindAs_function_type(&Light_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Light::libraryName
        
            typedef char const * ( ::osg::Light::*libraryName_function_type )(  ) const;
            typedef char const * ( Light_wrapper::*default_libraryName_function_type )(  ) const;
            
            Light_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::Light::libraryName)
                , default_libraryName_function_type(&Light_wrapper::default_libraryName) );
        
        }
        { //::osg::Light::setAmbient
        
            typedef void ( ::osg::Light::*setAmbient_function_type )( ::osg::Vec4 const & ) ;
            
            Light_exposer.def( 
                "setAmbient"
                , setAmbient_function_type( &::osg::Light::setAmbient )
                , ( bp::arg("ambient") )
                , " Set the ambient component of the light." );
        
        }
        { //::osg::Light::setConstantAttenuation
        
            typedef void ( ::osg::Light::*setConstantAttenuation_function_type )( float ) ;
            
            Light_exposer.def( 
                "setConstantAttenuation"
                , setConstantAttenuation_function_type( &::osg::Light::setConstantAttenuation )
                , ( bp::arg("constant_attenuation") )
                , " Set the constant attenuation of the light." );
        
        }
        { //::osg::Light::setDiffuse
        
            typedef void ( ::osg::Light::*setDiffuse_function_type )( ::osg::Vec4 const & ) ;
            
            Light_exposer.def( 
                "setDiffuse"
                , setDiffuse_function_type( &::osg::Light::setDiffuse )
                , ( bp::arg("diffuse") )
                , " Set the diffuse component of the light." );
        
        }
        { //::osg::Light::setDirection
        
            typedef void ( ::osg::Light::*setDirection_function_type )( ::osg::Vec3 const & ) ;
            
            Light_exposer.def( 
                "setDirection"
                , setDirection_function_type( &::osg::Light::setDirection )
                , ( bp::arg("direction") )
                , " Set the direction of the light." );
        
        }
        { //::osg::Light::setLightNum
        
            typedef void ( ::osg::Light::*setLightNum_function_type )( int ) ;
            
            Light_exposer.def( 
                "setLightNum"
                , setLightNum_function_type( &::osg::Light::setLightNum )
                , ( bp::arg("num") )
                , " Set which OpenGL light to operate on." );
        
        }
        { //::osg::Light::setLinearAttenuation
        
            typedef void ( ::osg::Light::*setLinearAttenuation_function_type )( float ) ;
            
            Light_exposer.def( 
                "setLinearAttenuation"
                , setLinearAttenuation_function_type( &::osg::Light::setLinearAttenuation )
                , ( bp::arg("linear_attenuation") )
                , " Set the linear attenuation of the light." );
        
        }
        { //::osg::Light::setPosition
        
            typedef void ( ::osg::Light::*setPosition_function_type )( ::osg::Vec4 const & ) ;
            
            Light_exposer.def( 
                "setPosition"
                , setPosition_function_type( &::osg::Light::setPosition )
                , ( bp::arg("position") )
                , " Set the position of the light." );
        
        }
        { //::osg::Light::setQuadraticAttenuation
        
            typedef void ( ::osg::Light::*setQuadraticAttenuation_function_type )( float ) ;
            
            Light_exposer.def( 
                "setQuadraticAttenuation"
                , setQuadraticAttenuation_function_type( &::osg::Light::setQuadraticAttenuation )
                , ( bp::arg("quadratic_attenuation") )
                , " Set the quadratic attenuation of the light." );
        
        }
        { //::osg::Light::setSpecular
        
            typedef void ( ::osg::Light::*setSpecular_function_type )( ::osg::Vec4 const & ) ;
            
            Light_exposer.def( 
                "setSpecular"
                , setSpecular_function_type( &::osg::Light::setSpecular )
                , ( bp::arg("specular") )
                , " Set the specular component of the light." );
        
        }
        { //::osg::Light::setSpotCutoff
        
            typedef void ( ::osg::Light::*setSpotCutoff_function_type )( float ) ;
            
            Light_exposer.def( 
                "setSpotCutoff"
                , setSpotCutoff_function_type( &::osg::Light::setSpotCutoff )
                , ( bp::arg("spot_cutoff") )
                , " Set the spot cutoff of the light." );
        
        }
        { //::osg::Light::setSpotExponent
        
            typedef void ( ::osg::Light::*setSpotExponent_function_type )( float ) ;
            
            Light_exposer.def( 
                "setSpotExponent"
                , setSpotExponent_function_type( &::osg::Light::setSpotExponent )
                , ( bp::arg("spot_exponent") )
                , " Set the spot exponent of the light." );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( Light_wrapper::*default_asTexture_function_type )(  ) ;
            
            Light_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&Light_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( Light_wrapper::*default_asTexture_function_type )(  ) const;
            
            Light_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&Light_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( Light_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            Light_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&Light_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( Light_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            Light_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&Light_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( Light_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            Light_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&Light_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( Light_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            Light_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&Light_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
    }

}
