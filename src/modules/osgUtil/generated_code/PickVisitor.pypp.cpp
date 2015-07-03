// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "pickvisitor.pypp.hpp"

namespace bp = boost::python;

struct PickVisitor_wrapper : osgUtil::PickVisitor, bp::wrapper< osgUtil::PickVisitor > {

    PickVisitor_wrapper(::osg::Viewport const * viewport, ::osg::Matrixd const & proj, ::osg::Matrixd const & view, float mx, float my )
    : osgUtil::PickVisitor( boost::python::ptr(viewport), boost::ref(proj), boost::ref(view), mx, my )
      , bp::wrapper< osgUtil::PickVisitor >(){
        // constructor
    
    }

    virtual void apply( ::osg::Projection & projection ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(projection) );
        else{
            this->osgUtil::PickVisitor::apply( boost::ref(projection) );
        }
    }
    
    void default_apply( ::osg::Projection & projection ) {
        osgUtil::PickVisitor::apply( boost::ref(projection) );
    }

    virtual void apply( ::osg::Camera & camera ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(camera) );
        else{
            this->osgUtil::PickVisitor::apply( boost::ref(camera) );
        }
    }
    
    void default_apply( ::osg::Camera & camera ) {
        osgUtil::PickVisitor::apply( boost::ref(camera) );
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
            return this->osgUtil::IntersectVisitor::getEyePoint(  );
        }
    }
    
    ::osg::Vec3 default_getEyePoint(  ) const  {
        return osgUtil::IntersectVisitor::getEyePoint( );
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

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Referenced::setThreadSafeRefUnref( threadSafe );
    }

};

void register_PickVisitor_class(){

    bp::class_< PickVisitor_wrapper, bp::bases< osgUtil::IntersectVisitor >, osg::ref_ptr< ::osgUtil::PickVisitor >, boost::noncopyable >( "PickVisitor", bp::init< osg::Viewport const *, osg::Matrixd const &, osg::Matrixd const &, float, float >(( bp::arg("viewport"), bp::arg("proj"), bp::arg("view"), bp::arg("mx"), bp::arg("my") )) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::PickVisitor::* )( ::osg::Projection & ) )(&::osgUtil::PickVisitor::apply)
            , (void ( PickVisitor_wrapper::* )( ::osg::Projection & ) )(&PickVisitor_wrapper::default_apply)
            , ( bp::arg("projection") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::PickVisitor::* )( ::osg::Camera & ) )(&::osgUtil::PickVisitor::apply)
            , (void ( PickVisitor_wrapper::* )( ::osg::Camera & ) )(&PickVisitor_wrapper::default_apply)
            , ( bp::arg("camera") ) )    
        .def( 
            "runNestedPickVisitor"
            , (void ( ::osgUtil::PickVisitor::* )( ::osg::Node &,::osg::Viewport const *,::osg::Matrix const &,::osg::Matrix const &,float,float ) )( &::osgUtil::PickVisitor::runNestedPickVisitor )
            , ( bp::arg("node"), bp::arg("viewport"), bp::arg("proj"), bp::arg("view"), bp::arg("mx"), bp::arg("my") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::IntersectVisitor::* )( ::osg::Node & ) )(&::osgUtil::IntersectVisitor::apply)
            , (void ( PickVisitor_wrapper::* )( ::osg::Node & ) )(&PickVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::IntersectVisitor::* )( ::osg::Geode & ) )(&::osgUtil::IntersectVisitor::apply)
            , (void ( PickVisitor_wrapper::* )( ::osg::Geode & ) )(&PickVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::IntersectVisitor::* )( ::osg::Billboard & ) )(&::osgUtil::IntersectVisitor::apply)
            , (void ( PickVisitor_wrapper::* )( ::osg::Billboard & ) )(&PickVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::IntersectVisitor::* )( ::osg::Group & ) )(&::osgUtil::IntersectVisitor::apply)
            , (void ( PickVisitor_wrapper::* )( ::osg::Group & ) )(&PickVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::IntersectVisitor::* )( ::osg::Transform & ) )(&::osgUtil::IntersectVisitor::apply)
            , (void ( PickVisitor_wrapper::* )( ::osg::Transform & ) )(&PickVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::IntersectVisitor::* )( ::osg::Switch & ) )(&::osgUtil::IntersectVisitor::apply)
            , (void ( PickVisitor_wrapper::* )( ::osg::Switch & ) )(&PickVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::IntersectVisitor::* )( ::osg::LOD & ) )(&::osgUtil::IntersectVisitor::apply)
            , (void ( PickVisitor_wrapper::* )( ::osg::LOD & ) )(&PickVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "className"
            , (char const * ( ::osgUtil::IntersectVisitor::* )(  ) const)(&::osgUtil::IntersectVisitor::className)
            , (char const * ( PickVisitor_wrapper::* )(  ) const)(&PickVisitor_wrapper::default_className) )    
        .def( 
            "getDistanceToEyePoint"
            , (float ( ::osgUtil::IntersectVisitor::* )( ::osg::Vec3 const &,bool ) const)(&::osgUtil::IntersectVisitor::getDistanceToEyePoint)
            , (float ( PickVisitor_wrapper::* )( ::osg::Vec3 const &,bool ) const)(&PickVisitor_wrapper::default_getDistanceToEyePoint)
            , ( bp::arg("pos"), bp::arg("withLODScale") ) )    
        .def( 
            "getEyePoint"
            , (::osg::Vec3 ( ::osgUtil::IntersectVisitor::* )(  ) const)(&::osgUtil::IntersectVisitor::getEyePoint)
            , (::osg::Vec3 ( PickVisitor_wrapper::* )(  ) const)(&PickVisitor_wrapper::default_getEyePoint) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgUtil::IntersectVisitor::* )(  ) const)(&::osgUtil::IntersectVisitor::libraryName)
            , (char const * ( PickVisitor_wrapper::* )(  ) const)(&PickVisitor_wrapper::default_libraryName) )    
        .def( 
            "reset"
            , (void ( ::osgUtil::IntersectVisitor::* )(  ) )(&::osgUtil::IntersectVisitor::reset)
            , (void ( PickVisitor_wrapper::* )(  ) )(&PickVisitor_wrapper::default_reset) );

}