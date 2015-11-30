// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "Box.pypp.hpp"

namespace bp = boost::python;

struct Box_wrapper : osg::Box, bp::wrapper< osg::Box > {

    Box_wrapper( )
    : osg::Box( )
      , bp::wrapper< osg::Box >(){
        // null constructor
    
    }

    Box_wrapper(::osg::Vec3 const & center, float width )
    : osg::Box( boost::ref(center), width )
      , bp::wrapper< osg::Box >(){
        // constructor
    
    }

    Box_wrapper(::osg::Vec3 const & center, float lengthX, float lengthY, float lengthZ )
    : osg::Box( boost::ref(center), lengthX, lengthY, lengthZ )
      , bp::wrapper< osg::Box >(){
        // constructor
    
    }

    virtual void accept( ::osg::ShapeVisitor & sv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(sv) );
        else{
            this->osg::Box::accept( boost::ref(sv) );
        }
    }
    
    void default_accept( ::osg::ShapeVisitor & sv ) {
        osg::Box::accept( boost::ref(sv) );
    }

    virtual void accept( ::osg::ConstShapeVisitor & csv ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(csv) );
        else{
            this->osg::Box::accept( boost::ref(csv) );
        }
    }
    
    void default_accept( ::osg::ConstShapeVisitor & csv ) const  {
        osg::Box::accept( boost::ref(csv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Box::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Box::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Box::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Box::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Box::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Box::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Box::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Box::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Box::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Box::libraryName( );
    }

};

void register_Box_class(){

    bp::class_< Box_wrapper, bp::bases< osg::Shape >, osg::ref_ptr< ::osg::Box >, boost::noncopyable >( "Box", bp::no_init )    
        .def( bp::init< >() )    
        .def( bp::init< osg::Vec3 const &, float >(( bp::arg("center"), bp::arg("width") )) )    
        .def( bp::init< osg::Vec3 const &, float, float, float >(( bp::arg("center"), bp::arg("lengthX"), bp::arg("lengthY"), bp::arg("lengthZ") )) )    
        .def( 
            "accept"
            , (void ( ::osg::Box::* )( ::osg::ShapeVisitor & ) )(&::osg::Box::accept)
            , (void ( Box_wrapper::* )( ::osg::ShapeVisitor & ) )(&Box_wrapper::default_accept)
            , ( bp::arg("sv") ) )    
        .def( 
            "accept"
            , (void ( ::osg::Box::* )( ::osg::ConstShapeVisitor & ) const)(&::osg::Box::accept)
            , (void ( Box_wrapper::* )( ::osg::ConstShapeVisitor & ) const)(&Box_wrapper::default_accept)
            , ( bp::arg("csv") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::Box::* )(  ) const)(&::osg::Box::className)
            , (char const * ( Box_wrapper::* )(  ) const)(&Box_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::Box::* )( ::osg::CopyOp const & ) const)(&::osg::Box::clone)
            , (::osg::Object * ( Box_wrapper::* )( ::osg::CopyOp const & ) const)(&Box_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::Box::* )(  ) const)(&::osg::Box::cloneType)
            , (::osg::Object * ( Box_wrapper::* )(  ) const)(&Box_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeRotationMatrix"
            , (::osg::Matrix ( ::osg::Box::* )(  ) const)( &::osg::Box::computeRotationMatrix ) )    
        .def( 
            "getCenter"
            , (::osg::Vec3 const & ( ::osg::Box::* )(  ) const)( &::osg::Box::getCenter )
            , bp::return_internal_reference< >() )    
        .def( 
            "getHalfLengths"
            , (::osg::Vec3 const & ( ::osg::Box::* )(  ) const)( &::osg::Box::getHalfLengths )
            , bp::return_internal_reference< >() )    
        .def( 
            "getRotation"
            , (::osg::Quat const & ( ::osg::Box::* )(  ) const)( &::osg::Box::getRotation )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::Box::* )( ::osg::Object const * ) const)(&::osg::Box::isSameKindAs)
            , (bool ( Box_wrapper::* )( ::osg::Object const * ) const)(&Box_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::Box::* )(  ) const)(&::osg::Box::libraryName)
            , (char const * ( Box_wrapper::* )(  ) const)(&Box_wrapper::default_libraryName) )    
        .def( 
            "set"
            , (void ( ::osg::Box::* )( ::osg::Vec3 const &,::osg::Vec3 const & ) )( &::osg::Box::set )
            , ( bp::arg("center"), bp::arg("halfLengths") ) )    
        .def( 
            "setCenter"
            , (void ( ::osg::Box::* )( ::osg::Vec3 const & ) )( &::osg::Box::setCenter )
            , ( bp::arg("center") ) )    
        .def( 
            "setHalfLengths"
            , (void ( ::osg::Box::* )( ::osg::Vec3 const & ) )( &::osg::Box::setHalfLengths )
            , ( bp::arg("halfLengths") ) )    
        .def( 
            "setRotation"
            , (void ( ::osg::Box::* )( ::osg::Quat const & ) )( &::osg::Box::setRotation )
            , ( bp::arg("quat") ) )    
        .def( 
            "valid"
            , (bool ( ::osg::Box::* )(  ) const)( &::osg::Box::valid ) )    
        .def( 
            "zeroRotation"
            , (bool ( ::osg::Box::* )(  ) const)( &::osg::Box::zeroRotation ) );

}
