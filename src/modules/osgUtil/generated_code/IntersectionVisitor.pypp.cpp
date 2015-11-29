// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgUtil.h"
#include "wrap_referenced.h"
#include "IntersectionVisitor.pypp.hpp"

namespace bp = boost::python;

struct IntersectionVisitor_wrapper : osgUtil::IntersectionVisitor, bp::wrapper< osgUtil::IntersectionVisitor > {

    struct ReadCallback_wrapper : osgUtil::IntersectionVisitor::ReadCallback, bp::wrapper< osgUtil::IntersectionVisitor::ReadCallback > {
    
        ReadCallback_wrapper()
        : osgUtil::IntersectionVisitor::ReadCallback()
          , bp::wrapper< osgUtil::IntersectionVisitor::ReadCallback >(){
            // null constructor
            
        }
    
        virtual ::osg::Node * readNodeFile( ::std::string const & filename ){
            bp::override func_readNodeFile = this->get_override( "readNodeFile" );
            return func_readNodeFile( filename );
        }
    
    };

    IntersectionVisitor_wrapper(::osgUtil::Intersector * intersector=0, ::osgUtil::IntersectionVisitor::ReadCallback * readCallback=0 )
    : osgUtil::IntersectionVisitor( boost::python::ptr(intersector), boost::python::ptr(readCallback) )
      , bp::wrapper< osgUtil::IntersectionVisitor >(){
        // constructor
    
    }

