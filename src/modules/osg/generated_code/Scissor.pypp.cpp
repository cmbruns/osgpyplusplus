// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "Scissor.pypp.hpp"

namespace bp = boost::python;

struct Scissor_wrapper : osg::Scissor, bp::wrapper< osg::Scissor > {

    Scissor_wrapper( )
    : osg::Scissor( )
      , bp::wrapper< osg::Scissor >(){
        // null constructor
    
    }

    Scissor_wrapper(int x, int y, int width, int height )
    : osg::Scissor( x, y, width, height )
      , bp::wrapper< osg::Scissor >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::Scissor::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::Scissor::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Scissor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Scissor::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Scissor::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Scissor::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Scissor::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Scissor::cloneType( );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::Scissor::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::Scissor::getModeUsage( boost::ref(usage) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Scissor::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Scissor::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Scissor::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Scissor::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Scissor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Scissor::libraryName( );
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

void register_Scissor_class(){

    bp::class_< Scissor_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::Scissor >, boost::noncopyable >( "Scissor", "\n Encapsulate OpenGL glScissor.\n", bp::no_init )    
        .def( bp::init< >("\n Encapsulate OpenGL glScissor.\n") )    
        .def( bp::init< int, int, int, int >(( bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") )) )    
        .def( 
            "apply"
            , (void ( ::osg::Scissor::* )( ::osg::State & ) const)(&::osg::Scissor::apply)
            , (void ( Scissor_wrapper::* )( ::osg::State & ) const)(&Scissor_wrapper::default_apply)
            , ( bp::arg("state") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::Scissor::* )(  ) const)(&::osg::Scissor::className)
            , (char const * ( Scissor_wrapper::* )(  ) const)(&Scissor_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::Scissor::* )( ::osg::CopyOp const & ) const)(&::osg::Scissor::clone)
            , (::osg::Object * ( Scissor_wrapper::* )( ::osg::CopyOp const & ) const)(&Scissor_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::Scissor::* )(  ) const)(&::osg::Scissor::cloneType)
            , (::osg::Object * ( Scissor_wrapper::* )(  ) const)(&Scissor_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getModeUsage"
            , (bool ( ::osg::Scissor::* )( ::osg::StateAttribute::ModeUsage & ) const)(&::osg::Scissor::getModeUsage)
            , (bool ( Scissor_wrapper::* )( ::osg::StateAttribute::ModeUsage & ) const)(&Scissor_wrapper::default_getModeUsage)
            , ( bp::arg("usage") ) )    
        .def( 
            "getScissor"
            , (void ( ::osg::Scissor::* )( int &,int &,int &,int & ) const)( &::osg::Scissor::getScissor )
            , ( bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") ) )    
        .def( 
            "getType"
            , (::osg::StateAttribute::Type ( ::osg::Scissor::* )(  ) const)(&::osg::Scissor::getType)
            , (::osg::StateAttribute::Type ( Scissor_wrapper::* )(  ) const)(&Scissor_wrapper::default_getType) )    
        .def( 
            "height"
            , (int & ( ::osg::Scissor::* )(  ) )( &::osg::Scissor::height )
            , bp::return_value_policy< bp::copy_non_const_reference >() )    
        .def( 
            "height"
            , (int ( ::osg::Scissor::* )(  ) const)( &::osg::Scissor::height ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::Scissor::* )( ::osg::Object const * ) const)(&::osg::Scissor::isSameKindAs)
            , (bool ( Scissor_wrapper::* )( ::osg::Object const * ) const)(&Scissor_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::Scissor::* )(  ) const)(&::osg::Scissor::libraryName)
            , (char const * ( Scissor_wrapper::* )(  ) const)(&Scissor_wrapper::default_libraryName) )    
        .def( 
            "setScissor"
            , (void ( ::osg::Scissor::* )( int,int,int,int ) )( &::osg::Scissor::setScissor )
            , ( bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") ) )    
        .def( 
            "width"
            , (int & ( ::osg::Scissor::* )(  ) )( &::osg::Scissor::width )
            , bp::return_value_policy< bp::copy_non_const_reference >() )    
        .def( 
            "width"
            , (int ( ::osg::Scissor::* )(  ) const)( &::osg::Scissor::width ) )    
        .def( 
            "x"
            , (int & ( ::osg::Scissor::* )(  ) )( &::osg::Scissor::x )
            , bp::return_value_policy< bp::copy_non_const_reference >() )    
        .def( 
            "x"
            , (int ( ::osg::Scissor::* )(  ) const)( &::osg::Scissor::x ) )    
        .def( 
            "y"
            , (int & ( ::osg::Scissor::* )(  ) )( &::osg::Scissor::y )
            , bp::return_value_policy< bp::copy_non_const_reference >() )    
        .def( 
            "y"
            , (int ( ::osg::Scissor::* )(  ) const)( &::osg::Scissor::y ) )    
        .def( 
            "asTexture"
            , (::osg::Texture * ( ::osg::StateAttribute::* )(  ) )(&::osg::StateAttribute::asTexture)
            , (::osg::Texture * ( Scissor_wrapper::* )(  ) )(&Scissor_wrapper::default_asTexture)
            , bp::return_internal_reference< >() )    
        .def( 
            "asTexture"
            , (::osg::Texture const * ( ::osg::StateAttribute::* )(  ) const)(&::osg::StateAttribute::asTexture)
            , (::osg::Texture const * ( Scissor_wrapper::* )(  ) const)(&Scissor_wrapper::default_asTexture)
            , bp::return_internal_reference< >() )    
        .def( 
            "checkValidityOfAssociatedModes"
            , (bool ( ::osg::StateAttribute::* )( ::osg::State & ) const)(&::osg::StateAttribute::checkValidityOfAssociatedModes)
            , (bool ( Scissor_wrapper::* )( ::osg::State & ) const)(&Scissor_wrapper::default_checkValidityOfAssociatedModes)
            , ( bp::arg("arg0") ) )    
        .def( 
            "compileGLObjects"
            , (void ( ::osg::StateAttribute::* )( ::osg::State & ) const)(&::osg::StateAttribute::compileGLObjects)
            , (void ( Scissor_wrapper::* )( ::osg::State & ) const)(&Scissor_wrapper::default_compileGLObjects)
            , ( bp::arg("arg0") ) )    
        .def( 
            "getMember"
            , (unsigned int ( ::osg::StateAttribute::* )(  ) const)(&::osg::StateAttribute::getMember)
            , (unsigned int ( Scissor_wrapper::* )(  ) const)(&Scissor_wrapper::default_getMember) )    
        .def( 
            "isTextureAttribute"
            , (bool ( ::osg::StateAttribute::* )(  ) const)(&::osg::StateAttribute::isTextureAttribute)
            , (bool ( Scissor_wrapper::* )(  ) const)(&Scissor_wrapper::default_isTextureAttribute) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::StateAttribute::* )( unsigned int ) )(&::osg::StateAttribute::resizeGLObjectBuffers)
            , (void ( Scissor_wrapper::* )( unsigned int ) )(&Scissor_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("arg0") ) );

}
