// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "ShadeModel.pypp.hpp"

namespace bp = boost::python;

struct ShadeModel_wrapper : osg::ShadeModel, bp::wrapper< osg::ShadeModel > {

    ShadeModel_wrapper(::osg::ShadeModel::Mode mode=::osg::ShadeModel::SMOOTH )
    : osg::ShadeModel( mode )
      , bp::wrapper< osg::ShadeModel >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::ShadeModel::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::ShadeModel::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::ShadeModel::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::ShadeModel::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::ShadeModel::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::ShadeModel::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::ShadeModel::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::ShadeModel::cloneType( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::ShadeModel::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::ShadeModel::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::ShadeModel::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::ShadeModel::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::ShadeModel::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::ShadeModel::libraryName( );
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

void register_ShadeModel_class(){

    { //::osg::ShadeModel
        typedef bp::class_< ShadeModel_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::ShadeModel >, boost::noncopyable > ShadeModel_exposer_t;
        ShadeModel_exposer_t ShadeModel_exposer = ShadeModel_exposer_t( "ShadeModel", "\n Class which encapsulates glShadeModel(..).\n", bp::no_init );
        bp::scope ShadeModel_scope( ShadeModel_exposer );
        bp::enum_< osg::ShadeModel::Mode>("Mode")
            .value("FLAT", osg::ShadeModel::FLAT)
            .value("SMOOTH", osg::ShadeModel::SMOOTH)
            .export_values()
            ;
        ShadeModel_exposer.def( bp::init< bp::optional< osg::ShadeModel::Mode > >(( bp::arg("mode")=(long)(::osg::ShadeModel::SMOOTH) )) );
        bp::implicitly_convertible< osg::ShadeModel::Mode, osg::ShadeModel >();
        { //::osg::ShadeModel::apply
        
            typedef void ( ::osg::ShadeModel::*apply_function_type )( ::osg::State & ) const;
            typedef void ( ShadeModel_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            ShadeModel_exposer.def( 
                "apply"
                , apply_function_type(&::osg::ShadeModel::apply)
                , default_apply_function_type(&ShadeModel_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::ShadeModel::className
        
            typedef char const * ( ::osg::ShadeModel::*className_function_type )(  ) const;
            typedef char const * ( ShadeModel_wrapper::*default_className_function_type )(  ) const;
            
            ShadeModel_exposer.def( 
                "className"
                , className_function_type(&::osg::ShadeModel::className)
                , default_className_function_type(&ShadeModel_wrapper::default_className) );
        
        }
        { //::osg::ShadeModel::clone
        
            typedef ::osg::Object * ( ::osg::ShadeModel::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( ShadeModel_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            ShadeModel_exposer.def( 
                "clone"
                , clone_function_type(&::osg::ShadeModel::clone)
                , default_clone_function_type(&ShadeModel_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::ShadeModel::cloneType
        
            typedef ::osg::Object * ( ::osg::ShadeModel::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( ShadeModel_wrapper::*default_cloneType_function_type )(  ) const;
            
            ShadeModel_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::ShadeModel::cloneType)
                , default_cloneType_function_type(&ShadeModel_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::ShadeModel::getMode
        
            typedef ::osg::ShadeModel::Mode ( ::osg::ShadeModel::*getMode_function_type )(  ) const;
            
            ShadeModel_exposer.def( 
                "getMode"
                , getMode_function_type( &::osg::ShadeModel::getMode ) );
        
        }
        { //::osg::ShadeModel::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::ShadeModel::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( ShadeModel_wrapper::*default_getType_function_type )(  ) const;
            
            ShadeModel_exposer.def( 
                "getType"
                , getType_function_type(&::osg::ShadeModel::getType)
                , default_getType_function_type(&ShadeModel_wrapper::default_getType) );
        
        }
        { //::osg::ShadeModel::isSameKindAs
        
            typedef bool ( ::osg::ShadeModel::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( ShadeModel_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            ShadeModel_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::ShadeModel::isSameKindAs)
                , default_isSameKindAs_function_type(&ShadeModel_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::ShadeModel::libraryName
        
            typedef char const * ( ::osg::ShadeModel::*libraryName_function_type )(  ) const;
            typedef char const * ( ShadeModel_wrapper::*default_libraryName_function_type )(  ) const;
            
            ShadeModel_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::ShadeModel::libraryName)
                , default_libraryName_function_type(&ShadeModel_wrapper::default_libraryName) );
        
        }
        { //::osg::ShadeModel::setMode
        
            typedef void ( ::osg::ShadeModel::*setMode_function_type )( ::osg::ShadeModel::Mode ) ;
            
            ShadeModel_exposer.def( 
                "setMode"
                , setMode_function_type( &::osg::ShadeModel::setMode )
                , ( bp::arg("mode") ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( ShadeModel_wrapper::*default_asTexture_function_type )(  ) ;
            
            ShadeModel_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&ShadeModel_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( ShadeModel_wrapper::*default_asTexture_function_type )(  ) const;
            
            ShadeModel_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&ShadeModel_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( ShadeModel_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            ShadeModel_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&ShadeModel_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( ShadeModel_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            ShadeModel_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&ShadeModel_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type )(  ) const;
            typedef unsigned int ( ShadeModel_wrapper::*default_getMember_function_type )(  ) const;
            
            ShadeModel_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&ShadeModel_wrapper::default_getMember) );
        
        }
        { //::osg::StateAttribute::getModeUsage
        
            typedef bool ( ::osg::StateAttribute::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( ShadeModel_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            ShadeModel_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::StateAttribute::getModeUsage)
                , default_getModeUsage_function_type(&ShadeModel_wrapper::default_getModeUsage)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( ShadeModel_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            ShadeModel_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&ShadeModel_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( ShadeModel_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            ShadeModel_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&ShadeModel_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
    }

}
