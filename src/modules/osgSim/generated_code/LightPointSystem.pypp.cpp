// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgSim.h"
#include "wrap_referenced.h"
#include "LightPointSystem.pypp.hpp"

namespace bp = boost::python;

struct LightPointSystem_wrapper : osgSim::LightPointSystem, bp::wrapper< osgSim::LightPointSystem > {

    LightPointSystem_wrapper( )
    : osgSim::LightPointSystem( )
      , bp::wrapper< osgSim::LightPointSystem >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgSim::LightPointSystem::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgSim::LightPointSystem::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgSim::LightPointSystem::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgSim::LightPointSystem::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgSim::LightPointSystem::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgSim::LightPointSystem::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgSim::LightPointSystem::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgSim::LightPointSystem::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgSim::LightPointSystem::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgSim::LightPointSystem::libraryName( );
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

void register_LightPointSystem_class(){

    { //::osgSim::LightPointSystem
        typedef bp::class_< LightPointSystem_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< LightPointSystem_wrapper >, boost::noncopyable > LightPointSystem_exposer_t;
        LightPointSystem_exposer_t LightPointSystem_exposer = LightPointSystem_exposer_t( "LightPointSystem", bp::no_init );
        bp::scope LightPointSystem_scope( LightPointSystem_exposer );
        bp::enum_< osgSim::LightPointSystem::AnimationState>("AnimationState")
            .value("ANIMATION_ON", osgSim::LightPointSystem::ANIMATION_ON)
            .value("ANIMATION_OFF", osgSim::LightPointSystem::ANIMATION_OFF)
            .value("ANIMATION_RANDOM", osgSim::LightPointSystem::ANIMATION_RANDOM)
            .export_values()
            ;
        LightPointSystem_exposer.def( bp::init< >() );
        { //::osgSim::LightPointSystem::className
        
            typedef char const * ( ::osgSim::LightPointSystem::*className_function_type )(  ) const;
            typedef char const * ( LightPointSystem_wrapper::*default_className_function_type )(  ) const;
            
            LightPointSystem_exposer.def( 
                "className"
                , className_function_type(&::osgSim::LightPointSystem::className)
                , default_className_function_type(&LightPointSystem_wrapper::default_className) );
        
        }
        { //::osgSim::LightPointSystem::clone
        
            typedef ::osg::Object * ( ::osgSim::LightPointSystem::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( LightPointSystem_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            LightPointSystem_exposer.def( 
                "clone"
                , clone_function_type(&::osgSim::LightPointSystem::clone)
                , default_clone_function_type(&LightPointSystem_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgSim::LightPointSystem::cloneType
        
            typedef ::osg::Object * ( ::osgSim::LightPointSystem::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( LightPointSystem_wrapper::*default_cloneType_function_type )(  ) const;
            
            LightPointSystem_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osgSim::LightPointSystem::cloneType)
                , default_cloneType_function_type(&LightPointSystem_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgSim::LightPointSystem::getAnimationState
        
            typedef ::osgSim::LightPointSystem::AnimationState ( ::osgSim::LightPointSystem::*getAnimationState_function_type )(  ) const;
            
            LightPointSystem_exposer.def( 
                "getAnimationState"
                , getAnimationState_function_type( &::osgSim::LightPointSystem::getAnimationState ) );
        
        }
        { //::osgSim::LightPointSystem::getIntensity
        
            typedef float ( ::osgSim::LightPointSystem::*getIntensity_function_type )(  ) const;
            
            LightPointSystem_exposer.def( 
                "getIntensity"
                , getIntensity_function_type( &::osgSim::LightPointSystem::getIntensity ) );
        
        }
        { //::osgSim::LightPointSystem::isSameKindAs
        
            typedef bool ( ::osgSim::LightPointSystem::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( LightPointSystem_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            LightPointSystem_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osgSim::LightPointSystem::isSameKindAs)
                , default_isSameKindAs_function_type(&LightPointSystem_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osgSim::LightPointSystem::libraryName
        
            typedef char const * ( ::osgSim::LightPointSystem::*libraryName_function_type )(  ) const;
            typedef char const * ( LightPointSystem_wrapper::*default_libraryName_function_type )(  ) const;
            
            LightPointSystem_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgSim::LightPointSystem::libraryName)
                , default_libraryName_function_type(&LightPointSystem_wrapper::default_libraryName) );
        
        }
        { //::osgSim::LightPointSystem::setAnimationState
        
            typedef void ( ::osgSim::LightPointSystem::*setAnimationState_function_type )( ::osgSim::LightPointSystem::AnimationState ) ;
            
            LightPointSystem_exposer.def( 
                "setAnimationState"
                , setAnimationState_function_type( &::osgSim::LightPointSystem::setAnimationState )
                , ( bp::arg("state") ) );
        
        }
        { //::osgSim::LightPointSystem::setIntensity
        
            typedef void ( ::osgSim::LightPointSystem::*setIntensity_function_type )( float ) ;
            
            LightPointSystem_exposer.def( 
                "setIntensity"
                , setIntensity_function_type( &::osgSim::LightPointSystem::setIntensity )
                , ( bp::arg("intensity") ) );
        
        }
    }

}
