// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "hint.pypp.hpp"

namespace bp = boost::python;

struct Hint_wrapper : osg::Hint, bp::wrapper< osg::Hint > {

    Hint_wrapper( )
    : osg::Hint( )
      , bp::wrapper< osg::Hint >(){
        // null constructor
    
    }

    Hint_wrapper(::GLenum target, ::GLenum mode )
    : osg::Hint( target, mode )
      , bp::wrapper< osg::Hint >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::Hint::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::Hint::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Hint::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Hint::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Hint::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Hint::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Hint::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Hint::cloneType( );
    }

    virtual unsigned int getMember(  ) const  {
        if( bp::override func_getMember = this->get_override( "getMember" ) )
            return func_getMember(  );
        else{
            return this->osg::Hint::getMember(  );
        }
    }
    
    unsigned int default_getMember(  ) const  {
        return osg::Hint::getMember( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Hint::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Hint::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Hint::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Hint::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Hint::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Hint::libraryName( );
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

void register_Hint_class(){

    bp::class_< Hint_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::Hint >, boost::noncopyable >( "Hint", bp::init< >() )    
        .def( bp::init< GLenum, GLenum >(( bp::arg("target"), bp::arg("mode") )) )    
        .def( 
            "apply"
            , (void ( ::osg::Hint::* )( ::osg::State & ) const)(&::osg::Hint::apply)
            , (void ( Hint_wrapper::* )( ::osg::State & ) const)(&Hint_wrapper::default_apply)
            , ( bp::arg("state") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::Hint::* )(  ) const)(&::osg::Hint::className)
            , (char const * ( Hint_wrapper::* )(  ) const)(&Hint_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::Hint::* )( ::osg::CopyOp const & ) const)(&::osg::Hint::clone)
            , (::osg::Object * ( Hint_wrapper::* )( ::osg::CopyOp const & ) const)(&Hint_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::Hint::* )(  ) const)(&::osg::Hint::cloneType)
            , (::osg::Object * ( Hint_wrapper::* )(  ) const)(&Hint_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getMember"
            , (unsigned int ( ::osg::Hint::* )(  ) const)(&::osg::Hint::getMember)
            , (unsigned int ( Hint_wrapper::* )(  ) const)(&Hint_wrapper::default_getMember) )    
        .def( 
            "getMode"
            , (::GLenum ( ::osg::Hint::* )(  ) const)( &::osg::Hint::getMode ) )    
        .def( 
            "getTarget"
            , (::GLenum ( ::osg::Hint::* )(  ) const)( &::osg::Hint::getTarget ) )    
        .def( 
            "getType"
            , (::osg::StateAttribute::Type ( ::osg::Hint::* )(  ) const)(&::osg::Hint::getType)
            , (::osg::StateAttribute::Type ( Hint_wrapper::* )(  ) const)(&Hint_wrapper::default_getType) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::Hint::* )( ::osg::Object const * ) const)(&::osg::Hint::isSameKindAs)
            , (bool ( Hint_wrapper::* )( ::osg::Object const * ) const)(&Hint_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::Hint::* )(  ) const)(&::osg::Hint::libraryName)
            , (char const * ( Hint_wrapper::* )(  ) const)(&Hint_wrapper::default_libraryName) )    
        .def( 
            "setMode"
            , (void ( ::osg::Hint::* )( ::GLenum ) )( &::osg::Hint::setMode )
            , ( bp::arg("mode") ) )    
        .def( 
            "setTarget"
            , (void ( ::osg::Hint::* )( ::GLenum ) )( &::osg::Hint::setTarget )
            , ( bp::arg("target") ) )    
        .def( 
            "asTexture"
            , (::osg::Texture * ( ::osg::StateAttribute::* )(  ) )(&::osg::StateAttribute::asTexture)
            , (::osg::Texture * ( Hint_wrapper::* )(  ) )(&Hint_wrapper::default_asTexture)
            , bp::return_internal_reference< >() )    
        .def( 
            "asTexture"
            , (::osg::Texture const * ( ::osg::StateAttribute::* )(  ) const)(&::osg::StateAttribute::asTexture)
            , (::osg::Texture const * ( Hint_wrapper::* )(  ) const)(&Hint_wrapper::default_asTexture)
            , bp::return_internal_reference< >() )    
        .def( 
            "checkValidityOfAssociatedModes"
            , (bool ( ::osg::StateAttribute::* )( ::osg::State & ) const)(&::osg::StateAttribute::checkValidityOfAssociatedModes)
            , (bool ( Hint_wrapper::* )( ::osg::State & ) const)(&Hint_wrapper::default_checkValidityOfAssociatedModes)
            , ( bp::arg("arg0") ) )    
        .def( 
            "compileGLObjects"
            , (void ( ::osg::StateAttribute::* )( ::osg::State & ) const)(&::osg::StateAttribute::compileGLObjects)
            , (void ( Hint_wrapper::* )( ::osg::State & ) const)(&Hint_wrapper::default_compileGLObjects)
            , ( bp::arg("arg0") ) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ) )(&::osg::Object::computeDataVariance)
            , (void ( Hint_wrapper::* )(  ) )(&Hint_wrapper::default_computeDataVariance) )    
        .def( 
            "getModeUsage"
            , (bool ( ::osg::StateAttribute::* )( ::osg::StateAttribute::ModeUsage & ) const)(&::osg::StateAttribute::getModeUsage)
            , (bool ( Hint_wrapper::* )( ::osg::StateAttribute::ModeUsage & ) const)(&Hint_wrapper::default_getModeUsage)
            , ( bp::arg("arg0") ) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ) )(&::osg::Object::getUserData)
            , (::osg::Referenced * ( Hint_wrapper::* )(  ) )(&Hint_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  ) const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( Hint_wrapper::* )(  ) const)(&Hint_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "isTextureAttribute"
            , (bool ( ::osg::StateAttribute::* )(  ) const)(&::osg::StateAttribute::isTextureAttribute)
            , (bool ( Hint_wrapper::* )(  ) const)(&Hint_wrapper::default_isTextureAttribute) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::StateAttribute::* )( unsigned int ) )(&::osg::StateAttribute::resizeGLObjectBuffers)
            , (void ( Hint_wrapper::* )( unsigned int ) )(&Hint_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("arg0") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ) )(&::osg::Object::setName)
            , (void ( Hint_wrapper::* )( ::std::string const & ) )(&Hint_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ) )( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Object::* )( bool ) )(&::osg::Object::setThreadSafeRefUnref)
            , (void ( Hint_wrapper::* )( bool ) )(&Hint_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ) )(&::osg::Object::setUserData)
            , (void ( Hint_wrapper::* )( ::osg::Referenced * ) )(&Hint_wrapper::default_setUserData)
            , ( bp::arg("obj") ) );

}