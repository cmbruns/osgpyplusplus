// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "shapedrawable.pypp.hpp"

namespace bp = boost::python;

struct ShapeDrawable_wrapper : osg::ShapeDrawable, bp::wrapper< osg::ShapeDrawable > {

    ShapeDrawable_wrapper( )
    : osg::ShapeDrawable( )
      , bp::wrapper< osg::ShapeDrawable >(){
        // null constructor
    
    }

    ShapeDrawable_wrapper(::osg::Shape * shape, ::osg::TessellationHints * hints=0 )
    : osg::ShapeDrawable( boost::python::ptr(shape), boost::python::ptr(hints) )
      , bp::wrapper< osg::ShapeDrawable >(){
        // constructor
    
    }

    virtual void accept( ::osg::Drawable::ConstAttributeFunctor & af ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(af) );
        else{
            this->osg::ShapeDrawable::accept( boost::ref(af) );
        }
    }
    
    void default_accept( ::osg::Drawable::ConstAttributeFunctor & af ) const  {
        osg::ShapeDrawable::accept( boost::ref(af) );
    }

    virtual void accept( ::osg::PrimitiveFunctor & pf ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(pf) );
        else{
            this->osg::ShapeDrawable::accept( boost::ref(pf) );
        }
    }
    
    void default_accept( ::osg::PrimitiveFunctor & pf ) const  {
        osg::ShapeDrawable::accept( boost::ref(pf) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::ShapeDrawable::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::ShapeDrawable::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::ShapeDrawable::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::ShapeDrawable::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::ShapeDrawable::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::ShapeDrawable::cloneType( );
    }

    virtual ::osg::BoundingBox computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::ShapeDrawable::computeBound(  );
        }
    }
    
    ::osg::BoundingBox default_computeBound(  ) const  {
        return osg::ShapeDrawable::computeBound( );
    }

    virtual void drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        if( bp::override func_drawImplementation = this->get_override( "drawImplementation" ) )
            func_drawImplementation( boost::ref(renderInfo) );
        else{
            this->osg::ShapeDrawable::drawImplementation( boost::ref(renderInfo) );
        }
    }
    
    void default_drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        osg::ShapeDrawable::drawImplementation( boost::ref(renderInfo) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::ShapeDrawable::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::ShapeDrawable::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::ShapeDrawable::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::ShapeDrawable::libraryName( );
    }

    virtual bool supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::ShapeDrawable::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        return osg::ShapeDrawable::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::ShapeDrawable::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        return osg::ShapeDrawable::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::ShapeDrawable::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        return osg::ShapeDrawable::supports( boost::ref(arg0) );
    }

    virtual void accept( ::osg::Drawable::AttributeFunctor & arg0 ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(arg0) );
        else{
            this->osg::Drawable::accept( boost::ref(arg0) );
        }
    }
    
    void default_accept( ::osg::Drawable::AttributeFunctor & arg0 ) {
        osg::Drawable::accept( boost::ref(arg0) );
    }

    virtual void accept( ::osg::PrimitiveIndexFunctor & arg0 ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(arg0) );
        else{
            this->osg::Drawable::accept( boost::ref(arg0) );
        }
    }
    
    void default_accept( ::osg::PrimitiveIndexFunctor & arg0 ) const  {
        osg::Drawable::accept( boost::ref(arg0) );
    }

    virtual ::osg::Geometry * asGeometry(  ) {
        if( bp::override func_asGeometry = this->get_override( "asGeometry" ) )
            return func_asGeometry(  );
        else{
            return this->osg::Drawable::asGeometry(  );
        }
    }
    
    ::osg::Geometry * default_asGeometry(  ) {
        return osg::Drawable::asGeometry( );
    }

    virtual ::osg::Geometry const * asGeometry(  ) const  {
        if( bp::override func_asGeometry = this->get_override( "asGeometry" ) )
            return func_asGeometry(  );
        else{
            return this->osg::Drawable::asGeometry(  );
        }
    }
    
    ::osg::Geometry const * default_asGeometry(  ) const  {
        return osg::Drawable::asGeometry( );
    }

    virtual void compileGLObjects( ::osg::RenderInfo & renderInfo ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(renderInfo) );
        else{
            this->osg::Drawable::compileGLObjects( boost::ref(renderInfo) );
        }
    }
    
    void default_compileGLObjects( ::osg::RenderInfo & renderInfo ) const  {
        osg::Drawable::compileGLObjects( boost::ref(renderInfo) );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Drawable::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Drawable::computeDataVariance( );
    }

    virtual void dirtyDisplayList(  ) {
        if( bp::override func_dirtyDisplayList = this->get_override( "dirtyDisplayList" ) )
            func_dirtyDisplayList(  );
        else{
            this->osg::Drawable::dirtyDisplayList(  );
        }
    }
    
    void default_dirtyDisplayList(  ) {
        osg::Drawable::dirtyDisplayList( );
    }

    virtual unsigned int getGLObjectSizeHint(  ) const  {
        if( bp::override func_getGLObjectSizeHint = this->get_override( "getGLObjectSizeHint" ) )
            return func_getGLObjectSizeHint(  );
        else{
            return this->osg::Drawable::getGLObjectSizeHint(  );
        }
    }
    
    unsigned int default_getGLObjectSizeHint(  ) const  {
        return osg::Drawable::getGLObjectSizeHint( );
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

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Drawable::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Drawable::resizeGLObjectBuffers( maxSize );
    }

    virtual void setCullCallback( ::osg::Drawable::CullCallback * cc ) {
        if( bp::override func_setCullCallback = this->get_override( "setCullCallback" ) )
            func_setCullCallback( boost::python::ptr(cc) );
        else{
            this->osg::Drawable::setCullCallback( boost::python::ptr(cc) );
        }
    }
    
    void default_setCullCallback( ::osg::Drawable::CullCallback * cc ) {
        osg::Drawable::setCullCallback( boost::python::ptr(cc) );
    }

    virtual void setDrawCallback( ::osg::Drawable::DrawCallback * dc ) {
        if( bp::override func_setDrawCallback = this->get_override( "setDrawCallback" ) )
            func_setDrawCallback( boost::python::ptr(dc) );
        else{
            this->osg::Drawable::setDrawCallback( boost::python::ptr(dc) );
        }
    }
    
    void default_setDrawCallback( ::osg::Drawable::DrawCallback * dc ) {
        osg::Drawable::setDrawCallback( boost::python::ptr(dc) );
    }

    virtual void setEventCallback( ::osg::Drawable::EventCallback * ac ) {
        if( bp::override func_setEventCallback = this->get_override( "setEventCallback" ) )
            func_setEventCallback( boost::python::ptr(ac) );
        else{
            this->osg::Drawable::setEventCallback( boost::python::ptr(ac) );
        }
    }
    
    void default_setEventCallback( ::osg::Drawable::EventCallback * ac ) {
        osg::Drawable::setEventCallback( boost::python::ptr(ac) );
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
            this->osg::Drawable::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Drawable::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUpdateCallback( ::osg::Drawable::UpdateCallback * ac ) {
        if( bp::override func_setUpdateCallback = this->get_override( "setUpdateCallback" ) )
            func_setUpdateCallback( boost::python::ptr(ac) );
        else{
            this->osg::Drawable::setUpdateCallback( boost::python::ptr(ac) );
        }
    }
    
    void default_setUpdateCallback( ::osg::Drawable::UpdateCallback * ac ) {
        osg::Drawable::setUpdateCallback( boost::python::ptr(ac) );
    }

    virtual void setUseVertexBufferObjects( bool flag ) {
        if( bp::override func_setUseVertexBufferObjects = this->get_override( "setUseVertexBufferObjects" ) )
            func_setUseVertexBufferObjects( flag );
        else{
            this->osg::Drawable::setUseVertexBufferObjects( flag );
        }
    }
    
    void default_setUseVertexBufferObjects( bool flag ) {
        osg::Drawable::setUseVertexBufferObjects( flag );
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

    virtual bool supports( ::osg::PrimitiveIndexFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Drawable::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::PrimitiveIndexFunctor const & arg0 ) const  {
        return osg::Drawable::supports( boost::ref(arg0) );
    }

};

void register_ShapeDrawable_class(){

    { //::osg::ShapeDrawable
        typedef bp::class_< ShapeDrawable_wrapper, bp::bases< osg::Drawable >, osg::ref_ptr< ::osg::ShapeDrawable >, boost::noncopyable > ShapeDrawable_exposer_t;
        ShapeDrawable_exposer_t ShapeDrawable_exposer = ShapeDrawable_exposer_t( "ShapeDrawable", "\n Allow the use of <tt>Shape</tt>s as <tt>Drawable</tt>s, so that they can\n  be rendered with reduced effort. The implementation of  ShapeDrawable is\n  not geared to efficiency; its better to think of it as a convenience to\n  render <tt>Shape</tt>s easily (perhaps for test or debugging purposes) than\n  as the right way to render basic shapes in some efficiency-critical section\n  of code.\n", bp::no_init );
        bp::scope ShapeDrawable_scope( ShapeDrawable_exposer );
        ShapeDrawable_exposer.def( bp::init< >("\n Allow the use of <tt>Shape</tt>s as <tt>Drawable</tt>s, so that they can\n  be rendered with reduced effort. The implementation of  ShapeDrawable is\n  not geared to efficiency; its better to think of it as a convenience to\n  render <tt>Shape</tt>s easily (perhaps for test or debugging purposes) than\n  as the right way to render basic shapes in some efficiency-critical section\n  of code.\n") );
        ShapeDrawable_exposer.def( bp::init< osg::Shape *, bp::optional< osg::TessellationHints * > >(( bp::arg("shape"), bp::arg("hints")=bp::object() )) );
        bp::implicitly_convertible< osg::Shape *, osg::ShapeDrawable >();
        { //::osg::ShapeDrawable::accept
        
            typedef void ( ::osg::ShapeDrawable::*accept_function_type )( ::osg::Drawable::ConstAttributeFunctor & ) const;
            typedef void ( ShapeDrawable_wrapper::*default_accept_function_type )( ::osg::Drawable::ConstAttributeFunctor & ) const;
            
            ShapeDrawable_exposer.def( 
                "accept"
                , accept_function_type(&::osg::ShapeDrawable::accept)
                , default_accept_function_type(&ShapeDrawable_wrapper::default_accept)
                , ( bp::arg("af") ) );
        
        }
        { //::osg::ShapeDrawable::accept
        
            typedef void ( ::osg::ShapeDrawable::*accept_function_type )( ::osg::PrimitiveFunctor & ) const;
            typedef void ( ShapeDrawable_wrapper::*default_accept_function_type )( ::osg::PrimitiveFunctor & ) const;
            
            ShapeDrawable_exposer.def( 
                "accept"
                , accept_function_type(&::osg::ShapeDrawable::accept)
                , default_accept_function_type(&ShapeDrawable_wrapper::default_accept)
                , ( bp::arg("pf") ) );
        
        }
        { //::osg::ShapeDrawable::className
        
            typedef char const * ( ::osg::ShapeDrawable::*className_function_type )(  ) const;
            typedef char const * ( ShapeDrawable_wrapper::*default_className_function_type )(  ) const;
            
            ShapeDrawable_exposer.def( 
                "className"
                , className_function_type(&::osg::ShapeDrawable::className)
                , default_className_function_type(&ShapeDrawable_wrapper::default_className) );
        
        }
        { //::osg::ShapeDrawable::clone
        
            typedef ::osg::Object * ( ::osg::ShapeDrawable::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( ShapeDrawable_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            ShapeDrawable_exposer.def( 
                "clone"
                , clone_function_type(&::osg::ShapeDrawable::clone)
                , default_clone_function_type(&ShapeDrawable_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::ShapeDrawable::cloneType
        
            typedef ::osg::Object * ( ::osg::ShapeDrawable::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( ShapeDrawable_wrapper::*default_cloneType_function_type )(  ) const;
            
            ShapeDrawable_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::ShapeDrawable::cloneType)
                , default_cloneType_function_type(&ShapeDrawable_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::ShapeDrawable::computeBound
        
            typedef ::osg::BoundingBox ( ::osg::ShapeDrawable::*computeBound_function_type )(  ) const;
            typedef ::osg::BoundingBox ( ShapeDrawable_wrapper::*default_computeBound_function_type )(  ) const;
            
            ShapeDrawable_exposer.def( 
                "computeBound"
                , computeBound_function_type(&::osg::ShapeDrawable::computeBound)
                , default_computeBound_function_type(&ShapeDrawable_wrapper::default_computeBound) );
        
        }
        { //::osg::ShapeDrawable::drawImplementation
        
            typedef void ( ::osg::ShapeDrawable::*drawImplementation_function_type )( ::osg::RenderInfo & ) const;
            typedef void ( ShapeDrawable_wrapper::*default_drawImplementation_function_type )( ::osg::RenderInfo & ) const;
            
            ShapeDrawable_exposer.def( 
                "drawImplementation"
                , drawImplementation_function_type(&::osg::ShapeDrawable::drawImplementation)
                , default_drawImplementation_function_type(&ShapeDrawable_wrapper::default_drawImplementation)
                , ( bp::arg("renderInfo") ) );
        
        }
        { //::osg::ShapeDrawable::getColor
        
            typedef ::osg::Vec4 const & ( ::osg::ShapeDrawable::*getColor_function_type )(  ) const;
            
            ShapeDrawable_exposer.def( 
                "getColor"
                , getColor_function_type( &::osg::ShapeDrawable::getColor )
                , bp::return_internal_reference< >()
                , " Get the color of the shape." );
        
        }
        { //::osg::ShapeDrawable::getTessellationHints
        
            typedef ::osg::TessellationHints * ( ::osg::ShapeDrawable::*getTessellationHints_function_type )(  ) ;
            
            ShapeDrawable_exposer.def( 
                "getTessellationHints"
                , getTessellationHints_function_type( &::osg::ShapeDrawable::getTessellationHints )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::ShapeDrawable::getTessellationHints
        
            typedef ::osg::TessellationHints const * ( ::osg::ShapeDrawable::*getTessellationHints_function_type )(  ) const;
            
            ShapeDrawable_exposer.def( 
                "getTessellationHints"
                , getTessellationHints_function_type( &::osg::ShapeDrawable::getTessellationHints )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::ShapeDrawable::isSameKindAs
        
            typedef bool ( ::osg::ShapeDrawable::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( ShapeDrawable_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            ShapeDrawable_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::ShapeDrawable::isSameKindAs)
                , default_isSameKindAs_function_type(&ShapeDrawable_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::ShapeDrawable::libraryName
        
            typedef char const * ( ::osg::ShapeDrawable::*libraryName_function_type )(  ) const;
            typedef char const * ( ShapeDrawable_wrapper::*default_libraryName_function_type )(  ) const;
            
            ShapeDrawable_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::ShapeDrawable::libraryName)
                , default_libraryName_function_type(&ShapeDrawable_wrapper::default_libraryName) );
        
        }
        { //::osg::ShapeDrawable::setColor
        
            typedef void ( ::osg::ShapeDrawable::*setColor_function_type )( ::osg::Vec4 const & ) ;
            
            ShapeDrawable_exposer.def( 
                "setColor"
                , setColor_function_type( &::osg::ShapeDrawable::setColor )
                , ( bp::arg("color") )
                , " Set the color of the shape." );
        
        }
        { //::osg::ShapeDrawable::setTessellationHints
        
            typedef void ( ::osg::ShapeDrawable::*setTessellationHints_function_type )( ::osg::TessellationHints * ) ;
            
            ShapeDrawable_exposer.def( 
                "setTessellationHints"
                , setTessellationHints_function_type( &::osg::ShapeDrawable::setTessellationHints )
                , ( bp::arg("hints") ) );
        
        }
        { //::osg::ShapeDrawable::supports
        
            typedef bool ( ::osg::ShapeDrawable::*supports_function_type )( ::osg::Drawable::AttributeFunctor const & ) const;
            typedef bool ( ShapeDrawable_wrapper::*default_supports_function_type )( ::osg::Drawable::AttributeFunctor const & ) const;
            
            ShapeDrawable_exposer.def( 
                "supports"
                , supports_function_type(&::osg::ShapeDrawable::supports)
                , default_supports_function_type(&ShapeDrawable_wrapper::default_supports)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::ShapeDrawable::supports
        
            typedef bool ( ::osg::ShapeDrawable::*supports_function_type )( ::osg::Drawable::ConstAttributeFunctor const & ) const;
            typedef bool ( ShapeDrawable_wrapper::*default_supports_function_type )( ::osg::Drawable::ConstAttributeFunctor const & ) const;
            
            ShapeDrawable_exposer.def( 
                "supports"
                , supports_function_type(&::osg::ShapeDrawable::supports)
                , default_supports_function_type(&ShapeDrawable_wrapper::default_supports)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::ShapeDrawable::supports
        
            typedef bool ( ::osg::ShapeDrawable::*supports_function_type )( ::osg::PrimitiveFunctor const & ) const;
            typedef bool ( ShapeDrawable_wrapper::*default_supports_function_type )( ::osg::PrimitiveFunctor const & ) const;
            
            ShapeDrawable_exposer.def( 
                "supports"
                , supports_function_type(&::osg::ShapeDrawable::supports)
                , default_supports_function_type(&ShapeDrawable_wrapper::default_supports)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Drawable::accept
        
            typedef void ( ::osg::Drawable::*accept_function_type )( ::osg::Drawable::AttributeFunctor & ) ;
            typedef void ( ShapeDrawable_wrapper::*default_accept_function_type )( ::osg::Drawable::AttributeFunctor & ) ;
            
            ShapeDrawable_exposer.def( 
                "accept"
                , accept_function_type(&::osg::Drawable::accept)
                , default_accept_function_type(&ShapeDrawable_wrapper::default_accept)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Drawable::accept
        
            typedef void ( ::osg::Drawable::*accept_function_type )( ::osg::PrimitiveIndexFunctor & ) const;
            typedef void ( ShapeDrawable_wrapper::*default_accept_function_type )( ::osg::PrimitiveIndexFunctor & ) const;
            
            ShapeDrawable_exposer.def( 
                "accept"
                , accept_function_type(&::osg::Drawable::accept)
                , default_accept_function_type(&ShapeDrawable_wrapper::default_accept)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Drawable::asGeometry
        
            typedef ::osg::Geometry * ( ::osg::Drawable::*asGeometry_function_type )(  ) ;
            typedef ::osg::Geometry * ( ShapeDrawable_wrapper::*default_asGeometry_function_type )(  ) ;
            
            ShapeDrawable_exposer.def( 
                "asGeometry"
                , asGeometry_function_type(&::osg::Drawable::asGeometry)
                , default_asGeometry_function_type(&ShapeDrawable_wrapper::default_asGeometry)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Drawable::asGeometry
        
            typedef ::osg::Geometry const * ( ::osg::Drawable::*asGeometry_function_type )(  ) const;
            typedef ::osg::Geometry const * ( ShapeDrawable_wrapper::*default_asGeometry_function_type )(  ) const;
            
            ShapeDrawable_exposer.def( 
                "asGeometry"
                , asGeometry_function_type(&::osg::Drawable::asGeometry)
                , default_asGeometry_function_type(&ShapeDrawable_wrapper::default_asGeometry)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Drawable::compileGLObjects
        
            typedef void ( ::osg::Drawable::*compileGLObjects_function_type )( ::osg::RenderInfo & ) const;
            typedef void ( ShapeDrawable_wrapper::*default_compileGLObjects_function_type )( ::osg::RenderInfo & ) const;
            
            ShapeDrawable_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::Drawable::compileGLObjects)
                , default_compileGLObjects_function_type(&ShapeDrawable_wrapper::default_compileGLObjects)
                , ( bp::arg("renderInfo") ) );
        
        }
        { //::osg::Drawable::computeDataVariance
        
            typedef void ( ::osg::Drawable::*computeDataVariance_function_type )(  ) ;
            typedef void ( ShapeDrawable_wrapper::*default_computeDataVariance_function_type )(  ) ;
            
            ShapeDrawable_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Drawable::computeDataVariance)
                , default_computeDataVariance_function_type(&ShapeDrawable_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::Drawable::dirtyDisplayList
        
            typedef void ( ::osg::Drawable::*dirtyDisplayList_function_type )(  ) ;
            typedef void ( ShapeDrawable_wrapper::*default_dirtyDisplayList_function_type )(  ) ;
            
            ShapeDrawable_exposer.def( 
                "dirtyDisplayList"
                , dirtyDisplayList_function_type(&::osg::Drawable::dirtyDisplayList)
                , default_dirtyDisplayList_function_type(&ShapeDrawable_wrapper::default_dirtyDisplayList) );
        
        }
        { //::osg::Drawable::getGLObjectSizeHint
        
            typedef unsigned int ( ::osg::Drawable::*getGLObjectSizeHint_function_type )(  ) const;
            typedef unsigned int ( ShapeDrawable_wrapper::*default_getGLObjectSizeHint_function_type )(  ) const;
            
            ShapeDrawable_exposer.def( 
                "getGLObjectSizeHint"
                , getGLObjectSizeHint_function_type(&::osg::Drawable::getGLObjectSizeHint)
                , default_getGLObjectSizeHint_function_type(&ShapeDrawable_wrapper::default_getGLObjectSizeHint) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type )(  ) ;
            typedef ::osg::Referenced * ( ShapeDrawable_wrapper::*default_getUserData_function_type )(  ) ;
            
            ShapeDrawable_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&ShapeDrawable_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type )(  ) const;
            typedef ::osg::Referenced const * ( ShapeDrawable_wrapper::*default_getUserData_function_type )(  ) const;
            
            ShapeDrawable_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&ShapeDrawable_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Drawable::resizeGLObjectBuffers
        
            typedef void ( ::osg::Drawable::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( ShapeDrawable_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            ShapeDrawable_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Drawable::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&ShapeDrawable_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::Drawable::setCullCallback
        
            typedef void ( ::osg::Drawable::*setCullCallback_function_type )( ::osg::Drawable::CullCallback * ) ;
            typedef void ( ShapeDrawable_wrapper::*default_setCullCallback_function_type )( ::osg::Drawable::CullCallback * ) ;
            
            ShapeDrawable_exposer.def( 
                "setCullCallback"
                , setCullCallback_function_type(&::osg::Drawable::setCullCallback)
                , default_setCullCallback_function_type(&ShapeDrawable_wrapper::default_setCullCallback)
                , ( bp::arg("cc") ) );
        
        }
        { //::osg::Drawable::setDrawCallback
        
            typedef void ( ::osg::Drawable::*setDrawCallback_function_type )( ::osg::Drawable::DrawCallback * ) ;
            typedef void ( ShapeDrawable_wrapper::*default_setDrawCallback_function_type )( ::osg::Drawable::DrawCallback * ) ;
            
            ShapeDrawable_exposer.def( 
                "setDrawCallback"
                , setDrawCallback_function_type(&::osg::Drawable::setDrawCallback)
                , default_setDrawCallback_function_type(&ShapeDrawable_wrapper::default_setDrawCallback)
                , ( bp::arg("dc") ) );
        
        }
        { //::osg::Drawable::setEventCallback
        
            typedef void ( ::osg::Drawable::*setEventCallback_function_type )( ::osg::Drawable::EventCallback * ) ;
            typedef void ( ShapeDrawable_wrapper::*default_setEventCallback_function_type )( ::osg::Drawable::EventCallback * ) ;
            
            ShapeDrawable_exposer.def( 
                "setEventCallback"
                , setEventCallback_function_type(&::osg::Drawable::setEventCallback)
                , default_setEventCallback_function_type(&ShapeDrawable_wrapper::default_setEventCallback)
                , ( bp::arg("ac") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type )( ::std::string const & ) ;
            typedef void ( ShapeDrawable_wrapper::*default_setName_function_type )( ::std::string const & ) ;
            
            ShapeDrawable_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&ShapeDrawable_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type )( char const * ) ;
            
            ShapeDrawable_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Drawable::setThreadSafeRefUnref
        
            typedef void ( ::osg::Drawable::*setThreadSafeRefUnref_function_type )( bool ) ;
            typedef void ( ShapeDrawable_wrapper::*default_setThreadSafeRefUnref_function_type )( bool ) ;
            
            ShapeDrawable_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Drawable::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&ShapeDrawable_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Drawable::setUpdateCallback
        
            typedef void ( ::osg::Drawable::*setUpdateCallback_function_type )( ::osg::Drawable::UpdateCallback * ) ;
            typedef void ( ShapeDrawable_wrapper::*default_setUpdateCallback_function_type )( ::osg::Drawable::UpdateCallback * ) ;
            
            ShapeDrawable_exposer.def( 
                "setUpdateCallback"
                , setUpdateCallback_function_type(&::osg::Drawable::setUpdateCallback)
                , default_setUpdateCallback_function_type(&ShapeDrawable_wrapper::default_setUpdateCallback)
                , ( bp::arg("ac") ) );
        
        }
        { //::osg::Drawable::setUseVertexBufferObjects
        
            typedef void ( ::osg::Drawable::*setUseVertexBufferObjects_function_type )( bool ) ;
            typedef void ( ShapeDrawable_wrapper::*default_setUseVertexBufferObjects_function_type )( bool ) ;
            
            ShapeDrawable_exposer.def( 
                "setUseVertexBufferObjects"
                , setUseVertexBufferObjects_function_type(&::osg::Drawable::setUseVertexBufferObjects)
                , default_setUseVertexBufferObjects_function_type(&ShapeDrawable_wrapper::default_setUseVertexBufferObjects)
                , ( bp::arg("flag") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type )( ::osg::Referenced * ) ;
            typedef void ( ShapeDrawable_wrapper::*default_setUserData_function_type )( ::osg::Referenced * ) ;
            
            ShapeDrawable_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&ShapeDrawable_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Drawable::supports
        
            typedef bool ( ::osg::Drawable::*supports_function_type )( ::osg::PrimitiveIndexFunctor const & ) const;
            typedef bool ( ShapeDrawable_wrapper::*default_supports_function_type )( ::osg::PrimitiveIndexFunctor const & ) const;
            
            ShapeDrawable_exposer.def( 
                "supports"
                , supports_function_type(&::osg::Drawable::supports)
                , default_supports_function_type(&ShapeDrawable_wrapper::default_supports)
                , ( bp::arg("arg0") ) );
        
        }
    }

}
