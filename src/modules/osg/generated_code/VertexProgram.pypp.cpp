// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "vertexprogram.pypp.hpp"

namespace bp = boost::python;

struct VertexProgram_wrapper : osg::VertexProgram, bp::wrapper< osg::VertexProgram > {

    struct Extensions_wrapper : osg::VertexProgram::Extensions, bp::wrapper< osg::VertexProgram::Extensions > {
    
        static void lowestCommonDenominator( ::osg::VertexProgram::Extensions & inst, ::osg::VertexProgram::Extensions & rhs ){
            inst.lowestCommonDenominator(rhs);
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

    VertexProgram_wrapper( )
    : osg::VertexProgram( )
      , bp::wrapper< osg::VertexProgram >(){
        // null constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::VertexProgram::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::VertexProgram::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::VertexProgram::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::VertexProgram::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::VertexProgram::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::VertexProgram::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::VertexProgram::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::VertexProgram::cloneType( );
    }

    virtual void compileGLObjects( ::osg::State & state ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(state) );
        else{
            this->osg::VertexProgram::compileGLObjects( boost::ref(state) );
        }
    }
    
    void default_compileGLObjects( ::osg::State & state ) const  {
        osg::VertexProgram::compileGLObjects( boost::ref(state) );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::VertexProgram::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::VertexProgram::getModeUsage( boost::ref(usage) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::VertexProgram::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::VertexProgram::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::VertexProgram::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::VertexProgram::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::VertexProgram::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::VertexProgram::libraryName( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::VertexProgram::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::VertexProgram::resizeGLObjectBuffers( maxSize );
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

void register_VertexProgram_class(){

    { //::osg::VertexProgram
        typedef bp::class_< VertexProgram_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::VertexProgram >, boost::noncopyable > VertexProgram_exposer_t;
        VertexProgram_exposer_t VertexProgram_exposer = VertexProgram_exposer_t( "VertexProgram", "\n VertexProgram - encapsulates the OpenGL ARB vertex program state.\n", bp::no_init );
        bp::scope VertexProgram_scope( VertexProgram_exposer );
        bp::class_< VertexProgram_wrapper::Extensions_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::VertexProgram::Extensions > >( "Extensions", "\n Extensions class which encapsulates the querying of extensions and\n associated function pointers, and provide convenience wrappers to\n check for the extensions or use the associated functions.\n", bp::no_init )    
            .def( 
                "glBindProgram"
                , (void ( ::osg::VertexProgram::Extensions::* )( ::GLenum,::GLuint )const)( &::osg::VertexProgram::Extensions::glBindProgram )
                , ( bp::arg("target"), bp::arg("id") ) )    
            .def( 
                "glDeletePrograms"
                , (void ( ::osg::VertexProgram::Extensions::* )( ::GLsizei,::GLuint * )const)( &::osg::VertexProgram::Extensions::glDeletePrograms )
                , ( bp::arg("n"), bp::arg("programs") ) )    
            .def( 
                "glGenPrograms"
                , (void ( ::osg::VertexProgram::Extensions::* )( ::GLsizei,::GLuint * )const)( &::osg::VertexProgram::Extensions::glGenPrograms )
                , ( bp::arg("n"), bp::arg("programs") ) )    
            .def( 
                "glProgramLocalParameter4fv"
                , (void ( ::osg::VertexProgram::Extensions::* )( ::GLenum,::GLuint,::GLfloat const * )const)( &::osg::VertexProgram::Extensions::glProgramLocalParameter4fv )
                , ( bp::arg("target"), bp::arg("index"), bp::arg("params") ) )    
            .def( 
                "glProgramString"
                , (void ( ::osg::VertexProgram::Extensions::* )( ::GLenum,::GLenum,::GLsizei,void const * )const)( &::osg::VertexProgram::Extensions::glProgramString )
                , ( bp::arg("target"), bp::arg("format"), bp::arg("len"), bp::arg("string") ) )    
            .def( 
                "isVertexProgramSupported"
                , (bool ( ::osg::VertexProgram::Extensions::* )(  )const)( &::osg::VertexProgram::Extensions::isVertexProgramSupported ) )    
            .def( 
                "lowestCommonDenominator"
                , (void (*)( ::osg::VertexProgram::Extensions &,::osg::VertexProgram::Extensions & ))( &VertexProgram_wrapper::Extensions_wrapper::lowestCommonDenominator )
                , ( bp::arg("inst"), bp::arg("rhs") ) )    
            .def( 
                "setVertexProgramSupported"
                , (void ( ::osg::VertexProgram::Extensions::* )( bool ))( &::osg::VertexProgram::Extensions::setVertexProgramSupported )
                , ( bp::arg("flag") ) )    
            .def( 
                "setupGLExtensions"
                , (void ( ::osg::VertexProgram::Extensions::* )( unsigned int ))( &::osg::VertexProgram::Extensions::setupGLExtensions )
                , ( bp::arg("contextID") ) )    
            .def( 
                "setThreadSafeRefUnref"
                , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
                , (void ( VertexProgram_wrapper::Extensions_wrapper::* )( bool ))(&VertexProgram_wrapper::Extensions_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        VertexProgram_exposer.def( bp::init< >("\n VertexProgram - encapsulates the OpenGL ARB vertex program state.\n") );
        { //::osg::VertexProgram::apply
        
            typedef void ( ::osg::VertexProgram::*apply_function_type)( ::osg::State & ) const;
            typedef void ( VertexProgram_wrapper::*default_apply_function_type)( ::osg::State & ) const;
            
            VertexProgram_exposer.def( 
                "apply"
                , apply_function_type(&::osg::VertexProgram::apply)
                , default_apply_function_type(&VertexProgram_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::VertexProgram::className
        
            typedef char const * ( ::osg::VertexProgram::*className_function_type)(  ) const;
            typedef char const * ( VertexProgram_wrapper::*default_className_function_type)(  ) const;
            
            VertexProgram_exposer.def( 
                "className"
                , className_function_type(&::osg::VertexProgram::className)
                , default_className_function_type(&VertexProgram_wrapper::default_className) );
        
        }
        { //::osg::VertexProgram::clone
        
            typedef ::osg::Object * ( ::osg::VertexProgram::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( VertexProgram_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            VertexProgram_exposer.def( 
                "clone"
                , clone_function_type(&::osg::VertexProgram::clone)
                , default_clone_function_type(&VertexProgram_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::VertexProgram::cloneType
        
            typedef ::osg::Object * ( ::osg::VertexProgram::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( VertexProgram_wrapper::*default_cloneType_function_type)(  ) const;
            
            VertexProgram_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::VertexProgram::cloneType)
                , default_cloneType_function_type(&VertexProgram_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::VertexProgram::compileGLObjects
        
            typedef void ( ::osg::VertexProgram::*compileGLObjects_function_type)( ::osg::State & ) const;
            typedef void ( VertexProgram_wrapper::*default_compileGLObjects_function_type)( ::osg::State & ) const;
            
            VertexProgram_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::VertexProgram::compileGLObjects)
                , default_compileGLObjects_function_type(&VertexProgram_wrapper::default_compileGLObjects)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::VertexProgram::deleteVertexProgramObject
        
            typedef void ( *deleteVertexProgramObject_function_type )( unsigned int,::GLuint );
            
            VertexProgram_exposer.def( 
                "deleteVertexProgramObject"
                , deleteVertexProgramObject_function_type( &::osg::VertexProgram::deleteVertexProgramObject )
                , ( bp::arg("contextID"), bp::arg("handle") )
                , " Use deleteVertexProgramObject instead of glDeletePrograms to allow\n OpenGL Vertex Program objects to cached until they can be deleted\n by the OpenGL context in which they were created, specified\n by contextID." );
        
        }
        { //::osg::VertexProgram::dirtyVertexProgramObject
        
            typedef void ( ::osg::VertexProgram::*dirtyVertexProgramObject_function_type)(  ) ;
            
            VertexProgram_exposer.def( 
                "dirtyVertexProgramObject"
                , dirtyVertexProgramObject_function_type( &::osg::VertexProgram::dirtyVertexProgramObject )
                , " Force a recompile on next apply() of associated OpenGL vertex program objects." );
        
        }
        { //::osg::VertexProgram::discardDeletedVertexProgramObjects
        
            typedef void ( *discardDeletedVertexProgramObjects_function_type )( unsigned int );
            
            VertexProgram_exposer.def( 
                "discardDeletedVertexProgramObjects"
                , discardDeletedVertexProgramObjects_function_type( &::osg::VertexProgram::discardDeletedVertexProgramObjects )
                , ( bp::arg("contextID") )
                , " discard all the cached vertex programs which need to be deleted\n in the OpenGL context related to contextID.\n Note, unlike flush no OpenGL calls are made, instead the handles are all removed.\n this call is useful for when an OpenGL context has been destroyed." );
        
        }
        { //::osg::VertexProgram::flushDeletedVertexProgramObjects
        
            typedef void ( *flushDeletedVertexProgramObjects_function_type )( unsigned int,double,double & );
            
            VertexProgram_exposer.def( 
                "flushDeletedVertexProgramObjects"
                , flushDeletedVertexProgramObjects_function_type( &::osg::VertexProgram::flushDeletedVertexProgramObjects )
                , ( bp::arg("contextID"), bp::arg("currentTime"), bp::arg("availableTime") )
                , " Flush all the cached vertex programs which need to be deleted\n in the OpenGL context related to contextID." );
        
        }
        { //::osg::VertexProgram::getExtensions
        
            typedef ::osg::VertexProgram::Extensions * ( *getExtensions_function_type )( unsigned int,bool );
            
            VertexProgram_exposer.def( 
                "getExtensions"
                , getExtensions_function_type( &::osg::VertexProgram::getExtensions )
                , ( bp::arg("contextID"), bp::arg("createIfNotInitalized") )
                , bp::return_internal_reference< >()
                , " Function to call to get the extension of a specified context.\n If the Extension object for that context has not yet been created\n and the createIfNotInitalized flag been set to false then returns NULL.\n If createIfNotInitalized is true then the Extensions object is\n automatically created. However, in this case the extension object\n will only be created with the graphics context associated with ContextID." );
        
        }
        { //::osg::VertexProgram::getLocalParameters
        
            typedef ::std::map< unsigned int, osg::Vec4f > & ( ::osg::VertexProgram::*getLocalParameters_function_type)(  ) ;
            
            VertexProgram_exposer.def( 
                "getLocalParameters"
                , getLocalParameters_function_type( &::osg::VertexProgram::getLocalParameters )
                , bp::return_internal_reference< >()
                , " Get list of Program Parameters" );
        
        }
        { //::osg::VertexProgram::getLocalParameters
        
            typedef ::std::map< unsigned int, osg::Vec4f > const & ( ::osg::VertexProgram::*getLocalParameters_function_type)(  ) const;
            
            VertexProgram_exposer.def( 
                "getLocalParameters"
                , getLocalParameters_function_type( &::osg::VertexProgram::getLocalParameters )
                , bp::return_internal_reference< >()
                , " Get const list of Program Parameters" );
        
        }
        { //::osg::VertexProgram::getMatrices
        
            typedef ::std::map< unsigned int, osg::Matrixd > & ( ::osg::VertexProgram::*getMatrices_function_type)(  ) ;
            
            VertexProgram_exposer.def( 
                "getMatrices"
                , getMatrices_function_type( &::osg::VertexProgram::getMatrices )
                , bp::return_internal_reference< >()
                , " Get list of Matrices" );
        
        }
        { //::osg::VertexProgram::getMatrices
        
            typedef ::std::map< unsigned int, osg::Matrixd > const & ( ::osg::VertexProgram::*getMatrices_function_type)(  ) const;
            
            VertexProgram_exposer.def( 
                "getMatrices"
                , getMatrices_function_type( &::osg::VertexProgram::getMatrices )
                , bp::return_internal_reference< >()
                , " Get list of Matrices" );
        
        }
        { //::osg::VertexProgram::getModeUsage
        
            typedef bool ( ::osg::VertexProgram::*getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( VertexProgram_wrapper::*default_getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            
            VertexProgram_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::VertexProgram::getModeUsage)
                , default_getModeUsage_function_type(&VertexProgram_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::VertexProgram::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::VertexProgram::*getType_function_type)(  ) const;
            typedef ::osg::StateAttribute::Type ( VertexProgram_wrapper::*default_getType_function_type)(  ) const;
            
            VertexProgram_exposer.def( 
                "getType"
                , getType_function_type(&::osg::VertexProgram::getType)
                , default_getType_function_type(&VertexProgram_wrapper::default_getType) );
        
        }
        { //::osg::VertexProgram::getVertexProgram
        
            typedef ::std::string const & ( ::osg::VertexProgram::*getVertexProgram_function_type)(  ) const;
            
            VertexProgram_exposer.def( 
                "getVertexProgram"
                , getVertexProgram_function_type( &::osg::VertexProgram::getVertexProgram )
                , bp::return_value_policy< bp::copy_const_reference >()
                , " Get the vertex program." );
        
        }
        { //::osg::VertexProgram::getVertexProgramID
        
            typedef ::GLuint & ( ::osg::VertexProgram::*getVertexProgramID_function_type)( unsigned int ) const;
            
            VertexProgram_exposer.def( 
                "getVertexProgramID"
                , getVertexProgramID_function_type( &::osg::VertexProgram::getVertexProgramID )
                , ( bp::arg("contextID") )
                , bp::return_value_policy< bp::copy_non_const_reference >()
                , " Get the handle to the vertex program ID for the current context." );
        
        }
        { //::osg::VertexProgram::isSameKindAs
        
            typedef bool ( ::osg::VertexProgram::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( VertexProgram_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            VertexProgram_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::VertexProgram::isSameKindAs)
                , default_isSameKindAs_function_type(&VertexProgram_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::VertexProgram::libraryName
        
            typedef char const * ( ::osg::VertexProgram::*libraryName_function_type)(  ) const;
            typedef char const * ( VertexProgram_wrapper::*default_libraryName_function_type)(  ) const;
            
            VertexProgram_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::VertexProgram::libraryName)
                , default_libraryName_function_type(&VertexProgram_wrapper::default_libraryName) );
        
        }
        { //::osg::VertexProgram::resizeGLObjectBuffers
        
            typedef void ( ::osg::VertexProgram::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( VertexProgram_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            VertexProgram_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::VertexProgram::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&VertexProgram_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::VertexProgram::setExtensions
        
            typedef void ( *setExtensions_function_type )( unsigned int,::osg::VertexProgram::Extensions * );
            
            VertexProgram_exposer.def( 
                "setExtensions"
                , setExtensions_function_type( &::osg::VertexProgram::setExtensions )
                , ( bp::arg("contextID"), bp::arg("extensions") )
                , " The setExtensions method allows users to override the extensions across graphics contexts.\n Typically used when you have different extensions supported across graphics pipes\n but need to ensure that they all use the same low common denominator extensions." );
        
        }
        { //::osg::VertexProgram::setLocalParameters
        
            typedef void ( ::osg::VertexProgram::*setLocalParameters_function_type)( ::std::map< unsigned int, osg::Vec4f > const & ) ;
            
            VertexProgram_exposer.def( 
                "setLocalParameters"
                , setLocalParameters_function_type( &::osg::VertexProgram::setLocalParameters )
                , ( bp::arg("lpl") )
                , " Set list of Program Parameters" );
        
        }
        { //::osg::VertexProgram::setMatrices
        
            typedef void ( ::osg::VertexProgram::*setMatrices_function_type)( ::std::map< unsigned int, osg::Matrixd > const & ) ;
            
            VertexProgram_exposer.def( 
                "setMatrices"
                , setMatrices_function_type( &::osg::VertexProgram::setMatrices )
                , ( bp::arg("matrices") )
                , " Set list of Matrices" );
        
        }
        { //::osg::VertexProgram::setMatrix
        
            typedef void ( ::osg::VertexProgram::*setMatrix_function_type)( ::GLenum const,::osg::Matrix const & ) ;
            
            VertexProgram_exposer.def( 
                "setMatrix"
                , setMatrix_function_type( &::osg::VertexProgram::setMatrix )
                , ( bp::arg("mode"), bp::arg("matrix") )
                , " Matrix" );
        
        }
        { //::osg::VertexProgram::setProgramLocalParameter
        
            typedef void ( ::osg::VertexProgram::*setProgramLocalParameter_function_type)( ::GLuint const,::osg::Vec4 const & ) ;
            
            VertexProgram_exposer.def( 
                "setProgramLocalParameter"
                , setProgramLocalParameter_function_type( &::osg::VertexProgram::setProgramLocalParameter )
                , ( bp::arg("index"), bp::arg("p") )
                , " Set Program Parameters" );
        
        }
        { //::osg::VertexProgram::setVertexProgram
        
            typedef void ( ::osg::VertexProgram::*setVertexProgram_function_type)( char const * ) ;
            
            VertexProgram_exposer.def( 
                "setVertexProgram"
                , setVertexProgram_function_type( &::osg::VertexProgram::setVertexProgram )
                , ( bp::arg("program") )
                , " Set the vertex program using a C style string." );
        
        }
        { //::osg::VertexProgram::setVertexProgram
        
            typedef void ( ::osg::VertexProgram::*setVertexProgram_function_type)( ::std::string const & ) ;
            
            VertexProgram_exposer.def( 
                "setVertexProgram"
                , setVertexProgram_function_type( &::osg::VertexProgram::setVertexProgram )
                , ( bp::arg("program") )
                , " Set the vertex program using C++ style string." );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type)(  ) ;
            typedef ::osg::Texture * ( VertexProgram_wrapper::*default_asTexture_function_type)(  ) ;
            
            VertexProgram_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&VertexProgram_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type)(  ) const;
            typedef ::osg::Texture const * ( VertexProgram_wrapper::*default_asTexture_function_type)(  ) const;
            
            VertexProgram_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&VertexProgram_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            typedef bool ( VertexProgram_wrapper::*default_checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            
            VertexProgram_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&VertexProgram_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( VertexProgram_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            VertexProgram_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&VertexProgram_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type)(  ) const;
            typedef unsigned int ( VertexProgram_wrapper::*default_getMember_function_type)(  ) const;
            
            VertexProgram_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&VertexProgram_wrapper::default_getMember) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( VertexProgram_wrapper::*default_getUserData_function_type)(  ) ;
            
            VertexProgram_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&VertexProgram_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( VertexProgram_wrapper::*default_getUserData_function_type)(  ) const;
            
            VertexProgram_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&VertexProgram_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type)(  ) const;
            typedef bool ( VertexProgram_wrapper::*default_isTextureAttribute_function_type)(  ) const;
            
            VertexProgram_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&VertexProgram_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( VertexProgram_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            VertexProgram_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&VertexProgram_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            VertexProgram_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( VertexProgram_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            VertexProgram_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&VertexProgram_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( VertexProgram_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            VertexProgram_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&VertexProgram_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        VertexProgram_exposer.staticmethod( "deleteVertexProgramObject" );
        VertexProgram_exposer.staticmethod( "discardDeletedVertexProgramObjects" );
        VertexProgram_exposer.staticmethod( "flushDeletedVertexProgramObjects" );
        VertexProgram_exposer.staticmethod( "getExtensions" );
        VertexProgram_exposer.staticmethod( "setExtensions" );
    }

}
