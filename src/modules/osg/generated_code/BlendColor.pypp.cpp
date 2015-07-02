// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "blendcolor.pypp.hpp"

namespace bp = boost::python;

struct BlendColor_wrapper : osg::BlendColor, bp::wrapper< osg::BlendColor > {

    struct Extensions_wrapper : osg::BlendColor::Extensions, bp::wrapper< osg::BlendColor::Extensions > {
    
        Extensions_wrapper(unsigned int contextID )
        : osg::BlendColor::Extensions( contextID )
          , bp::wrapper< osg::BlendColor::Extensions >(){
            // constructor
        
        }
    
        Extensions_wrapper(::osg::BlendColor::Extensions const & rhs )
        : osg::BlendColor::Extensions( boost::ref(rhs) )
          , bp::wrapper< osg::BlendColor::Extensions >(){
            // copy constructor
        
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

    BlendColor_wrapper( )
    : osg::BlendColor( )
      , bp::wrapper< osg::BlendColor >(){
        // null constructor
    
    }

    BlendColor_wrapper(::osg::Vec4 const & constantColor )
    : osg::BlendColor( boost::ref(constantColor) )
      , bp::wrapper< osg::BlendColor >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::BlendColor::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::BlendColor::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::BlendColor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::BlendColor::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::BlendColor::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::BlendColor::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::BlendColor::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::BlendColor::cloneType( );
    }

    virtual int compare( ::osg::StateAttribute const & sa ) const  {
        if( bp::override func_compare = this->get_override( "compare" ) )
            return func_compare( boost::ref(sa) );
        else{
            return this->osg::BlendColor::compare( boost::ref(sa) );
        }
    }
    
