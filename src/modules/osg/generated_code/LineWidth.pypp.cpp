// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "linewidth.pypp.hpp"

namespace bp = boost::python;

struct LineWidth_wrapper : osg::LineWidth, bp::wrapper< osg::LineWidth > {

    LineWidth_wrapper(float width=1.0e+0f )
    : osg::LineWidth( width )
      , bp::wrapper< osg::LineWidth >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::LineWidth::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::LineWidth::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::LineWidth::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::LineWidth::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::LineWidth::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::LineWidth::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::LineWidth::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::LineWidth::cloneType( );
    }

    virtual int compare( ::osg::StateAttribute const & sa ) const  {
        if( bp::override func_compare = this->get_override( "compare" ) )
            return func_compare( boost::ref(sa) );
        else{
            return this->osg::LineWidth::compare( boost::ref(sa) );
        }
    }
    
    int default_compare( ::osg::StateAttribute const & sa ) const  {
        return osg::LineWidth::compare( boost::ref(sa) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::LineWidth::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::LineWidth::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::LineWidth::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::LineWidth::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::LineWidth::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::LineWidth::libraryName( );
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

void register_LineWidth_class(){

    { //::osg::LineWidth
        typedef bp::class_< LineWidth_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::LineWidth >, boost::noncopyable > LineWidth_exposer_t;
        LineWidth_exposer_t LineWidth_exposer = LineWidth_exposer_t( "LineWidth", "\n LineWidth - encapsulates the OpenGL glLineWidth for setting the width of lines in pixels.\n", bp::no_init );
        bp::scope LineWidth_scope( LineWidth_exposer );
        LineWidth_exposer.def( bp::init< bp::optional< float > >(( bp::arg("width")=1.0e+0f ), "\n LineWidth - encapsulates the OpenGL glLineWidth for setting the width of lines in pixels.\n") );
        bp::implicitly_convertible< float, osg::LineWidth >();
        { //::osg::LineWidth::apply
        
            typedef void ( ::osg::LineWidth::*apply_function_type)( ::osg::State & ) const;
            typedef void ( LineWidth_wrapper::*default_apply_function_type)( ::osg::State & ) const;
            
            LineWidth_exposer.def( 
                "apply"
                , apply_function_type(&::osg::LineWidth::apply)
                , default_apply_function_type(&LineWidth_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::LineWidth::className
        
            typedef char const * ( ::osg::LineWidth::*className_function_type)(  ) const;
            typedef char const * ( LineWidth_wrapper::*default_className_function_type)(  ) const;
            
            LineWidth_exposer.def( 
                "className"
                , className_function_type(&::osg::LineWidth::className)
                , default_className_function_type(&LineWidth_wrapper::default_className) );
        
        }
        { //::osg::LineWidth::clone
        
            typedef ::osg::Object * ( ::osg::LineWidth::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( LineWidth_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            LineWidth_exposer.def( 
                "clone"
                , clone_function_type(&::osg::LineWidth::clone)
                , default_clone_function_type(&LineWidth_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::LineWidth::cloneType
        
            typedef ::osg::Object * ( ::osg::LineWidth::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( LineWidth_wrapper::*default_cloneType_function_type)(  ) const;
            
            LineWidth_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::LineWidth::cloneType)
                , default_cloneType_function_type(&LineWidth_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::LineWidth::compare
        
            typedef int ( ::osg::LineWidth::*compare_function_type)( ::osg::StateAttribute const & ) const;
            typedef int ( LineWidth_wrapper::*default_compare_function_type)( ::osg::StateAttribute const & ) const;
            
            LineWidth_exposer.def( 
                "compare"
                , compare_function_type(&::osg::LineWidth::compare)
                , default_compare_function_type(&LineWidth_wrapper::default_compare)
                , ( bp::arg("sa") ) );
        
        }
        { //::osg::LineWidth::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::LineWidth::*getType_function_type)(  ) const;
            typedef ::osg::StateAttribute::Type ( LineWidth_wrapper::*default_getType_function_type)(  ) const;
            
            LineWidth_exposer.def( 
                "getType"
                , getType_function_type(&::osg::LineWidth::getType)
                , default_getType_function_type(&LineWidth_wrapper::default_getType) );
        
        }
        { //::osg::LineWidth::getWidth
        
            typedef float ( ::osg::LineWidth::*getWidth_function_type)(  ) const;
            
            LineWidth_exposer.def( 
                "getWidth"
                , getWidth_function_type( &::osg::LineWidth::getWidth ) );
        
        }
        { //::osg::LineWidth::isSameKindAs
        
            typedef bool ( ::osg::LineWidth::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( LineWidth_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            LineWidth_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::LineWidth::isSameKindAs)
                , default_isSameKindAs_function_type(&LineWidth_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::LineWidth::libraryName
        
            typedef char const * ( ::osg::LineWidth::*libraryName_function_type)(  ) const;
            typedef char const * ( LineWidth_wrapper::*default_libraryName_function_type)(  ) const;
            
            LineWidth_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::LineWidth::libraryName)
                , default_libraryName_function_type(&LineWidth_wrapper::default_libraryName) );
        
        }
        { //::osg::LineWidth::setWidth
        
            typedef void ( ::osg::LineWidth::*setWidth_function_type)( float ) ;
            
            LineWidth_exposer.def( 
                "setWidth"
                , setWidth_function_type( &::osg::LineWidth::setWidth )
                , ( bp::arg("width") ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type)(  ) ;
            typedef ::osg::Texture * ( LineWidth_wrapper::*default_asTexture_function_type)(  ) ;
            
            LineWidth_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&LineWidth_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type)(  ) const;
            typedef ::osg::Texture const * ( LineWidth_wrapper::*default_asTexture_function_type)(  ) const;
            
            LineWidth_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&LineWidth_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            typedef bool ( LineWidth_wrapper::*default_checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            
            LineWidth_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&LineWidth_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type)( ::osg::State & ) const;
            typedef void ( LineWidth_wrapper::*default_compileGLObjects_function_type)( ::osg::State & ) const;
            
            LineWidth_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&LineWidth_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( LineWidth_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            LineWidth_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&LineWidth_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type)(  ) const;
            typedef unsigned int ( LineWidth_wrapper::*default_getMember_function_type)(  ) const;
            
            LineWidth_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&LineWidth_wrapper::default_getMember) );
        
        }
        { //::osg::StateAttribute::getModeUsage
        
            typedef bool ( ::osg::StateAttribute::*getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( LineWidth_wrapper::*default_getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            
            LineWidth_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::StateAttribute::getModeUsage)
                , default_getModeUsage_function_type(&LineWidth_wrapper::default_getModeUsage)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( LineWidth_wrapper::*default_getUserData_function_type)(  ) ;
            
            LineWidth_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&LineWidth_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( LineWidth_wrapper::*default_getUserData_function_type)(  ) const;
            
            LineWidth_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&LineWidth_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type)(  ) const;
            typedef bool ( LineWidth_wrapper::*default_isTextureAttribute_function_type)(  ) const;
            
            LineWidth_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&LineWidth_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( LineWidth_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            LineWidth_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&LineWidth_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( LineWidth_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            LineWidth_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&LineWidth_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            LineWidth_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( LineWidth_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            LineWidth_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&LineWidth_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( LineWidth_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            LineWidth_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&LineWidth_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
    }

}
