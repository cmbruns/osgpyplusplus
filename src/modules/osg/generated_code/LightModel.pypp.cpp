// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "LightModel.pypp.hpp"

namespace bp = boost::python;

struct LightModel_wrapper : osg::LightModel, bp::wrapper< osg::LightModel > {

    LightModel_wrapper( )
    : osg::LightModel( )
      , bp::wrapper< osg::LightModel >(){
        // null constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::LightModel::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::LightModel::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::LightModel::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::LightModel::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::LightModel::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::LightModel::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::LightModel::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::LightModel::cloneType( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::LightModel::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::LightModel::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::LightModel::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::LightModel::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::LightModel::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::LightModel::libraryName( );
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

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & arg0 ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(arg0) );
        else{
            return this->osg::StateAttribute::getModeUsage( boost::ref(arg0) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & arg0 ) const  {
        return osg::StateAttribute::getModeUsage( boost::ref(arg0) );
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

void register_LightModel_class(){

    { //::osg::LightModel
        typedef bp::class_< LightModel_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::LightModel >, boost::noncopyable > LightModel_exposer_t;
        LightModel_exposer_t LightModel_exposer = LightModel_exposer_t( "LightModel", bp::no_init );
        bp::scope LightModel_scope( LightModel_exposer );
        bp::enum_< osg::LightModel::ColorControl>("ColorControl")
            .value("SEPARATE_SPECULAR_COLOR", osg::LightModel::SEPARATE_SPECULAR_COLOR)
            .value("SINGLE_COLOR", osg::LightModel::SINGLE_COLOR)
            .export_values()
            ;
        LightModel_exposer.def( bp::init< >() );
        { //::osg::LightModel::apply
        
            typedef void ( ::osg::LightModel::*apply_function_type )( ::osg::State & ) const;
            typedef void ( LightModel_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            LightModel_exposer.def( 
                "apply"
                , apply_function_type(&::osg::LightModel::apply)
                , default_apply_function_type(&LightModel_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::LightModel::className
        
            typedef char const * ( ::osg::LightModel::*className_function_type )(  ) const;
            typedef char const * ( LightModel_wrapper::*default_className_function_type )(  ) const;
            
            LightModel_exposer.def( 
                "className"
                , className_function_type(&::osg::LightModel::className)
                , default_className_function_type(&LightModel_wrapper::default_className) );
        
        }
        { //::osg::LightModel::clone
        
            typedef ::osg::Object * ( ::osg::LightModel::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( LightModel_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            LightModel_exposer.def( 
                "clone"
                , clone_function_type(&::osg::LightModel::clone)
                , default_clone_function_type(&LightModel_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::LightModel::cloneType
        
            typedef ::osg::Object * ( ::osg::LightModel::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( LightModel_wrapper::*default_cloneType_function_type )(  ) const;
            
            LightModel_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::LightModel::cloneType)
                , default_cloneType_function_type(&LightModel_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::LightModel::getAmbientIntensity
        
            typedef ::osg::Vec4 const & ( ::osg::LightModel::*getAmbientIntensity_function_type )(  ) const;
            
            LightModel_exposer.def( 
                "getAmbientIntensity"
                , getAmbientIntensity_function_type( &::osg::LightModel::getAmbientIntensity )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::LightModel::getColorControl
        
            typedef ::osg::LightModel::ColorControl ( ::osg::LightModel::*getColorControl_function_type )(  ) const;
            
            LightModel_exposer.def( 
                "getColorControl"
                , getColorControl_function_type( &::osg::LightModel::getColorControl ) );
        
        }
        { //::osg::LightModel::getLocalViewer
        
            typedef bool ( ::osg::LightModel::*getLocalViewer_function_type )(  ) const;
            
            LightModel_exposer.def( 
                "getLocalViewer"
                , getLocalViewer_function_type( &::osg::LightModel::getLocalViewer ) );
        
        }
        { //::osg::LightModel::getTwoSided
        
            typedef bool ( ::osg::LightModel::*getTwoSided_function_type )(  ) const;
            
            LightModel_exposer.def( 
                "getTwoSided"
                , getTwoSided_function_type( &::osg::LightModel::getTwoSided ) );
        
        }
        { //::osg::LightModel::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::LightModel::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( LightModel_wrapper::*default_getType_function_type )(  ) const;
            
            LightModel_exposer.def( 
                "getType"
                , getType_function_type(&::osg::LightModel::getType)
                , default_getType_function_type(&LightModel_wrapper::default_getType) );
        
        }
        { //::osg::LightModel::isSameKindAs
        
            typedef bool ( ::osg::LightModel::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( LightModel_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            LightModel_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::LightModel::isSameKindAs)
                , default_isSameKindAs_function_type(&LightModel_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::LightModel::libraryName
        
            typedef char const * ( ::osg::LightModel::*libraryName_function_type )(  ) const;
            typedef char const * ( LightModel_wrapper::*default_libraryName_function_type )(  ) const;
            
            LightModel_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::LightModel::libraryName)
                , default_libraryName_function_type(&LightModel_wrapper::default_libraryName) );
        
        }
        { //::osg::LightModel::setAmbientIntensity
        
            typedef void ( ::osg::LightModel::*setAmbientIntensity_function_type )( ::osg::Vec4 const & ) ;
            
            LightModel_exposer.def( 
                "setAmbientIntensity"
                , setAmbientIntensity_function_type( &::osg::LightModel::setAmbientIntensity )
                , ( bp::arg("ambient") ) );
        
        }
        { //::osg::LightModel::setColorControl
        
            typedef void ( ::osg::LightModel::*setColorControl_function_type )( ::osg::LightModel::ColorControl ) ;
            
            LightModel_exposer.def( 
                "setColorControl"
                , setColorControl_function_type( &::osg::LightModel::setColorControl )
                , ( bp::arg("cc") ) );
        
        }
        { //::osg::LightModel::setLocalViewer
        
            typedef void ( ::osg::LightModel::*setLocalViewer_function_type )( bool ) ;
            
            LightModel_exposer.def( 
                "setLocalViewer"
                , setLocalViewer_function_type( &::osg::LightModel::setLocalViewer )
                , ( bp::arg("localViewer") ) );
        
        }
        { //::osg::LightModel::setTwoSided
        
            typedef void ( ::osg::LightModel::*setTwoSided_function_type )( bool ) ;
            
            LightModel_exposer.def( 
                "setTwoSided"
                , setTwoSided_function_type( &::osg::LightModel::setTwoSided )
                , ( bp::arg("twoSided") ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( LightModel_wrapper::*default_asTexture_function_type )(  ) ;
            
            LightModel_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&LightModel_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( LightModel_wrapper::*default_asTexture_function_type )(  ) const;
            
            LightModel_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&LightModel_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( LightModel_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            LightModel_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&LightModel_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( LightModel_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            LightModel_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&LightModel_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type )(  ) const;
            typedef unsigned int ( LightModel_wrapper::*default_getMember_function_type )(  ) const;
            
            LightModel_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&LightModel_wrapper::default_getMember) );
        
        }
        { //::osg::StateAttribute::getModeUsage
        
            typedef bool ( ::osg::StateAttribute::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( LightModel_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            LightModel_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::StateAttribute::getModeUsage)
                , default_getModeUsage_function_type(&LightModel_wrapper::default_getModeUsage)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( LightModel_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            LightModel_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&LightModel_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( LightModel_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            LightModel_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&LightModel_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
    }

}
