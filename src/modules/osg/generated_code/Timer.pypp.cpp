// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "Timer.pypp.hpp"

namespace bp = boost::python;

void register_Timer_class(){

    bp::class_< osg::Timer >( "Timer", "\n Timer class is used for measuring elapsed time or time between two points.\n", bp::init< >("\n Timer class is used for measuring elapsed time or time between two points.\n") )    
        .def( 
            "delta_m"
            , (double ( ::osg::Timer::* )( ::osg::Timer_t,::osg::Timer_t ) const)( &::osg::Timer::delta_m )
            , ( bp::arg("t1"), bp::arg("t2") )
            , "\n Get the time in milliseconds between timer ticks t1 and t2.\n" )    
        .def( 
            "delta_n"
            , (double ( ::osg::Timer::* )( ::osg::Timer_t,::osg::Timer_t ) const)( &::osg::Timer::delta_n )
            , ( bp::arg("t1"), bp::arg("t2") )
            , "\n Get the time in nanoseconds between timer ticks t1 and t2.\n" )    
        .def( 
            "delta_s"
            , (double ( ::osg::Timer::* )( ::osg::Timer_t,::osg::Timer_t ) const)( &::osg::Timer::delta_s )
            , ( bp::arg("t1"), bp::arg("t2") )
            , "\n Get the time in seconds between timer ticks t1 and t2.\n" )    
        .def( 
            "delta_u"
            , (double ( ::osg::Timer::* )( ::osg::Timer_t,::osg::Timer_t ) const)( &::osg::Timer::delta_u )
            , ( bp::arg("t1"), bp::arg("t2") )
            , "\n Get the time in microseconds between timer ticks t1 and t2.\n" )    
        .def( 
            "getSecondsPerTick"
            , (double ( ::osg::Timer::* )(  ) const)( &::osg::Timer::getSecondsPerTick )
            , "\n Get the the number of seconds per tick.\n" )    
        .def( 
            "getStartTick"
            , (::osg::Timer_t ( ::osg::Timer::* )(  ) const)( &::osg::Timer::getStartTick ) )    
        .def( 
            "instance"
            , (::osg::Timer * (*)(  ))( &::osg::Timer::instance )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "setStartTick"
            , (void ( ::osg::Timer::* )(  ) )( &::osg::Timer::setStartTick )
            , "\n Set the start.\n" )    
        .def( 
            "setStartTick"
            , (void ( ::osg::Timer::* )( ::osg::Timer_t ) )( &::osg::Timer::setStartTick )
            , ( bp::arg("t") ) )    
        .def( 
            "tick"
            , (::osg::Timer_t ( ::osg::Timer::* )(  ) const)( &::osg::Timer::tick )
            , "\n Get the timers tick value.\n" )    
        .def( 
            "time_m"
            , (double ( ::osg::Timer::* )(  ) const)( &::osg::Timer::time_m )
            , "\n Get elapsed time in milliseconds.\n" )    
        .def( 
            "time_n"
            , (double ( ::osg::Timer::* )(  ) const)( &::osg::Timer::time_n )
            , "\n Get elapsed time in nanoseconds.\n" )    
        .def( 
            "time_s"
            , (double ( ::osg::Timer::* )(  ) const)( &::osg::Timer::time_s )
            , "\n Get elapsed time in seconds.\n" )    
        .def( 
            "time_u"
            , (double ( ::osg::Timer::* )(  ) const)( &::osg::Timer::time_u )
            , "\n Get elapsed time in microseconds.\n" )    
        .staticmethod( "instance" );

}
