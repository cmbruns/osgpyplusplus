// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgUtil.h"
#include "wrap_referenced.h"
#include "IntersectVisitor.pypp.hpp"

namespace bp = boost::python;

struct IntersectVisitor_wrapper : osgUtil::IntersectVisitor, bp::wrapper< osgUtil::IntersectVisitor > {

    IntersectVisitor_wrapper( )
    : osgUtil::IntersectVisitor( )
      , bp::wrapper< osgUtil::IntersectVisitor >(){
        // null constructor
    
    }

    virtual void apply( ::osg::Node & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osgUtil::IntersectVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::Node & arg0 ) {
        osgUtil::IntersectVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::Geode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::IntersectVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Geode & node ) {
        osgUtil::IntersectVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Billboard & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::IntersectVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Billboard & node ) {
        osgUtil::IntersectVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Group & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::IntersectVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Group & node ) {
        osgUtil::IntersectVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Transform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::IntersectVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Transform & node ) {
        osgUtil::IntersectVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Switch & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::IntersectVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Switch & node ) {
        osgUtil::IntersectVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::LOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::IntersectVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LOD & node ) {
        osgUtil::IntersectVisitor::apply( boost::ref(node) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgUtil::IntersectVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgUtil::IntersectVisitor::className( );
    }

    virtual float getDistanceToEyePoint( ::osg::Vec3 const & pos, bool withLODScale ) const  {
        if( bp::override func_getDistanceToEyePoint = this->get_override( "getDistanceToEyePoint" ) )
            return func_getDistanceToEyePoint( boost::ref(pos), withLODScale );
        else{
            return this->osgUtil::IntersectVisitor::getDistanceToEyePoint( boost::ref(pos), withLODScale );
        }
    }
    
    float default_getDistanceToEyePoint( ::osg::Vec3 const & pos, bool withLODScale ) const  {
        return osgUtil::IntersectVisitor::getDistanceToEyePoint( boost::ref(pos), withLODScale );
    }

    virtual ::osg::Vec3 getEyePoint(  ) const  {
        if( bp::override func_getEyePoint = this->get_override( "getEyePoint" ) )
            return func_getEyePoint(  );
        else{
            return this->osgUtil::IntersectVisitor::getEyePoint(  );
        }
    }
    
    ::osg::Vec3 default_getEyePoint(  ) const  {
        return osgUtil::IntersectVisitor::getEyePoint( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgUtil::IntersectVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgUtil::IntersectVisitor::libraryName( );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osgUtil::IntersectVisitor::reset(  );
        }
    }
    
    void default_reset(  ) {
        osgUtil::IntersectVisitor::reset( );
    }

    virtual void apply( ::osg::ProxyNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ProxyNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Projection & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Projection & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::CoordinateSystemNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::CoordinateSystemNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ClipNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ClipNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::TexGenNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::TexGenNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::LightSource & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LightSource & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Camera & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Camera & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::CameraView & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::CameraView & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::MatrixTransform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::MatrixTransform & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::PositionAttitudeTransform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::PositionAttitudeTransform & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Sequence & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Sequence & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::PagedLOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::PagedLOD & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ClearNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ClearNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::OccluderNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::OccluderNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::OcclusionQueryNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::OcclusionQueryNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual float getDistanceFromEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceFromEyePoint = this->get_override( "getDistanceFromEyePoint" ) )
            return func_getDistanceFromEyePoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceFromEyePoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceFromEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceFromEyePoint( boost::ref(arg0), arg1 );
    }

    virtual float getDistanceToViewPoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceToViewPoint = this->get_override( "getDistanceToViewPoint" ) )
            return func_getDistanceToViewPoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceToViewPoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceToViewPoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceToViewPoint( boost::ref(arg0), arg1 );
    }

    virtual ::osg::Vec3 getViewPoint(  ) const  {
        if( bp::override func_getViewPoint = this->get_override( "getViewPoint" ) )
            return func_getViewPoint(  );
        else{
            return this->osg::NodeVisitor::getViewPoint(  );
        }
    }
    
    ::osg::Vec3 default_getViewPoint(  ) const  {
        return osg::NodeVisitor::getViewPoint( );
    }

};

