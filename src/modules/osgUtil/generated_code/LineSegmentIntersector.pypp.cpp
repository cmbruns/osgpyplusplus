// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgUtil.h"
#include "wrap_referenced.h"
#include "LineSegmentIntersector.pypp.hpp"

namespace bp = boost::python;

struct LineSegmentIntersector_wrapper : osgUtil::LineSegmentIntersector, bp::wrapper< osgUtil::LineSegmentIntersector > {

    LineSegmentIntersector_wrapper(::osg::Vec3d const & start, ::osg::Vec3d const & end )
    : osgUtil::LineSegmentIntersector( boost::ref(start), boost::ref(end) )
      , bp::wrapper< osgUtil::LineSegmentIntersector >(){
        // constructor
    
    }

    LineSegmentIntersector_wrapper(::osgUtil::Intersector::CoordinateFrame cf, ::osg::Vec3d const & start, ::osg::Vec3d const & end )
    : osgUtil::LineSegmentIntersector( cf, boost::ref(start), boost::ref(end) )
      , bp::wrapper< osgUtil::LineSegmentIntersector >(){
        // constructor
    
    }

    LineSegmentIntersector_wrapper(::osgUtil::Intersector::CoordinateFrame cf, double x, double y )
    : osgUtil::LineSegmentIntersector( cf, x, y )
      , bp::wrapper< osgUtil::LineSegmentIntersector >(){
        // constructor
    
    }

