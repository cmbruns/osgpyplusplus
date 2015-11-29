// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "wrap_referenced.h"
#include "Channel.pypp.hpp"

namespace bp = boost::python;

struct Channel_wrapper : osgAnimation::Channel, bp::wrapper< osgAnimation::Channel > {

    virtual ::osgAnimation::Channel * clone(  ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone(  );
    }

    virtual bool createKeyframeContainerFromTargetValue(  ){
        bp::override func_createKeyframeContainerFromTargetValue = this->get_override( "createKeyframeContainerFromTargetValue" );
        return func_createKeyframeContainerFromTargetValue(  );
    }

    virtual double getEndTime(  ) const {
        bp::override func_getEndTime = this->get_override( "getEndTime" );
        return func_getEndTime(  );
    }

    virtual ::osgAnimation::Sampler * getSampler(  ){
        bp::override func_getSampler = this->get_override( "getSampler" );
        return func_getSampler(  );
    }

    virtual ::osgAnimation::Sampler const * getSampler(  ) const {
        bp::override func_getSampler = this->get_override( "getSampler" );
        return func_getSampler(  );
    }

    virtual double getStartTime(  ) const {
        bp::override func_getStartTime = this->get_override( "getStartTime" );
        return func_getStartTime(  );
    }

    virtual ::osgAnimation::Target * getTarget(  ){
        bp::override func_getTarget = this->get_override( "getTarget" );
        return func_getTarget(  );
    }

    virtual void reset(  ){
        bp::override func_reset = this->get_override( "reset" );
        func_reset(  );
    }

    virtual bool setTarget( ::osgAnimation::Target * arg0 ){
        bp::override func_setTarget = this->get_override( "setTarget" );
        return func_setTarget( boost::python::ptr(arg0) );
    }

    virtual void update( double time, float weight, int priority ){
        bp::override func_update = this->get_override( "update" );
        func_update( time, weight, priority );
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

void register_Channel_class(){

    bp::class_< Channel_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< Channel_wrapper >, boost::noncopyable >( "Channel", bp::no_init )    
        .def( 
            "clone"
            , bp::pure_virtual( (::osgAnimation::Channel * ( ::osgAnimation::Channel::* )(  ) const)(&::osgAnimation::Channel::clone) )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "createKeyframeContainerFromTargetValue"
            , bp::pure_virtual( (bool ( ::osgAnimation::Channel::* )(  ) )(&::osgAnimation::Channel::createKeyframeContainerFromTargetValue) ) )    
        .def( 
            "getEndTime"
            , bp::pure_virtual( (double ( ::osgAnimation::Channel::* )(  ) const)(&::osgAnimation::Channel::getEndTime) ) )    
        .def( 
            "getName"
            , (::std::string const & ( ::osgAnimation::Channel::* )(  ) const)( &::osgAnimation::Channel::getName )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "getSampler"
            , bp::pure_virtual( (::osgAnimation::Sampler * ( ::osgAnimation::Channel::* )(  ) )(&::osgAnimation::Channel::getSampler) )
            , bp::return_internal_reference< >() )    
        .def( 
            "getSampler"
            , bp::pure_virtual( (::osgAnimation::Sampler const * ( ::osgAnimation::Channel::* )(  ) const)(&::osgAnimation::Channel::getSampler) )
            , bp::return_internal_reference< >() )    
        .def( 
            "getStartTime"
            , bp::pure_virtual( (double ( ::osgAnimation::Channel::* )(  ) const)(&::osgAnimation::Channel::getStartTime) ) )    
        .def( 
            "getTarget"
            , bp::pure_virtual( (::osgAnimation::Target * ( ::osgAnimation::Channel::* )(  ) )(&::osgAnimation::Channel::getTarget) )
            , bp::return_internal_reference< >() )    
        .def( 
            "getTargetName"
            , (::std::string const & ( ::osgAnimation::Channel::* )(  ) const)( &::osgAnimation::Channel::getTargetName )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "reset"
            , bp::pure_virtual( (void ( ::osgAnimation::Channel::* )(  ) )(&::osgAnimation::Channel::reset) ) )    
        .def( 
            "setName"
            , (void ( ::osgAnimation::Channel::* )( ::std::string const & ) )( &::osgAnimation::Channel::setName )
            , ( bp::arg("name") ) )    
        .def( 
            "setTarget"
            , bp::pure_virtual( (bool ( ::osgAnimation::Channel::* )( ::osgAnimation::Target * ) )(&::osgAnimation::Channel::setTarget) )
            , ( bp::arg("arg0") ) )    
        .def( 
            "setTargetName"
            , (void ( ::osgAnimation::Channel::* )( ::std::string const & ) )( &::osgAnimation::Channel::setTargetName )
            , ( bp::arg("name") ) )    
        .def( 
            "update"
            , bp::pure_virtual( (void ( ::osgAnimation::Channel::* )( double,float,int ) )(&::osgAnimation::Channel::update) )
            , ( bp::arg("time"), bp::arg("weight"), bp::arg("priority") ) );

}
