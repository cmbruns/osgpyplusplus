// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "Geode.pypp.hpp"

namespace bp = boost::python;

struct Geode_wrapper : osg::Geode, bp::wrapper< osg::Geode > {

    Geode_wrapper( )
    : osg::Geode( )
      , bp::wrapper< osg::Geode >(){
        // null constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osg::Geode::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osg::Geode::accept( boost::ref(nv) );
    }

    virtual bool addDrawable( ::osg::Drawable * drawable ) {
        if( bp::override func_addDrawable = this->get_override( "addDrawable" ) )
            return func_addDrawable( boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::addDrawable( boost::python::ptr(drawable) );
        }
    }
    
    bool default_addDrawable( ::osg::Drawable * drawable ) {
        return osg::Geode::addDrawable( boost::python::ptr(drawable) );
    }

    virtual ::osg::Geode * asGeode(  ) {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Geode::asGeode(  );
        }
    }
    
    ::osg::Geode * default_asGeode(  ) {
        return osg::Geode::asGeode( );
    }

    virtual ::osg::Geode const * asGeode(  ) const  {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Geode::asGeode(  );
        }
    }
    
    ::osg::Geode const * default_asGeode(  ) const  {
        return osg::Geode::asGeode( );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Geode::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Geode::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Geode::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Geode::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Geode::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Geode::cloneType( );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::Geode::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::Geode::computeBound( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Geode::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Geode::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Geode::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Geode::libraryName( );
    }

    virtual bool removeDrawable( ::osg::Drawable * drawable ) {
        if( bp::override func_removeDrawable = this->get_override( "removeDrawable" ) )
            return func_removeDrawable( boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::removeDrawable( boost::python::ptr(drawable) );
        }
    }
    
    bool default_removeDrawable( ::osg::Drawable * drawable ) {
        return osg::Geode::removeDrawable( boost::python::ptr(drawable) );
    }

    virtual bool removeDrawables( unsigned int i, unsigned int numDrawablesToRemove=1 ) {
        if( bp::override func_removeDrawables = this->get_override( "removeDrawables" ) )
            return func_removeDrawables( i, numDrawablesToRemove );
        else{
            return this->osg::Geode::removeDrawables( i, numDrawablesToRemove );
        }
    }
    
    bool default_removeDrawables( unsigned int i, unsigned int numDrawablesToRemove=1 ) {
        return osg::Geode::removeDrawables( i, numDrawablesToRemove );
    }

    virtual bool replaceDrawable( ::osg::Drawable * origDraw, ::osg::Drawable * newDraw ) {
        if( bp::override func_replaceDrawable = this->get_override( "replaceDrawable" ) )
            return func_replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
        else{
            return this->osg::Geode::replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
        }
    }
    
    bool default_replaceDrawable( ::osg::Drawable * origDraw, ::osg::Drawable * newDraw ) {
        return osg::Geode::replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Geode::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Geode::resizeGLObjectBuffers( maxSize );
    }

    virtual bool setDrawable( unsigned int i, ::osg::Drawable * drawable ) {
        if( bp::override func_setDrawable = this->get_override( "setDrawable" ) )
            return func_setDrawable( i, boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::setDrawable( i, boost::python::ptr(drawable) );
        }
    }
    
    bool default_setDrawable( unsigned int i, ::osg::Drawable * drawable ) {
        return osg::Geode::setDrawable( i, boost::python::ptr(drawable) );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Geode::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Geode::setThreadSafeRefUnref( threadSafe );
    }

    virtual ::osg::Camera * asCamera(  ) {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera * default_asCamera(  ) {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Camera const * asCamera(  ) const  {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera const * default_asCamera(  ) const  {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Group * asGroup(  ) {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Switch * asSwitch(  ) {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch * default_asSwitch(  ) {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Switch const * asSwitch(  ) const  {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch const * default_asSwitch(  ) const  {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Transform * asTransform(  ) {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform * default_asTransform(  ) {
        return osg::Node::asTransform( );
    }

    virtual ::osg::Transform const * asTransform(  ) const  {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform const * default_asTransform(  ) const  {
        return osg::Node::asTransform( );
    }

    virtual void ascend( ::osg::NodeVisitor & nv ) {
        if( bp::override func_ascend = this->get_override( "ascend" ) )
            func_ascend( boost::ref(nv) );
        else{
            this->osg::Node::ascend( boost::ref(nv) );
        }
    }
    
    void default_ascend( ::osg::NodeVisitor & nv ) {
        osg::Node::ascend( boost::ref(nv) );
    }

    virtual void traverse( ::osg::NodeVisitor & arg0 ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(arg0) );
        else{
            this->osg::Node::traverse( boost::ref(arg0) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & arg0 ) {
        osg::Node::traverse( boost::ref(arg0) );
    }

};

void register_Geode_class(){

    bp::class_< Geode_wrapper, bp::bases< osg::Node >, osg::ref_ptr< ::osg::Geode >, boost::noncopyable >( "Geode", "\n A  Geode is a geometry node, that is, a leaf node on the scene graph\n that can have renderable things attached to it. In OSG, renderable things\n are represented by objects from the  Drawable class, so a  Geode is a\n  Node whose purpose is grouping <tt>Drawable</tt>s.\n", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "accept"
            , (void ( ::osg::Geode::* )( ::osg::NodeVisitor & ) )(&::osg::Geode::accept)
            , (void ( Geode_wrapper::* )( ::osg::NodeVisitor & ) )(&Geode_wrapper::default_accept)
            , ( bp::arg("nv") ) )    
        .def( 
            "addDrawable"
            , (bool ( ::osg::Geode::* )( ::osg::Drawable * ) )(&::osg::Geode::addDrawable)
            , (bool ( Geode_wrapper::* )( ::osg::Drawable * ) )(&Geode_wrapper::default_addDrawable)
            , ( bp::arg("drawable") ) )    
        .def( 
            "asGeode"
            , (::osg::Geode * ( ::osg::Geode::* )(  ) )(&::osg::Geode::asGeode)
            , (::osg::Geode * ( Geode_wrapper::* )(  ) )(&Geode_wrapper::default_asGeode)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGeode"
            , (::osg::Geode const * ( ::osg::Geode::* )(  ) const)(&::osg::Geode::asGeode)
            , (::osg::Geode const * ( Geode_wrapper::* )(  ) const)(&Geode_wrapper::default_asGeode)
            , bp::return_internal_reference< >() )    
        .def( 
            "className"
            , (char const * ( ::osg::Geode::* )(  ) const)(&::osg::Geode::className)
            , (char const * ( Geode_wrapper::* )(  ) const)(&Geode_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::Geode::* )( ::osg::CopyOp const & ) const)(&::osg::Geode::clone)
            , (::osg::Object * ( Geode_wrapper::* )( ::osg::CopyOp const & ) const)(&Geode_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::Geode::* )(  ) const)(&::osg::Geode::cloneType)
            , (::osg::Object * ( Geode_wrapper::* )(  ) const)(&Geode_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "compileDrawables"
            , (void ( ::osg::Geode::* )( ::osg::RenderInfo & ) )( &::osg::Geode::compileDrawables )
            , ( bp::arg("renderInfo") )
            , " Compile OpenGL Display List for each drawable." )    
        .def( 
            "computeBound"
            , (::osg::BoundingSphere ( ::osg::Geode::* )(  ) const)(&::osg::Geode::computeBound)
            , (::osg::BoundingSphere ( Geode_wrapper::* )(  ) const)(&Geode_wrapper::default_computeBound) )    
        .def( 
            "containsDrawable"
            , (bool ( ::osg::Geode::* )( ::osg::Drawable const * ) const)( &::osg::Geode::containsDrawable )
            , ( bp::arg("gset") )
            , " Return  true if a given  Drawable is contained within  Geode." )    
        .def( 
            "getBoundingBox"
            , (::osg::BoundingBox const & ( ::osg::Geode::* )(  ) const)( &::osg::Geode::getBoundingBox )
            , bp::return_internal_reference< >()
            , " Return the Geodes bounding box, which is the union of all the\n bounding boxes of the geodes drawables." )    
        .def( 
            "getDrawable"
            , (::osg::Drawable * ( ::osg::Geode::* )( unsigned int ) )( &::osg::Geode::getDrawable )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >()
            , " Return the  Drawable at position  i." )    
        .def( 
            "getDrawable"
            , (::osg::Drawable const * ( ::osg::Geode::* )( unsigned int ) const)( &::osg::Geode::getDrawable )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >()
            , " Return the  Drawable at position  i." )    
        .def( 
            "getDrawableIndex"
            , (unsigned int ( ::osg::Geode::* )( ::osg::Drawable const * ) const)( &::osg::Geode::getDrawableIndex )
            , ( bp::arg("drawable") )
            , " Get the index number of  drawable.\n Return: A value between 0 and <tt>getNumDrawables()-1</tt> if\n          drawable is found; if not found, then\n         <tt>getNumDrawables()</tt> is returned." )    
        .def( 
            "getDrawableList"
            , (::std::vector< osg::ref_ptr<osg::Drawable> > const & ( ::osg::Geode::* )(  ) const)( &::osg::Geode::getDrawableList )
            , bp::return_internal_reference< >()
            , " Get the list of drawables." )    
        .def( 
            "getNumDrawables"
            , (unsigned int ( ::osg::Geode::* )(  ) const)( &::osg::Geode::getNumDrawables )
            , " Return the number of <tt>Drawable</tt>s currently attached to the\n  Geode." )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::Geode::* )( ::osg::Object const * ) const)(&::osg::Geode::isSameKindAs)
            , (bool ( Geode_wrapper::* )( ::osg::Object const * ) const)(&Geode_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::Geode::* )(  ) const)(&::osg::Geode::libraryName)
            , (char const * ( Geode_wrapper::* )(  ) const)(&Geode_wrapper::default_libraryName) )    
        .def( 
            "removeDrawable"
            , (bool ( ::osg::Geode::* )( ::osg::Drawable * ) )(&::osg::Geode::removeDrawable)
            , (bool ( Geode_wrapper::* )( ::osg::Drawable * ) )(&Geode_wrapper::default_removeDrawable)
            , ( bp::arg("drawable") ) )    
        .def( 
            "removeDrawables"
            , (bool ( ::osg::Geode::* )( unsigned int,unsigned int ) )(&::osg::Geode::removeDrawables)
            , (bool ( Geode_wrapper::* )( unsigned int,unsigned int ) )(&Geode_wrapper::default_removeDrawables)
            , ( bp::arg("i"), bp::arg("numDrawablesToRemove")=(unsigned int)(1) ) )    
        .def( 
            "replaceDrawable"
            , (bool ( ::osg::Geode::* )( ::osg::Drawable *,::osg::Drawable * ) )(&::osg::Geode::replaceDrawable)
            , (bool ( Geode_wrapper::* )( ::osg::Drawable *,::osg::Drawable * ) )(&Geode_wrapper::default_replaceDrawable)
            , ( bp::arg("origDraw"), bp::arg("newDraw") ) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Geode::* )( unsigned int ) )(&::osg::Geode::resizeGLObjectBuffers)
            , (void ( Geode_wrapper::* )( unsigned int ) )(&Geode_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("maxSize") ) )    
        .def( 
            "setDrawable"
            , (bool ( ::osg::Geode::* )( unsigned int,::osg::Drawable * ) )(&::osg::Geode::setDrawable)
            , (bool ( Geode_wrapper::* )( unsigned int,::osg::Drawable * ) )(&Geode_wrapper::default_setDrawable)
            , ( bp::arg("i"), bp::arg("drawable") ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Geode::* )( bool ) )(&::osg::Geode::setThreadSafeRefUnref)
            , (void ( Geode_wrapper::* )( bool ) )(&Geode_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "asCamera"
            , (::osg::Camera * ( ::osg::Node::* )(  ) )(&::osg::Node::asCamera)
            , (::osg::Camera * ( Geode_wrapper::* )(  ) )(&Geode_wrapper::default_asCamera)
            , bp::return_internal_reference< >() )    
        .def( 
            "asCamera"
            , (::osg::Camera const * ( ::osg::Node::* )(  ) const)(&::osg::Node::asCamera)
            , (::osg::Camera const * ( Geode_wrapper::* )(  ) const)(&Geode_wrapper::default_asCamera)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGroup"
            , (::osg::Group * ( ::osg::Node::* )(  ) )(&::osg::Node::asGroup)
            , (::osg::Group * ( Geode_wrapper::* )(  ) )(&Geode_wrapper::default_asGroup)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGroup"
            , (::osg::Group const * ( ::osg::Node::* )(  ) const)(&::osg::Node::asGroup)
            , (::osg::Group const * ( Geode_wrapper::* )(  ) const)(&Geode_wrapper::default_asGroup)
            , bp::return_internal_reference< >() )    
        .def( 
            "asSwitch"
            , (::osg::Switch * ( ::osg::Node::* )(  ) )(&::osg::Node::asSwitch)
            , (::osg::Switch * ( Geode_wrapper::* )(  ) )(&Geode_wrapper::default_asSwitch)
            , bp::return_internal_reference< >() )    
        .def( 
            "asSwitch"
            , (::osg::Switch const * ( ::osg::Node::* )(  ) const)(&::osg::Node::asSwitch)
            , (::osg::Switch const * ( Geode_wrapper::* )(  ) const)(&Geode_wrapper::default_asSwitch)
            , bp::return_internal_reference< >() )    
        .def( 
            "asTransform"
            , (::osg::Transform * ( ::osg::Node::* )(  ) )(&::osg::Node::asTransform)
            , (::osg::Transform * ( Geode_wrapper::* )(  ) )(&Geode_wrapper::default_asTransform)
            , bp::return_internal_reference< >() )    
        .def( 
            "asTransform"
            , (::osg::Transform const * ( ::osg::Node::* )(  ) const)(&::osg::Node::asTransform)
            , (::osg::Transform const * ( Geode_wrapper::* )(  ) const)(&Geode_wrapper::default_asTransform)
            , bp::return_internal_reference< >() )    
        .def( 
            "ascend"
            , (void ( ::osg::Node::* )( ::osg::NodeVisitor & ) )(&::osg::Node::ascend)
            , (void ( Geode_wrapper::* )( ::osg::NodeVisitor & ) )(&Geode_wrapper::default_ascend)
            , ( bp::arg("nv") ) )    
        .def( 
            "traverse"
            , (void ( ::osg::Node::* )( ::osg::NodeVisitor & ) )(&::osg::Node::traverse)
            , (void ( Geode_wrapper::* )( ::osg::NodeVisitor & ) )(&Geode_wrapper::default_traverse)
            , ( bp::arg("arg0") ) );

}
