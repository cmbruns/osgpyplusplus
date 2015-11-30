// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgUtil.h"
#include "wrap_referenced.h"
#include "VertexCacheMissVisitor.pypp.hpp"

namespace bp = boost::python;

struct VertexCacheMissVisitor_wrapper : osgUtil::VertexCacheMissVisitor, bp::wrapper< osgUtil::VertexCacheMissVisitor > {

    VertexCacheMissVisitor_wrapper(unsigned int cacheSize=16 )
    : osgUtil::VertexCacheMissVisitor( cacheSize )
      , bp::wrapper< osgUtil::VertexCacheMissVisitor >(){
        // constructor
    
    }

    virtual void apply( ::osg::Geode & geode ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(geode) );
        else{
            this->osgUtil::VertexCacheMissVisitor::apply( boost::ref(geode) );
        }
    }
    
    void default_apply( ::osg::Geode & geode ) {
        osgUtil::VertexCacheMissVisitor::apply( boost::ref(geode) );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osgUtil::VertexCacheMissVisitor::reset(  );
        }
    }
    
    void default_reset(  ) {
        osgUtil::VertexCacheMissVisitor::reset( );
    }

    virtual void apply( ::osg::Node & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Node & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Billboard & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Billboard & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Group & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Group & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
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

    virtual void apply( ::osg::Transform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Transform & node ) {
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

    virtual void apply( ::osg::LOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LOD & node ) {
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

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::NodeVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::NodeVisitor::className( );
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

    virtual float getDistanceToEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceToEyePoint = this->get_override( "getDistanceToEyePoint" ) )
            return func_getDistanceToEyePoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceToEyePoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceToEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceToEyePoint( boost::ref(arg0), arg1 );
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

    virtual ::osg::Vec3 getEyePoint(  ) const  {
        if( bp::override func_getEyePoint = this->get_override( "getEyePoint" ) )
            return func_getEyePoint(  );
        else{
            return this->osg::NodeVisitor::getEyePoint(  );
        }
    }
    
    ::osg::Vec3 default_getEyePoint(  ) const  {
        return osg::NodeVisitor::getEyePoint( );
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

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::NodeVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::NodeVisitor::libraryName( );
    }

};

void register_VertexCacheMissVisitor_class(){

    { //::osgUtil::VertexCacheMissVisitor
        typedef bp::class_< VertexCacheMissVisitor_wrapper, bp::bases< ::osg::NodeVisitor >, osg::ref_ptr< VertexCacheMissVisitor_wrapper >, boost::noncopyable > VertexCacheMissVisitor_exposer_t;
        VertexCacheMissVisitor_exposer_t VertexCacheMissVisitor_exposer = VertexCacheMissVisitor_exposer_t( "VertexCacheMissVisitor", bp::init< bp::optional< unsigned int > >(( bp::arg("cacheSize")=(unsigned int)(16) )) );
        bp::scope VertexCacheMissVisitor_scope( VertexCacheMissVisitor_exposer );
        bp::implicitly_convertible< unsigned int, osgUtil::VertexCacheMissVisitor >();
        { //::osgUtil::VertexCacheMissVisitor::apply
        
            typedef void ( ::osgUtil::VertexCacheMissVisitor::*apply_function_type )( ::osg::Geode & ) ;
            typedef void ( VertexCacheMissVisitor_wrapper::*default_apply_function_type )( ::osg::Geode & ) ;
            
            VertexCacheMissVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::VertexCacheMissVisitor::apply)
                , default_apply_function_type(&VertexCacheMissVisitor_wrapper::default_apply)
                , ( bp::arg("geode") ) );
        
        }
        { //::osgUtil::VertexCacheMissVisitor::doGeometry
        
            typedef void ( ::osgUtil::VertexCacheMissVisitor::*doGeometry_function_type )( ::osg::Geometry & ) ;
            
            VertexCacheMissVisitor_exposer.def( 
                "doGeometry"
                , doGeometry_function_type( &::osgUtil::VertexCacheMissVisitor::doGeometry )
                , ( bp::arg("geom") ) );
        
        }
        { //::osgUtil::VertexCacheMissVisitor::reset
        
            typedef void ( ::osgUtil::VertexCacheMissVisitor::*reset_function_type )(  ) ;
            typedef void ( VertexCacheMissVisitor_wrapper::*default_reset_function_type )(  ) ;
            
            VertexCacheMissVisitor_exposer.def( 
                "reset"
                , reset_function_type(&::osgUtil::VertexCacheMissVisitor::reset)
                , default_reset_function_type(&VertexCacheMissVisitor_wrapper::default_reset) );
        
        }
        VertexCacheMissVisitor_exposer.def_readwrite( "misses", &osgUtil::VertexCacheMissVisitor::misses );
        VertexCacheMissVisitor_exposer.def_readwrite( "triangles", &osgUtil::VertexCacheMissVisitor::triangles );
    }

}