    virtual void apply( ::osg::Node & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::IntersectionVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Node & node ) {
        osgUtil::IntersectionVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Geode & geode ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(geode) );
        else{
            this->osgUtil::IntersectionVisitor::apply( boost::ref(geode) );
        }
    }
    
    void default_apply( ::osg::Geode & geode ) {
        osgUtil::IntersectionVisitor::apply( boost::ref(geode) );
    }

    virtual void apply( ::osg::Billboard & geode ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(geode) );
        else{
            this->osgUtil::IntersectionVisitor::apply( boost::ref(geode) );
        }
    }
    
    void default_apply( ::osg::Billboard & geode ) {
        osgUtil::IntersectionVisitor::apply( boost::ref(geode) );
    }

    virtual void apply( ::osg::Group & group ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(group) );
        else{
            this->osgUtil::IntersectionVisitor::apply( boost::ref(group) );
        }
    }
    
    void default_apply( ::osg::Group & group ) {
        osgUtil::IntersectionVisitor::apply( boost::ref(group) );
    }

    virtual void apply( ::osg::LOD & lod ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(lod) );
        else{
            this->osgUtil::IntersectionVisitor::apply( boost::ref(lod) );
        }
    }
    
    void default_apply( ::osg::LOD & lod ) {
        osgUtil::IntersectionVisitor::apply( boost::ref(lod) );
    }

    virtual void apply( ::osg::PagedLOD & lod ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(lod) );
        else{
            this->osgUtil::IntersectionVisitor::apply( boost::ref(lod) );
        }
    }
    
    void default_apply( ::osg::PagedLOD & lod ) {
        osgUtil::IntersectionVisitor::apply( boost::ref(lod) );
    }

    virtual void apply( ::osg::Transform & transform ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(transform) );
        else{
            this->osgUtil::IntersectionVisitor::apply( boost::ref(transform) );
        }
    }
    
    void default_apply( ::osg::Transform & transform ) {
        osgUtil::IntersectionVisitor::apply( boost::ref(transform) );
    }

    virtual void apply( ::osg::Projection & projection ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(projection) );
        else{
            this->osgUtil::IntersectionVisitor::apply( boost::ref(projection) );
        }
    }
    
    void default_apply( ::osg::Projection & projection ) {
        osgUtil::IntersectionVisitor::apply( boost::ref(projection) );
    }

    virtual void apply( ::osg::Camera & camera ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(camera) );
        else{
            this->osgUtil::IntersectionVisitor::apply( boost::ref(camera) );
        }
    }
    
    void default_apply( ::osg::Camera & camera ) {
        osgUtil::IntersectionVisitor::apply( boost::ref(camera) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgUtil::IntersectionVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgUtil::IntersectionVisitor::className( );
    }

    virtual float getDistanceToEyePoint( ::osg::Vec3 const & pos, bool withLODScale ) const  {
        if( bp::override func_getDistanceToEyePoint = this->get_override( "getDistanceToEyePoint" ) )
            return func_getDistanceToEyePoint( boost::ref(pos), withLODScale );
        else{
            return this->osgUtil::IntersectionVisitor::getDistanceToEyePoint( boost::ref(pos), withLODScale );
        }
    }
    
    float default_getDistanceToEyePoint( ::osg::Vec3 const & pos, bool withLODScale ) const  {
        return osgUtil::IntersectionVisitor::getDistanceToEyePoint( boost::ref(pos), withLODScale );
    }

    virtual ::osg::Vec3 getEyePoint(  ) const  {
        if( bp::override func_getEyePoint = this->get_override( "getEyePoint" ) )
            return func_getEyePoint(  );
        else{
            return this->osgUtil::IntersectionVisitor::getEyePoint(  );
        }
    }
    
    ::osg::Vec3 default_getEyePoint(  ) const  {
        return osgUtil::IntersectionVisitor::getEyePoint( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgUtil::IntersectionVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgUtil::IntersectionVisitor::libraryName( );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osgUtil::IntersectionVisitor::reset(  );
        }
    }
    
    void default_reset(  ) {
        osgUtil::IntersectionVisitor::reset( );
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

    virtual void apply( ::osg::Switch & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Switch & node ) {
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

void register_IntersectionVisitor_class(){

    { //::osgUtil::IntersectionVisitor
        typedef bp::class_< IntersectionVisitor_wrapper, bp::bases< ::osg::NodeVisitor >, osg::ref_ptr< IntersectionVisitor_wrapper >, boost::noncopyable > IntersectionVisitor_exposer_t;
        IntersectionVisitor_exposer_t IntersectionVisitor_exposer = IntersectionVisitor_exposer_t( "IntersectionVisitor", bp::init< bp::optional< osgUtil::Intersector *, osgUtil::IntersectionVisitor::ReadCallback * > >(( bp::arg("intersector")=bp::object(), bp::arg("readCallback")=bp::object() )) );
        bp::scope IntersectionVisitor_scope( IntersectionVisitor_exposer );
        bp::enum_< osgUtil::IntersectionVisitor::LODSelectionMode>("LODSelectionMode")
            .value("USE_HIGHEST_LEVEL_OF_DETAIL", osgUtil::IntersectionVisitor::USE_HIGHEST_LEVEL_OF_DETAIL)
            .value("USE_EYE_POINT_FOR_LOD_LEVEL_SELECTION", osgUtil::IntersectionVisitor::USE_EYE_POINT_FOR_LOD_LEVEL_SELECTION)
            .export_values()
            ;
        bp::class_< IntersectionVisitor_wrapper::ReadCallback_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< IntersectionVisitor_wrapper::ReadCallback_wrapper >, boost::noncopyable >( "ReadCallback", bp::no_init )    
            .def( 
                "readNodeFile"
                , bp::pure_virtual( (::osg::Node * ( ::osgUtil::IntersectionVisitor::ReadCallback::* )( ::std::string const & ) )(&::osgUtil::IntersectionVisitor::ReadCallback::readNodeFile) )
                , ( bp::arg("filename") )
                , bp::return_internal_reference< >() );
        bp::implicitly_convertible< osgUtil::Intersector *, osgUtil::IntersectionVisitor >();
        { //::osgUtil::IntersectionVisitor::apply
        
            typedef void ( ::osgUtil::IntersectionVisitor::*apply_function_type )( ::osg::Node & ) ;
            typedef void ( IntersectionVisitor_wrapper::*default_apply_function_type )( ::osg::Node & ) ;
            
            IntersectionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectionVisitor::apply)
                , default_apply_function_type(&IntersectionVisitor_wrapper::default_apply)
                , ( bp::arg("node") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::apply
        
            typedef void ( ::osgUtil::IntersectionVisitor::*apply_function_type )( ::osg::Geode & ) ;
            typedef void ( IntersectionVisitor_wrapper::*default_apply_function_type )( ::osg::Geode & ) ;
            
            IntersectionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectionVisitor::apply)
                , default_apply_function_type(&IntersectionVisitor_wrapper::default_apply)
                , ( bp::arg("geode") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::apply
        
            typedef void ( ::osgUtil::IntersectionVisitor::*apply_function_type )( ::osg::Billboard & ) ;
            typedef void ( IntersectionVisitor_wrapper::*default_apply_function_type )( ::osg::Billboard & ) ;
            
            IntersectionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectionVisitor::apply)
                , default_apply_function_type(&IntersectionVisitor_wrapper::default_apply)
                , ( bp::arg("geode") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::apply
        
            typedef void ( ::osgUtil::IntersectionVisitor::*apply_function_type )( ::osg::Group & ) ;
            typedef void ( IntersectionVisitor_wrapper::*default_apply_function_type )( ::osg::Group & ) ;
            
            IntersectionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectionVisitor::apply)
                , default_apply_function_type(&IntersectionVisitor_wrapper::default_apply)
                , ( bp::arg("group") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::apply
        
            typedef void ( ::osgUtil::IntersectionVisitor::*apply_function_type )( ::osg::LOD & ) ;
            typedef void ( IntersectionVisitor_wrapper::*default_apply_function_type )( ::osg::LOD & ) ;
            
            IntersectionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectionVisitor::apply)
                , default_apply_function_type(&IntersectionVisitor_wrapper::default_apply)
                , ( bp::arg("lod") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::apply
        
            typedef void ( ::osgUtil::IntersectionVisitor::*apply_function_type )( ::osg::PagedLOD & ) ;
            typedef void ( IntersectionVisitor_wrapper::*default_apply_function_type )( ::osg::PagedLOD & ) ;
            
            IntersectionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectionVisitor::apply)
                , default_apply_function_type(&IntersectionVisitor_wrapper::default_apply)
                , ( bp::arg("lod") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::apply
        
            typedef void ( ::osgUtil::IntersectionVisitor::*apply_function_type )( ::osg::Transform & ) ;
            typedef void ( IntersectionVisitor_wrapper::*default_apply_function_type )( ::osg::Transform & ) ;
            
            IntersectionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectionVisitor::apply)
                , default_apply_function_type(&IntersectionVisitor_wrapper::default_apply)
                , ( bp::arg("transform") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::apply
        
            typedef void ( ::osgUtil::IntersectionVisitor::*apply_function_type )( ::osg::Projection & ) ;
            typedef void ( IntersectionVisitor_wrapper::*default_apply_function_type )( ::osg::Projection & ) ;
            
            IntersectionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectionVisitor::apply)
                , default_apply_function_type(&IntersectionVisitor_wrapper::default_apply)
                , ( bp::arg("projection") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::apply
        
            typedef void ( ::osgUtil::IntersectionVisitor::*apply_function_type )( ::osg::Camera & ) ;
            typedef void ( IntersectionVisitor_wrapper::*default_apply_function_type )( ::osg::Camera & ) ;
            
            IntersectionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::IntersectionVisitor::apply)
                , default_apply_function_type(&IntersectionVisitor_wrapper::default_apply)
                , ( bp::arg("camera") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::className
        
            typedef char const * ( ::osgUtil::IntersectionVisitor::*className_function_type )(  ) const;
            typedef char const * ( IntersectionVisitor_wrapper::*default_className_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "className"
                , className_function_type(&::osgUtil::IntersectionVisitor::className)
                , default_className_function_type(&IntersectionVisitor_wrapper::default_className) );
        
        }
        { //::osgUtil::IntersectionVisitor::getDistanceToEyePoint
        
            typedef float ( ::osgUtil::IntersectionVisitor::*getDistanceToEyePoint_function_type )( ::osg::Vec3 const &,bool ) const;
            typedef float ( IntersectionVisitor_wrapper::*default_getDistanceToEyePoint_function_type )( ::osg::Vec3 const &,bool ) const;
            
            IntersectionVisitor_exposer.def( 
                "getDistanceToEyePoint"
                , getDistanceToEyePoint_function_type(&::osgUtil::IntersectionVisitor::getDistanceToEyePoint)
                , default_getDistanceToEyePoint_function_type(&IntersectionVisitor_wrapper::default_getDistanceToEyePoint)
                , ( bp::arg("pos"), bp::arg("withLODScale") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::getDoDummyTraversal
        
            typedef bool ( ::osgUtil::IntersectionVisitor::*getDoDummyTraversal_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getDoDummyTraversal"
                , getDoDummyTraversal_function_type( &::osgUtil::IntersectionVisitor::getDoDummyTraversal ) );
        
        }
        { //::osgUtil::IntersectionVisitor::getEyePoint
        
            typedef ::osg::Vec3 ( ::osgUtil::IntersectionVisitor::*getEyePoint_function_type )(  ) const;
            typedef ::osg::Vec3 ( IntersectionVisitor_wrapper::*default_getEyePoint_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getEyePoint"
                , getEyePoint_function_type(&::osgUtil::IntersectionVisitor::getEyePoint)
                , default_getEyePoint_function_type(&IntersectionVisitor_wrapper::default_getEyePoint) );
        
        }
        { //::osgUtil::IntersectionVisitor::getIntersector
        
            typedef ::osgUtil::Intersector * ( ::osgUtil::IntersectionVisitor::*getIntersector_function_type )(  ) ;
            
            IntersectionVisitor_exposer.def( 
                "getIntersector"
                , getIntersector_function_type( &::osgUtil::IntersectionVisitor::getIntersector )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getIntersector
        
            typedef ::osgUtil::Intersector const * ( ::osgUtil::IntersectionVisitor::*getIntersector_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getIntersector"
                , getIntersector_function_type( &::osgUtil::IntersectionVisitor::getIntersector )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getLODSelectionMode
        
            typedef ::osgUtil::IntersectionVisitor::LODSelectionMode ( ::osgUtil::IntersectionVisitor::*getLODSelectionMode_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getLODSelectionMode"
                , getLODSelectionMode_function_type( &::osgUtil::IntersectionVisitor::getLODSelectionMode ) );
        
        }
        { //::osgUtil::IntersectionVisitor::getModelMatrix
        
            typedef ::osg::RefMatrix * ( ::osgUtil::IntersectionVisitor::*getModelMatrix_function_type )(  ) ;
            
            IntersectionVisitor_exposer.def( 
                "getModelMatrix"
                , getModelMatrix_function_type( &::osgUtil::IntersectionVisitor::getModelMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getModelMatrix
        
            typedef ::osg::RefMatrix const * ( ::osgUtil::IntersectionVisitor::*getModelMatrix_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getModelMatrix"
                , getModelMatrix_function_type( &::osgUtil::IntersectionVisitor::getModelMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getProjectionMatrix
        
            typedef ::osg::RefMatrix * ( ::osgUtil::IntersectionVisitor::*getProjectionMatrix_function_type )(  ) ;
            
            IntersectionVisitor_exposer.def( 
                "getProjectionMatrix"
                , getProjectionMatrix_function_type( &::osgUtil::IntersectionVisitor::getProjectionMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getProjectionMatrix
        
            typedef ::osg::RefMatrix const * ( ::osgUtil::IntersectionVisitor::*getProjectionMatrix_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getProjectionMatrix"
                , getProjectionMatrix_function_type( &::osgUtil::IntersectionVisitor::getProjectionMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getReadCallback
        
            typedef ::osgUtil::IntersectionVisitor::ReadCallback * ( ::osgUtil::IntersectionVisitor::*getReadCallback_function_type )(  ) ;
            
            IntersectionVisitor_exposer.def( 
                "getReadCallback"
                , getReadCallback_function_type( &::osgUtil::IntersectionVisitor::getReadCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getReadCallback
        
            typedef ::osgUtil::IntersectionVisitor::ReadCallback const * ( ::osgUtil::IntersectionVisitor::*getReadCallback_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getReadCallback"
                , getReadCallback_function_type( &::osgUtil::IntersectionVisitor::getReadCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getReferenceEyePoint
        
            typedef ::osg::Vec3 const & ( ::osgUtil::IntersectionVisitor::*getReferenceEyePoint_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getReferenceEyePoint"
                , getReferenceEyePoint_function_type( &::osgUtil::IntersectionVisitor::getReferenceEyePoint )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getReferenceEyePointCoordinateFrame
        
            typedef ::osgUtil::Intersector::CoordinateFrame ( ::osgUtil::IntersectionVisitor::*getReferenceEyePointCoordinateFrame_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getReferenceEyePointCoordinateFrame"
                , getReferenceEyePointCoordinateFrame_function_type( &::osgUtil::IntersectionVisitor::getReferenceEyePointCoordinateFrame ) );
        
        }
        { //::osgUtil::IntersectionVisitor::getUseKdTreeWhenAvailable
        
            typedef bool ( ::osgUtil::IntersectionVisitor::*getUseKdTreeWhenAvailable_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getUseKdTreeWhenAvailable"
                , getUseKdTreeWhenAvailable_function_type( &::osgUtil::IntersectionVisitor::getUseKdTreeWhenAvailable ) );
        
        }
        { //::osgUtil::IntersectionVisitor::getViewMatrix
        
            typedef ::osg::RefMatrix * ( ::osgUtil::IntersectionVisitor::*getViewMatrix_function_type )(  ) ;
            
            IntersectionVisitor_exposer.def( 
                "getViewMatrix"
                , getViewMatrix_function_type( &::osgUtil::IntersectionVisitor::getViewMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getViewMatrix
        
            typedef ::osg::RefMatrix const * ( ::osgUtil::IntersectionVisitor::*getViewMatrix_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getViewMatrix"
                , getViewMatrix_function_type( &::osgUtil::IntersectionVisitor::getViewMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getWindowMatrix
        
            typedef ::osg::RefMatrix * ( ::osgUtil::IntersectionVisitor::*getWindowMatrix_function_type )(  ) ;
            
            IntersectionVisitor_exposer.def( 
                "getWindowMatrix"
                , getWindowMatrix_function_type( &::osgUtil::IntersectionVisitor::getWindowMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::getWindowMatrix
        
            typedef ::osg::RefMatrix const * ( ::osgUtil::IntersectionVisitor::*getWindowMatrix_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "getWindowMatrix"
                , getWindowMatrix_function_type( &::osgUtil::IntersectionVisitor::getWindowMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::IntersectionVisitor::libraryName
        
            typedef char const * ( ::osgUtil::IntersectionVisitor::*libraryName_function_type )(  ) const;
            typedef char const * ( IntersectionVisitor_wrapper::*default_libraryName_function_type )(  ) const;
            
            IntersectionVisitor_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgUtil::IntersectionVisitor::libraryName)
                , default_libraryName_function_type(&IntersectionVisitor_wrapper::default_libraryName) );
        
        }
        { //::osgUtil::IntersectionVisitor::popModelMatrix
        
            typedef void ( ::osgUtil::IntersectionVisitor::*popModelMatrix_function_type )(  ) ;
            
            IntersectionVisitor_exposer.def( 
                "popModelMatrix"
                , popModelMatrix_function_type( &::osgUtil::IntersectionVisitor::popModelMatrix ) );
        
        }
        { //::osgUtil::IntersectionVisitor::popProjectionMatrix
        
            typedef void ( ::osgUtil::IntersectionVisitor::*popProjectionMatrix_function_type )(  ) ;
            
            IntersectionVisitor_exposer.def( 
                "popProjectionMatrix"
                , popProjectionMatrix_function_type( &::osgUtil::IntersectionVisitor::popProjectionMatrix ) );
        
        }
        { //::osgUtil::IntersectionVisitor::popViewMatrix
        
            typedef void ( ::osgUtil::IntersectionVisitor::*popViewMatrix_function_type )(  ) ;
            
            IntersectionVisitor_exposer.def( 
                "popViewMatrix"
                , popViewMatrix_function_type( &::osgUtil::IntersectionVisitor::popViewMatrix ) );
        
        }
        { //::osgUtil::IntersectionVisitor::popWindowMatrix
        
            typedef void ( ::osgUtil::IntersectionVisitor::*popWindowMatrix_function_type )(  ) ;
            
            IntersectionVisitor_exposer.def( 
                "popWindowMatrix"
                , popWindowMatrix_function_type( &::osgUtil::IntersectionVisitor::popWindowMatrix ) );
        
        }
        { //::osgUtil::IntersectionVisitor::pushModelMatrix
        
            typedef void ( ::osgUtil::IntersectionVisitor::*pushModelMatrix_function_type )( ::osg::RefMatrix * ) ;
            
            IntersectionVisitor_exposer.def( 
                "pushModelMatrix"
                , pushModelMatrix_function_type( &::osgUtil::IntersectionVisitor::pushModelMatrix )
                , ( bp::arg("matrix") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::pushProjectionMatrix
        
            typedef void ( ::osgUtil::IntersectionVisitor::*pushProjectionMatrix_function_type )( ::osg::RefMatrix * ) ;
            
            IntersectionVisitor_exposer.def( 
                "pushProjectionMatrix"
                , pushProjectionMatrix_function_type( &::osgUtil::IntersectionVisitor::pushProjectionMatrix )
                , ( bp::arg("matrix") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::pushViewMatrix
        
            typedef void ( ::osgUtil::IntersectionVisitor::*pushViewMatrix_function_type )( ::osg::RefMatrix * ) ;
            
            IntersectionVisitor_exposer.def( 
                "pushViewMatrix"
                , pushViewMatrix_function_type( &::osgUtil::IntersectionVisitor::pushViewMatrix )
                , ( bp::arg("matrix") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::pushWindowMatrix
        
            typedef void ( ::osgUtil::IntersectionVisitor::*pushWindowMatrix_function_type )( ::osg::RefMatrix * ) ;
            
            IntersectionVisitor_exposer.def( 
                "pushWindowMatrix"
                , pushWindowMatrix_function_type( &::osgUtil::IntersectionVisitor::pushWindowMatrix )
                , ( bp::arg("matrix") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::pushWindowMatrix
        
            typedef void ( ::osgUtil::IntersectionVisitor::*pushWindowMatrix_function_type )( ::osg::Viewport * ) ;
            
            IntersectionVisitor_exposer.def( 
                "pushWindowMatrix"
                , pushWindowMatrix_function_type( &::osgUtil::IntersectionVisitor::pushWindowMatrix )
                , ( bp::arg("viewport") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::reset
        
            typedef void ( ::osgUtil::IntersectionVisitor::*reset_function_type )(  ) ;
            typedef void ( IntersectionVisitor_wrapper::*default_reset_function_type )(  ) ;
            
            IntersectionVisitor_exposer.def( 
                "reset"
                , reset_function_type(&::osgUtil::IntersectionVisitor::reset)
                , default_reset_function_type(&IntersectionVisitor_wrapper::default_reset) );
        
        }
        { //::osgUtil::IntersectionVisitor::setDoDummyTraversal
        
            typedef void ( ::osgUtil::IntersectionVisitor::*setDoDummyTraversal_function_type )( bool ) ;
            
            IntersectionVisitor_exposer.def( 
                "setDoDummyTraversal"
                , setDoDummyTraversal_function_type( &::osgUtil::IntersectionVisitor::setDoDummyTraversal )
                , ( bp::arg("dummy") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::setIntersector
        
            typedef void ( ::osgUtil::IntersectionVisitor::*setIntersector_function_type )( ::osgUtil::Intersector * ) ;
            
            IntersectionVisitor_exposer.def( 
                "setIntersector"
                , setIntersector_function_type( &::osgUtil::IntersectionVisitor::setIntersector )
                , ( bp::arg("intersector") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::setLODSelectionMode
        
            typedef void ( ::osgUtil::IntersectionVisitor::*setLODSelectionMode_function_type )( ::osgUtil::IntersectionVisitor::LODSelectionMode ) ;
            
            IntersectionVisitor_exposer.def( 
                "setLODSelectionMode"
                , setLODSelectionMode_function_type( &::osgUtil::IntersectionVisitor::setLODSelectionMode )
                , ( bp::arg("mode") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::setReadCallback
        
            typedef void ( ::osgUtil::IntersectionVisitor::*setReadCallback_function_type )( ::osgUtil::IntersectionVisitor::ReadCallback * ) ;
            
            IntersectionVisitor_exposer.def( 
                "setReadCallback"
                , setReadCallback_function_type( &::osgUtil::IntersectionVisitor::setReadCallback )
                , ( bp::arg("rc") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::setReferenceEyePoint
        
            typedef void ( ::osgUtil::IntersectionVisitor::*setReferenceEyePoint_function_type )( ::osg::Vec3 const & ) ;
            
            IntersectionVisitor_exposer.def( 
                "setReferenceEyePoint"
                , setReferenceEyePoint_function_type( &::osgUtil::IntersectionVisitor::setReferenceEyePoint )
                , ( bp::arg("ep") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::setReferenceEyePointCoordinateFrame
        
            typedef void ( ::osgUtil::IntersectionVisitor::*setReferenceEyePointCoordinateFrame_function_type )( ::osgUtil::Intersector::CoordinateFrame ) ;
            
            IntersectionVisitor_exposer.def( 
                "setReferenceEyePointCoordinateFrame"
                , setReferenceEyePointCoordinateFrame_function_type( &::osgUtil::IntersectionVisitor::setReferenceEyePointCoordinateFrame )
                , ( bp::arg("cf") ) );
        
        }
        { //::osgUtil::IntersectionVisitor::setUseKdTreeWhenAvailable
        
            typedef void ( ::osgUtil::IntersectionVisitor::*setUseKdTreeWhenAvailable_function_type )( bool ) ;
            
            IntersectionVisitor_exposer.def( 
                "setUseKdTreeWhenAvailable"
                , setUseKdTreeWhenAvailable_function_type( &::osgUtil::IntersectionVisitor::setUseKdTreeWhenAvailable )
                , ( bp::arg("useKdTrees") ) );
        
        }
    }

}
