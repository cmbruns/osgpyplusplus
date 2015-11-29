// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgGA.h"
#include "wrap_referenced.h"
#include "UFOManipulator.pypp.hpp"

namespace bp = boost::python;

struct UFOManipulator_wrapper : osgGA::UFOManipulator, bp::wrapper< osgGA::UFOManipulator > {

    UFOManipulator_wrapper( )
    : osgGA::UFOManipulator( )
      , bp::wrapper< osgGA::UFOManipulator >(){
        // null constructor
    
    }

    void _adjustPosition(  ){
        osgGA::UFOManipulator::_adjustPosition(  );
    }

    void _stop(  ){
        osgGA::UFOManipulator::_stop(  );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgGA::UFOManipulator::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgGA::UFOManipulator::className( );
    }

    virtual void computeHomePosition(  ) {
        if( bp::override func_computeHomePosition = this->get_override( "computeHomePosition" ) )
            func_computeHomePosition(  );
        else{
            this->osgGA::UFOManipulator::computeHomePosition(  );
        }
    }
    
    void default_computeHomePosition(  ) {
        osgGA::UFOManipulator::computeHomePosition( );
    }

    virtual ::osg::Matrixd getInverseMatrix(  ) const  {
        if( bp::override func_getInverseMatrix = this->get_override( "getInverseMatrix" ) )
            return func_getInverseMatrix(  );
        else{
            return this->osgGA::UFOManipulator::getInverseMatrix(  );
        }
    }
    
    ::osg::Matrixd default_getInverseMatrix(  ) const  {
        return osgGA::UFOManipulator::getInverseMatrix( );
    }

    virtual ::osg::Matrixd getMatrix(  ) const  {
        if( bp::override func_getMatrix = this->get_override( "getMatrix" ) )
            return func_getMatrix(  );
        else{
            return this->osgGA::UFOManipulator::getMatrix(  );
        }
    }
    
    ::osg::Matrixd default_getMatrix(  ) const  {
        return osgGA::UFOManipulator::getMatrix( );
    }

    virtual ::osg::Node const * getNode(  ) const  {
        if( bp::override func_getNode = this->get_override( "getNode" ) )
            return func_getNode(  );
        else{
            return this->osgGA::UFOManipulator::getNode(  );
        }
    }
    
    ::osg::Node const * default_getNode(  ) const  {
        return osgGA::UFOManipulator::getNode( );
    }

    virtual ::osg::Node * getNode(  ) {
        if( bp::override func_getNode = this->get_override( "getNode" ) )
            return func_getNode(  );
        else{
            return this->osgGA::UFOManipulator::getNode(  );
        }
    }
    
    ::osg::Node * default_getNode(  ) {
        return osgGA::UFOManipulator::getNode( );
    }

    virtual void getUsage( ::osg::ApplicationUsage & usage ) const  {
        if( bp::override func_getUsage = this->get_override( "getUsage" ) )
            func_getUsage( boost::ref(usage) );
        else{
            this->osgGA::UFOManipulator::getUsage( boost::ref(usage) );
        }
    }
    
    void default_getUsage( ::osg::ApplicationUsage & usage ) const  {
        osgGA::UFOManipulator::getUsage( boost::ref(usage) );
    }

    virtual bool handle( ::osgGA::GUIEventAdapter const & ea, ::osgGA::GUIActionAdapter & aa ) {
        namespace bpl = boost::python;
        if( bpl::override func_handle = this->get_override( "handle" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_handle.ptr(), ea, aa );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgGA::UFOManipulator::handle( boost::ref(ea), boost::ref(aa) );
        }
    }
    
    static boost::python::object default_handle( ::osgGA::UFOManipulator & inst, ::osgGA::GUIEventAdapter & ea, ::osgGA::GUIActionAdapter & aa ){
        bool result;
        if( dynamic_cast< UFOManipulator_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgGA::UFOManipulator::handle(ea, aa);
        }
        else{
            result = inst.handle(ea, aa);
        }
        return bp::object( result );
    }

    virtual void home( ::osgGA::GUIEventAdapter const & arg0, ::osgGA::GUIActionAdapter & arg1 ) {
        namespace bpl = boost::python;
        if( bpl::override func_home = this->get_override( "home" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_home.ptr(), arg0, arg1 );
        }
        else{
            osgGA::UFOManipulator::home( boost::ref(arg0), boost::ref(arg1) );
        }
    }
    