    virtual ::osgUtil::Intersector * clone( ::osgUtil::IntersectionVisitor & iv ) {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(iv) );
        else{
            return this->osgUtil::LineSegmentIntersector::clone( boost::ref(iv) );
        }
    }
    
    ::osgUtil::Intersector * default_clone( ::osgUtil::IntersectionVisitor & iv ) {
        return osgUtil::LineSegmentIntersector::clone( boost::ref(iv) );
    }

    virtual bool containsIntersections(  ) {
        if( bp::override func_containsIntersections = this->get_override( "containsIntersections" ) )
            return func_containsIntersections(  );
        else{
            return this->osgUtil::LineSegmentIntersector::containsIntersections(  );
        }
    }
    
    bool default_containsIntersections(  ) {
        return osgUtil::LineSegmentIntersector::containsIntersections( );
    }

    virtual bool enter( ::osg::Node const & node ) {
        namespace bpl = boost::python;
        if( bpl::override func_enter = this->get_override( "enter" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_enter.ptr(), node );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgUtil::LineSegmentIntersector::enter( boost::ref(node) );
        }
    }
    
    static boost::python::object default_enter( ::osgUtil::LineSegmentIntersector & inst, ::osg::Node & node ){
        bool result;
        if( dynamic_cast< LineSegmentIntersector_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgUtil::LineSegmentIntersector::enter(node);
        }
        else{
            result = inst.enter(node);
        }
        return bp::object( result );
    }

    virtual void intersect( ::osgUtil::IntersectionVisitor & iv, ::osg::Drawable * drawable ) {
        if( bp::override func_intersect = this->get_override( "intersect" ) )
            func_intersect( boost::ref(iv), boost::python::ptr(drawable) );
        else{
            this->osgUtil::LineSegmentIntersector::intersect( boost::ref(iv), boost::python::ptr(drawable) );
        }
    }
    
    void default_intersect( ::osgUtil::IntersectionVisitor & iv, ::osg::Drawable * drawable ) {
        osgUtil::LineSegmentIntersector::intersect( boost::ref(iv), boost::python::ptr(drawable) );
    }

    virtual void leave(  ) {
        if( bp::override func_leave = this->get_override( "leave" ) )
            func_leave(  );
        else{
            this->osgUtil::LineSegmentIntersector::leave(  );
        }
    }
    
    void default_leave(  ) {
        osgUtil::LineSegmentIntersector::leave( );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osgUtil::LineSegmentIntersector::reset(  );
        }
    }
    
    void default_reset(  ) {
        osgUtil::LineSegmentIntersector::reset( );
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

void register_LineSegmentIntersector_class(){

    { //::osgUtil::LineSegmentIntersector
        typedef bp::class_< LineSegmentIntersector_wrapper, bp::bases< osgUtil::Intersector >, osg::ref_ptr< LineSegmentIntersector_wrapper >, boost::noncopyable > LineSegmentIntersector_exposer_t;
        LineSegmentIntersector_exposer_t LineSegmentIntersector_exposer = LineSegmentIntersector_exposer_t( "LineSegmentIntersector", bp::init< osg::Vec3d const &, osg::Vec3d const & >(( bp::arg("start"), bp::arg("end") )) );
        bp::scope LineSegmentIntersector_scope( LineSegmentIntersector_exposer );
        bp::class_< osgUtil::LineSegmentIntersector::Intersection >( "Intersection", bp::init< >() )    
            .def( 
                "getLocalIntersectNormal"
                , (::osg::Vec3 const & ( ::osgUtil::LineSegmentIntersector::Intersection::* )(  ) const)( &::osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectNormal )
                , bp::return_internal_reference< >() )    
            .def( 
                "getLocalIntersectPoint"
                , (::osg::Vec3d const & ( ::osgUtil::LineSegmentIntersector::Intersection::* )(  ) const)( &::osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectPoint )
                , bp::return_internal_reference< >() )    
            .def( 
                "getTextureLookUp"
                , (::osg::Texture * ( ::osgUtil::LineSegmentIntersector::Intersection::* )( ::osg::Vec3 & ) const)( &::osgUtil::LineSegmentIntersector::Intersection::getTextureLookUp )
                , ( bp::arg("tc") )
                , bp::return_internal_reference< >() )    
            .def( 
                "getWorldIntersectNormal"
                , (::osg::Vec3 ( ::osgUtil::LineSegmentIntersector::Intersection::* )(  ) const)( &::osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectNormal ) )    
            .def( 
                "getWorldIntersectPoint"
                , (::osg::Vec3d ( ::osgUtil::LineSegmentIntersector::Intersection::* )(  ) const)( &::osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectPoint ) )    
            .def( bp::self < bp::self )    
            .def_readwrite( "drawable", &osgUtil::LineSegmentIntersector::Intersection::drawable )    
            .def_readwrite( "indexList", &osgUtil::LineSegmentIntersector::Intersection::indexList )    
            .def_readwrite( "localIntersectionNormal", &osgUtil::LineSegmentIntersector::Intersection::localIntersectionNormal )    
            .def_readwrite( "localIntersectionPoint", &osgUtil::LineSegmentIntersector::Intersection::localIntersectionPoint )    
            .def_readwrite( "matrix", &osgUtil::LineSegmentIntersector::Intersection::matrix )    
            .def_readwrite( "nodePath", &osgUtil::LineSegmentIntersector::Intersection::nodePath )    
            .def_readwrite( "primitiveIndex", &osgUtil::LineSegmentIntersector::Intersection::primitiveIndex )    
            .def_readwrite( "ratio", &osgUtil::LineSegmentIntersector::Intersection::ratio )    
            .def_readwrite( "ratioList", &osgUtil::LineSegmentIntersector::Intersection::ratioList );
        LineSegmentIntersector_exposer.def( bp::init< osgUtil::Intersector::CoordinateFrame, osg::Vec3d const &, osg::Vec3d const & >(( bp::arg("cf"), bp::arg("start"), bp::arg("end") )) );
        LineSegmentIntersector_exposer.def( bp::init< osgUtil::Intersector::CoordinateFrame, double, double >(( bp::arg("cf"), bp::arg("x"), bp::arg("y") )) );
        { //::osgUtil::LineSegmentIntersector::clone
        
            typedef ::osgUtil::Intersector * ( ::osgUtil::LineSegmentIntersector::*clone_function_type )( ::osgUtil::IntersectionVisitor & ) ;
            typedef ::osgUtil::Intersector * ( LineSegmentIntersector_wrapper::*default_clone_function_type )( ::osgUtil::IntersectionVisitor & ) ;
            
            LineSegmentIntersector_exposer.def( 
                "clone"
                , clone_function_type(&::osgUtil::LineSegmentIntersector::clone)
                , default_clone_function_type(&LineSegmentIntersector_wrapper::default_clone)
                , ( bp::arg("iv") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgUtil::LineSegmentIntersector::containsIntersections
        
            typedef bool ( ::osgUtil::LineSegmentIntersector::*containsIntersections_function_type )(  ) ;
            typedef bool ( LineSegmentIntersector_wrapper::*default_containsIntersections_function_type )(  ) ;
            
            LineSegmentIntersector_exposer.def( 
                "containsIntersections"
                , containsIntersections_function_type(&::osgUtil::LineSegmentIntersector::containsIntersections)
                , default_containsIntersections_function_type(&LineSegmentIntersector_wrapper::default_containsIntersections) );
        
        }
        { //::osgUtil::LineSegmentIntersector::enter
        
            typedef boost::python::object ( *default_enter_function_type )( ::osgUtil::LineSegmentIntersector &,::osg::Node & );
            
            LineSegmentIntersector_exposer.def( 
                "enter"
                , default_enter_function_type( &LineSegmentIntersector_wrapper::default_enter )
                , ( bp::arg("inst"), bp::arg("node") ) );
        
        }
        { //::osgUtil::LineSegmentIntersector::getEnd
        
            typedef ::osg::Vec3d const & ( ::osgUtil::LineSegmentIntersector::*getEnd_function_type )(  ) const;
            
            LineSegmentIntersector_exposer.def( 
                "getEnd"
                , getEnd_function_type( &::osgUtil::LineSegmentIntersector::getEnd )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::LineSegmentIntersector::getFirstIntersection
        
            typedef ::osgUtil::LineSegmentIntersector::Intersection ( ::osgUtil::LineSegmentIntersector::*getFirstIntersection_function_type )(  ) ;
            
            LineSegmentIntersector_exposer.def( 
                "getFirstIntersection"
                , getFirstIntersection_function_type( &::osgUtil::LineSegmentIntersector::getFirstIntersection ) );
        
        }
        { //::osgUtil::LineSegmentIntersector::getIntersections
        
            typedef ::std::multiset< osgUtil::LineSegmentIntersector::Intersection > & ( ::osgUtil::LineSegmentIntersector::*getIntersections_function_type )(  ) ;
            
            LineSegmentIntersector_exposer.def( 
                "getIntersections"
                , getIntersections_function_type( &::osgUtil::LineSegmentIntersector::getIntersections )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::LineSegmentIntersector::getStart
        
            typedef ::osg::Vec3d const & ( ::osgUtil::LineSegmentIntersector::*getStart_function_type )(  ) const;
            
            LineSegmentIntersector_exposer.def( 
                "getStart"
                , getStart_function_type( &::osgUtil::LineSegmentIntersector::getStart )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::LineSegmentIntersector::insertIntersection
        
            typedef void ( ::osgUtil::LineSegmentIntersector::*insertIntersection_function_type )( ::osgUtil::LineSegmentIntersector::Intersection const & ) ;
            
            LineSegmentIntersector_exposer.def( 
                "insertIntersection"
                , insertIntersection_function_type( &::osgUtil::LineSegmentIntersector::insertIntersection )
                , ( bp::arg("intersection") ) );
        
        }
        { //::osgUtil::LineSegmentIntersector::intersect
        
            typedef void ( ::osgUtil::LineSegmentIntersector::*intersect_function_type )( ::osgUtil::IntersectionVisitor &,::osg::Drawable * ) ;
            typedef void ( LineSegmentIntersector_wrapper::*default_intersect_function_type )( ::osgUtil::IntersectionVisitor &,::osg::Drawable * ) ;
            
            LineSegmentIntersector_exposer.def( 
                "intersect"
                , intersect_function_type(&::osgUtil::LineSegmentIntersector::intersect)
                , default_intersect_function_type(&LineSegmentIntersector_wrapper::default_intersect)
                , ( bp::arg("iv"), bp::arg("drawable") ) );
        
        }
        { //::osgUtil::LineSegmentIntersector::leave
        
            typedef void ( ::osgUtil::LineSegmentIntersector::*leave_function_type )(  ) ;
            typedef void ( LineSegmentIntersector_wrapper::*default_leave_function_type )(  ) ;
            
            LineSegmentIntersector_exposer.def( 
                "leave"
                , leave_function_type(&::osgUtil::LineSegmentIntersector::leave)
                , default_leave_function_type(&LineSegmentIntersector_wrapper::default_leave) );
        
        }
        { //::osgUtil::LineSegmentIntersector::reset
        
            typedef void ( ::osgUtil::LineSegmentIntersector::*reset_function_type )(  ) ;
            typedef void ( LineSegmentIntersector_wrapper::*default_reset_function_type )(  ) ;
            
            LineSegmentIntersector_exposer.def( 
                "reset"
                , reset_function_type(&::osgUtil::LineSegmentIntersector::reset)
                , default_reset_function_type(&LineSegmentIntersector_wrapper::default_reset) );
        
        }
        { //::osgUtil::LineSegmentIntersector::setEnd
        
            typedef void ( ::osgUtil::LineSegmentIntersector::*setEnd_function_type )( ::osg::Vec3d const & ) ;
            
            LineSegmentIntersector_exposer.def( 
                "setEnd"
                , setEnd_function_type( &::osgUtil::LineSegmentIntersector::setEnd )
                , ( bp::arg("end") ) );
        
        }
        { //::osgUtil::LineSegmentIntersector::setStart
        
            typedef void ( ::osgUtil::LineSegmentIntersector::*setStart_function_type )( ::osg::Vec3d const & ) ;
            
            LineSegmentIntersector_exposer.def( 
                "setStart"
                , setStart_function_type( &::osgUtil::LineSegmentIntersector::setStart )
                , ( bp::arg("start") ) );
        
        }
    }

}
