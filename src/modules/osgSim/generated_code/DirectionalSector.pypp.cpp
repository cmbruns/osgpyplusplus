// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgSim.h"
#include "wrap_referenced.h"
#include "DirectionalSector.pypp.hpp"

namespace bp = boost::python;

struct DirectionalSector_wrapper : osgSim::DirectionalSector, bp::wrapper< osgSim::DirectionalSector > {

    DirectionalSector_wrapper( )
    : osgSim::DirectionalSector( )
      , bp::wrapper< osgSim::DirectionalSector >(){
        // null constructor
    
    }

    DirectionalSector_wrapper(::osg::Vec3 const & direction, float horizLobeAngle, float vertLobeAngle, float lobeRollAngle, float fadeAngle=0.0f )
    : osgSim::DirectionalSector( boost::ref(direction), horizLobeAngle, vertLobeAngle, lobeRollAngle, fadeAngle )
      , bp::wrapper< osgSim::DirectionalSector >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgSim::DirectionalSector::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgSim::DirectionalSector::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgSim::DirectionalSector::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgSim::DirectionalSector::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgSim::DirectionalSector::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgSim::DirectionalSector::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgSim::DirectionalSector::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgSim::DirectionalSector::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgSim::DirectionalSector::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgSim::DirectionalSector::libraryName( );
    }

    virtual float operator()( ::osg::Vec3 const & eyeLocal ) const  {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            return func___call__( boost::ref(eyeLocal) );
        else{
            return this->osgSim::DirectionalSector::operator()( boost::ref(eyeLocal) );
        }
    }
    
    float default___call__( ::osg::Vec3 const & eyeLocal ) const  {
        return osgSim::DirectionalSector::operator()( boost::ref(eyeLocal) );
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

void register_DirectionalSector_class(){

    bp::class_< DirectionalSector_wrapper, bp::bases< osgSim::Sector >, osg::ref_ptr< DirectionalSector_wrapper >, boost::noncopyable >( "DirectionalSector", bp::no_init )    
        .def( bp::init< >() )    
        .def( bp::init< osg::Vec3 const &, float, float, float, bp::optional< float > >(( bp::arg("direction"), bp::arg("horizLobeAngle"), bp::arg("vertLobeAngle"), bp::arg("lobeRollAngle"), bp::arg("fadeAngle")=0.0f )) )    
        .def( 
            "className"
            , (char const * ( ::osgSim::DirectionalSector::* )(  ) const)(&::osgSim::DirectionalSector::className)
            , (char const * ( DirectionalSector_wrapper::* )(  ) const)(&DirectionalSector_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgSim::DirectionalSector::* )( ::osg::CopyOp const & ) const)(&::osgSim::DirectionalSector::clone)
            , (::osg::Object * ( DirectionalSector_wrapper::* )( ::osg::CopyOp const & ) const)(&DirectionalSector_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgSim::DirectionalSector::* )(  ) const)(&::osgSim::DirectionalSector::cloneType)
            , (::osg::Object * ( DirectionalSector_wrapper::* )(  ) const)(&DirectionalSector_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeMatrix"
            , (void ( ::osgSim::DirectionalSector::* )(  ) )( &::osgSim::DirectionalSector::computeMatrix ) )    
        .def( 
            "getDirection"
            , (::osg::Vec3 const & ( ::osgSim::DirectionalSector::* )(  ) const)( &::osgSim::DirectionalSector::getDirection )
            , bp::return_internal_reference< >() )    
        .def( 
            "getFadeAngle"
            , (float ( ::osgSim::DirectionalSector::* )(  ) const)( &::osgSim::DirectionalSector::getFadeAngle ) )    
        .def( 
            "getHorizLobeAngle"
            , (float ( ::osgSim::DirectionalSector::* )(  ) const)( &::osgSim::DirectionalSector::getHorizLobeAngle ) )    
        .def( 
            "getLobeRollAngle"
            , (float ( ::osgSim::DirectionalSector::* )(  ) const)( &::osgSim::DirectionalSector::getLobeRollAngle ) )    
        .def( 
            "getVertLobeAngle"
            , (float ( ::osgSim::DirectionalSector::* )(  ) const)( &::osgSim::DirectionalSector::getVertLobeAngle ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgSim::DirectionalSector::* )( ::osg::Object const * ) const)(&::osgSim::DirectionalSector::isSameKindAs)
            , (bool ( DirectionalSector_wrapper::* )( ::osg::Object const * ) const)(&DirectionalSector_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgSim::DirectionalSector::* )(  ) const)(&::osgSim::DirectionalSector::libraryName)
            , (char const * ( DirectionalSector_wrapper::* )(  ) const)(&DirectionalSector_wrapper::default_libraryName) )    
        .def( 
            "__call__"
            , (float ( ::osgSim::DirectionalSector::* )( ::osg::Vec3 const & ) const)(&::osgSim::DirectionalSector::operator())
            , (float ( DirectionalSector_wrapper::* )( ::osg::Vec3 const & ) const)(&DirectionalSector_wrapper::default___call__)
            , ( bp::arg("eyeLocal") ) )    
        .def( 
            "setDirection"
            , (void ( ::osgSim::DirectionalSector::* )( ::osg::Vec3 const & ) )( &::osgSim::DirectionalSector::setDirection )
            , ( bp::arg("direction") ) )    
        .def( 
            "setFadeAngle"
            , (void ( ::osgSim::DirectionalSector::* )( float ) )( &::osgSim::DirectionalSector::setFadeAngle )
            , ( bp::arg("angle") ) )    
        .def( 
            "setHorizLobeAngle"
            , (void ( ::osgSim::DirectionalSector::* )( float ) )( &::osgSim::DirectionalSector::setHorizLobeAngle )
            , ( bp::arg("angle") ) )    
        .def( 
            "setLobeRollAngle"
            , (void ( ::osgSim::DirectionalSector::* )( float ) )( &::osgSim::DirectionalSector::setLobeRollAngle )
            , ( bp::arg("angle") ) )    
        .def( 
            "setVertLobeAngle"
            , (void ( ::osgSim::DirectionalSector::* )( float ) )( &::osgSim::DirectionalSector::setVertLobeAngle )
            , ( bp::arg("angle") ) );

}