    static void default_home_440c715662b66cd56a56411d179f268f( ::osgGA::UFOManipulator & inst, ::osgGA::GUIEventAdapter & arg0, ::osgGA::GUIActionAdapter & arg1 ){
        if( dynamic_cast< UFOManipulator_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgGA::UFOManipulator::home(arg0, arg1);
        }
        else{
            inst.home(arg0, arg1);
        }
    }

    virtual void home( double arg0 ) {
        namespace bpl = boost::python;
        if( bpl::override func_home = this->get_override( "home" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_home.ptr(), arg0 );
        }
        else{
            osgGA::UFOManipulator::home( arg0 );
        }
    }
    
    static void default_home_e69e131c57a99d02980a9f092fbfb8bd( ::osgGA::UFOManipulator & inst, double arg0 ){
        if( dynamic_cast< UFOManipulator_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgGA::UFOManipulator::home(arg0);
        }
        else{
            inst.home(arg0);
        }
    }

    virtual void init( ::osgGA::GUIEventAdapter const & arg0, ::osgGA::GUIActionAdapter & arg1 ) {
        namespace bpl = boost::python;
        if( bpl::override func_init = this->get_override( "init" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_init.ptr(), arg0, arg1 );
        }
        else{
            osgGA::UFOManipulator::init( boost::ref(arg0), boost::ref(arg1) );
        }
    }
    
    static void default_init( ::osgGA::UFOManipulator & inst, ::osgGA::GUIEventAdapter & arg0, ::osgGA::GUIActionAdapter & arg1 ){
        if( dynamic_cast< UFOManipulator_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgGA::UFOManipulator::init(arg0, arg1);
        }
        else{
            inst.init(arg0, arg1);
        }
    }

    bool intersect( ::osg::Vec3d const & start, ::osg::Vec3d const & end, ::osg::Vec3d & intersection ) const {
        return osgGA::UFOManipulator::intersect( boost::ref(start), boost::ref(end), boost::ref(intersection) );
    }

    virtual void setByInverseMatrix( ::osg::Matrixd const & invmat ) {
        if( bp::override func_setByInverseMatrix = this->get_override( "setByInverseMatrix" ) )
            func_setByInverseMatrix( boost::ref(invmat) );
        else{
            this->osgGA::UFOManipulator::setByInverseMatrix( boost::ref(invmat) );
        }
    }
    
    void default_setByInverseMatrix( ::osg::Matrixd const & invmat ) {
        osgGA::UFOManipulator::setByInverseMatrix( boost::ref(invmat) );
    }

    virtual void setByMatrix( ::osg::Matrixd const & matrix ) {
        if( bp::override func_setByMatrix = this->get_override( "setByMatrix" ) )
            func_setByMatrix( boost::ref(matrix) );
        else{
            this->osgGA::UFOManipulator::setByMatrix( boost::ref(matrix) );
        }
    }
    
    void default_setByMatrix( ::osg::Matrixd const & matrix ) {
        osgGA::UFOManipulator::setByMatrix( boost::ref(matrix) );
    }

    virtual void setNode( ::osg::Node * node ) {
        if( bp::override func_setNode = this->get_override( "setNode" ) )
            func_setNode( boost::python::ptr(node) );
        else{
            this->osgGA::UFOManipulator::setNode( boost::python::ptr(node) );
        }
    }
    
