// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "occlusionquerynode.pypp.hpp"

namespace bp = boost::python;

struct OcclusionQueryNode_wrapper : osg::OcclusionQueryNode, bp::wrapper< osg::OcclusionQueryNode > {

    OcclusionQueryNode_wrapper( )
    : osg::OcclusionQueryNode( )
      , bp::wrapper< osg::OcclusionQueryNode >(){
        // null constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osg::OcclusionQueryNode::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osg::OcclusionQueryNode::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::OcclusionQueryNode::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::OcclusionQueryNode::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::OcclusionQueryNode::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::OcclusionQueryNode::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::OcclusionQueryNode::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::OcclusionQueryNode::cloneType( );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::OcclusionQueryNode::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::OcclusionQueryNode::computeBound( );
    }

    virtual bool getPassed( ::osg::Camera const * camera, ::osg::NodeVisitor & nv ) {
        if( bp::override func_getPassed = this->get_override( "getPassed" ) )
            return func_getPassed( boost::python::ptr(camera), boost::ref(nv) );
        else{
            return this->osg::OcclusionQueryNode::getPassed( boost::python::ptr(camera), boost::ref(nv) );
        }
    }
    
    bool default_getPassed( ::osg::Camera const * camera, ::osg::NodeVisitor & nv ) {
        return osg::OcclusionQueryNode::getPassed( boost::python::ptr(camera), boost::ref(nv) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::OcclusionQueryNode::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::OcclusionQueryNode::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::OcclusionQueryNode::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::OcclusionQueryNode::libraryName( );
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

    virtual void traverse( ::osg::NodeVisitor & nv ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(nv) );
        else{
            this->osg::Group::traverse( boost::ref(nv) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv ) {
        osg::Group::traverse( boost::ref(nv) );
    }

};

void register_OcclusionQueryNode_class(){

    bp::class_< OcclusionQueryNode_wrapper, bp::bases< osg::Group >, osg::ref_ptr< ::osg::OcclusionQueryNode >, boost::noncopyable >( "OcclusionQueryNode", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "accept"
            , (void ( ::osg::OcclusionQueryNode::* )( ::osg::NodeVisitor & ))(&::osg::OcclusionQueryNode::accept)
            , (void ( OcclusionQueryNode_wrapper::* )( ::osg::NodeVisitor & ))(&OcclusionQueryNode_wrapper::default_accept)
            , ( bp::arg("nv") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::OcclusionQueryNode::* )(  )const)(&::osg::OcclusionQueryNode::className)
            , (char const * ( OcclusionQueryNode_wrapper::* )(  )const)(&OcclusionQueryNode_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::OcclusionQueryNode::* )( ::osg::CopyOp const & )const)(&::osg::OcclusionQueryNode::clone)
            , (::osg::Object * ( OcclusionQueryNode_wrapper::* )( ::osg::CopyOp const & )const)(&OcclusionQueryNode_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::OcclusionQueryNode::* )(  )const)(&::osg::OcclusionQueryNode::cloneType)
            , (::osg::Object * ( OcclusionQueryNode_wrapper::* )(  )const)(&OcclusionQueryNode_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeBound"
            , (::osg::BoundingSphere ( ::osg::OcclusionQueryNode::* )(  )const)(&::osg::OcclusionQueryNode::computeBound)
            , (::osg::BoundingSphere ( OcclusionQueryNode_wrapper::* )(  )const)(&OcclusionQueryNode_wrapper::default_computeBound) )    
        .def( 
            "discardDeletedQueryObjects"
            , (void (*)( unsigned int ))( &::osg::OcclusionQueryNode::discardDeletedQueryObjects )
            , ( bp::arg("contextID") ) )    
        .def( 
            "flushDeletedQueryObjects"
            , (void (*)( unsigned int,double,double & ))( &::osg::OcclusionQueryNode::flushDeletedQueryObjects )
            , ( bp::arg("contextID"), bp::arg("currentTime"), bp::arg("availableTime") ) )    
        .def( 
            "getDebugDisplay"
            , (bool ( ::osg::OcclusionQueryNode::* )(  )const)( &::osg::OcclusionQueryNode::getDebugDisplay ) )    
        .def( 
            "getDebugStateSet"
            , (::osg::StateSet * ( ::osg::OcclusionQueryNode::* )(  ))( &::osg::OcclusionQueryNode::getDebugStateSet )
            , bp::return_internal_reference< >() )    
        .def( 
            "getDebugStateSet"
            , (::osg::StateSet const * ( ::osg::OcclusionQueryNode::* )(  )const)( &::osg::OcclusionQueryNode::getDebugStateSet )
            , bp::return_internal_reference< >() )    
        .def( 
            "getPassed"
            , (bool ( ::osg::OcclusionQueryNode::* )(  )const)( &::osg::OcclusionQueryNode::getPassed ) )    
        .def( 
            "getPassed"
            , (bool ( ::osg::OcclusionQueryNode::* )( ::osg::Camera const *,::osg::NodeVisitor & ))(&::osg::OcclusionQueryNode::getPassed)
            , (bool ( OcclusionQueryNode_wrapper::* )( ::osg::Camera const *,::osg::NodeVisitor & ))(&OcclusionQueryNode_wrapper::default_getPassed)
            , ( bp::arg("camera"), bp::arg("nv") ) )    
        .def( 
            "getQueriesEnabled"
            , (bool ( ::osg::OcclusionQueryNode::* )(  )const)( &::osg::OcclusionQueryNode::getQueriesEnabled ) )    
        .def( 
            "getQueryFrameCount"
            , (unsigned int ( ::osg::OcclusionQueryNode::* )(  )const)( &::osg::OcclusionQueryNode::getQueryFrameCount ) )    
        .def( 
            "getQueryGeometry"
            , (::osg::QueryGeometry * ( ::osg::OcclusionQueryNode::* )(  ))( &::osg::OcclusionQueryNode::getQueryGeometry )
            , bp::return_internal_reference< >() )    
        .def( 
            "getQueryGeometry"
            , (::osg::QueryGeometry const * ( ::osg::OcclusionQueryNode::* )(  )const)( &::osg::OcclusionQueryNode::getQueryGeometry )
            , bp::return_internal_reference< >() )    
        .def( 
            "getQueryStateSet"
            , (::osg::StateSet * ( ::osg::OcclusionQueryNode::* )(  ))( &::osg::OcclusionQueryNode::getQueryStateSet )
            , bp::return_internal_reference< >() )    
        .def( 
            "getQueryStateSet"
            , (::osg::StateSet const * ( ::osg::OcclusionQueryNode::* )(  )const)( &::osg::OcclusionQueryNode::getQueryStateSet )
            , bp::return_internal_reference< >() )    
        .def( 
            "getVisibilityThreshold"
            , (unsigned int ( ::osg::OcclusionQueryNode::* )(  )const)( &::osg::OcclusionQueryNode::getVisibilityThreshold ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::OcclusionQueryNode::* )( ::osg::Object const * )const)(&::osg::OcclusionQueryNode::isSameKindAs)
            , (bool ( OcclusionQueryNode_wrapper::* )( ::osg::Object const * )const)(&OcclusionQueryNode_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::OcclusionQueryNode::* )(  )const)(&::osg::OcclusionQueryNode::libraryName)
            , (char const * ( OcclusionQueryNode_wrapper::* )(  )const)(&OcclusionQueryNode_wrapper::default_libraryName) )    
        .def( 
            "setDebugDisplay"
            , (void ( ::osg::OcclusionQueryNode::* )( bool ))( &::osg::OcclusionQueryNode::setDebugDisplay )
            , ( bp::arg("enable") ) )    
        .def( 
            "setDebugStateSet"
            , (void ( ::osg::OcclusionQueryNode::* )( ::osg::StateSet * ))( &::osg::OcclusionQueryNode::setDebugStateSet )
            , ( bp::arg("ss") ) )    
        .def( 
            "setQueriesEnabled"
            , (void ( ::osg::OcclusionQueryNode::* )( bool ))( &::osg::OcclusionQueryNode::setQueriesEnabled )
            , ( bp::arg("enable")=(bool)(true) ) )    
        .def( 
            "setQueryFrameCount"
            , (void ( ::osg::OcclusionQueryNode::* )( unsigned int ))( &::osg::OcclusionQueryNode::setQueryFrameCount )
            , ( bp::arg("frames") ) )    
        .def( 
            "setQueryStateSet"
            , (void ( ::osg::OcclusionQueryNode::* )( ::osg::StateSet * ))( &::osg::OcclusionQueryNode::setQueryStateSet )
            , ( bp::arg("ss") ) )    
        .def( 
            "setVisibilityThreshold"
            , (void ( ::osg::OcclusionQueryNode::* )( unsigned int ))( &::osg::OcclusionQueryNode::setVisibilityThreshold )
            , ( bp::arg("pixels") ) )    
        .def( 
            "traverseDebug"
            , (void ( ::osg::OcclusionQueryNode::* )( ::osg::NodeVisitor & ))( &::osg::OcclusionQueryNode::traverseDebug )
            , ( bp::arg("nv") ) )    
        .def( 
            "traverseQuery"
            , (void ( ::osg::OcclusionQueryNode::* )( ::osg::Camera const *,::osg::NodeVisitor & ))( &::osg::OcclusionQueryNode::traverseQuery )
            , ( bp::arg("camera"), bp::arg("nv") ) )    
        .def( 
            "addChild"
            , (bool ( ::osg::Group::* )( ::osg::Node * ))(&::osg::Group::addChild)
            , (bool ( OcclusionQueryNode_wrapper::* )( ::osg::Node * ))(&OcclusionQueryNode_wrapper::default_addChild)
            , ( bp::arg("child") ) )    
        .def( 
            "asGroup"
            , (::osg::Group * ( ::osg::Group::* )(  ))(&::osg::Group::asGroup)
            , (::osg::Group * ( OcclusionQueryNode_wrapper::* )(  ))(&OcclusionQueryNode_wrapper::default_asGroup)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGroup"
            , (::osg::Group const * ( ::osg::Group::* )(  )const)(&::osg::Group::asGroup)
            , (::osg::Group const * ( OcclusionQueryNode_wrapper::* )(  )const)(&OcclusionQueryNode_wrapper::default_asGroup)
            , bp::return_internal_reference< >() )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( OcclusionQueryNode_wrapper::* )(  ))(&OcclusionQueryNode_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( OcclusionQueryNode_wrapper::* )(  ))(&OcclusionQueryNode_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( OcclusionQueryNode_wrapper::* )(  )const)(&OcclusionQueryNode_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "insertChild"
            , (bool ( ::osg::Group::* )( unsigned int,::osg::Node * ))(&::osg::Group::insertChild)
            , (bool ( OcclusionQueryNode_wrapper::* )( unsigned int,::osg::Node * ))(&OcclusionQueryNode_wrapper::default_insertChild)
            , ( bp::arg("index"), bp::arg("child") ) )    
        .def( 
            "removeChildren"
            , (bool ( ::osg::Group::* )( unsigned int,unsigned int ))(&::osg::Group::removeChildren)
            , (bool ( OcclusionQueryNode_wrapper::* )( unsigned int,unsigned int ))(&OcclusionQueryNode_wrapper::default_removeChildren)
            , ( bp::arg("pos"), bp::arg("numChildrenToRemove") ) )    
        .def( 
            "replaceChild"
            , (bool ( ::osg::Group::* )( ::osg::Node *,::osg::Node * ))(&::osg::Group::replaceChild)
            , (bool ( OcclusionQueryNode_wrapper::* )( ::osg::Node *,::osg::Node * ))(&OcclusionQueryNode_wrapper::default_replaceChild)
            , ( bp::arg("origChild"), bp::arg("newChild") ) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Group::* )( unsigned int ))(&::osg::Group::resizeGLObjectBuffers)
            , (void ( OcclusionQueryNode_wrapper::* )( unsigned int ))(&OcclusionQueryNode_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("maxSize") ) )    
        .def( 
            "setChild"
            , (bool ( ::osg::Group::* )( unsigned int,::osg::Node * ))(&::osg::Group::setChild)
            , (bool ( OcclusionQueryNode_wrapper::* )( unsigned int,::osg::Node * ))(&OcclusionQueryNode_wrapper::default_setChild)
            , ( bp::arg("i"), bp::arg("node") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( OcclusionQueryNode_wrapper::* )( ::std::string const & ))(&OcclusionQueryNode_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Group::* )( bool ))(&::osg::Group::setThreadSafeRefUnref)
            , (void ( OcclusionQueryNode_wrapper::* )( bool ))(&OcclusionQueryNode_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( OcclusionQueryNode_wrapper::* )( ::osg::Referenced * ))(&OcclusionQueryNode_wrapper::default_setUserData)
            , ( bp::arg("obj") ) )    
        .def( 
            "traverse"
            , (void ( ::osg::Group::* )( ::osg::NodeVisitor & ))(&::osg::Group::traverse)
            , (void ( OcclusionQueryNode_wrapper::* )( ::osg::NodeVisitor & ))(&OcclusionQueryNode_wrapper::default_traverse)
            , ( bp::arg("nv") ) )    
        .staticmethod( "discardDeletedQueryObjects" )    
        .staticmethod( "flushDeletedQueryObjects" );

}