void register_IntersectVisitor_class(){

    { //::osgUtil::IntersectVisitor
        typedef bp::class_< IntersectVisitor_wrapper, bp::bases< ::osg::NodeVisitor >, osg::ref_ptr< IntersectVisitor_wrapper >, boost::noncopyable > IntersectVisitor_exposer_t;
        IntersectVisitor_exposer_t IntersectVisitor_exposer = IntersectVisitor_exposer_t( "IntersectVisitor", "\n Deprecated - use IntersectionVisitor instead.\n", bp::init< >("\n Deprecated - use IntersectionVisitor instead.\n") );
        bp::scope IntersectVisitor_scope( IntersectVisitor_exposer );
        bp::enum_< osgUtil::IntersectVisitor::LODSelectionMode>("LODSelectionMode")
            .value("USE_HIGHEST_LEVEL_OF_DETAIL", osgUtil::IntersectVisitor::USE_HIGHEST_LEVEL_OF_DETAIL)
            .value("USE_SEGMENT_START_POINT_AS_EYE_POINT_FOR_LOD_LEVEL_SELECTION", osgUtil::IntersectVisitor::USE_SEGMENT_START_POINT_AS_EYE_POINT_FOR_LOD_LEVEL_SELECTION)
            .export_values()
            ;
        { //::osgUtil::IntersectVisitor::addLineSegment
        
            typedef void ( ::osgUtil::IntersectVisitor::*addLineSegment_function_type )( ::osg::LineSegment * ) ;
            
            IntersectVisitor_exposer.def( 
                "addLineSegment"
                , addLineSegment_function_type( &::osgUtil::IntersectVisitor::addLineSegment )
                , ( bp::arg("seg") )
                , " Add a line segment to use for intersection testing during scene traversal.\n Note, a maximum of 32 line segments can be added to a IntersectVistor,\n adding more than this will result in warning being emitted to the console\n and the excess segments being ignored." );
        
        }
        { //::osgUtil::IntersectVisitor::apply
        
            typedef void ( ::osgUtil::IntersectVisitor::*apply_function_type )( ::osg::Node & ) ;
            typedef void ( IntersectVisitor_wrapper::*default_apply_function_type )( ::osg::Node & ) ;
            
            IntersectVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectVisitor::apply)
                , default_apply_function_type(&IntersectVisitor_wrapper::default_apply)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgUtil::IntersectVisitor::apply
        
            typedef void ( ::osgUtil::IntersectVisitor::*apply_function_type )( ::osg::Geode & ) ;
            typedef void ( IntersectVisitor_wrapper::*default_apply_function_type )( ::osg::Geode & ) ;
            
            IntersectVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectVisitor::apply)
                , default_apply_function_type(&IntersectVisitor_wrapper::default_apply)
                , ( bp::arg("node") ) );
        
        }
        { //::osgUtil::IntersectVisitor::apply
        
            typedef void ( ::osgUtil::IntersectVisitor::*apply_function_type )( ::osg::Billboard & ) ;
            typedef void ( IntersectVisitor_wrapper::*default_apply_function_type )( ::osg::Billboard & ) ;
            
            IntersectVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectVisitor::apply)
                , default_apply_function_type(&IntersectVisitor_wrapper::default_apply)
                , ( bp::arg("node") ) );
        
        }
        { //::osgUtil::IntersectVisitor::apply
        
            typedef void ( ::osgUtil::IntersectVisitor::*apply_function_type )( ::osg::Group & ) ;
            typedef void ( IntersectVisitor_wrapper::*default_apply_function_type )( ::osg::Group & ) ;
            
            IntersectVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectVisitor::apply)
                , default_apply_function_type(&IntersectVisitor_wrapper::default_apply)
                , ( bp::arg("node") ) );
        
        }
        { //::osgUtil::IntersectVisitor::apply
        
            typedef void ( ::osgUtil::IntersectVisitor::*apply_function_type )( ::osg::Transform & ) ;
            typedef void ( IntersectVisitor_wrapper::*default_apply_function_type )( ::osg::Transform & ) ;
            
            IntersectVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectVisitor::apply)
                , default_apply_function_type(&IntersectVisitor_wrapper::default_apply)
                , ( bp::arg("node") ) );
        
        }
        { //::osgUtil::IntersectVisitor::apply
        
            typedef void ( ::osgUtil::IntersectVisitor::*apply_function_type )( ::osg::Switch & ) ;
            typedef void ( IntersectVisitor_wrapper::*default_apply_function_type )( ::osg::Switch & ) ;
            
            IntersectVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectVisitor::apply)
                , default_apply_function_type(&IntersectVisitor_wrapper::default_apply)
                , ( bp::arg("node") ) );
        
        }
        { //::osgUtil::IntersectVisitor::apply
        
            typedef void ( ::osgUtil::IntersectVisitor::*apply_function_type )( ::osg::LOD & ) ;
            typedef void ( IntersectVisitor_wrapper::*default_apply_function_type )( ::osg::LOD & ) ;
            
            IntersectVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectVisitor::apply)
                , default_apply_function_type(&IntersectVisitor_wrapper::default_apply)
                , ( bp::arg("node") ) );
        
        }
        { //::osgUtil::IntersectVisitor::className
        
            typedef char const * ( ::osgUtil::IntersectVisitor::*className_function_type )(  ) const;
            typedef char const * ( IntersectVisitor_wrapper::*default_className_function_type )(  ) const;
            
            IntersectVisitor_exposer.def( 
                "className"
                , className_function_type(&::osgUtil::IntersectVisitor::className)
                , default_className_function_type(&IntersectVisitor_wrapper::default_className) );
        
        }
        { //::osgUtil::IntersectVisitor::getDistanceToEyePoint
        
            typedef float ( ::osgUtil::IntersectVisitor::*getDistanceToEyePoint_function_type )( ::osg::Vec3 const &,bool ) const;
            typedef float ( IntersectVisitor_wrapper::*default_getDistanceToEyePoint_function_type )( ::osg::Vec3 const &,bool ) const;
            
            IntersectVisitor_exposer.def( 
                "getDistanceToEyePoint"
                , getDistanceToEyePoint_function_type(&::osgUtil::IntersectVisitor::getDistanceToEyePoint)
                , default_getDistanceToEyePoint_function_type(&IntersectVisitor_wrapper::default_getDistanceToEyePoint)
                , ( bp::arg("pos"), bp::arg("withLODScale") ) );
        
        }
        { //::osgUtil::IntersectVisitor::getEyePoint
        
            typedef ::osg::Vec3 ( ::osgUtil::IntersectVisitor::*getEyePoint_function_type )(  ) const;
            typedef ::osg::Vec3 ( IntersectVisitor_wrapper::*default_getEyePoint_function_type )(  ) const;
            
            IntersectVisitor_exposer.def( 
                "getEyePoint"
                , getEyePoint_function_type(&::osgUtil::IntersectVisitor::getEyePoint)
                , default_getEyePoint_function_type(&IntersectVisitor_wrapper::default_getEyePoint) );
        
        }
        { //::osgUtil::IntersectVisitor::getHitList
        
            typedef ::std::vector< osgUtil::Hit > & ( ::osgUtil::IntersectVisitor::*getHitList_function_type )( ::osg::LineSegment const * ) ;
            
            IntersectVisitor_exposer.def( 
                "getHitList"
                , getHitList_function_type( &::osgUtil::IntersectVisitor::getHitList )
                , ( bp::arg("seg") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectVisitor::getLODSelectionMode
        
            typedef ::osgUtil::IntersectVisitor::LODSelectionMode ( ::osgUtil::IntersectVisitor::*getLODSelectionMode_function_type )(  ) const;
            
            IntersectVisitor_exposer.def( 
                "getLODSelectionMode"
                , getLODSelectionMode_function_type( &::osgUtil::IntersectVisitor::getLODSelectionMode ) );
        
        }
        { //::osgUtil::IntersectVisitor::getNumHits
        
            typedef int ( ::osgUtil::IntersectVisitor::*getNumHits_function_type )( ::osg::LineSegment const * ) ;
            
            IntersectVisitor_exposer.def( 
                "getNumHits"
                , getNumHits_function_type( &::osgUtil::IntersectVisitor::getNumHits )
                , ( bp::arg("seg") ) );
        
        }
        { //::osgUtil::IntersectVisitor::getSegHitList
        
            typedef ::std::map< osg::LineSegment const*, std::vector< osgUtil::Hit > > & ( ::osgUtil::IntersectVisitor::*getSegHitList_function_type )(  ) ;
            
            IntersectVisitor_exposer.def( 
                "getSegHitList"
                , getSegHitList_function_type( &::osgUtil::IntersectVisitor::getSegHitList )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectVisitor::hits
        
            typedef bool ( ::osgUtil::IntersectVisitor::*hits_function_type )(  ) ;
            
            IntersectVisitor_exposer.def( 
                "hits"
                , hits_function_type( &::osgUtil::IntersectVisitor::hits ) );
        
        }
        { //::osgUtil::IntersectVisitor::libraryName
        
            typedef char const * ( ::osgUtil::IntersectVisitor::*libraryName_function_type )(  ) const;
            typedef char const * ( IntersectVisitor_wrapper::*default_libraryName_function_type )(  ) const;
            
            IntersectVisitor_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgUtil::IntersectVisitor::libraryName)
                , default_libraryName_function_type(&IntersectVisitor_wrapper::default_libraryName) );
        
        }
        { //::osgUtil::IntersectVisitor::reset
        
            typedef void ( ::osgUtil::IntersectVisitor::*reset_function_type )(  ) ;
            typedef void ( IntersectVisitor_wrapper::*default_reset_function_type )(  ) ;
            
            IntersectVisitor_exposer.def( 
                "reset"
                , reset_function_type(&::osgUtil::IntersectVisitor::reset)
                , default_reset_function_type(&IntersectVisitor_wrapper::default_reset) );
        
        }
        { //::osgUtil::IntersectVisitor::setEyePoint
        
            typedef void ( ::osgUtil::IntersectVisitor::*setEyePoint_function_type )( ::osg::Vec3 const & ) ;
            
            IntersectVisitor_exposer.def( 
                "setEyePoint"
                , setEyePoint_function_type( &::osgUtil::IntersectVisitor::setEyePoint )
                , ( bp::arg("eye") )
                , " Set the eye point in local coordinates.\n This is a pseudo-EyePoint for billboarding and LOD purposes.\n It is copied from the Start point of the most-recently-added segment\n of the intersection ray set (IntersectState::_segList)." );
        
        }
        { //::osgUtil::IntersectVisitor::setLODSelectionMode
        
            typedef void ( ::osgUtil::IntersectVisitor::*setLODSelectionMode_function_type )( ::osgUtil::IntersectVisitor::LODSelectionMode ) ;
            
            IntersectVisitor_exposer.def( 
                "setLODSelectionMode"
                , setLODSelectionMode_function_type( &::osgUtil::IntersectVisitor::setLODSelectionMode )
                , ( bp::arg("mode") ) );
        
        }
    }

}