    void default_setNode( ::osg::Node * node ) {
        osgGA::UFOManipulator::setNode( boost::python::ptr(node) );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgGA::GUIEventHandler::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgGA::GUIEventHandler::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgGA::GUIEventHandler::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgGA::GUIEventHandler::cloneType( );
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

    virtual void computeHomePosition( ::osg::Camera const * camera=0l, bool useBoundingBox=false ) {
        if( bp::override func_computeHomePosition = this->get_override( "computeHomePosition" ) )
            func_computeHomePosition( boost::python::ptr(camera), useBoundingBox );
        else{
            this->osgGA::CameraManipulator::computeHomePosition( boost::python::ptr(camera), useBoundingBox );
        }
    }
    
    void default_computeHomePosition( ::osg::Camera const * camera=0l, bool useBoundingBox=false ) {
        osgGA::CameraManipulator::computeHomePosition( boost::python::ptr(camera), useBoundingBox );
    }

    virtual void event( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable ) {
        if( bp::override func_event = this->get_override( "event" ) )
            func_event( boost::python::ptr(nv), boost::python::ptr(drawable) );
        else{
            this->osgGA::GUIEventHandler::event( boost::python::ptr(nv), boost::python::ptr(drawable) );
        }
    }
    
    void default_event( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable ) {
        osgGA::GUIEventHandler::event( boost::python::ptr(nv), boost::python::ptr(drawable) );
    }

    virtual ::osgUtil::SceneView::FusionDistanceMode getFusionDistanceMode(  ) const  {
        if( bp::override func_getFusionDistanceMode = this->get_override( "getFusionDistanceMode" ) )
            return func_getFusionDistanceMode(  );
        else{
            return this->osgGA::CameraManipulator::getFusionDistanceMode(  );
        }
    }
    
    ::osgUtil::SceneView::FusionDistanceMode default_getFusionDistanceMode(  ) const  {
        return osgGA::CameraManipulator::getFusionDistanceMode( );
    }

    virtual float getFusionDistanceValue(  ) const  {
        if( bp::override func_getFusionDistanceValue = this->get_override( "getFusionDistanceValue" ) )
            return func_getFusionDistanceValue(  );
        else{
            return this->osgGA::CameraManipulator::getFusionDistanceValue(  );
        }
    }
    
    float default_getFusionDistanceValue(  ) const  {
        return osgGA::CameraManipulator::getFusionDistanceValue( );
    }

    virtual void getHomePosition( ::osg::Vec3d & eye, ::osg::Vec3d & center, ::osg::Vec3d & up ) const  {
        if( bp::override func_getHomePosition = this->get_override( "getHomePosition" ) )
            func_getHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up) );
        else{
            this->osgGA::CameraManipulator::getHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up) );
        }
    }
    
    void default_getHomePosition( ::osg::Vec3d & eye, ::osg::Vec3d & center, ::osg::Vec3d & up ) const  {
        osgGA::CameraManipulator::getHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up) );
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

    virtual bool handle( ::osgGA::GUIEventAdapter const & ea, ::osgGA::GUIActionAdapter & aa, ::osg::Object * arg2, ::osg::NodeVisitor * arg3 ) {
        namespace bpl = boost::python;
        if( bpl::override func_handle = this->get_override( "handle" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_handle.ptr(), ea, aa, arg2, arg3 );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgGA::GUIEventHandler::handle( boost::ref(ea), boost::ref(aa), boost::python::ptr(arg2), boost::python::ptr(arg3) );
        }
    }
    
    static boost::python::object default_handle_d0ba65b51c8a2afc5afff00aad1b91b3( ::osgGA::GUIEventHandler & inst, ::osgGA::GUIEventAdapter & ea, ::osgGA::GUIActionAdapter & aa, ::osg::Object * arg2, ::osg::NodeVisitor * arg3 ){
        bool result;
        if( dynamic_cast< UFOManipulator_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgGA::GUIEventHandler::handle(ea, aa, arg2, arg3);
        }
        else{
            result = inst.handle(ea, aa, arg2, arg3);
        }
        return bp::object( result );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgGA::GUIEventHandler::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgGA::GUIEventHandler::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgGA::GUIEventHandler::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgGA::GUIEventHandler::libraryName( );
    }

    virtual void setAutoComputeHomePosition( bool flag ) {
        if( bp::override func_setAutoComputeHomePosition = this->get_override( "setAutoComputeHomePosition" ) )
            func_setAutoComputeHomePosition( flag );
        else{
            this->osgGA::CameraManipulator::setAutoComputeHomePosition( flag );
        }
    }
    
    void default_setAutoComputeHomePosition( bool flag ) {
        osgGA::CameraManipulator::setAutoComputeHomePosition( flag );
    }

    virtual void setCoordinateFrameCallback( ::osgGA::CameraManipulator::CoordinateFrameCallback * cb ) {
        if( bp::override func_setCoordinateFrameCallback = this->get_override( "setCoordinateFrameCallback" ) )
            func_setCoordinateFrameCallback( boost::python::ptr(cb) );
        else{
            this->osgGA::CameraManipulator::setCoordinateFrameCallback( boost::python::ptr(cb) );
        }
    }
    
    void default_setCoordinateFrameCallback( ::osgGA::CameraManipulator::CoordinateFrameCallback * cb ) {
        osgGA::CameraManipulator::setCoordinateFrameCallback( boost::python::ptr(cb) );
    }

    virtual void setHomePosition( ::osg::Vec3d const & eye, ::osg::Vec3d const & center, ::osg::Vec3d const & up, bool autoComputeHomePosition=false ) {
        if( bp::override func_setHomePosition = this->get_override( "setHomePosition" ) )
            func_setHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up), autoComputeHomePosition );
        else{
            this->osgGA::CameraManipulator::setHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up), autoComputeHomePosition );
        }
    }
    
    void default_setHomePosition( ::osg::Vec3d const & eye, ::osg::Vec3d const & center, ::osg::Vec3d const & up, bool autoComputeHomePosition=false ) {
        osgGA::CameraManipulator::setHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up), autoComputeHomePosition );
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

    virtual void updateCamera( ::osg::Camera & camera ) {
        if( bp::override func_updateCamera = this->get_override( "updateCamera" ) )
            func_updateCamera( boost::ref(camera) );
        else{
            this->osgGA::CameraManipulator::updateCamera( boost::ref(camera) );
        }
    }
    
    void default_updateCamera( ::osg::Camera & camera ) {
        osgGA::CameraManipulator::updateCamera( boost::ref(camera) );
    }

};

