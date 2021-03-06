// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgViewer.h"
#include "wrap_referenced.h"
#include "StatsHandler.pypp.hpp"

namespace bp = boost::python;

struct StatsHandler_wrapper : osgViewer::StatsHandler, bp::wrapper< osgViewer::StatsHandler > {

    StatsHandler_wrapper( )
    : osgViewer::StatsHandler( )
      , bp::wrapper< osgViewer::StatsHandler >(){
        // null constructor
    
    }

    virtual void getUsage( ::osg::ApplicationUsage & usage ) const  {
        if( bp::override func_getUsage = this->get_override( "getUsage" ) )
            func_getUsage( boost::ref(usage) );
        else{
            this->osgViewer::StatsHandler::getUsage( boost::ref(usage) );
        }
    }
    
    void default_getUsage( ::osg::ApplicationUsage & usage ) const  {
        osgViewer::StatsHandler::getUsage( boost::ref(usage) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgGA::GUIEventHandler::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgGA::GUIEventHandler::className( );
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

void register_StatsHandler_class(){

    { //::osgViewer::StatsHandler
        typedef bp::class_< StatsHandler_wrapper, bp::bases< ::osgGA::GUIEventHandler >, osg::ref_ptr< StatsHandler_wrapper >, boost::noncopyable > StatsHandler_exposer_t;
        StatsHandler_exposer_t StatsHandler_exposer = StatsHandler_exposer_t( "StatsHandler", "\n Event handler for adding on screen stats reporting to Viewers.\n", bp::init< >("\n Event handler for adding on screen stats reporting to Viewers.\n") );
        bp::scope StatsHandler_scope( StatsHandler_exposer );
        bp::enum_< osgViewer::StatsHandler::StatsType>("StatsType")
            .value("NO_STATS", osgViewer::StatsHandler::NO_STATS)
            .value("FRAME_RATE", osgViewer::StatsHandler::FRAME_RATE)
            .value("VIEWER_STATS", osgViewer::StatsHandler::VIEWER_STATS)
            .value("CAMERA_SCENE_STATS", osgViewer::StatsHandler::CAMERA_SCENE_STATS)
            .value("VIEWER_SCENE_STATS", osgViewer::StatsHandler::VIEWER_SCENE_STATS)
            .value("LAST", osgViewer::StatsHandler::LAST)
            .export_values()
            ;
        { //::osgViewer::StatsHandler::addUserStatsLine
        
            typedef void ( ::osgViewer::StatsHandler::*addUserStatsLine_function_type )( ::std::string const &,::osg::Vec4 const &,::osg::Vec4 const &,::std::string const &,float,bool,bool,::std::string const &,::std::string const &,float ) ;
            
            StatsHandler_exposer.def( 
                "addUserStatsLine"
                , addUserStatsLine_function_type( &::osgViewer::StatsHandler::addUserStatsLine )
                , ( bp::arg("label"), bp::arg("textColor"), bp::arg("barColor"), bp::arg("timeTakenName"), bp::arg("multiplier"), bp::arg("average"), bp::arg("averageInInverseSpace"), bp::arg("beginTimeName"), bp::arg("endTimeName"), bp::arg("maxValue") )
                , " This allows the user to register additional stats lines that will\n            be added to the graph. The stats for these will be gotten from the\n            viewer (viewer->getViewerStats()). The stats can be displayed in\n            either or all of the following ways:\n\n            - A numeric time beside the stat name\n              Requires that an elapsed time be recorded in the viewers stats\n              for the timeTakenName.\n            - A bar in the top bar graph\n              Requires that two times (relative to the viewers start tick) be\n              recorded in the viewers stats for the beginTimeName and\n              endTimeName.\n            - A line in the bottom graph\n              Requires that an elapsed time be recorded in the viewers stats\n              for the timeTakenName and that the value be used as an average.\n\n            If you dont want a numeric value and a line in the bottom line\n            graph for your value, pass the empty string for timeTakenName. If\n            you dont want a bar in the graph, pass the empty string for\n            beginTimeName and endTimeName.\n\n            @param label:                 The label to be displayed to identify the line in the stats.\n            @param textColor:             Will be used for the text label, the numeric time and the bottom line graph.\n            @param barColor:              Will be used for the bar in the top bar graph.\n            @param timeTakenName:         The name to be queried in the viewer stats for the numeric value (also used for the bottom line graph).\n            @param multiplier:            The multiplier to apply to the numeric value before displaying it in the stats.\n            @param average:               Whether to use the average value of the numeric value.\n            @param averageInInverseSpace: Whether to average in inverse space (used for frame rate).\n            @param beginTimeName:         The name to be queried in the viewer stats for the begin time for the top bar graph.\n            @param endTimeName:           The name to be queried in the viewer stats for the end time for the top bar graph.\n            @param maxValue:              The value to use as maximum in the bottom line graph. Stats will be clamped between 0 and that value, and it will be the highest visible value in the graph." );
        
        }
        { //::osgViewer::StatsHandler::getBlockMultiplier
        
            typedef double ( ::osgViewer::StatsHandler::*getBlockMultiplier_function_type )(  ) const;
            
            StatsHandler_exposer.def( 
                "getBlockMultiplier"
                , getBlockMultiplier_function_type( &::osgViewer::StatsHandler::getBlockMultiplier ) );
        
        }
        { //::osgViewer::StatsHandler::getCamera
        
            typedef ::osg::Camera * ( ::osgViewer::StatsHandler::*getCamera_function_type )(  ) ;
            
            StatsHandler_exposer.def( 
                "getCamera"
                , getCamera_function_type( &::osgViewer::StatsHandler::getCamera )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgViewer::StatsHandler::getCamera
        
            typedef ::osg::Camera const * ( ::osgViewer::StatsHandler::*getCamera_function_type )(  ) const;
            
            StatsHandler_exposer.def( 
                "getCamera"
                , getCamera_function_type( &::osgViewer::StatsHandler::getCamera )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgViewer::StatsHandler::getKeyEventPrintsOutStats
        
            typedef int ( ::osgViewer::StatsHandler::*getKeyEventPrintsOutStats_function_type )(  ) const;
            
            StatsHandler_exposer.def( 
                "getKeyEventPrintsOutStats"
                , getKeyEventPrintsOutStats_function_type( &::osgViewer::StatsHandler::getKeyEventPrintsOutStats ) );
        
        }
        { //::osgViewer::StatsHandler::getKeyEventToggleVSync
        
            typedef int ( ::osgViewer::StatsHandler::*getKeyEventToggleVSync_function_type )(  ) const;
            
            StatsHandler_exposer.def( 
                "getKeyEventToggleVSync"
                , getKeyEventToggleVSync_function_type( &::osgViewer::StatsHandler::getKeyEventToggleVSync ) );
        
        }
        { //::osgViewer::StatsHandler::getKeyEventTogglesOnScreenStats
        
            typedef int ( ::osgViewer::StatsHandler::*getKeyEventTogglesOnScreenStats_function_type )(  ) const;
            
            StatsHandler_exposer.def( 
                "getKeyEventTogglesOnScreenStats"
                , getKeyEventTogglesOnScreenStats_function_type( &::osgViewer::StatsHandler::getKeyEventTogglesOnScreenStats ) );
        
        }
        { //::osgViewer::StatsHandler::getUsage
        
            typedef void ( ::osgViewer::StatsHandler::*getUsage_function_type )( ::osg::ApplicationUsage & ) const;
            typedef void ( StatsHandler_wrapper::*default_getUsage_function_type )( ::osg::ApplicationUsage & ) const;
            
            StatsHandler_exposer.def( 
                "getUsage"
                , getUsage_function_type(&::osgViewer::StatsHandler::getUsage)
                , default_getUsage_function_type(&StatsHandler_wrapper::default_getUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osgViewer::StatsHandler::removeUserStatsLine
        
            typedef void ( ::osgViewer::StatsHandler::*removeUserStatsLine_function_type )( ::std::string const & ) ;
            
            StatsHandler_exposer.def( 
                "removeUserStatsLine"
                , removeUserStatsLine_function_type( &::osgViewer::StatsHandler::removeUserStatsLine )
                , ( bp::arg("label") ) );
        
        }
        { //::osgViewer::StatsHandler::reset
        
            typedef void ( ::osgViewer::StatsHandler::*reset_function_type )(  ) ;
            
            StatsHandler_exposer.def( 
                "reset"
                , reset_function_type( &::osgViewer::StatsHandler::reset ) );
        
        }
        { //::osgViewer::StatsHandler::setKeyEventPrintsOutStats
        
            typedef void ( ::osgViewer::StatsHandler::*setKeyEventPrintsOutStats_function_type )( int ) ;
            
            StatsHandler_exposer.def( 
                "setKeyEventPrintsOutStats"
                , setKeyEventPrintsOutStats_function_type( &::osgViewer::StatsHandler::setKeyEventPrintsOutStats )
                , ( bp::arg("key") ) );
        
        }
        { //::osgViewer::StatsHandler::setKeyEventToggleVSync
        
            typedef void ( ::osgViewer::StatsHandler::*setKeyEventToggleVSync_function_type )( int ) ;
            
            StatsHandler_exposer.def( 
                "setKeyEventToggleVSync"
                , setKeyEventToggleVSync_function_type( &::osgViewer::StatsHandler::setKeyEventToggleVSync )
                , ( bp::arg("key") ) );
        
        }
        { //::osgViewer::StatsHandler::setKeyEventTogglesOnScreenStats
        
            typedef void ( ::osgViewer::StatsHandler::*setKeyEventTogglesOnScreenStats_function_type )( int ) ;
            
            StatsHandler_exposer.def( 
                "setKeyEventTogglesOnScreenStats"
                , setKeyEventTogglesOnScreenStats_function_type( &::osgViewer::StatsHandler::setKeyEventTogglesOnScreenStats )
                , ( bp::arg("key") ) );
        
        }
    }

}
