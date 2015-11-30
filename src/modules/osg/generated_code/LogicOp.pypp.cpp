// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "LogicOp.pypp.hpp"

namespace bp = boost::python;

struct LogicOp_wrapper : osg::LogicOp, bp::wrapper< osg::LogicOp > {

    LogicOp_wrapper( )
    : osg::LogicOp( )
      , bp::wrapper< osg::LogicOp >(){
        // null constructor
    
    }

    LogicOp_wrapper(::osg::LogicOp::Opcode opcode )
    : osg::LogicOp( opcode )
      , bp::wrapper< osg::LogicOp >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::LogicOp::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::LogicOp::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::LogicOp::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::LogicOp::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::LogicOp::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::LogicOp::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::LogicOp::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::LogicOp::cloneType( );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::LogicOp::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::LogicOp::getModeUsage( boost::ref(usage) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::LogicOp::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::LogicOp::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::LogicOp::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::LogicOp::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::LogicOp::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::LogicOp::libraryName( );
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

void register_LogicOp_class(){

    { //::osg::LogicOp
        typedef bp::class_< LogicOp_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::LogicOp >, boost::noncopyable > LogicOp_exposer_t;
        LogicOp_exposer_t LogicOp_exposer = LogicOp_exposer_t( "LogicOp", "\n Encapsulates OpenGL LogicOp state.\n", bp::no_init );
        bp::scope LogicOp_scope( LogicOp_exposer );
        bp::enum_< osg::LogicOp::Opcode>("Opcode")
            .value("CLEAR", osg::LogicOp::CLEAR)
            .value("SET", osg::LogicOp::SET)
            .value("COPY", osg::LogicOp::COPY)
            .value("COPY_INVERTED", osg::LogicOp::COPY_INVERTED)
            .value("NOOP", osg::LogicOp::NOOP)
            .value("INVERT", osg::LogicOp::INVERT)
            .value("AND", osg::LogicOp::AND)
            .value("NAND", osg::LogicOp::NAND)
            .value("OR", osg::LogicOp::OR)
            .value("NOR", osg::LogicOp::NOR)
            .value("XOR", osg::LogicOp::XOR)
            .value("EQUIV", osg::LogicOp::EQUIV)
            .value("AND_REVERSE", osg::LogicOp::AND_REVERSE)
            .value("AND_INVERTED", osg::LogicOp::AND_INVERTED)
            .value("OR_REVERSE", osg::LogicOp::OR_REVERSE)
            .value("OR_INVERTED", osg::LogicOp::OR_INVERTED)
            .export_values()
            ;
        LogicOp_exposer.def( bp::init< >() );
        LogicOp_exposer.def( bp::init< osg::LogicOp::Opcode >(( bp::arg("opcode") )) );
        bp::implicitly_convertible< osg::LogicOp::Opcode, osg::LogicOp >();
        { //::osg::LogicOp::apply
        
            typedef void ( ::osg::LogicOp::*apply_function_type )( ::osg::State & ) const;
            typedef void ( LogicOp_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            LogicOp_exposer.def( 
                "apply"
                , apply_function_type(&::osg::LogicOp::apply)
                , default_apply_function_type(&LogicOp_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::LogicOp::className
        
            typedef char const * ( ::osg::LogicOp::*className_function_type )(  ) const;
            typedef char const * ( LogicOp_wrapper::*default_className_function_type )(  ) const;
            
            LogicOp_exposer.def( 
                "className"
                , className_function_type(&::osg::LogicOp::className)
                , default_className_function_type(&LogicOp_wrapper::default_className) );
        
        }
        { //::osg::LogicOp::clone
        
            typedef ::osg::Object * ( ::osg::LogicOp::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( LogicOp_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            LogicOp_exposer.def( 
                "clone"
                , clone_function_type(&::osg::LogicOp::clone)
                , default_clone_function_type(&LogicOp_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::LogicOp::cloneType
        
            typedef ::osg::Object * ( ::osg::LogicOp::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( LogicOp_wrapper::*default_cloneType_function_type )(  ) const;
            
            LogicOp_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::LogicOp::cloneType)
                , default_cloneType_function_type(&LogicOp_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::LogicOp::getModeUsage
        
            typedef bool ( ::osg::LogicOp::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( LogicOp_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            LogicOp_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::LogicOp::getModeUsage)
                , default_getModeUsage_function_type(&LogicOp_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::LogicOp::getOpcode
        
            typedef ::osg::LogicOp::Opcode ( ::osg::LogicOp::*getOpcode_function_type )(  ) const;
            
            LogicOp_exposer.def( 
                "getOpcode"
                , getOpcode_function_type( &::osg::LogicOp::getOpcode ) );
        
        }
        { //::osg::LogicOp::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::LogicOp::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( LogicOp_wrapper::*default_getType_function_type )(  ) const;
            
            LogicOp_exposer.def( 
                "getType"
                , getType_function_type(&::osg::LogicOp::getType)
                , default_getType_function_type(&LogicOp_wrapper::default_getType) );
        
        }
        { //::osg::LogicOp::isSameKindAs
        
            typedef bool ( ::osg::LogicOp::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( LogicOp_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            LogicOp_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::LogicOp::isSameKindAs)
                , default_isSameKindAs_function_type(&LogicOp_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::LogicOp::libraryName
        
            typedef char const * ( ::osg::LogicOp::*libraryName_function_type )(  ) const;
            typedef char const * ( LogicOp_wrapper::*default_libraryName_function_type )(  ) const;
            
            LogicOp_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::LogicOp::libraryName)
                , default_libraryName_function_type(&LogicOp_wrapper::default_libraryName) );
        
        }
        { //::osg::LogicOp::setOpcode
        
            typedef void ( ::osg::LogicOp::*setOpcode_function_type )( ::osg::LogicOp::Opcode ) ;
            
            LogicOp_exposer.def( 
                "setOpcode"
                , setOpcode_function_type( &::osg::LogicOp::setOpcode )
                , ( bp::arg("opcode") ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( LogicOp_wrapper::*default_asTexture_function_type )(  ) ;
            
            LogicOp_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&LogicOp_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( LogicOp_wrapper::*default_asTexture_function_type )(  ) const;
            
            LogicOp_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&LogicOp_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( LogicOp_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            LogicOp_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&LogicOp_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( LogicOp_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            LogicOp_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&LogicOp_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type )(  ) const;
            typedef unsigned int ( LogicOp_wrapper::*default_getMember_function_type )(  ) const;
            
            LogicOp_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&LogicOp_wrapper::default_getMember) );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( LogicOp_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            LogicOp_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&LogicOp_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( LogicOp_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            LogicOp_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&LogicOp_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
    }

}