    int default_compare( ::osg::StateAttribute const & sa ) const  {
        return osg::BlendColor::compare( boost::ref(sa) );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::BlendColor::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::BlendColor::getModeUsage( boost::ref(usage) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::BlendColor::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::BlendColor::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::BlendColor::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::BlendColor::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::BlendColor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::BlendColor::libraryName( );
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

void register_BlendColor_class(){

    { //::osg::BlendColor
        typedef bp::class_< BlendColor_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::BlendColor >, boost::noncopyable > BlendColor_exposer_t;
        BlendColor_exposer_t BlendColor_exposer = BlendColor_exposer_t( "BlendColor", "\n Encapsulates OpenGL blend/transparency state.\n", bp::no_init );
        bp::scope BlendColor_scope( BlendColor_exposer );
        { //::osg::BlendColor::Extensions
            typedef bp::class_< BlendColor_wrapper::Extensions_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::BlendColor::Extensions > > Extensions_exposer_t;
            Extensions_exposer_t Extensions_exposer = Extensions_exposer_t( "Extensions", "\n Encapsulates queries of extension availability, obtains extension\n function pointers, and provides convenience wrappers for\n calling extension functions.\n", bp::no_init );
            bp::scope Extensions_scope( Extensions_exposer );
            Extensions_exposer.def( bp::init< unsigned int >(( bp::arg("contextID") ), "\n Encapsulates queries of extension availability, obtains extension\n function pointers, and provides convenience wrappers for\n calling extension functions.\n") );
            bp::implicitly_convertible< unsigned int, osg::BlendColor::Extensions >();
            Extensions_exposer.def( bp::init< osg::BlendColor::Extensions const & >(( bp::arg("rhs") )) );
            { //::osg::BlendColor::Extensions::glBlendColor
            
                typedef void ( ::osg::BlendColor::Extensions::*glBlendColor_function_type)( ::GLclampf,::GLclampf,::GLclampf,::GLclampf ) const;
                
                Extensions_exposer.def( 
                    "glBlendColor"
                    , glBlendColor_function_type( &::osg::BlendColor::Extensions::glBlendColor )
                    , ( bp::arg("red"), bp::arg("green"), bp::arg("blue"), bp::arg("alpha") ) );
            
            }
            { //::osg::BlendColor::Extensions::isBlendColorSupported
            
                typedef bool ( ::osg::BlendColor::Extensions::*isBlendColorSupported_function_type)(  ) const;
                
                Extensions_exposer.def( 
                    "isBlendColorSupported"
                    , isBlendColorSupported_function_type( &::osg::BlendColor::Extensions::isBlendColorSupported ) );
            
            }
            { //::osg::BlendColor::Extensions::lowestCommonDenominator
            
                typedef void ( ::osg::BlendColor::Extensions::*lowestCommonDenominator_function_type)( ::osg::BlendColor::Extensions const & ) ;
                
                Extensions_exposer.def( 
                    "lowestCommonDenominator"
                    , lowestCommonDenominator_function_type( &::osg::BlendColor::Extensions::lowestCommonDenominator )
                    , ( bp::arg("rhs") ) );
            
            }
            { //::osg::BlendColor::Extensions::setBlendColorSupported
            
                typedef void ( ::osg::BlendColor::Extensions::*setBlendColorSupported_function_type)( bool ) ;
                
                Extensions_exposer.def( 
                    "setBlendColorSupported"
                    , setBlendColorSupported_function_type( &::osg::BlendColor::Extensions::setBlendColorSupported )
                    , ( bp::arg("flag") ) );
            
            }
            { //::osg::BlendColor::Extensions::setupGLExtensions
            
                typedef void ( ::osg::BlendColor::Extensions::*setupGLExtensions_function_type)( unsigned int ) ;
                
                Extensions_exposer.def( 
                    "setupGLExtensions"
                    , setupGLExtensions_function_type( &::osg::BlendColor::Extensions::setupGLExtensions )
                    , ( bp::arg("contextID") ) );
            
            }
            { //::osg::Referenced::setThreadSafeRefUnref
            
                typedef void ( ::osg::Referenced::*setThreadSafeRefUnref_function_type)( bool ) ;
                typedef void ( BlendColor_wrapper::Extensions_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
                
                Extensions_exposer.def( 
                    "setThreadSafeRefUnref"
                    , setThreadSafeRefUnref_function_type(&::osg::Referenced::setThreadSafeRefUnref)
                    , default_setThreadSafeRefUnref_function_type(&BlendColor_wrapper::Extensions_wrapper::default_setThreadSafeRefUnref)
                    , ( bp::arg("threadSafe") ) );
            
            }
        }
        BlendColor_exposer.def( bp::init< >("\n Encapsulates OpenGL blend/transparency state.\n") );
        BlendColor_exposer.def( bp::init< osg::Vec4 const & >(( bp::arg("constantColor") )) );
        bp::implicitly_convertible< osg::Vec4 const &, osg::BlendColor >();
        { //::osg::BlendColor::apply
        
            typedef void ( ::osg::BlendColor::*apply_function_type)( ::osg::State & ) const;
            typedef void ( BlendColor_wrapper::*default_apply_function_type)( ::osg::State & ) const;
            
            BlendColor_exposer.def( 
                "apply"
                , apply_function_type(&::osg::BlendColor::apply)
                , default_apply_function_type(&BlendColor_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::BlendColor::className
        
            typedef char const * ( ::osg::BlendColor::*className_function_type)(  ) const;
            typedef char const * ( BlendColor_wrapper::*default_className_function_type)(  ) const;
            
            BlendColor_exposer.def( 
                "className"
                , className_function_type(&::osg::BlendColor::className)
                , default_className_function_type(&BlendColor_wrapper::default_className) );
        
        }
        { //::osg::BlendColor::clone
        
            typedef ::osg::Object * ( ::osg::BlendColor::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( BlendColor_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            BlendColor_exposer.def( 
                "clone"
                , clone_function_type(&::osg::BlendColor::clone)
                , default_clone_function_type(&BlendColor_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::BlendColor::cloneType
        
            typedef ::osg::Object * ( ::osg::BlendColor::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( BlendColor_wrapper::*default_cloneType_function_type)(  ) const;
            
            BlendColor_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::BlendColor::cloneType)
                , default_cloneType_function_type(&BlendColor_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::BlendColor::compare
        
            typedef int ( ::osg::BlendColor::*compare_function_type)( ::osg::StateAttribute const & ) const;
            typedef int ( BlendColor_wrapper::*default_compare_function_type)( ::osg::StateAttribute const & ) const;
            
            BlendColor_exposer.def( 
                "compare"
                , compare_function_type(&::osg::BlendColor::compare)
                , default_compare_function_type(&BlendColor_wrapper::default_compare)
                , ( bp::arg("sa") ) );
        
        }
        { //::osg::BlendColor::getConstantColor
        
            typedef ::osg::Vec4 & ( ::osg::BlendColor::*getConstantColor_function_type)(  ) ;
            
            BlendColor_exposer.def( 
                "getConstantColor"
                , getConstantColor_function_type( &::osg::BlendColor::getConstantColor )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::BlendColor::getConstantColor
        
            typedef ::osg::Vec4 const & ( ::osg::BlendColor::*getConstantColor_function_type)(  ) const;
            
            BlendColor_exposer.def( 
                "getConstantColor"
                , getConstantColor_function_type( &::osg::BlendColor::getConstantColor )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::BlendColor::getExtensions
        
            typedef ::osg::BlendColor::Extensions * ( *getExtensions_function_type )( unsigned int,bool );
            
            BlendColor_exposer.def( 
                "getExtensions"
                , getExtensions_function_type( &::osg::BlendColor::getExtensions )
                , ( bp::arg("contextID"), bp::arg("createIfNotInitalized") )
                , bp::return_internal_reference< >()
                , " Returns the Extensions object for the given context.\n If createIfNotInitalized is true and the Extensions object doesnt\n exist, getExtensions() creates it on the given context.\n Returns NULL if createIfNotInitalized is false and the Extensions\n object doesnt exist." );
        
        }
        { //::osg::BlendColor::getModeUsage
        
            typedef bool ( ::osg::BlendColor::*getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( BlendColor_wrapper::*default_getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            
            BlendColor_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::BlendColor::getModeUsage)
                , default_getModeUsage_function_type(&BlendColor_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::BlendColor::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::BlendColor::*getType_function_type)(  ) const;
            typedef ::osg::StateAttribute::Type ( BlendColor_wrapper::*default_getType_function_type)(  ) const;
            
            BlendColor_exposer.def( 
                "getType"
                , getType_function_type(&::osg::BlendColor::getType)
                , default_getType_function_type(&BlendColor_wrapper::default_getType) );
        
        }
        { //::osg::BlendColor::isSameKindAs
        
            typedef bool ( ::osg::BlendColor::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( BlendColor_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            BlendColor_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::BlendColor::isSameKindAs)
                , default_isSameKindAs_function_type(&BlendColor_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::BlendColor::libraryName
        
            typedef char const * ( ::osg::BlendColor::*libraryName_function_type)(  ) const;
            typedef char const * ( BlendColor_wrapper::*default_libraryName_function_type)(  ) const;
            
            BlendColor_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::BlendColor::libraryName)
                , default_libraryName_function_type(&BlendColor_wrapper::default_libraryName) );
        
        }
        { //::osg::BlendColor::setConstantColor
        
            typedef void ( ::osg::BlendColor::*setConstantColor_function_type)( ::osg::Vec4 const & ) ;
            
            BlendColor_exposer.def( 
                "setConstantColor"
                , setConstantColor_function_type( &::osg::BlendColor::setConstantColor )
                , ( bp::arg("color") ) );
        
        }
        { //::osg::BlendColor::setExtensions
        
            typedef void ( *setExtensions_function_type )( unsigned int,::osg::BlendColor::Extensions * );
            
            BlendColor_exposer.def( 
                "setExtensions"
                , setExtensions_function_type( &::osg::BlendColor::setExtensions )
                , ( bp::arg("contextID"), bp::arg("extensions") )
                , " setExtensions() allows users to override the extensions across graphics contexts.\n Typically used when you have different extensions supported across graphics pipes,\n but need to ensure that they all use the same low common denominator extensions." );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type)(  ) ;
            typedef ::osg::Texture * ( BlendColor_wrapper::*default_asTexture_function_type)(  ) ;
            
            BlendColor_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&BlendColor_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type)(  ) const;
            typedef ::osg::Texture const * ( BlendColor_wrapper::*default_asTexture_function_type)(  ) const;
            
            BlendColor_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&BlendColor_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            typedef bool ( BlendColor_wrapper::*default_checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            
            BlendColor_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&BlendColor_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type)( ::osg::State & ) const;
            typedef void ( BlendColor_wrapper::*default_compileGLObjects_function_type)( ::osg::State & ) const;
            
            BlendColor_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&BlendColor_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( BlendColor_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            BlendColor_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&BlendColor_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type)(  ) const;
            typedef unsigned int ( BlendColor_wrapper::*default_getMember_function_type)(  ) const;
            
            BlendColor_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&BlendColor_wrapper::default_getMember) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( BlendColor_wrapper::*default_getUserData_function_type)(  ) ;
            
            BlendColor_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&BlendColor_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( BlendColor_wrapper::*default_getUserData_function_type)(  ) const;
            
            BlendColor_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&BlendColor_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type)(  ) const;
            typedef bool ( BlendColor_wrapper::*default_isTextureAttribute_function_type)(  ) const;
            
            BlendColor_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&BlendColor_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( BlendColor_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            BlendColor_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&BlendColor_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( BlendColor_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            BlendColor_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&BlendColor_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            BlendColor_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( BlendColor_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            BlendColor_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&BlendColor_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( BlendColor_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            BlendColor_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&BlendColor_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        BlendColor_exposer.staticmethod( "getExtensions" );
        BlendColor_exposer.staticmethod( "setExtensions" );
    }

}
