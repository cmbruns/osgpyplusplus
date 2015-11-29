// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgSim.h"
#include "wrap_referenced.h"
#include "VisibilityGroup.pypp.hpp"

namespace bp = boost::python;

struct VisibilityGroup_wrapper : osgSim::VisibilityGroup, bp::wrapper< osgSim::VisibilityGroup > {

    VisibilityGroup_wrapper( )
    : osgSim::VisibilityGroup( )
      , bp::wrapper< osgSim::VisibilityGroup >(){
        // null constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osgSim::VisibilityGroup::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osgSim::VisibilityGroup::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgSim::VisibilityGroup::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgSim::VisibilityGroup::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgSim::VisibilityGroup::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgSim::VisibilityGroup::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgSim::VisibilityGroup::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgSim::VisibilityGroup::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgSim::VisibilityGroup::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgSim::VisibilityGroup::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgSim::VisibilityGroup::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgSim::VisibilityGroup::libraryName( );
    }

    virtual void traverse( ::osg::NodeVisitor & nv ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(nv) );
        else{
            this->osgSim::VisibilityGroup::traverse( boost::ref(nv) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv ) {
        osgSim::VisibilityGroup::traverse( boost::ref(nv) );
    }

    virtual bool addChild( ::osg::Node * child ) {
        if( bp::override func_addChild = this->get_override( "addChild" ) )
            return func_addChild( boost::python::ptr(child) );
        else{
            return this->osg::Group::addChild( boost::python::ptr(child) );
        }
    }
    
    bool default_addChild( ::osg::Node * child ) {
        return osg::Group::addChild( boost::python::ptr(child) );
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

    virtual ::osg::Geode * asGeode(  ) {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode * default_asGeode(  ) {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Geode const * asGeode(  ) const  {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode const * default_asGeode(  ) const  {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Group * asGroup(  ) {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Group::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Group::asGroup( );
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

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::Group::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::Group::computeBound( );
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

    virtual bool insertChild( unsigned int index, ::osg::Node * child ) {
        if( bp::override func_insertChild = this->get_override( "insertChild" ) )
            return func_insertChild( index, boost::python::ptr(child) );
        else{
            return this->osg::Group::insertChild( index, boost::python::ptr(child) );
        }
    }
    
    bool default_insertChild( unsigned int index, ::osg::Node * child ) {
        return osg::Group::insertChild( index, boost::python::ptr(child) );
    }

    virtual bool removeChildren( unsigned int pos, unsigned int numChildrenToRemove ) {
        if( bp::override func_removeChildren = this->get_override( "removeChildren" ) )
            return func_removeChildren( pos, numChildrenToRemove );
        else{
            return this->osg::Group::removeChildren( pos, numChildrenToRemove );
        }
    }
    
    bool default_removeChildren( unsigned int pos, unsigned int numChildrenToRemove ) {
        return osg::Group::removeChildren( pos, numChildrenToRemove );
    }

    virtual bool replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        if( bp::override func_replaceChild = this->get_override( "replaceChild" ) )
            return func_replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        else{
            return this->osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        }
    }
    
    bool default_replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        return osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Group::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Group::resizeGLObjectBuffers( maxSize );
    }

    virtual bool setChild( unsigned int i, ::osg::Node * node ) {
        if( bp::override func_setChild = this->get_override( "setChild" ) )
            return func_setChild( i, boost::python::ptr(node) );
        else{
            return this->osg::Group::setChild( i, boost::python::ptr(node) );
        }
    }
    
    bool default_setChild( unsigned int i, ::osg::Node * node ) {
        return osg::Group::setChild( i, boost::python::ptr(node) );
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
            this->osg::Group::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Group::setThreadSafeRefUnref( threadSafe );
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

void register_VisibilityGroup_class(){

    bp::class_< VisibilityGroup_wrapper, bp::bases< ::osg::Group >, osg::ref_ptr< VisibilityGroup_wrapper >, boost::noncopyable >( "VisibilityGroup", "\n VisibilityGroup renders (traverses) its children only when the camera is inside a specified visibility volume.\n The visibility volume is intersected with a line segment that extends from\n the current cameras eye-point along the view vector for a given segment length.\n If an intersection is detected then the nodes children are traversed.\n", bp::no_init )    
        .def( bp::init< >("\n VisibilityGroup renders (traverses) its children only when the camera is inside a specified visibility volume.\n The visibility volume is intersected with a line segment that extends from\n the current cameras eye-point along the view vector for a given segment length.\n If an intersection is detected then the nodes children are traversed.\n") )    
        .def( 
            "accept"
            , (void ( ::osgSim::VisibilityGroup::* )( ::osg::NodeVisitor & ) )(&::osgSim::VisibilityGroup::accept)
            , (void ( VisibilityGroup_wrapper::* )( ::osg::NodeVisitor & ) )(&VisibilityGroup_wrapper::default_accept)
            , ( bp::arg("nv") ) )    
        .def( 
            "className"
            , (char const * ( ::osgSim::VisibilityGroup::* )(  ) const)(&::osgSim::VisibilityGroup::className)
            , (char const * ( VisibilityGroup_wrapper::* )(  ) const)(&VisibilityGroup_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgSim::VisibilityGroup::* )( ::osg::CopyOp const & ) const)(&::osgSim::VisibilityGroup::clone)
            , (::osg::Object * ( VisibilityGroup_wrapper::* )( ::osg::CopyOp const & ) const)(&VisibilityGroup_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgSim::VisibilityGroup::* )(  ) const)(&::osgSim::VisibilityGroup::cloneType)
            , (::osg::Object * ( VisibilityGroup_wrapper::* )(  ) const)(&VisibilityGroup_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getSegmentLength"
            , (float ( ::osgSim::VisibilityGroup::* )(  ) const)( &::osgSim::VisibilityGroup::getSegmentLength )
            , " Get the length of the intersection segment." )    
        .def( 
            "getVisibilityVolume"
            , (::osg::Node * ( ::osgSim::VisibilityGroup::* )(  ) )( &::osgSim::VisibilityGroup::getVisibilityVolume )
            , bp::return_internal_reference< >()
            , " Get the subgraph that is intersected for the visibility determination." )    
        .def( 
            "getVisibilityVolume"
            , (::osg::Node const * ( ::osgSim::VisibilityGroup::* )(  ) const)( &::osgSim::VisibilityGroup::getVisibilityVolume )
            , bp::return_internal_reference< >()
            , " Get the const subgraph that is intersected for the visibility determination." )    
        .def( 
            "getVolumeIntersectionMask"
            , (unsigned int ( ::osgSim::VisibilityGroup::* )(  ) const)( &::osgSim::VisibilityGroup::getVolumeIntersectionMask )
            , " Get the traversal mask for the intersection testing." )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgSim::VisibilityGroup::* )( ::osg::Object const * ) const)(&::osgSim::VisibilityGroup::isSameKindAs)
            , (bool ( VisibilityGroup_wrapper::* )( ::osg::Object const * ) const)(&VisibilityGroup_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgSim::VisibilityGroup::* )(  ) const)(&::osgSim::VisibilityGroup::libraryName)
            , (char const * ( VisibilityGroup_wrapper::* )(  ) const)(&VisibilityGroup_wrapper::default_libraryName) )    
        .def( 
            "setSegmentLength"
            , (void ( ::osgSim::VisibilityGroup::* )( float ) )( &::osgSim::VisibilityGroup::setSegmentLength )
            , ( bp::arg("length") )
            , " Set the length of the intersection segment.\n The segments extends this many database units from the camera eye-point along the look vector.\n If this is left at zero then the diameter of the bounding sphere of the visibility volume is used." )    
        .def( 
            "setVisibilityVolume"
            , (void ( ::osgSim::VisibilityGroup::* )( ::osg::Node * ) )( &::osgSim::VisibilityGroup::setVisibilityVolume )
            , ( bp::arg("node") )
            , " Set the subgraph that is intersected for the visibility determination." )    
        .def( 
            "setVolumeIntersectionMask"
            , (void ( ::osgSim::VisibilityGroup::* )( unsigned int ) )( &::osgSim::VisibilityGroup::setVolumeIntersectionMask )
            , ( bp::arg("mask") )
            , " Set the traversal mask for the intersection testing." )    
        .def( 
            "traverse"
            , (void ( ::osgSim::VisibilityGroup::* )( ::osg::NodeVisitor & ) )(&::osgSim::VisibilityGroup::traverse)
            , (void ( VisibilityGroup_wrapper::* )( ::osg::NodeVisitor & ) )(&VisibilityGroup_wrapper::default_traverse)
            , ( bp::arg("nv") ) );

}
