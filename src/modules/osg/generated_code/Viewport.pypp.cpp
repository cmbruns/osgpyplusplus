// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "Viewport.pypp.hpp"

namespace bp = boost::python;

struct Viewport_wrapper : osg::Viewport, bp::wrapper< osg::Viewport > {

    Viewport_wrapper( )
    : osg::Viewport( )
      , bp::wrapper< osg::Viewport >(){
        // null constructor
    
    }

    Viewport_wrapper(double x, double y, double width, double height )
    : osg::Viewport( x, y, width, height )
      , bp::wrapper< osg::Viewport >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::Viewport::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::Viewport::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Viewport::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Viewport::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Viewport::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Viewport::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Viewport::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Viewport::cloneType( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Viewport::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Viewport::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Viewport::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Viewport::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Viewport::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Viewport::libraryName( );
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

void register_Viewport_class(){

    { //::osg::Viewport
        typedef bp::class_< Viewport_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::Viewport >, boost::noncopyable > Viewport_exposer_t;
        Viewport_exposer_t Viewport_exposer = Viewport_exposer_t( "Viewport", "\n Encapsulate OpenGL glViewport.\n", bp::no_init );
        bp::scope Viewport_scope( Viewport_exposer );
        Viewport_exposer.def( bp::init< >() );
        Viewport_exposer.def( bp::init< double, double, double, double >(( bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") )) );
        { //::osg::Viewport::apply
        
            typedef void ( ::osg::Viewport::*apply_function_type )( ::osg::State & ) const;
            typedef void ( Viewport_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            Viewport_exposer.def( 
                "apply"
                , apply_function_type(&::osg::Viewport::apply)
                , default_apply_function_type(&Viewport_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::Viewport::aspectRatio
        
            typedef double ( ::osg::Viewport::*aspectRatio_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "aspectRatio"
                , aspectRatio_function_type( &::osg::Viewport::aspectRatio )
                , " Return the aspectRatio of the viewport, which is equal to width/height.\n If height is zero, the potential division by zero is avoided by simply returning 1.0f." );
        
        }
        { //::osg::Viewport::className
        
            typedef char const * ( ::osg::Viewport::*className_function_type )(  ) const;
            typedef char const * ( Viewport_wrapper::*default_className_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "className"
                , className_function_type(&::osg::Viewport::className)
                , default_className_function_type(&Viewport_wrapper::default_className) );
        
        }
        { //::osg::Viewport::clone
        
            typedef ::osg::Object * ( ::osg::Viewport::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( Viewport_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            Viewport_exposer.def( 
                "clone"
                , clone_function_type(&::osg::Viewport::clone)
                , default_clone_function_type(&Viewport_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Viewport::cloneType
        
            typedef ::osg::Object * ( ::osg::Viewport::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( Viewport_wrapper::*default_cloneType_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::Viewport::cloneType)
                , default_cloneType_function_type(&Viewport_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Viewport::computeWindowMatrix
        
            typedef ::osg::Matrix const ( ::osg::Viewport::*computeWindowMatrix_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "computeWindowMatrix"
                , computeWindowMatrix_function_type( &::osg::Viewport::computeWindowMatrix )
                , " Compute the Window Matrix which takes projected coords into Window coordinates.\n To convert local coordinates into window coordinates use v_window = v_local * MVPW matrix,\n where the MVPW matrix is ModelViewMatrix * ProjectionMatrix * WindowMatrix, the latter supplied by\n Viewport::computeWindowMatrix(), the ModelView and Projection Matrix can either be sourced from the\n current osg::State object, via osgUtil::SceneView or CullVisitor." );
        
        }
        { //::osg::Viewport::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::Viewport::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( Viewport_wrapper::*default_getType_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "getType"
                , getType_function_type(&::osg::Viewport::getType)
                , default_getType_function_type(&Viewport_wrapper::default_getType) );
        
        }
        { //::osg::Viewport::height
        
            typedef double & ( ::osg::Viewport::*height_function_type )(  ) ;
            
            Viewport_exposer.def( 
                "height"
                , height_function_type( &::osg::Viewport::height )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Viewport::height
        
            typedef double ( ::osg::Viewport::*height_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "height"
                , height_function_type( &::osg::Viewport::height ) );
        
        }
        { //::osg::Viewport::isSameKindAs
        
            typedef bool ( ::osg::Viewport::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( Viewport_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            Viewport_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::Viewport::isSameKindAs)
                , default_isSameKindAs_function_type(&Viewport_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Viewport::libraryName
        
            typedef char const * ( ::osg::Viewport::*libraryName_function_type )(  ) const;
            typedef char const * ( Viewport_wrapper::*default_libraryName_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::Viewport::libraryName)
                , default_libraryName_function_type(&Viewport_wrapper::default_libraryName) );
        
        }
        { //::osg::Viewport::setViewport
        
            typedef void ( ::osg::Viewport::*setViewport_function_type )( double,double,double,double ) ;
            
            Viewport_exposer.def( 
                "setViewport"
                , setViewport_function_type( &::osg::Viewport::setViewport )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::osg::Viewport::valid
        
            typedef bool ( ::osg::Viewport::*valid_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "valid"
                , valid_function_type( &::osg::Viewport::valid ) );
        
        }
        { //::osg::Viewport::width
        
            typedef double & ( ::osg::Viewport::*width_function_type )(  ) ;
            
            Viewport_exposer.def( 
                "width"
                , width_function_type( &::osg::Viewport::width )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Viewport::width
        
            typedef double ( ::osg::Viewport::*width_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "width"
                , width_function_type( &::osg::Viewport::width ) );
        
        }
        { //::osg::Viewport::x
        
            typedef double & ( ::osg::Viewport::*x_function_type )(  ) ;
            
            Viewport_exposer.def( 
                "x"
                , x_function_type( &::osg::Viewport::x )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Viewport::x
        
            typedef double ( ::osg::Viewport::*x_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "x"
                , x_function_type( &::osg::Viewport::x ) );
        
        }
        { //::osg::Viewport::y
        
            typedef double & ( ::osg::Viewport::*y_function_type )(  ) ;
            
            Viewport_exposer.def( 
                "y"
                , y_function_type( &::osg::Viewport::y )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Viewport::y
        
            typedef double ( ::osg::Viewport::*y_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "y"
                , y_function_type( &::osg::Viewport::y ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( Viewport_wrapper::*default_asTexture_function_type )(  ) ;
            
            Viewport_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&Viewport_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( Viewport_wrapper::*default_asTexture_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&Viewport_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( Viewport_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            Viewport_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&Viewport_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( Viewport_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            Viewport_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&Viewport_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type )(  ) const;
            typedef unsigned int ( Viewport_wrapper::*default_getMember_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&Viewport_wrapper::default_getMember) );
        
        }
        { //::osg::StateAttribute::getModeUsage
        
            typedef bool ( ::osg::StateAttribute::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( Viewport_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            Viewport_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::StateAttribute::getModeUsage)
                , default_getModeUsage_function_type(&Viewport_wrapper::default_getModeUsage)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( Viewport_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            Viewport_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&Viewport_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( Viewport_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            Viewport_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&Viewport_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
    }

}
