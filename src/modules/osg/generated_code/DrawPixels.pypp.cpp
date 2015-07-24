// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "drawpixels.pypp.hpp"

namespace bp = boost::python;

struct DrawPixels_wrapper : osg::DrawPixels, bp::wrapper< osg::DrawPixels > {

    DrawPixels_wrapper( )
    : osg::DrawPixels( )
      , bp::wrapper< osg::DrawPixels >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::DrawPixels::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::DrawPixels::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::DrawPixels::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::DrawPixels::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::DrawPixels::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::DrawPixels::cloneType( );
    }

    virtual ::osg::BoundingBox computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::DrawPixels::computeBound(  );
        }
    }
    
    ::osg::BoundingBox default_computeBound(  ) const  {
        return osg::DrawPixels::computeBound( );
    }

    virtual void drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        if( bp::override func_drawImplementation = this->get_override( "drawImplementation" ) )
            func_drawImplementation( boost::ref(renderInfo) );
        else{
            this->osg::DrawPixels::drawImplementation( boost::ref(renderInfo) );
        }
    }
    
    void default_drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        osg::DrawPixels::drawImplementation( boost::ref(renderInfo) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::DrawPixels::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::DrawPixels::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::DrawPixels::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::DrawPixels::libraryName( );
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

    virtual void accept( ::osg::Drawable::ConstAttributeFunctor & arg0 ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(arg0) );
        else{
            this->osg::Drawable::accept( boost::ref(arg0) );
        }
    }
    
    void default_accept( ::osg::Drawable::ConstAttributeFunctor & arg0 ) const  {
        osg::Drawable::accept( boost::ref(arg0) );
    }

    virtual void accept( ::osg::PrimitiveFunctor & arg0 ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(arg0) );
        else{
            this->osg::Drawable::accept( boost::ref(arg0) );
        }
    }
    
    void default_accept( ::osg::PrimitiveFunctor & arg0 ) const  {
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

    virtual bool supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Drawable::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        return osg::Drawable::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Drawable::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        return osg::Drawable::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Drawable::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        return osg::Drawable::supports( boost::ref(arg0) );
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

void register_DrawPixels_class(){

    bp::class_< DrawPixels_wrapper, bp::bases< osg::Drawable >, osg::ref_ptr< ::osg::DrawPixels >, boost::noncopyable >( "DrawPixels", "\n DrawPixels is an osg::Drawable subclass which encapsulates the drawing of\n images using glDrawPixels.\n", bp::no_init )    
        .def( bp::init< >("\n DrawPixels is an osg::Drawable subclass which encapsulates the drawing of\n images using glDrawPixels.\n") )    
        .def( 
            "className"
            , (char const * ( ::osg::DrawPixels::* )(  )const)(&::osg::DrawPixels::className)
            , (char const * ( DrawPixels_wrapper::* )(  )const)(&DrawPixels_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::DrawPixels::* )( ::osg::CopyOp const & )const)(&::osg::DrawPixels::clone)
            , (::osg::Object * ( DrawPixels_wrapper::* )( ::osg::CopyOp const & )const)(&DrawPixels_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::DrawPixels::* )(  )const)(&::osg::DrawPixels::cloneType)
            , (::osg::Object * ( DrawPixels_wrapper::* )(  )const)(&DrawPixels_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeBound"
            , (::osg::BoundingBox ( ::osg::DrawPixels::* )(  )const)(&::osg::DrawPixels::computeBound)
            , (::osg::BoundingBox ( DrawPixels_wrapper::* )(  )const)(&DrawPixels_wrapper::default_computeBound) )    
        .def( 
            "drawImplementation"
            , (void ( ::osg::DrawPixels::* )( ::osg::RenderInfo & )const)(&::osg::DrawPixels::drawImplementation)
            , (void ( DrawPixels_wrapper::* )( ::osg::RenderInfo & )const)(&DrawPixels_wrapper::default_drawImplementation)
            , ( bp::arg("renderInfo") ) )    
        .def( 
            "getImage"
            , (::osg::Image * ( ::osg::DrawPixels::* )(  ))( &::osg::DrawPixels::getImage )
            , bp::return_internal_reference< >() )    
        .def( 
            "getImage"
            , (::osg::Image const * ( ::osg::DrawPixels::* )(  )const)( &::osg::DrawPixels::getImage )
            , bp::return_internal_reference< >() )    
        .def( 
            "getPosition"
            , (::osg::Vec3 & ( ::osg::DrawPixels::* )(  ))( &::osg::DrawPixels::getPosition )
            , bp::return_internal_reference< >() )    
        .def( 
            "getPosition"
            , (::osg::Vec3 const & ( ::osg::DrawPixels::* )(  )const)( &::osg::DrawPixels::getPosition )
            , bp::return_internal_reference< >() )    
        .def( 
            "getSubImageDimensions"
            , (void ( ::osg::DrawPixels::* )( unsigned int &,unsigned int &,unsigned int &,unsigned int & )const)( &::osg::DrawPixels::getSubImageDimensions )
            , ( bp::arg("offsetX"), bp::arg("offsetY"), bp::arg("width"), bp::arg("height") ) )    
        .def( 
            "getUseSubImage"
            , (bool ( ::osg::DrawPixels::* )(  )const)( &::osg::DrawPixels::getUseSubImage ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::DrawPixels::* )( ::osg::Object const * )const)(&::osg::DrawPixels::isSameKindAs)
            , (bool ( DrawPixels_wrapper::* )( ::osg::Object const * )const)(&DrawPixels_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::DrawPixels::* )(  )const)(&::osg::DrawPixels::libraryName)
            , (char const * ( DrawPixels_wrapper::* )(  )const)(&DrawPixels_wrapper::default_libraryName) )    
        .def( 
            "setImage"
            , (void ( ::osg::DrawPixels::* )( ::osg::Image * ))( &::osg::DrawPixels::setImage )
            , ( bp::arg("image") ) )    
        .def( 
            "setPosition"
            , (void ( ::osg::DrawPixels::* )( ::osg::Vec3 const & ))( &::osg::DrawPixels::setPosition )
            , ( bp::arg("position") ) )    
        .def( 
            "setSubImageDimensions"
            , (void ( ::osg::DrawPixels::* )( unsigned int,unsigned int,unsigned int,unsigned int ))( &::osg::DrawPixels::setSubImageDimensions )
            , ( bp::arg("offsetX"), bp::arg("offsetY"), bp::arg("width"), bp::arg("height") ) )    
        .def( 
            "setUseSubImage"
            , (void ( ::osg::DrawPixels::* )( bool ))( &::osg::DrawPixels::setUseSubImage )
            , ( bp::arg("useSubImage") ) )    
        .def( 
            "accept"
            , (void ( ::osg::Drawable::* )( ::osg::Drawable::AttributeFunctor & ))(&::osg::Drawable::accept)
            , (void ( DrawPixels_wrapper::* )( ::osg::Drawable::AttributeFunctor & ))(&DrawPixels_wrapper::default_accept)
            , ( bp::arg("arg0") ) )    
        .def( 
            "accept"
            , (void ( ::osg::Drawable::* )( ::osg::Drawable::ConstAttributeFunctor & )const)(&::osg::Drawable::accept)
            , (void ( DrawPixels_wrapper::* )( ::osg::Drawable::ConstAttributeFunctor & )const)(&DrawPixels_wrapper::default_accept)
            , ( bp::arg("arg0") ) )    
        .def( 
            "accept"
            , (void ( ::osg::Drawable::* )( ::osg::PrimitiveFunctor & )const)(&::osg::Drawable::accept)
            , (void ( DrawPixels_wrapper::* )( ::osg::PrimitiveFunctor & )const)(&DrawPixels_wrapper::default_accept)
            , ( bp::arg("arg0") ) )    
        .def( 
            "accept"
            , (void ( ::osg::Drawable::* )( ::osg::PrimitiveIndexFunctor & )const)(&::osg::Drawable::accept)
            , (void ( DrawPixels_wrapper::* )( ::osg::PrimitiveIndexFunctor & )const)(&DrawPixels_wrapper::default_accept)
            , ( bp::arg("arg0") ) )    
        .def( 
            "asGeometry"
            , (::osg::Geometry * ( ::osg::Drawable::* )(  ))(&::osg::Drawable::asGeometry)
            , (::osg::Geometry * ( DrawPixels_wrapper::* )(  ))(&DrawPixels_wrapper::default_asGeometry)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGeometry"
            , (::osg::Geometry const * ( ::osg::Drawable::* )(  )const)(&::osg::Drawable::asGeometry)
            , (::osg::Geometry const * ( DrawPixels_wrapper::* )(  )const)(&DrawPixels_wrapper::default_asGeometry)
            , bp::return_internal_reference< >() )    
        .def( 
            "compileGLObjects"
            , (void ( ::osg::Drawable::* )( ::osg::RenderInfo & )const)(&::osg::Drawable::compileGLObjects)
            , (void ( DrawPixels_wrapper::* )( ::osg::RenderInfo & )const)(&DrawPixels_wrapper::default_compileGLObjects)
            , ( bp::arg("renderInfo") ) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Drawable::* )(  ))(&::osg::Drawable::computeDataVariance)
            , (void ( DrawPixels_wrapper::* )(  ))(&DrawPixels_wrapper::default_computeDataVariance) )    
        .def( 
            "dirtyDisplayList"
            , (void ( ::osg::Drawable::* )(  ))(&::osg::Drawable::dirtyDisplayList)
            , (void ( DrawPixels_wrapper::* )(  ))(&DrawPixels_wrapper::default_dirtyDisplayList) )    
        .def( 
            "getGLObjectSizeHint"
            , (unsigned int ( ::osg::Drawable::* )(  )const)(&::osg::Drawable::getGLObjectSizeHint)
            , (unsigned int ( DrawPixels_wrapper::* )(  )const)(&DrawPixels_wrapper::default_getGLObjectSizeHint) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( DrawPixels_wrapper::* )(  ))(&DrawPixels_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( DrawPixels_wrapper::* )(  )const)(&DrawPixels_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Drawable::* )( unsigned int ))(&::osg::Drawable::resizeGLObjectBuffers)
            , (void ( DrawPixels_wrapper::* )( unsigned int ))(&DrawPixels_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("maxSize") ) )    
        .def( 
            "setCullCallback"
            , (void ( ::osg::Drawable::* )( ::osg::Drawable::CullCallback * ))(&::osg::Drawable::setCullCallback)
            , (void ( DrawPixels_wrapper::* )( ::osg::Drawable::CullCallback * ))(&DrawPixels_wrapper::default_setCullCallback)
            , ( bp::arg("cc") )
            , bp::with_custodian_and_ward< 2, 1 >() )    
        .def( 
            "setDrawCallback"
            , (void ( ::osg::Drawable::* )( ::osg::Drawable::DrawCallback * ))(&::osg::Drawable::setDrawCallback)
            , (void ( DrawPixels_wrapper::* )( ::osg::Drawable::DrawCallback * ))(&DrawPixels_wrapper::default_setDrawCallback)
            , ( bp::arg("dc") )
            , bp::with_custodian_and_ward< 2, 1 >() )    
        .def( 
            "setEventCallback"
            , (void ( ::osg::Drawable::* )( ::osg::Drawable::EventCallback * ))(&::osg::Drawable::setEventCallback)
            , (void ( DrawPixels_wrapper::* )( ::osg::Drawable::EventCallback * ))(&DrawPixels_wrapper::default_setEventCallback)
            , ( bp::arg("ac") )
            , bp::with_custodian_and_ward< 2, 1 >() )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( DrawPixels_wrapper::* )( ::std::string const & ))(&DrawPixels_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Drawable::* )( bool ))(&::osg::Drawable::setThreadSafeRefUnref)
            , (void ( DrawPixels_wrapper::* )( bool ))(&DrawPixels_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUpdateCallback"
            , (void ( ::osg::Drawable::* )( ::osg::Drawable::UpdateCallback * ))(&::osg::Drawable::setUpdateCallback)
            , (void ( DrawPixels_wrapper::* )( ::osg::Drawable::UpdateCallback * ))(&DrawPixels_wrapper::default_setUpdateCallback)
            , ( bp::arg("ac") )
            , bp::with_custodian_and_ward< 2, 1 >() )    
        .def( 
            "setUseVertexBufferObjects"
            , (void ( ::osg::Drawable::* )( bool ))(&::osg::Drawable::setUseVertexBufferObjects)
            , (void ( DrawPixels_wrapper::* )( bool ))(&DrawPixels_wrapper::default_setUseVertexBufferObjects)
            , ( bp::arg("flag") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( DrawPixels_wrapper::* )( ::osg::Referenced * ))(&DrawPixels_wrapper::default_setUserData)
            , ( bp::arg("obj") ) )    
        .def( 
            "supports"
            , (bool ( ::osg::Drawable::* )( ::osg::Drawable::AttributeFunctor const & )const)(&::osg::Drawable::supports)
            , (bool ( DrawPixels_wrapper::* )( ::osg::Drawable::AttributeFunctor const & )const)(&DrawPixels_wrapper::default_supports)
            , ( bp::arg("arg0") ) )    
        .def( 
            "supports"
            , (bool ( ::osg::Drawable::* )( ::osg::Drawable::ConstAttributeFunctor const & )const)(&::osg::Drawable::supports)
            , (bool ( DrawPixels_wrapper::* )( ::osg::Drawable::ConstAttributeFunctor const & )const)(&DrawPixels_wrapper::default_supports)
            , ( bp::arg("arg0") ) )    
        .def( 
            "supports"
            , (bool ( ::osg::Drawable::* )( ::osg::PrimitiveFunctor const & )const)(&::osg::Drawable::supports)
            , (bool ( DrawPixels_wrapper::* )( ::osg::PrimitiveFunctor const & )const)(&DrawPixels_wrapper::default_supports)
            , ( bp::arg("arg0") ) )    
        .def( 
            "supports"
            , (bool ( ::osg::Drawable::* )( ::osg::PrimitiveIndexFunctor const & )const)(&::osg::Drawable::supports)
            , (bool ( DrawPixels_wrapper::* )( ::osg::PrimitiveIndexFunctor const & )const)(&DrawPixels_wrapper::default_supports)
            , ( bp::arg("arg0") ) );

}
