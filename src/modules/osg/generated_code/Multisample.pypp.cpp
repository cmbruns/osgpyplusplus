// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "Multisample.pypp.hpp"

namespace bp = boost::python;

struct Multisample_wrapper : osg::Multisample, bp::wrapper< osg::Multisample > {

    Multisample_wrapper( )
    : osg::Multisample( )
      , bp::wrapper< osg::Multisample >(){
        // null constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::Multisample::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::Multisample::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Multisample::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Multisample::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Multisample::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Multisample::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Multisample::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Multisample::cloneType( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Multisample::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Multisample::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Multisample::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Multisample::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Multisample::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Multisample::libraryName( );
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

static void lowestCommonDenominator_dd7471d3543e50c7d7ddfa746bce8132( ::osg::Multisample::Extensions & inst, ::osg::Multisample::Extensions & rhs ){
    inst.lowestCommonDenominator(rhs);
}

void register_Multisample_class(){

    { //::osg::Multisample
        typedef bp::class_< Multisample_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::Multisample >, boost::noncopyable > Multisample_exposer_t;
        Multisample_exposer_t Multisample_exposer = Multisample_exposer_t( "Multisample", "\n Multisample - encapsulates the OpenGL Multisample state.\n", bp::no_init );
        bp::scope Multisample_scope( Multisample_exposer );
        bp::enum_< osg::Multisample::Mode>("Mode")
            .value("FASTEST", osg::Multisample::FASTEST)
            .value("NICEST", osg::Multisample::NICEST)
            .value("DONT_CARE", osg::Multisample::DONT_CARE)
            .export_values()
            ;
        { //::osg::Multisample::Extensions
            typedef bp::class_< osg::Multisample::Extensions, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::Multisample::Extensions > > Extensions_exposer_t;
            Extensions_exposer_t Extensions_exposer = Extensions_exposer_t( "Extensions", " Extensions class which encapsulates the querying of extensions and\n associated function pointers, and provide convenience wrappers to\n check for the extensions or use the associated functions.", bp::no_init );
            bp::scope Extensions_scope( Extensions_exposer );
            Extensions_exposer.def( bp::init< unsigned int >(( bp::arg("contextID") ), " Extensions class which encapsulates the querying of extensions and\n associated function pointers, and provide convenience wrappers to\n check for the extensions or use the associated functions.") );
            bp::implicitly_convertible< unsigned int, osg::Multisample::Extensions >();
            { //::osg::Multisample::Extensions::glSampleCoverage
            
                typedef void ( ::osg::Multisample::Extensions::*glSampleCoverage_function_type )( ::GLclampf,::GLboolean ) const;
                
                Extensions_exposer.def( 
                    "glSampleCoverage"
                    , glSampleCoverage_function_type( &::osg::Multisample::Extensions::glSampleCoverage )
                    , ( bp::arg("value"), bp::arg("invert") ) );
            
            }
            { //::osg::Multisample::Extensions::isMultisampleFilterHintSupported
            
                typedef bool ( ::osg::Multisample::Extensions::*isMultisampleFilterHintSupported_function_type )(  ) const;
                
                Extensions_exposer.def( 
                    "isMultisampleFilterHintSupported"
                    , isMultisampleFilterHintSupported_function_type( &::osg::Multisample::Extensions::isMultisampleFilterHintSupported ) );
            
            }
            { //::osg::Multisample::Extensions::isMultisampleSupported
            
                typedef bool ( ::osg::Multisample::Extensions::*isMultisampleSupported_function_type )(  ) const;
                
                Extensions_exposer.def( 
                    "isMultisampleSupported"
                    , isMultisampleSupported_function_type( &::osg::Multisample::Extensions::isMultisampleSupported ) );
            
            }
            { //::osg::Multisample::Extensions::lowestCommonDenominator
            
                typedef void ( *lowestCommonDenominator_function_type )( ::osg::Multisample::Extensions &,::osg::Multisample::Extensions & );
                
                Extensions_exposer.def( 
                    "lowestCommonDenominator"
                    , lowestCommonDenominator_function_type( &lowestCommonDenominator_dd7471d3543e50c7d7ddfa746bce8132 )
                    , ( bp::arg("inst"), bp::arg("rhs") ) );
            
            }
            { //::osg::Multisample::Extensions::setMultisampleFilterHintSupported
            
                typedef void ( ::osg::Multisample::Extensions::*setMultisampleFilterHintSupported_function_type )( bool ) ;
                
                Extensions_exposer.def( 
                    "setMultisampleFilterHintSupported"
                    , setMultisampleFilterHintSupported_function_type( &::osg::Multisample::Extensions::setMultisampleFilterHintSupported )
                    , ( bp::arg("flag") ) );
            
            }
            { //::osg::Multisample::Extensions::setMultisampleSupported
            
                typedef void ( ::osg::Multisample::Extensions::*setMultisampleSupported_function_type )( bool ) ;
                
                Extensions_exposer.def( 
                    "setMultisampleSupported"
                    , setMultisampleSupported_function_type( &::osg::Multisample::Extensions::setMultisampleSupported )
                    , ( bp::arg("flag") ) );
            
            }
            { //::osg::Multisample::Extensions::setupGLExtensions
            
                typedef void ( ::osg::Multisample::Extensions::*setupGLExtensions_function_type )( unsigned int ) ;
                
                Extensions_exposer.def( 
                    "setupGLExtensions"
                    , setupGLExtensions_function_type( &::osg::Multisample::Extensions::setupGLExtensions )
                    , ( bp::arg("contextID") ) );
            
            }
        }
        Multisample_exposer.def( bp::init< >() );
        { //::osg::Multisample::apply
        
            typedef void ( ::osg::Multisample::*apply_function_type )( ::osg::State & ) const;
            typedef void ( Multisample_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            Multisample_exposer.def( 
                "apply"
                , apply_function_type(&::osg::Multisample::apply)
                , default_apply_function_type(&Multisample_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::Multisample::className
        
            typedef char const * ( ::osg::Multisample::*className_function_type )(  ) const;
            typedef char const * ( Multisample_wrapper::*default_className_function_type )(  ) const;
            
            Multisample_exposer.def( 
                "className"
                , className_function_type(&::osg::Multisample::className)
                , default_className_function_type(&Multisample_wrapper::default_className) );
        
        }
        { //::osg::Multisample::clone
        
            typedef ::osg::Object * ( ::osg::Multisample::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( Multisample_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            Multisample_exposer.def( 
                "clone"
                , clone_function_type(&::osg::Multisample::clone)
                , default_clone_function_type(&Multisample_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Multisample::cloneType
        
            typedef ::osg::Object * ( ::osg::Multisample::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( Multisample_wrapper::*default_cloneType_function_type )(  ) const;
            
            Multisample_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::Multisample::cloneType)
                , default_cloneType_function_type(&Multisample_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Multisample::getCoverage
        
            typedef float ( ::osg::Multisample::*getCoverage_function_type )(  ) const;
            
            Multisample_exposer.def( 
                "getCoverage"
                , getCoverage_function_type( &::osg::Multisample::getCoverage ) );
        
        }
        { //::osg::Multisample::getExtensions
        
            typedef ::osg::Multisample::Extensions * ( *getExtensions_function_type )( unsigned int,bool );
            
            Multisample_exposer.def( 
                "getExtensions"
                , getExtensions_function_type( &::osg::Multisample::getExtensions )
                , ( bp::arg("contextID"), bp::arg("createIfNotInitalized") )
                , bp::return_internal_reference< >()
                , " Function to call to get the extension of a specified context.\n If the Extension object for that context has not yet been created\n and the createIfNotInitalized flag been set to false then returns NULL.\n If createIfNotInitalized is true then the Extensions object is\n automatically created.  However, in this case the extension object will\n only be created with the graphics context associated with ContextID.." );
        
        }
        { //::osg::Multisample::getHint
        
            typedef ::osg::Multisample::Mode ( ::osg::Multisample::*getHint_function_type )(  ) const;
            
            Multisample_exposer.def( 
                "getHint"
                , getHint_function_type( &::osg::Multisample::getHint ) );
        
        }
        { //::osg::Multisample::getInvert
        
            typedef bool ( ::osg::Multisample::*getInvert_function_type )(  ) const;
            
            Multisample_exposer.def( 
                "getInvert"
                , getInvert_function_type( &::osg::Multisample::getInvert ) );
        
        }
        { //::osg::Multisample::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::Multisample::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( Multisample_wrapper::*default_getType_function_type )(  ) const;
            
            Multisample_exposer.def( 
                "getType"
                , getType_function_type(&::osg::Multisample::getType)
                , default_getType_function_type(&Multisample_wrapper::default_getType) );
        
        }
        { //::osg::Multisample::isSameKindAs
        
            typedef bool ( ::osg::Multisample::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( Multisample_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            Multisample_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::Multisample::isSameKindAs)
                , default_isSameKindAs_function_type(&Multisample_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Multisample::libraryName
        
            typedef char const * ( ::osg::Multisample::*libraryName_function_type )(  ) const;
            typedef char const * ( Multisample_wrapper::*default_libraryName_function_type )(  ) const;
            
            Multisample_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::Multisample::libraryName)
                , default_libraryName_function_type(&Multisample_wrapper::default_libraryName) );
        
        }
        { //::osg::Multisample::setCoverage
        
            typedef void ( ::osg::Multisample::*setCoverage_function_type )( float ) ;
            
            Multisample_exposer.def( 
                "setCoverage"
                , setCoverage_function_type( &::osg::Multisample::setCoverage )
                , ( bp::arg("coverage") ) );
        
        }
        { //::osg::Multisample::setExtensions
        
            typedef void ( *setExtensions_function_type )( unsigned int,::osg::Multisample::Extensions * );
            
            Multisample_exposer.def( 
                "setExtensions"
                , setExtensions_function_type( &::osg::Multisample::setExtensions )
                , ( bp::arg("contextID"), bp::arg("extensions") )
                , " setExtensions allows users to override the extensions across graphics contexts.\n Typically used when you have different extensions supported across graphics pipes\n but need to ensure that they all use the same low common denominator extensions." );
        
        }
        { //::osg::Multisample::setHint
        
            typedef void ( ::osg::Multisample::*setHint_function_type )( ::osg::Multisample::Mode ) ;
            
            Multisample_exposer.def( 
                "setHint"
                , setHint_function_type( &::osg::Multisample::setHint )
                , ( bp::arg("mode") ) );
        
        }
        { //::osg::Multisample::setInvert
        
            typedef void ( ::osg::Multisample::*setInvert_function_type )( bool ) ;
            
            Multisample_exposer.def( 
                "setInvert"
                , setInvert_function_type( &::osg::Multisample::setInvert )
                , ( bp::arg("invert") ) );
        
        }
        { //::osg::Multisample::setSampleCoverage
        
            typedef void ( ::osg::Multisample::*setSampleCoverage_function_type )( float,bool ) ;
            
            Multisample_exposer.def( 
                "setSampleCoverage"
                , setSampleCoverage_function_type( &::osg::Multisample::setSampleCoverage )
                , ( bp::arg("coverage"), bp::arg("invert") ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( Multisample_wrapper::*default_asTexture_function_type )(  ) ;
            
            Multisample_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&Multisample_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( Multisample_wrapper::*default_asTexture_function_type )(  ) const;
            
            Multisample_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&Multisample_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( Multisample_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            Multisample_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&Multisample_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( Multisample_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            Multisample_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&Multisample_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type )(  ) const;
            typedef unsigned int ( Multisample_wrapper::*default_getMember_function_type )(  ) const;
            
            Multisample_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&Multisample_wrapper::default_getMember) );
        
        }
        { //::osg::StateAttribute::getModeUsage
        
            typedef bool ( ::osg::StateAttribute::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( Multisample_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            Multisample_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::StateAttribute::getModeUsage)
                , default_getModeUsage_function_type(&Multisample_wrapper::default_getModeUsage)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( Multisample_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            Multisample_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&Multisample_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( Multisample_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            Multisample_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&Multisample_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        Multisample_exposer.staticmethod( "getExtensions" );
        Multisample_exposer.staticmethod( "setExtensions" );
    }

}