void register_UFOManipulator_class(){

    bp::class_< UFOManipulator_wrapper, bp::bases< osgGA::CameraManipulator >, osg::ref_ptr< UFOManipulator_wrapper >, boost::noncopyable >( "UFOManipulator", "\n  lass osgGA::UFOManipulator\n  A UFO manipulator driven with keybindings.\n\n  The UFOManipulator is better suited for applications that employ\n  architectural walk-throughs, or situations where the eyepoint motion\n  model must move slowly, deliberately and well controlled.\n\n  The UFO Manipulator allows the following movements with the listed\n  Key combinations:\n    @param UpArrow:          Acceleration forward.\n    @param DownArrow:        Acceleration backward (or deceleration forward).\n    @param LeftArrow:        Rotate view and direction of travel to the left.\n    @param RightArrow:       Rotate view and direction of travel to the right.\n    @param SpaceBar:         Brake.  Gradually decelerates linear and rotational movement.\n    @param Shift/UpArrow:    Accelerate up.\n    @param Shift/DownArrow:  Accelerate down.\n    @param Shift/LeftArrow:  Accelerate (linearly) left.\n    @param Shift/RightArrow: Accelerate (linearly) right.\n    @param Shift/SpaceBar:   Instant brake.  Immediately stop all linear and rotational movement.\n\nWhen the Shift key is released, up, down, linear left and/or linear right movement is decelerated.\n\n    @param Ctrl/UpArrow:     Rotate view (but not direction of travel) up.\n    @param Ctrl/DownArrow:   Rotate view (but not direction of travel) down.\n    @param Ctrl/LeftArrow:   Rotate view (but not direction of travel) left.\n    @param Ctrl/RightArrow:  Rotate view (but not direction of travel) right.\n    @param Ctrl/Return:      Straightens out the view offset.\n", bp::no_init )    
        .def( bp::init< >("\n Default constructor\n") )    
        .def( 
            "_adjustPosition"
            , (void ( UFOManipulator_wrapper::* )(  ) )(&UFOManipulator_wrapper::_adjustPosition) )    
        .def( 
            "_stop"
            , (void ( UFOManipulator_wrapper::* )(  ) )(&UFOManipulator_wrapper::_stop) )    
        .def( 
            "className"
            , (char const * ( ::osgGA::UFOManipulator::* )(  ) const)(&::osgGA::UFOManipulator::className)
            , (char const * ( UFOManipulator_wrapper::* )(  ) const)(&UFOManipulator_wrapper::default_className) )    
        .def( 
            "computeHomePosition"
            , (void ( ::osgGA::UFOManipulator::* )(  ) )(&::osgGA::UFOManipulator::computeHomePosition)
            , (void ( UFOManipulator_wrapper::* )(  ) )(&UFOManipulator_wrapper::default_computeHomePosition) )    
        .def( 
            "getCurrentPositionAsLookAt"
            , (void ( ::osgGA::UFOManipulator::* )( ::osg::Vec3d &,::osg::Vec3d &,::osg::Vec3d & ) )( &::osgGA::UFOManipulator::getCurrentPositionAsLookAt )
            , ( bp::arg("eye"), bp::arg("center"), bp::arg("up") )
            , " Report the current position as LookAt vectors" )    
        .def( 
            "getForwardSpeed"
            , (double ( ::osgGA::UFOManipulator::* )(  ) const)( &::osgGA::UFOManipulator::getForwardSpeed ) )    
        .def( 
            "getInverseMatrix"
            , (::osg::Matrixd ( ::osgGA::UFOManipulator::* )(  ) const)(&::osgGA::UFOManipulator::getInverseMatrix)
            , (::osg::Matrixd ( UFOManipulator_wrapper::* )(  ) const)(&UFOManipulator_wrapper::default_getInverseMatrix) )    
        .def( 
            "getMatrix"
            , (::osg::Matrixd ( ::osgGA::UFOManipulator::* )(  ) const)(&::osgGA::UFOManipulator::getMatrix)
            , (::osg::Matrixd ( UFOManipulator_wrapper::* )(  ) const)(&UFOManipulator_wrapper::default_getMatrix) )    
        .def( 
            "getMinDistance"
            , (double ( ::osgGA::UFOManipulator::* )(  ) const)( &::osgGA::UFOManipulator::getMinDistance ) )    
        .def( 
            "getMinHeight"
            , (double ( ::osgGA::UFOManipulator::* )(  ) const)( &::osgGA::UFOManipulator::getMinHeight ) )    
        .def( 
            "getNode"
            , (::osg::Node const * ( ::osgGA::UFOManipulator::* )(  ) const)(&::osgGA::UFOManipulator::getNode)
            , (::osg::Node const * ( UFOManipulator_wrapper::* )(  ) const)(&UFOManipulator_wrapper::default_getNode)
            , bp::return_internal_reference< >() )    
        .def( 
            "getNode"
            , (::osg::Node * ( ::osgGA::UFOManipulator::* )(  ) )(&::osgGA::UFOManipulator::getNode)
            , (::osg::Node * ( UFOManipulator_wrapper::* )(  ) )(&UFOManipulator_wrapper::default_getNode)
            , bp::return_internal_reference< >() )    
        .def( 
            "getRotationSpeed"
            , (double ( ::osgGA::UFOManipulator::* )(  ) const)( &::osgGA::UFOManipulator::getRotationSpeed ) )    
        .def( 
            "getSideSpeed"
            , (double ( ::osgGA::UFOManipulator::* )(  ) const)( &::osgGA::UFOManipulator::getSideSpeed ) )    
        .def( 
            "getUsage"
            , (void ( ::osgGA::UFOManipulator::* )( ::osg::ApplicationUsage & ) const)(&::osgGA::UFOManipulator::getUsage)
            , (void ( UFOManipulator_wrapper::* )( ::osg::ApplicationUsage & ) const)(&UFOManipulator_wrapper::default_getUsage)
            , ( bp::arg("usage") ) )    
        .def( 
            "handle"
            , (boost::python::object (*)( ::osgGA::UFOManipulator &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter & ))( &UFOManipulator_wrapper::default_handle )
            , ( bp::arg("inst"), bp::arg("ea"), bp::arg("aa") )
            , "\n Handles incoming osgGA events\n" )    
        .def( 
            "home"
            , (void (*)( ::osgGA::UFOManipulator &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter & ))( &UFOManipulator_wrapper::default_home_440c715662b66cd56a56411d179f268f )
            , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1") )
            , "\n Sets the viewpoint matrix to the home position\n" )    
        .def( 
            "home"
            , (void (*)( ::osgGA::UFOManipulator &,double ))( &UFOManipulator_wrapper::default_home_e69e131c57a99d02980a9f092fbfb8bd )
            , ( bp::arg("inst"), bp::arg("arg0") ) )    
        .def( 
            "init"
            , (void (*)( ::osgGA::UFOManipulator &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter & ))( &UFOManipulator_wrapper::default_init )
            , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1") ) )    
        .def( 
            "intersect"
            , (bool ( UFOManipulator_wrapper::* )( ::osg::Vec3d const &,::osg::Vec3d const &,::osg::Vec3d & ) const)(&UFOManipulator_wrapper::intersect)
            , ( bp::arg("start"), bp::arg("end"), bp::arg("intersection") ) )    
        .def( 
            "setByInverseMatrix"
            , (void ( ::osgGA::UFOManipulator::* )( ::osg::Matrixd const & ) )(&::osgGA::UFOManipulator::setByInverseMatrix)
            , (void ( UFOManipulator_wrapper::* )( ::osg::Matrixd const & ) )(&UFOManipulator_wrapper::default_setByInverseMatrix)
            , ( bp::arg("invmat") ) )    
        .def( 
            "setByMatrix"
            , (void ( ::osgGA::UFOManipulator::* )( ::osg::Matrixd const & ) )(&::osgGA::UFOManipulator::setByMatrix)
            , (void ( UFOManipulator_wrapper::* )( ::osg::Matrixd const & ) )(&UFOManipulator_wrapper::default_setByMatrix)
            , ( bp::arg("matrix") ) )    
        .def( 
            "setForwardSpeed"
            , (void ( ::osgGA::UFOManipulator::* )( double ) )( &::osgGA::UFOManipulator::setForwardSpeed )
            , ( bp::arg("in_fs") ) )    
        .def( 
            "setMinDistance"
            , (void ( ::osgGA::UFOManipulator::* )( double ) )( &::osgGA::UFOManipulator::setMinDistance )
            , ( bp::arg("in_min_dist") ) )    
        .def( 
            "setMinHeight"
            , (void ( ::osgGA::UFOManipulator::* )( double ) )( &::osgGA::UFOManipulator::setMinHeight )
            , ( bp::arg("in_min_height") ) )    
        .def( 
            "setNode"
            , (void ( ::osgGA::UFOManipulator::* )( ::osg::Node * ) )(&::osgGA::UFOManipulator::setNode)
            , (void ( UFOManipulator_wrapper::* )( ::osg::Node * ) )(&UFOManipulator_wrapper::default_setNode)
            , ( bp::arg("node") ) )    
        .def( 
            "setRotationSpeed"
            , (void ( ::osgGA::UFOManipulator::* )( double ) )( &::osgGA::UFOManipulator::setRotationSpeed )
            , ( bp::arg("in_rot_speed") ) )    
        .def( 
            "setSideSpeed"
            , (void ( ::osgGA::UFOManipulator::* )( double ) )( &::osgGA::UFOManipulator::setSideSpeed )
            , ( bp::arg("in_ss") ) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgGA::GUIEventHandler::* )( ::osg::CopyOp const & ) const)(&::osgGA::GUIEventHandler::clone)
            , (::osg::Object * ( UFOManipulator_wrapper::* )( ::osg::CopyOp const & ) const)(&UFOManipulator_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgGA::GUIEventHandler::* )(  ) const)(&::osgGA::GUIEventHandler::cloneType)
            , (::osg::Object * ( UFOManipulator_wrapper::* )(  ) const)(&UFOManipulator_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeHomePosition"
            , (void ( ::osgGA::CameraManipulator::* )( ::osg::Camera const *,bool ) )(&::osgGA::CameraManipulator::computeHomePosition)
            , (void ( UFOManipulator_wrapper::* )( ::osg::Camera const *,bool ) )(&UFOManipulator_wrapper::default_computeHomePosition)
            , ( bp::arg("camera")=0l, bp::arg("useBoundingBox")=(bool)(false) ) )    
        .def( 
            "event"
            , (void ( ::osgGA::GUIEventHandler::* )( ::osg::NodeVisitor *,::osg::Drawable * ) )(&::osgGA::GUIEventHandler::event)
            , (void ( UFOManipulator_wrapper::* )( ::osg::NodeVisitor *,::osg::Drawable * ) )(&UFOManipulator_wrapper::default_event)
            , ( bp::arg("nv"), bp::arg("drawable") ) )    
        .def( 
            "getFusionDistanceMode"
            , (::osgUtil::SceneView::FusionDistanceMode ( ::osgGA::CameraManipulator::* )(  ) const)(&::osgGA::CameraManipulator::getFusionDistanceMode)
            , (::osgUtil::SceneView::FusionDistanceMode ( UFOManipulator_wrapper::* )(  ) const)(&UFOManipulator_wrapper::default_getFusionDistanceMode) )    
        .def( 
            "getFusionDistanceValue"
            , (float ( ::osgGA::CameraManipulator::* )(  ) const)(&::osgGA::CameraManipulator::getFusionDistanceValue)
            , (float ( UFOManipulator_wrapper::* )(  ) const)(&UFOManipulator_wrapper::default_getFusionDistanceValue) )    
        .def( 
            "getHomePosition"
            , (void ( ::osgGA::CameraManipulator::* )( ::osg::Vec3d &,::osg::Vec3d &,::osg::Vec3d & ) const)(&::osgGA::CameraManipulator::getHomePosition)
            , (void ( UFOManipulator_wrapper::* )( ::osg::Vec3d &,::osg::Vec3d &,::osg::Vec3d & ) const)(&UFOManipulator_wrapper::default_getHomePosition)
            , ( bp::arg("eye"), bp::arg("center"), bp::arg("up") ) )    
        .def( 
            "handle"
            , (boost::python::object (*)( ::osgGA::GUIEventHandler &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter &,::osg::Object *,::osg::NodeVisitor * ))( &UFOManipulator_wrapper::default_handle_d0ba65b51c8a2afc5afff00aad1b91b3 )
            , ( bp::arg("inst"), bp::arg("ea"), bp::arg("aa"), bp::arg("arg2"), bp::arg("arg3") )
            , "\n Handle events, return true if handled, false otherwise.\n" )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgGA::GUIEventHandler::* )( ::osg::Object const * ) const)(&::osgGA::GUIEventHandler::isSameKindAs)
            , (bool ( UFOManipulator_wrapper::* )( ::osg::Object const * ) const)(&UFOManipulator_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgGA::GUIEventHandler::* )(  ) const)(&::osgGA::GUIEventHandler::libraryName)
            , (char const * ( UFOManipulator_wrapper::* )(  ) const)(&UFOManipulator_wrapper::default_libraryName) )    
        .def( 
            "setAutoComputeHomePosition"
            , (void ( ::osgGA::CameraManipulator::* )( bool ) )(&::osgGA::CameraManipulator::setAutoComputeHomePosition)
            , (void ( UFOManipulator_wrapper::* )( bool ) )(&UFOManipulator_wrapper::default_setAutoComputeHomePosition)
            , ( bp::arg("flag") ) )    
        .def( 
            "setCoordinateFrameCallback"
            , (void ( ::osgGA::CameraManipulator::* )( ::osgGA::CameraManipulator::CoordinateFrameCallback * ) )(&::osgGA::CameraManipulator::setCoordinateFrameCallback)
            , (void ( UFOManipulator_wrapper::* )( ::osgGA::CameraManipulator::CoordinateFrameCallback * ) )(&UFOManipulator_wrapper::default_setCoordinateFrameCallback)
            , ( bp::arg("cb") ) )    
        .def( 
            "setHomePosition"
            , (void ( ::osgGA::CameraManipulator::* )( ::osg::Vec3d const &,::osg::Vec3d const &,::osg::Vec3d const &,bool ) )(&::osgGA::CameraManipulator::setHomePosition)
            , (void ( UFOManipulator_wrapper::* )( ::osg::Vec3d const &,::osg::Vec3d const &,::osg::Vec3d const &,bool ) )(&UFOManipulator_wrapper::default_setHomePosition)
            , ( bp::arg("eye"), bp::arg("center"), bp::arg("up"), bp::arg("autoComputeHomePosition")=(bool)(false) ) )    
        .def( 
            "updateCamera"
            , (void ( ::osgGA::CameraManipulator::* )( ::osg::Camera & ) )(&::osgGA::CameraManipulator::updateCamera)
            , (void ( UFOManipulator_wrapper::* )( ::osg::Camera & ) )(&UFOManipulator_wrapper::default_updateCamera)
            , ( bp::arg("camera") ) );

}
