// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "Cylinder.pypp.hpp"

namespace bp = boost::python;

struct Cylinder_wrapper : osg::Cylinder, bp::wrapper< osg::Cylinder > {

    Cylinder_wrapper( )
    : osg::Cylinder( )
      , bp::wrapper< osg::Cylinder >(){
        // null constructor
    
    }

    Cylinder_wrapper(::osg::Vec3 const & center, float radius, float height )
    : osg::Cylinder( boost::ref(center), radius, height )
      , bp::wrapper< osg::Cylinder >(){
        // constructor
    
    }

    virtual void accept( ::osg::ShapeVisitor & sv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(sv) );
        else{
            this->osg::Cylinder::accept( boost::ref(sv) );
        }
    }
    
    void default_accept( ::osg::ShapeVisitor & sv ) {
        osg::Cylinder::accept( boost::ref(sv) );
    }

    virtual void accept( ::osg::ConstShapeVisitor & csv ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(csv) );
        else{
            this->osg::Cylinder::accept( boost::ref(csv) );
        }
    }
    
    void default_accept( ::osg::ConstShapeVisitor & csv ) const  {
        osg::Cylinder::accept( boost::ref(csv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Cylinder::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Cylinder::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Cylinder::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Cylinder::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Cylinder::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Cylinder::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Cylinder::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Cylinder::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Cylinder::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Cylinder::libraryName( );
    }

};

void register_Cylinder_class(){

    bp::class_< Cylinder_wrapper, bp::bases< osg::Shape >, osg::ref_ptr< ::osg::Cylinder >, boost::noncopyable >( "Cylinder", bp::no_init )    
        .def( bp::init< >() )    
        .def( bp::init< osg::Vec3 const &, float, float >(( bp::arg("center"), bp::arg("radius"), bp::arg("height") )) )    
        .def( 
            "accept"
            , (void ( ::osg::Cylinder::* )( ::osg::ShapeVisitor & ) )(&::osg::Cylinder::accept)
            , (void ( Cylinder_wrapper::* )( ::osg::ShapeVisitor & ) )(&Cylinder_wrapper::default_accept)
            , ( bp::arg("sv") ) )    
        .def( 
            "accept"
            , (void ( ::osg::Cylinder::* )( ::osg::ConstShapeVisitor & ) const)(&::osg::Cylinder::accept)
            , (void ( Cylinder_wrapper::* )( ::osg::ConstShapeVisitor & ) const)(&Cylinder_wrapper::default_accept)
            , ( bp::arg("csv") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::Cylinder::* )(  ) const)(&::osg::Cylinder::className)
            , (char const * ( Cylinder_wrapper::* )(  ) const)(&Cylinder_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::Cylinder::* )( ::osg::CopyOp const & ) const)(&::osg::Cylinder::clone)
            , (::osg::Object * ( Cylinder_wrapper::* )( ::osg::CopyOp const & ) const)(&Cylinder_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::Cylinder::* )(  ) const)(&::osg::Cylinder::cloneType)
            , (::osg::Object * ( Cylinder_wrapper::* )(  ) const)(&Cylinder_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeRotationMatrix"
            , (::osg::Matrix ( ::osg::Cylinder::* )(  ) const)( &::osg::Cylinder::computeRotationMatrix ) )    
        .def( 
            "getCenter"
            , (::osg::Vec3 const & ( ::osg::Cylinder::* )(  ) const)( &::osg::Cylinder::getCenter )
            , bp::return_internal_reference< >() )    
        .def( 
            "getHeight"
            , (float ( ::osg::Cylinder::* )(  ) const)( &::osg::Cylinder::getHeight ) )    
        .def( 
            "getRadius"
            , (float ( ::osg::Cylinder::* )(  ) const)( &::osg::Cylinder::getRadius ) )    
        .def( 
            "getRotation"
            , (::osg::Quat const & ( ::osg::Cylinder::* )(  ) const)( &::osg::Cylinder::getRotation )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::Cylinder::* )( ::osg::Object const * ) const)(&::osg::Cylinder::isSameKindAs)
            , (bool ( Cylinder_wrapper::* )( ::osg::Object const * ) const)(&Cylinder_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::Cylinder::* )(  ) const)(&::osg::Cylinder::libraryName)
            , (char const * ( Cylinder_wrapper::* )(  ) const)(&Cylinder_wrapper::default_libraryName) )    
        .def( 
            "set"
            , (void ( ::osg::Cylinder::* )( ::osg::Vec3 const &,float,float ) )( &::osg::Cylinder::set )
            , ( bp::arg("center"), bp::arg("radius"), bp::arg("height") ) )    
        .def( 
            "setCenter"
            , (void ( ::osg::Cylinder::* )( ::osg::Vec3 const & ) )( &::osg::Cylinder::setCenter )
            , ( bp::arg("center") ) )    
        .def( 
            "setHeight"
            , (void ( ::osg::Cylinder::* )( float ) )( &::osg::Cylinder::setHeight )
            , ( bp::arg("height") ) )    
        .def( 
            "setRadius"
            , (void ( ::osg::Cylinder::* )( float ) )( &::osg::Cylinder::setRadius )
            , ( bp::arg("radius") ) )    
        .def( 
            "setRotation"
            , (void ( ::osg::Cylinder::* )( ::osg::Quat const & ) )( &::osg::Cylinder::setRotation )
            , ( bp::arg("quat") ) )    
        .def( 
            "valid"
            , (bool ( ::osg::Cylinder::* )(  ) const)( &::osg::Cylinder::valid ) )    
        .def( 
            "zeroRotation"
            , (bool ( ::osg::Cylinder::* )(  ) const)( &::osg::Cylinder::zeroRotation ) );

}
