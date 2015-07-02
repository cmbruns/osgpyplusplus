// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "kdtreebuilder.pypp.hpp"

namespace bp = boost::python;

struct KdTreeBuilder_wrapper : osg::KdTreeBuilder, bp::wrapper< osg::KdTreeBuilder > {

    KdTreeBuilder_wrapper( )
    : osg::KdTreeBuilder( )
      , bp::wrapper< osg::KdTreeBuilder >(){
        // null constructor
    
    }

    KdTreeBuilder_wrapper(::osg::KdTreeBuilder const & rhs )
    : osg::KdTreeBuilder( boost::ref(rhs) )
      , bp::wrapper< osg::KdTreeBuilder >(){
        // copy constructor
    
    }

    virtual void apply( ::osg::Geode & geode ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(geode) );
        else{
            this->osg::KdTreeBuilder::apply( boost::ref(geode) );
        }
    }
    
    void default_apply( ::osg::Geode & geode ) {
        osg::KdTreeBuilder::apply( boost::ref(geode) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::KdTreeBuilder::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::KdTreeBuilder::className( );
    }

    virtual ::osg::KdTreeBuilder * clone(  ) {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->osg::KdTreeBuilder::clone(  );
        }
    }
    
    ::osg::KdTreeBuilder * default_clone(  ) {
        return osg::KdTreeBuilder::clone( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::KdTreeBuilder::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::KdTreeBuilder::libraryName( );
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

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osg::NodeVisitor::reset(  );
        }
    }
    
    void default_reset(  ) {
        osg::NodeVisitor::reset( );
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

void register_KdTreeBuilder_class(){

    bp::class_< KdTreeBuilder_wrapper, bp::bases< osg::NodeVisitor >, osg::ref_ptr< ::osg::KdTreeBuilder > >( "KdTreeBuilder", bp::no_init )    
        .def( bp::init< >() )    
        .def( bp::init< osg::KdTreeBuilder const & >(( bp::arg("rhs") )) )    
        .def( 
            "apply"
            , (void ( ::osg::KdTreeBuilder::* )( ::osg::Geode & ))(&::osg::KdTreeBuilder::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::Geode & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("geode") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::KdTreeBuilder::* )(  )const)(&::osg::KdTreeBuilder::className)
            , (char const * ( KdTreeBuilder_wrapper::* )(  )const)(&KdTreeBuilder_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::KdTreeBuilder * ( ::osg::KdTreeBuilder::* )(  ))(&::osg::KdTreeBuilder::clone)
            , (::osg::KdTreeBuilder * ( KdTreeBuilder_wrapper::* )(  ))(&KdTreeBuilder_wrapper::default_clone)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::KdTreeBuilder::* )(  )const)(&::osg::KdTreeBuilder::libraryName)
            , (char const * ( KdTreeBuilder_wrapper::* )(  )const)(&KdTreeBuilder_wrapper::default_libraryName) )    
        .def_readwrite( "_buildOptions", &osg::KdTreeBuilder::_buildOptions )    
        .def_readwrite( "_kdTreePrototype", &osg::KdTreeBuilder::_kdTreePrototype )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Node & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::Node & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Billboard & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::Billboard & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Group & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::Group & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::ProxyNode & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::ProxyNode & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Projection & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::Projection & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::CoordinateSystemNode & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::CoordinateSystemNode & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::ClipNode & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::ClipNode & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::TexGenNode & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::TexGenNode & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::LightSource & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::LightSource & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Transform & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::Transform & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Camera & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::Camera & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::CameraView & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::CameraView & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::MatrixTransform & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::MatrixTransform & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::PositionAttitudeTransform & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::PositionAttitudeTransform & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Switch & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::Switch & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Sequence & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::Sequence & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::LOD & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::LOD & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::PagedLOD & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::PagedLOD & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::ClearNode & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::ClearNode & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::OccluderNode & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::OccluderNode & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::OcclusionQueryNode & ))(&::osg::NodeVisitor::apply)
            , (void ( KdTreeBuilder_wrapper::* )( ::osg::OcclusionQueryNode & ))(&KdTreeBuilder_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "getDistanceFromEyePoint"
            , (float ( ::osg::NodeVisitor::* )( ::osg::Vec3 const &,bool )const)(&::osg::NodeVisitor::getDistanceFromEyePoint)
            , (float ( KdTreeBuilder_wrapper::* )( ::osg::Vec3 const &,bool )const)(&KdTreeBuilder_wrapper::default_getDistanceFromEyePoint)
            , ( bp::arg("arg0"), bp::arg("arg1") ) )    
        .def( 
            "getDistanceToEyePoint"
            , (float ( ::osg::NodeVisitor::* )( ::osg::Vec3 const &,bool )const)(&::osg::NodeVisitor::getDistanceToEyePoint)
            , (float ( KdTreeBuilder_wrapper::* )( ::osg::Vec3 const &,bool )const)(&KdTreeBuilder_wrapper::default_getDistanceToEyePoint)
            , ( bp::arg("arg0"), bp::arg("arg1") ) )    
        .def( 
            "getDistanceToViewPoint"
            , (float ( ::osg::NodeVisitor::* )( ::osg::Vec3 const &,bool )const)(&::osg::NodeVisitor::getDistanceToViewPoint)
            , (float ( KdTreeBuilder_wrapper::* )( ::osg::Vec3 const &,bool )const)(&KdTreeBuilder_wrapper::default_getDistanceToViewPoint)
            , ( bp::arg("arg0"), bp::arg("arg1") ) )    
        .def( 
            "getEyePoint"
            , (::osg::Vec3 ( ::osg::NodeVisitor::* )(  )const)(&::osg::NodeVisitor::getEyePoint)
            , (::osg::Vec3 ( KdTreeBuilder_wrapper::* )(  )const)(&KdTreeBuilder_wrapper::default_getEyePoint) )    
        .def( 
            "getViewPoint"
            , (::osg::Vec3 ( ::osg::NodeVisitor::* )(  )const)(&::osg::NodeVisitor::getViewPoint)
            , (::osg::Vec3 ( KdTreeBuilder_wrapper::* )(  )const)(&KdTreeBuilder_wrapper::default_getViewPoint) )    
        .def( 
            "reset"
            , (void ( ::osg::NodeVisitor::* )(  ))(&::osg::NodeVisitor::reset)
            , (void ( KdTreeBuilder_wrapper::* )(  ))(&KdTreeBuilder_wrapper::default_reset) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( KdTreeBuilder_wrapper::* )( bool ))(&KdTreeBuilder_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}
