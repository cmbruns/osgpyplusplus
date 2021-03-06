// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "FrameBufferObject.pypp.hpp"

namespace bp = boost::python;

struct FrameBufferObject_wrapper : osg::FrameBufferObject, bp::wrapper< osg::FrameBufferObject > {

    FrameBufferObject_wrapper( )
    : osg::FrameBufferObject( )
      , bp::wrapper< osg::FrameBufferObject >(){
        // null constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::FrameBufferObject::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::FrameBufferObject::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::FrameBufferObject::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::FrameBufferObject::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::FrameBufferObject::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::FrameBufferObject::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::FrameBufferObject::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::FrameBufferObject::cloneType( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::FrameBufferObject::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::FrameBufferObject::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::FrameBufferObject::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::FrameBufferObject::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::FrameBufferObject::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::FrameBufferObject::libraryName( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::FrameBufferObject::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::FrameBufferObject::resizeGLObjectBuffers( maxSize );
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

};

void register_FrameBufferObject_class(){

    { //::osg::FrameBufferObject
        typedef bp::class_< FrameBufferObject_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::FrameBufferObject >, boost::noncopyable > FrameBufferObject_exposer_t;
        FrameBufferObject_exposer_t FrameBufferObject_exposer = FrameBufferObject_exposer_t( "FrameBufferObject", "\n FrameBufferObject\n", bp::no_init );
        bp::scope FrameBufferObject_scope( FrameBufferObject_exposer );
        bp::enum_< osg::FrameBufferObject::BindTarget>("BindTarget")
            .value("READ_FRAMEBUFFER", osg::FrameBufferObject::READ_FRAMEBUFFER)
            .value("DRAW_FRAMEBUFFER", osg::FrameBufferObject::DRAW_FRAMEBUFFER)
            .value("READ_DRAW_FRAMEBUFFER", osg::FrameBufferObject::READ_DRAW_FRAMEBUFFER)
            .export_values()
            ;
        FrameBufferObject_exposer.def( bp::init< >() );
        { //::osg::FrameBufferObject::apply
        
            typedef void ( ::osg::FrameBufferObject::*apply_function_type )( ::osg::State & ) const;
            typedef void ( FrameBufferObject_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            FrameBufferObject_exposer.def( 
                "apply"
                , apply_function_type(&::osg::FrameBufferObject::apply)
                , default_apply_function_type(&FrameBufferObject_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::FrameBufferObject::apply
        
            typedef void ( ::osg::FrameBufferObject::*apply_function_type )( ::osg::State &,::osg::FrameBufferObject::BindTarget ) const;
            
            FrameBufferObject_exposer.def( 
                "apply"
                , apply_function_type( &::osg::FrameBufferObject::apply )
                , ( bp::arg("state"), bp::arg("target") )
                , " Bind the FBO as either the read or draw target, or both." );
        
        }
        { //::osg::FrameBufferObject::className
        
            typedef char const * ( ::osg::FrameBufferObject::*className_function_type )(  ) const;
            typedef char const * ( FrameBufferObject_wrapper::*default_className_function_type )(  ) const;
            
            FrameBufferObject_exposer.def( 
                "className"
                , className_function_type(&::osg::FrameBufferObject::className)
                , default_className_function_type(&FrameBufferObject_wrapper::default_className) );
        
        }
        { //::osg::FrameBufferObject::clone
        
            typedef ::osg::Object * ( ::osg::FrameBufferObject::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( FrameBufferObject_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            FrameBufferObject_exposer.def( 
                "clone"
                , clone_function_type(&::osg::FrameBufferObject::clone)
                , default_clone_function_type(&FrameBufferObject_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::FrameBufferObject::cloneType
        
            typedef ::osg::Object * ( ::osg::FrameBufferObject::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( FrameBufferObject_wrapper::*default_cloneType_function_type )(  ) const;
            
            FrameBufferObject_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::FrameBufferObject::cloneType)
                , default_cloneType_function_type(&FrameBufferObject_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::FrameBufferObject::deleteFrameBufferObject
        
            typedef void ( *deleteFrameBufferObject_function_type )( unsigned int,::GLuint );
            
            FrameBufferObject_exposer.def( 
                "deleteFrameBufferObject"
                , deleteFrameBufferObject_function_type( &::osg::FrameBufferObject::deleteFrameBufferObject )
                , ( bp::arg("contextID"), bp::arg("program") )
                , " Mark internal FBO for deletion.\n Deletion requests are queued until they can be executed\n in the proper GL context." );
        
        }
        { //::osg::FrameBufferObject::discardDeletedFrameBufferObjects
        
            typedef void ( *discardDeletedFrameBufferObjects_function_type )( unsigned int );
            
            FrameBufferObject_exposer.def( 
                "discardDeletedFrameBufferObjects"
                , discardDeletedFrameBufferObjects_function_type( &::osg::FrameBufferObject::discardDeletedFrameBufferObjects )
                , ( bp::arg("contextID") )
                , " discard all the cached FBOs which need to be deleted\n in the OpenGL context related to contextID." );
        
        }
        { //::osg::FrameBufferObject::flushDeletedFrameBufferObjects
        
            typedef void ( *flushDeletedFrameBufferObjects_function_type )( unsigned int,double,double & );
            
            FrameBufferObject_exposer.def( 
                "flushDeletedFrameBufferObjects"
                , flushDeletedFrameBufferObjects_function_type( &::osg::FrameBufferObject::flushDeletedFrameBufferObjects )
                , ( bp::arg("contextID"), bp::arg("currentTime"), bp::arg("availableTime") )
                , " flush all the cached FBOs which need to be deleted\n in the OpenGL context related to contextID." );
        
        }
        { //::osg::FrameBufferObject::getAttachment
        
            typedef ::osg::FrameBufferAttachment const & ( ::osg::FrameBufferObject::*getAttachment_function_type )( ::osg::Camera::BufferComponent ) const;
            
            FrameBufferObject_exposer.def( 
                "getAttachment"
                , getAttachment_function_type( &::osg::FrameBufferObject::getAttachment )
                , ( bp::arg("attachment_point") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::FrameBufferObject::getAttachmentMap
        
            typedef ::std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > const & ( ::osg::FrameBufferObject::*getAttachmentMap_function_type )(  ) const;
            
            FrameBufferObject_exposer.def( 
                "getAttachmentMap"
                , getAttachmentMap_function_type( &::osg::FrameBufferObject::getAttachmentMap )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::FrameBufferObject::getMultipleRenderingTargets
        
            typedef ::std::vector< unsigned int > const & ( ::osg::FrameBufferObject::*getMultipleRenderingTargets_function_type )(  ) const;
            
            FrameBufferObject_exposer.def( 
                "getMultipleRenderingTargets"
                , getMultipleRenderingTargets_function_type( &::osg::FrameBufferObject::getMultipleRenderingTargets )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::FrameBufferObject::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::FrameBufferObject::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( FrameBufferObject_wrapper::*default_getType_function_type )(  ) const;
            
            FrameBufferObject_exposer.def( 
                "getType"
                , getType_function_type(&::osg::FrameBufferObject::getType)
                , default_getType_function_type(&FrameBufferObject_wrapper::default_getType) );
        
        }
        { //::osg::FrameBufferObject::hasAttachment
        
            typedef bool ( ::osg::FrameBufferObject::*hasAttachment_function_type )( ::osg::Camera::BufferComponent ) const;
            
            FrameBufferObject_exposer.def( 
                "hasAttachment"
                , hasAttachment_function_type( &::osg::FrameBufferObject::hasAttachment )
                , ( bp::arg("attachment_point") ) );
        
        }
        { //::osg::FrameBufferObject::hasMultipleRenderingTargets
        
            typedef bool ( ::osg::FrameBufferObject::*hasMultipleRenderingTargets_function_type )(  ) const;
            
            FrameBufferObject_exposer.def( 
                "hasMultipleRenderingTargets"
                , hasMultipleRenderingTargets_function_type( &::osg::FrameBufferObject::hasMultipleRenderingTargets ) );
        
        }
        { //::osg::FrameBufferObject::isMultisample
        
            typedef bool ( ::osg::FrameBufferObject::*isMultisample_function_type )(  ) const;
            
            FrameBufferObject_exposer.def( 
                "isMultisample"
                , isMultisample_function_type( &::osg::FrameBufferObject::isMultisample ) );
        
        }
        { //::osg::FrameBufferObject::isSameKindAs
        
            typedef bool ( ::osg::FrameBufferObject::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( FrameBufferObject_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            FrameBufferObject_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::FrameBufferObject::isSameKindAs)
                , default_isSameKindAs_function_type(&FrameBufferObject_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::FrameBufferObject::libraryName
        
            typedef char const * ( ::osg::FrameBufferObject::*libraryName_function_type )(  ) const;
            typedef char const * ( FrameBufferObject_wrapper::*default_libraryName_function_type )(  ) const;
            
            FrameBufferObject_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::FrameBufferObject::libraryName)
                , default_libraryName_function_type(&FrameBufferObject_wrapper::default_libraryName) );
        
        }
        { //::osg::FrameBufferObject::resizeGLObjectBuffers
        
            typedef void ( ::osg::FrameBufferObject::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( FrameBufferObject_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            FrameBufferObject_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::FrameBufferObject::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&FrameBufferObject_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::FrameBufferObject::setAttachment
        
            typedef void ( ::osg::FrameBufferObject::*setAttachment_function_type )( ::osg::Camera::BufferComponent,::osg::FrameBufferAttachment const & ) ;
            
            FrameBufferObject_exposer.def( 
                "setAttachment"
                , setAttachment_function_type( &::osg::FrameBufferObject::setAttachment )
                , ( bp::arg("attachment_point"), bp::arg("attachment") ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( FrameBufferObject_wrapper::*default_asTexture_function_type )(  ) ;
            
            FrameBufferObject_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&FrameBufferObject_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( FrameBufferObject_wrapper::*default_asTexture_function_type )(  ) const;
            
            FrameBufferObject_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&FrameBufferObject_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( FrameBufferObject_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            FrameBufferObject_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&FrameBufferObject_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( FrameBufferObject_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            FrameBufferObject_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&FrameBufferObject_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type )(  ) const;
            typedef unsigned int ( FrameBufferObject_wrapper::*default_getMember_function_type )(  ) const;
            
            FrameBufferObject_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&FrameBufferObject_wrapper::default_getMember) );
        
        }
        { //::osg::StateAttribute::getModeUsage
        
            typedef bool ( ::osg::StateAttribute::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( FrameBufferObject_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            FrameBufferObject_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::StateAttribute::getModeUsage)
                , default_getModeUsage_function_type(&FrameBufferObject_wrapper::default_getModeUsage)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( FrameBufferObject_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            FrameBufferObject_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&FrameBufferObject_wrapper::default_isTextureAttribute) );
        
        }
        FrameBufferObject_exposer.staticmethod( "deleteFrameBufferObject" );
        FrameBufferObject_exposer.staticmethod( "discardDeletedFrameBufferObjects" );
        FrameBufferObject_exposer.staticmethod( "flushDeletedFrameBufferObjects" );
    }

}
