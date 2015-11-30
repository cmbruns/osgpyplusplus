// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "CameraView.pypp.hpp"

namespace bp = boost::python;

struct CameraView_wrapper : osg::CameraView, bp::wrapper< osg::CameraView > {

    CameraView_wrapper( )
    : osg::CameraView( )
      , bp::wrapper< osg::CameraView >(){
        // null constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osg::CameraView::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osg::CameraView::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::CameraView::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::CameraView::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::CameraView::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::CameraView::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::CameraView::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::CameraView::cloneType( );
    }

    virtual bool computeLocalToWorldMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * nv ) const  {
        if( bp::override func_computeLocalToWorldMatrix = this->get_override( "computeLocalToWorldMatrix" ) )
            return func_computeLocalToWorldMatrix( boost::ref(matrix), boost::python::ptr(nv) );
        else{
            return this->osg::CameraView::computeLocalToWorldMatrix( boost::ref(matrix), boost::python::ptr(nv) );
        }
    }
    
    bool default_computeLocalToWorldMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * nv ) const  {
        return osg::CameraView::computeLocalToWorldMatrix( boost::ref(matrix), boost::python::ptr(nv) );
    }

    virtual bool computeWorldToLocalMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * nv ) const  {
        if( bp::override func_computeWorldToLocalMatrix = this->get_override( "computeWorldToLocalMatrix" ) )
            return func_computeWorldToLocalMatrix( boost::ref(matrix), boost::python::ptr(nv) );
        else{
            return this->osg::CameraView::computeWorldToLocalMatrix( boost::ref(matrix), boost::python::ptr(nv) );
        }
    }
    
    bool default_computeWorldToLocalMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * nv ) const  {
        return osg::CameraView::computeWorldToLocalMatrix( boost::ref(matrix), boost::python::ptr(nv) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::CameraView::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::CameraView::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::CameraView::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::CameraView::libraryName( );
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

    virtual ::osg::MatrixTransform * asMatrixTransform(  ) {
        if( bp::override func_asMatrixTransform = this->get_override( "asMatrixTransform" ) )
            return func_asMatrixTransform(  );
        else{
            return this->osg::Transform::asMatrixTransform(  );
        }
    }
    
    ::osg::MatrixTransform * default_asMatrixTransform(  ) {
        return osg::Transform::asMatrixTransform( );
    }

    virtual ::osg::MatrixTransform const * asMatrixTransform(  ) const  {
        if( bp::override func_asMatrixTransform = this->get_override( "asMatrixTransform" ) )
            return func_asMatrixTransform(  );
        else{
            return this->osg::Transform::asMatrixTransform(  );
        }
    }
    
    ::osg::MatrixTransform const * default_asMatrixTransform(  ) const  {
        return osg::Transform::asMatrixTransform( );
    }

    virtual ::osg::PositionAttitudeTransform * asPositionAttitudeTransform(  ) {
        if( bp::override func_asPositionAttitudeTransform = this->get_override( "asPositionAttitudeTransform" ) )
            return func_asPositionAttitudeTransform(  );
        else{
            return this->osg::Transform::asPositionAttitudeTransform(  );
        }
    }
    
    ::osg::PositionAttitudeTransform * default_asPositionAttitudeTransform(  ) {
        return osg::Transform::asPositionAttitudeTransform( );
    }

    virtual ::osg::PositionAttitudeTransform const * asPositionAttitudeTransform(  ) const  {
        if( bp::override func_asPositionAttitudeTransform = this->get_override( "asPositionAttitudeTransform" ) )
            return func_asPositionAttitudeTransform(  );
        else{
            return this->osg::Transform::asPositionAttitudeTransform(  );
        }
    }
    
    ::osg::PositionAttitudeTransform const * default_asPositionAttitudeTransform(  ) const  {
        return osg::Transform::asPositionAttitudeTransform( );
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
            return this->osg::Transform::asTransform(  );
        }
    }
    
    ::osg::Transform * default_asTransform(  ) {
        return osg::Transform::asTransform( );
    }

    virtual ::osg::Transform const * asTransform(  ) const  {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Transform::asTransform(  );
        }
    }
    
    ::osg::Transform const * default_asTransform(  ) const  {
        return osg::Transform::asTransform( );
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
            return this->osg::Transform::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::Transform::computeBound( );
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

void register_CameraView_class(){

    { //::osg::CameraView
        typedef bp::class_< CameraView_wrapper, bp::bases< osg::Transform >, osg::ref_ptr< ::osg::CameraView >, boost::noncopyable > CameraView_exposer_t;
        CameraView_exposer_t CameraView_exposer = CameraView_exposer_t( "CameraView", "\n CameraView - is a Transform that is used to specify camera views from within the scene graph.\n The application must attach a camera to a CameraView via the NodePath from the top of the scene graph\n to the CameraView node itself, and accumulate the view matrix from this NodePath.\n", bp::no_init );
        bp::scope CameraView_scope( CameraView_exposer );
        bp::enum_< osg::CameraView::FieldOfViewMode>("FieldOfViewMode")
            .value("UNCONSTRAINED", osg::CameraView::UNCONSTRAINED)
            .value("HORIZONTAL", osg::CameraView::HORIZONTAL)
            .value("VERTICAL", osg::CameraView::VERTICAL)
            .export_values()
            ;
        CameraView_exposer.def( bp::init< >("\n CameraView - is a Transform that is used to specify camera views from within the scene graph.\n The application must attach a camera to a CameraView via the NodePath from the top of the scene graph\n to the CameraView node itself, and accumulate the view matrix from this NodePath.\n") );
        { //::osg::CameraView::accept
        
            typedef void ( ::osg::CameraView::*accept_function_type )( ::osg::NodeVisitor & ) ;
            typedef void ( CameraView_wrapper::*default_accept_function_type )( ::osg::NodeVisitor & ) ;
            
            CameraView_exposer.def( 
                "accept"
                , accept_function_type(&::osg::CameraView::accept)
                , default_accept_function_type(&CameraView_wrapper::default_accept)
                , ( bp::arg("nv") ) );
        
        }
        { //::osg::CameraView::className
        
            typedef char const * ( ::osg::CameraView::*className_function_type )(  ) const;
            typedef char const * ( CameraView_wrapper::*default_className_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "className"
                , className_function_type(&::osg::CameraView::className)
                , default_className_function_type(&CameraView_wrapper::default_className) );
        
        }
        { //::osg::CameraView::clone
        
            typedef ::osg::Object * ( ::osg::CameraView::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( CameraView_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            CameraView_exposer.def( 
                "clone"
                , clone_function_type(&::osg::CameraView::clone)
                , default_clone_function_type(&CameraView_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::CameraView::cloneType
        
            typedef ::osg::Object * ( ::osg::CameraView::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( CameraView_wrapper::*default_cloneType_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::CameraView::cloneType)
                , default_cloneType_function_type(&CameraView_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::CameraView::computeLocalToWorldMatrix
        
            typedef bool ( ::osg::CameraView::*computeLocalToWorldMatrix_function_type )( ::osg::Matrix &,::osg::NodeVisitor * ) const;
            typedef bool ( CameraView_wrapper::*default_computeLocalToWorldMatrix_function_type )( ::osg::Matrix &,::osg::NodeVisitor * ) const;
            
            CameraView_exposer.def( 
                "computeLocalToWorldMatrix"
                , computeLocalToWorldMatrix_function_type(&::osg::CameraView::computeLocalToWorldMatrix)
                , default_computeLocalToWorldMatrix_function_type(&CameraView_wrapper::default_computeLocalToWorldMatrix)
                , ( bp::arg("matrix"), bp::arg("nv") ) );
        
        }
        { //::osg::CameraView::computeWorldToLocalMatrix
        
            typedef bool ( ::osg::CameraView::*computeWorldToLocalMatrix_function_type )( ::osg::Matrix &,::osg::NodeVisitor * ) const;
            typedef bool ( CameraView_wrapper::*default_computeWorldToLocalMatrix_function_type )( ::osg::Matrix &,::osg::NodeVisitor * ) const;
            
            CameraView_exposer.def( 
                "computeWorldToLocalMatrix"
                , computeWorldToLocalMatrix_function_type(&::osg::CameraView::computeWorldToLocalMatrix)
                , default_computeWorldToLocalMatrix_function_type(&CameraView_wrapper::default_computeWorldToLocalMatrix)
                , ( bp::arg("matrix"), bp::arg("nv") ) );
        
        }
        { //::osg::CameraView::getAttitude
        
            typedef ::osg::Quat const & ( ::osg::CameraView::*getAttitude_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "getAttitude"
                , getAttitude_function_type( &::osg::CameraView::getAttitude )
                , bp::return_internal_reference< >()
                , " Get the attitude of the camera view." );
        
        }
        { //::osg::CameraView::getFieldOfView
        
            typedef double ( ::osg::CameraView::*getFieldOfView_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "getFieldOfView"
                , getFieldOfView_function_type( &::osg::CameraView::getFieldOfView )
                , " Get the field of view." );
        
        }
        { //::osg::CameraView::getFieldOfViewMode
        
            typedef ::osg::CameraView::FieldOfViewMode ( ::osg::CameraView::*getFieldOfViewMode_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "getFieldOfViewMode"
                , getFieldOfViewMode_function_type( &::osg::CameraView::getFieldOfViewMode )
                , " Get the field of view mode." );
        
        }
        { //::osg::CameraView::getFocalLength
        
            typedef double ( ::osg::CameraView::*getFocalLength_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "getFocalLength"
                , getFocalLength_function_type( &::osg::CameraView::getFocalLength )
                , " Get the focal length of the camera." );
        
        }
        { //::osg::CameraView::getPosition
        
            typedef ::osg::Vec3d const & ( ::osg::CameraView::*getPosition_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "getPosition"
                , getPosition_function_type( &::osg::CameraView::getPosition )
                , bp::return_internal_reference< >()
                , " Get the position of the camera view." );
        
        }
        { //::osg::CameraView::isSameKindAs
        
            typedef bool ( ::osg::CameraView::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( CameraView_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            CameraView_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::CameraView::isSameKindAs)
                , default_isSameKindAs_function_type(&CameraView_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::CameraView::libraryName
        
            typedef char const * ( ::osg::CameraView::*libraryName_function_type )(  ) const;
            typedef char const * ( CameraView_wrapper::*default_libraryName_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::CameraView::libraryName)
                , default_libraryName_function_type(&CameraView_wrapper::default_libraryName) );
        
        }
        { //::osg::CameraView::setAttitude
        
            typedef void ( ::osg::CameraView::*setAttitude_function_type )( ::osg::Quat const & ) ;
            
            CameraView_exposer.def( 
                "setAttitude"
                , setAttitude_function_type( &::osg::CameraView::setAttitude )
                , ( bp::arg("quat") )
                , " Set the attitude of the camera view." );
        
        }
        { //::osg::CameraView::setFieldOfView
        
            typedef void ( ::osg::CameraView::*setFieldOfView_function_type )( double ) ;
            
            CameraView_exposer.def( 
                "setFieldOfView"
                , setFieldOfView_function_type( &::osg::CameraView::setFieldOfView )
                , ( bp::arg("fieldOfView") )
                , " Set the field of view.\n The cameras field of view can be constrained to either the horizontal or vertical axis of the camera, or unconstrained\n in which case the camera/application are left to choose an appropriate field of view.\n The default value if 60 degrees." );
        
        }
        { //::osg::CameraView::setFieldOfViewMode
        
            typedef void ( ::osg::CameraView::*setFieldOfViewMode_function_type )( ::osg::CameraView::FieldOfViewMode ) ;
            
            CameraView_exposer.def( 
                "setFieldOfViewMode"
                , setFieldOfViewMode_function_type( &::osg::CameraView::setFieldOfViewMode )
                , ( bp::arg("mode") )
                , " Set the field of view mode - controlling how the field of view of the camera is constrained by the CameraView settings." );
        
        }
        { //::osg::CameraView::setFocalLength
        
            typedef void ( ::osg::CameraView::*setFocalLength_function_type )( double ) ;
            
            CameraView_exposer.def( 
                "setFocalLength"
                , setFocalLength_function_type( &::osg::CameraView::setFocalLength )
                , ( bp::arg("focalLength") )
                , " Set the focal length of the camera.\n A focal length of 0.0 indicates that the camera/application should determine the focal length.\n The default value is 0.0." );
        
        }
        { //::osg::CameraView::setPosition
        
            typedef void ( ::osg::CameraView::*setPosition_function_type )( ::osg::Vec3d const & ) ;
            
            CameraView_exposer.def( 
                "setPosition"
                , setPosition_function_type( &::osg::CameraView::setPosition )
                , ( bp::arg("pos") )
                , " Set the position of the camera view." );
        
        }
        { //::osg::Group::addChild
        
            typedef bool ( ::osg::Group::*addChild_function_type )( ::osg::Node * ) ;
            typedef bool ( CameraView_wrapper::*default_addChild_function_type )( ::osg::Node * ) ;
            
            CameraView_exposer.def( 
                "addChild"
                , addChild_function_type(&::osg::Group::addChild)
                , default_addChild_function_type(&CameraView_wrapper::default_addChild)
                , ( bp::arg("child") ) );
        
        }
        { //::osg::Node::asCamera
        
            typedef ::osg::Camera * ( ::osg::Node::*asCamera_function_type )(  ) ;
            typedef ::osg::Camera * ( CameraView_wrapper::*default_asCamera_function_type )(  ) ;
            
            CameraView_exposer.def( 
                "asCamera"
                , asCamera_function_type(&::osg::Node::asCamera)
                , default_asCamera_function_type(&CameraView_wrapper::default_asCamera)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asCamera
        
            typedef ::osg::Camera const * ( ::osg::Node::*asCamera_function_type )(  ) const;
            typedef ::osg::Camera const * ( CameraView_wrapper::*default_asCamera_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "asCamera"
                , asCamera_function_type(&::osg::Node::asCamera)
                , default_asCamera_function_type(&CameraView_wrapper::default_asCamera)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asGeode
        
            typedef ::osg::Geode * ( ::osg::Node::*asGeode_function_type )(  ) ;
            typedef ::osg::Geode * ( CameraView_wrapper::*default_asGeode_function_type )(  ) ;
            
            CameraView_exposer.def( 
                "asGeode"
                , asGeode_function_type(&::osg::Node::asGeode)
                , default_asGeode_function_type(&CameraView_wrapper::default_asGeode)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asGeode
        
            typedef ::osg::Geode const * ( ::osg::Node::*asGeode_function_type )(  ) const;
            typedef ::osg::Geode const * ( CameraView_wrapper::*default_asGeode_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "asGeode"
                , asGeode_function_type(&::osg::Node::asGeode)
                , default_asGeode_function_type(&CameraView_wrapper::default_asGeode)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Group::asGroup
        
            typedef ::osg::Group * ( ::osg::Group::*asGroup_function_type )(  ) ;
            typedef ::osg::Group * ( CameraView_wrapper::*default_asGroup_function_type )(  ) ;
            
            CameraView_exposer.def( 
                "asGroup"
                , asGroup_function_type(&::osg::Group::asGroup)
                , default_asGroup_function_type(&CameraView_wrapper::default_asGroup)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Group::asGroup
        
            typedef ::osg::Group const * ( ::osg::Group::*asGroup_function_type )(  ) const;
            typedef ::osg::Group const * ( CameraView_wrapper::*default_asGroup_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "asGroup"
                , asGroup_function_type(&::osg::Group::asGroup)
                , default_asGroup_function_type(&CameraView_wrapper::default_asGroup)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Transform::asMatrixTransform
        
            typedef ::osg::MatrixTransform * ( ::osg::Transform::*asMatrixTransform_function_type )(  ) ;
            typedef ::osg::MatrixTransform * ( CameraView_wrapper::*default_asMatrixTransform_function_type )(  ) ;
            
            CameraView_exposer.def( 
                "asMatrixTransform"
                , asMatrixTransform_function_type(&::osg::Transform::asMatrixTransform)
                , default_asMatrixTransform_function_type(&CameraView_wrapper::default_asMatrixTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Transform::asMatrixTransform
        
            typedef ::osg::MatrixTransform const * ( ::osg::Transform::*asMatrixTransform_function_type )(  ) const;
            typedef ::osg::MatrixTransform const * ( CameraView_wrapper::*default_asMatrixTransform_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "asMatrixTransform"
                , asMatrixTransform_function_type(&::osg::Transform::asMatrixTransform)
                , default_asMatrixTransform_function_type(&CameraView_wrapper::default_asMatrixTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Transform::asPositionAttitudeTransform
        
            typedef ::osg::PositionAttitudeTransform * ( ::osg::Transform::*asPositionAttitudeTransform_function_type )(  ) ;
            typedef ::osg::PositionAttitudeTransform * ( CameraView_wrapper::*default_asPositionAttitudeTransform_function_type )(  ) ;
            
            CameraView_exposer.def( 
                "asPositionAttitudeTransform"
                , asPositionAttitudeTransform_function_type(&::osg::Transform::asPositionAttitudeTransform)
                , default_asPositionAttitudeTransform_function_type(&CameraView_wrapper::default_asPositionAttitudeTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Transform::asPositionAttitudeTransform
        
            typedef ::osg::PositionAttitudeTransform const * ( ::osg::Transform::*asPositionAttitudeTransform_function_type )(  ) const;
            typedef ::osg::PositionAttitudeTransform const * ( CameraView_wrapper::*default_asPositionAttitudeTransform_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "asPositionAttitudeTransform"
                , asPositionAttitudeTransform_function_type(&::osg::Transform::asPositionAttitudeTransform)
                , default_asPositionAttitudeTransform_function_type(&CameraView_wrapper::default_asPositionAttitudeTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asSwitch
        
            typedef ::osg::Switch * ( ::osg::Node::*asSwitch_function_type )(  ) ;
            typedef ::osg::Switch * ( CameraView_wrapper::*default_asSwitch_function_type )(  ) ;
            
            CameraView_exposer.def( 
                "asSwitch"
                , asSwitch_function_type(&::osg::Node::asSwitch)
                , default_asSwitch_function_type(&CameraView_wrapper::default_asSwitch)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asSwitch
        
            typedef ::osg::Switch const * ( ::osg::Node::*asSwitch_function_type )(  ) const;
            typedef ::osg::Switch const * ( CameraView_wrapper::*default_asSwitch_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "asSwitch"
                , asSwitch_function_type(&::osg::Node::asSwitch)
                , default_asSwitch_function_type(&CameraView_wrapper::default_asSwitch)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Transform::asTransform
        
            typedef ::osg::Transform * ( ::osg::Transform::*asTransform_function_type )(  ) ;
            typedef ::osg::Transform * ( CameraView_wrapper::*default_asTransform_function_type )(  ) ;
            
            CameraView_exposer.def( 
                "asTransform"
                , asTransform_function_type(&::osg::Transform::asTransform)
                , default_asTransform_function_type(&CameraView_wrapper::default_asTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Transform::asTransform
        
            typedef ::osg::Transform const * ( ::osg::Transform::*asTransform_function_type )(  ) const;
            typedef ::osg::Transform const * ( CameraView_wrapper::*default_asTransform_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "asTransform"
                , asTransform_function_type(&::osg::Transform::asTransform)
                , default_asTransform_function_type(&CameraView_wrapper::default_asTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::ascend
        
            typedef void ( ::osg::Node::*ascend_function_type )( ::osg::NodeVisitor & ) ;
            typedef void ( CameraView_wrapper::*default_ascend_function_type )( ::osg::NodeVisitor & ) ;
            
            CameraView_exposer.def( 
                "ascend"
                , ascend_function_type(&::osg::Node::ascend)
                , default_ascend_function_type(&CameraView_wrapper::default_ascend)
                , ( bp::arg("nv") ) );
        
        }
        { //::osg::Transform::computeBound
        
            typedef ::osg::BoundingSphere ( ::osg::Transform::*computeBound_function_type )(  ) const;
            typedef ::osg::BoundingSphere ( CameraView_wrapper::*default_computeBound_function_type )(  ) const;
            
            CameraView_exposer.def( 
                "computeBound"
                , computeBound_function_type(&::osg::Transform::computeBound)
                , default_computeBound_function_type(&CameraView_wrapper::default_computeBound) );
        
        }
        { //::osg::Group::insertChild
        
            typedef bool ( ::osg::Group::*insertChild_function_type )( unsigned int,::osg::Node * ) ;
            typedef bool ( CameraView_wrapper::*default_insertChild_function_type )( unsigned int,::osg::Node * ) ;
            
            CameraView_exposer.def( 
                "insertChild"
                , insertChild_function_type(&::osg::Group::insertChild)
                , default_insertChild_function_type(&CameraView_wrapper::default_insertChild)
                , ( bp::arg("index"), bp::arg("child") ) );
        
        }
        { //::osg::Group::removeChildren
        
            typedef bool ( ::osg::Group::*removeChildren_function_type )( unsigned int,unsigned int ) ;
            typedef bool ( CameraView_wrapper::*default_removeChildren_function_type )( unsigned int,unsigned int ) ;
            
            CameraView_exposer.def( 
                "removeChildren"
                , removeChildren_function_type(&::osg::Group::removeChildren)
                , default_removeChildren_function_type(&CameraView_wrapper::default_removeChildren)
                , ( bp::arg("pos"), bp::arg("numChildrenToRemove") ) );
        
        }
        { //::osg::Group::replaceChild
        
            typedef bool ( ::osg::Group::*replaceChild_function_type )( ::osg::Node *,::osg::Node * ) ;
            typedef bool ( CameraView_wrapper::*default_replaceChild_function_type )( ::osg::Node *,::osg::Node * ) ;
            
            CameraView_exposer.def( 
                "replaceChild"
                , replaceChild_function_type(&::osg::Group::replaceChild)
                , default_replaceChild_function_type(&CameraView_wrapper::default_replaceChild)
                , ( bp::arg("origChild"), bp::arg("newChild") ) );
        
        }
        { //::osg::Group::resizeGLObjectBuffers
        
            typedef void ( ::osg::Group::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( CameraView_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            CameraView_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Group::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&CameraView_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::Group::setChild
        
            typedef bool ( ::osg::Group::*setChild_function_type )( unsigned int,::osg::Node * ) ;
            typedef bool ( CameraView_wrapper::*default_setChild_function_type )( unsigned int,::osg::Node * ) ;
            
            CameraView_exposer.def( 
                "setChild"
                , setChild_function_type(&::osg::Group::setChild)
                , default_setChild_function_type(&CameraView_wrapper::default_setChild)
                , ( bp::arg("i"), bp::arg("node") ) );
        
        }
        { //::osg::Group::setThreadSafeRefUnref
        
            typedef void ( ::osg::Group::*setThreadSafeRefUnref_function_type )( bool ) ;
            typedef void ( CameraView_wrapper::*default_setThreadSafeRefUnref_function_type )( bool ) ;
            
            CameraView_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Group::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&CameraView_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Group::traverse
        
            typedef void ( ::osg::Group::*traverse_function_type )( ::osg::NodeVisitor & ) ;
            typedef void ( CameraView_wrapper::*default_traverse_function_type )( ::osg::NodeVisitor & ) ;
            
            CameraView_exposer.def( 
                "traverse"
                , traverse_function_type(&::osg::Group::traverse)
                , default_traverse_function_type(&CameraView_wrapper::default_traverse)
                , ( bp::arg("nv") ) );
        
        }
    }

}
