// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "UniformBufferBinding.pypp.hpp"

namespace bp = boost::python;

struct UniformBufferBinding_wrapper : osg::UniformBufferBinding, bp::wrapper< osg::UniformBufferBinding > {

    UniformBufferBinding_wrapper( )
    : osg::UniformBufferBinding( )
      , bp::wrapper< osg::UniformBufferBinding >(){
        // null constructor
    
    }

    UniformBufferBinding_wrapper(::GLuint index )
    : osg::UniformBufferBinding( index )
      , bp::wrapper< osg::UniformBufferBinding >(){
        // constructor
    
    }

    UniformBufferBinding_wrapper(::GLuint index, ::osg::BufferObject * bo, ::GLintptr offset, ::GLsizeiptr size )
    : osg::UniformBufferBinding( index, boost::python::ptr(bo), offset, size )
      , bp::wrapper< osg::UniformBufferBinding >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::UniformBufferBinding::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::UniformBufferBinding::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::UniformBufferBinding::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::UniformBufferBinding::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::UniformBufferBinding::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::UniformBufferBinding::cloneType( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::UniformBufferBinding::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::UniformBufferBinding::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::UniformBufferBinding::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::UniformBufferBinding::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::UniformBufferBinding::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::UniformBufferBinding::libraryName( );
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

void register_UniformBufferBinding_class(){

    { //::osg::UniformBufferBinding
        typedef bp::class_< UniformBufferBinding_wrapper, osg::ref_ptr< ::osg::UniformBufferBinding >, boost::noncopyable > UniformBufferBinding_exposer_t;
        UniformBufferBinding_exposer_t UniformBufferBinding_exposer = UniformBufferBinding_exposer_t( "UniformBufferBinding", "\n StateAttribute for binding a uniform buffer index target.\n", bp::init< >("\n StateAttribute for binding a uniform buffer index target.\n") );
        bp::scope UniformBufferBinding_scope( UniformBufferBinding_exposer );
        UniformBufferBinding_exposer.def( bp::init< GLuint >(( bp::arg("index") )) );
        bp::implicitly_convertible< GLuint, osg::UniformBufferBinding >();
        UniformBufferBinding_exposer.def( bp::init< GLuint, osg::BufferObject *, GLintptr, GLsizeiptr >(( bp::arg("index"), bp::arg("bo"), bp::arg("offset"), bp::arg("size") ), "\n Create a binding for a uniform buffer index target.\n  @param index: the index target\n  @param bo: associated buffer object\n  @param offset: offset into buffer object\n  @param size: size of data in buffer object\n") );
        { //::osg::UniformBufferBinding::className
        
            typedef char const * ( ::osg::UniformBufferBinding::*className_function_type )(  ) const;
            typedef char const * ( UniformBufferBinding_wrapper::*default_className_function_type )(  ) const;
            
            UniformBufferBinding_exposer.def( 
                "className"
                , className_function_type(&::osg::UniformBufferBinding::className)
                , default_className_function_type(&UniformBufferBinding_wrapper::default_className) );
        
        }
        { //::osg::UniformBufferBinding::clone
        
            typedef ::osg::Object * ( ::osg::UniformBufferBinding::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( UniformBufferBinding_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            UniformBufferBinding_exposer.def( 
                "clone"
                , clone_function_type(&::osg::UniformBufferBinding::clone)
                , default_clone_function_type(&UniformBufferBinding_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::UniformBufferBinding::cloneType
        
            typedef ::osg::Object * ( ::osg::UniformBufferBinding::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( UniformBufferBinding_wrapper::*default_cloneType_function_type )(  ) const;
            
            UniformBufferBinding_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::UniformBufferBinding::cloneType)
                , default_cloneType_function_type(&UniformBufferBinding_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::UniformBufferBinding::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::UniformBufferBinding::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( UniformBufferBinding_wrapper::*default_getType_function_type )(  ) const;
            
            UniformBufferBinding_exposer.def( 
                "getType"
                , getType_function_type(&::osg::UniformBufferBinding::getType)
                , default_getType_function_type(&UniformBufferBinding_wrapper::default_getType) );
        
        }
        { //::osg::UniformBufferBinding::isSameKindAs
        
            typedef bool ( ::osg::UniformBufferBinding::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( UniformBufferBinding_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            UniformBufferBinding_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::UniformBufferBinding::isSameKindAs)
                , default_isSameKindAs_function_type(&UniformBufferBinding_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::UniformBufferBinding::libraryName
        
            typedef char const * ( ::osg::UniformBufferBinding::*libraryName_function_type )(  ) const;
            typedef char const * ( UniformBufferBinding_wrapper::*default_libraryName_function_type )(  ) const;
            
            UniformBufferBinding_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::UniformBufferBinding::libraryName)
                , default_libraryName_function_type(&UniformBufferBinding_wrapper::default_libraryName) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( UniformBufferBinding_wrapper::*default_asTexture_function_type )(  ) ;
            
            UniformBufferBinding_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&UniformBufferBinding_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( UniformBufferBinding_wrapper::*default_asTexture_function_type )(  ) const;
            
            UniformBufferBinding_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&UniformBufferBinding_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( UniformBufferBinding_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            UniformBufferBinding_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&UniformBufferBinding_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( UniformBufferBinding_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            UniformBufferBinding_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&UniformBufferBinding_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::getModeUsage
        
            typedef bool ( ::osg::StateAttribute::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( UniformBufferBinding_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            UniformBufferBinding_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::StateAttribute::getModeUsage)
                , default_getModeUsage_function_type(&UniformBufferBinding_wrapper::default_getModeUsage)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( UniformBufferBinding_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            UniformBufferBinding_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&UniformBufferBinding_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( UniformBufferBinding_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            UniformBufferBinding_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&UniformBufferBinding_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
    }

}
