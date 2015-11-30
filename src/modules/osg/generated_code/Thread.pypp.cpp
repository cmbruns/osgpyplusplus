// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "Thread.pypp.hpp"

namespace bp = boost::python;

struct Thread_wrapper : OpenThreads::Thread, bp::wrapper< OpenThreads::Thread > {

    Thread_wrapper( )
    : OpenThreads::Thread( )
      , bp::wrapper< OpenThreads::Thread >(){
        // null constructor
    
    }

    virtual int cancel(  ) {
        if( bp::override func_cancel = this->get_override( "cancel" ) )
            return func_cancel(  );
        else{
            return this->OpenThreads::Thread::cancel(  );
        }
    }
    
    int default_cancel(  ) {
        return OpenThreads::Thread::cancel( );
    }

    virtual void cancelCleanup(  ) {
        if( bp::override func_cancelCleanup = this->get_override( "cancelCleanup" ) )
            func_cancelCleanup(  );
        else{
            this->OpenThreads::Thread::cancelCleanup(  );
        }
    }
    
    void default_cancelCleanup(  ) {
        OpenThreads::Thread::cancelCleanup( );
    }

    virtual void run(  ){
        bp::override func_run = this->get_override( "run" );
        func_run(  );
    }

};

void register_Thread_class(){

    { //::OpenThreads::Thread
        typedef bp::class_< Thread_wrapper, boost::noncopyable > Thread_exposer_t;
        Thread_exposer_t Thread_exposer = Thread_exposer_t( "Thread", "\n  Class: Thread\n   This class provides an object-oriented thread interface.\n", bp::init< >("\n  Constructor\n") );
        bp::scope Thread_scope( Thread_exposer );
        bp::enum_< OpenThreads::Thread::ThreadPolicy>("ThreadPolicy")
            .value("THREAD_SCHEDULE_FIFO", OpenThreads::Thread::THREAD_SCHEDULE_FIFO)
            .value("THREAD_SCHEDULE_ROUND_ROBIN", OpenThreads::Thread::THREAD_SCHEDULE_ROUND_ROBIN)
            .value("THREAD_SCHEDULE_TIME_SHARE", OpenThreads::Thread::THREAD_SCHEDULE_TIME_SHARE)
            .value("THREAD_SCHEDULE_DEFAULT", OpenThreads::Thread::THREAD_SCHEDULE_DEFAULT)
            .export_values()
            ;
        bp::enum_< OpenThreads::Thread::ThreadPriority>("ThreadPriority")
            .value("THREAD_PRIORITY_MAX", OpenThreads::Thread::THREAD_PRIORITY_MAX)
            .value("THREAD_PRIORITY_HIGH", OpenThreads::Thread::THREAD_PRIORITY_HIGH)
            .value("THREAD_PRIORITY_NOMINAL", OpenThreads::Thread::THREAD_PRIORITY_NOMINAL)
            .value("THREAD_PRIORITY_LOW", OpenThreads::Thread::THREAD_PRIORITY_LOW)
            .value("THREAD_PRIORITY_MIN", OpenThreads::Thread::THREAD_PRIORITY_MIN)
            .value("THREAD_PRIORITY_DEFAULT", OpenThreads::Thread::THREAD_PRIORITY_DEFAULT)
            .export_values()
            ;
        { //::OpenThreads::Thread::CurrentThread
        
            typedef ::OpenThreads::Thread * ( *CurrentThread_function_type )(  );
            
            Thread_exposer.def( 
                "CurrentThread"
                , CurrentThread_function_type( &::OpenThreads::Thread::CurrentThread )
                , bp::return_internal_reference< >()
                , "  Return a pointer to the current running thread" );
        
        }
        { //::OpenThreads::Thread::GetConcurrency
        
            typedef int ( *GetConcurrency_function_type )(  );
            
            Thread_exposer.def( 
                "GetConcurrency"
                , GetConcurrency_function_type( &::OpenThreads::Thread::GetConcurrency )
                , "  Get the concurrency level for a running application.  In this\n  case, a return code of 0 means that the application is in default\n  mode.  A return code of -1 means that the application is incapable\n  of setting an arbitrary concurrency, because it is a one-to-one\n  execution model (sprocs, linuxThreads)" );
        
        }
        { //::OpenThreads::Thread::GetMasterPriority
        
            typedef ::OpenThreads::Thread::ThreadPriority ( *GetMasterPriority_function_type )(  );
            
            Thread_exposer.def( 
                "GetMasterPriority"
                , GetMasterPriority_function_type( &::OpenThreads::Thread::GetMasterPriority )
                , "  This method will return the ThreadPriority of the master process.\n  (ie, the one calling the thread->start() methods for the first time)\n  The method will almost certainly return\n  Thread::THREAD_PRIORITY_DEFAULT if\n  Init() has not been called.\n\n  Return: the Thread::ThreadPriority of the master thread." );
        
        }
        { //::OpenThreads::Thread::Init
        
            typedef void ( *Init_function_type )(  );
            
            Thread_exposer.def( 
                "Init"
                , Init_function_type( &::OpenThreads::Thread::Init )
                , "  Initialize Threading in a program.  This method must be called before\n  you can do any threading in a program." );
        
        }
        { //::OpenThreads::Thread::SetConcurrency
        
            typedef int ( *SetConcurrency_function_type )( int );
            
            Thread_exposer.def( 
                "SetConcurrency"
                , SetConcurrency_function_type( &::OpenThreads::Thread::SetConcurrency )
                , ( bp::arg("concurrencyLevel") )
                , "  Set the concurrency level for a running application.  This method\n  only has effect if the pthreads thread model is being used, and\n  then only when that model is many-to-one (eg. irix).\n  in other cases it is ignored.  The concurrency level is only a\n  *hint* as to the number of execution vehicles to use, the actual\n  implementation may do anything it wants.  Setting the value\n  to 0 returns things to their default state.\n\n  Return: previous concurrency level, -1 indicates no-op." );
        
        }
        { //::OpenThreads::Thread::YieldCurrentThread
        
            typedef int ( *YieldCurrentThread_function_type )(  );
            
            Thread_exposer.def( 
                "YieldCurrentThread"
                , YieldCurrentThread_function_type( &::OpenThreads::Thread::YieldCurrentThread )
                , "  Yield the processor.\n\n  Note: This method operates on the calling process.  And is\n  equivalent to calling sched_yield().\n\n  Return: 0 if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::cancel
        
            typedef int ( ::OpenThreads::Thread::*cancel_function_type )(  ) ;
            typedef int ( Thread_wrapper::*default_cancel_function_type )(  ) ;
            
            Thread_exposer.def( 
                "cancel"
                , cancel_function_type(&::OpenThreads::Thread::cancel)
                , default_cancel_function_type(&Thread_wrapper::default_cancel) );
        
        }
        { //::OpenThreads::Thread::cancelCleanup
        
            typedef void ( ::OpenThreads::Thread::*cancelCleanup_function_type )(  ) ;
            typedef void ( Thread_wrapper::*default_cancelCleanup_function_type )(  ) ;
            
            Thread_exposer.def( 
                "cancelCleanup"
                , cancelCleanup_function_type(&::OpenThreads::Thread::cancelCleanup)
                , default_cancelCleanup_function_type(&Thread_wrapper::default_cancelCleanup) );
        
        }
        { //::OpenThreads::Thread::detach
        
            typedef int ( ::OpenThreads::Thread::*detach_function_type )(  ) ;
            
            Thread_exposer.def( 
                "detach"
                , detach_function_type( &::OpenThreads::Thread::detach )
                , "  Detach the thread from the calling process.\n\n  Return: 0 if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::getImplementation
        
            typedef void * ( ::OpenThreads::Thread::*getImplementation_function_type )(  ) ;
            
            Thread_exposer.def( 
                "getImplementation"
                , getImplementation_function_type( &::OpenThreads::Thread::getImplementation )
                , bp::return_value_policy< bp::return_opaque_pointer >() );
        
        }
        { //::OpenThreads::Thread::getProcessId
        
            typedef ::size_t ( ::OpenThreads::Thread::*getProcessId_function_type )(  ) ;
            
            Thread_exposer.def( 
                "getProcessId"
                , getProcessId_function_type( &::OpenThreads::Thread::getProcessId )
                , "  Get the threads process id.  This is the pthread_t or pid_t value\n  depending on the threading model being used.\n\n  Return: thread process id." );
        
        }
        { //::OpenThreads::Thread::getSchedulePolicy
        
            typedef int ( ::OpenThreads::Thread::*getSchedulePolicy_function_type )(  ) ;
            
            Thread_exposer.def( 
                "getSchedulePolicy"
                , getSchedulePolicy_function_type( &::OpenThreads::Thread::getSchedulePolicy )
                , "  Get the threads policy (if able)\n\n  Note: seting the environment variable OUTPUT_THREADLIB_SCHEDULING_INFO\n  will output scheduling information for each thread to stdout.\n\n  Return: policy if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::getSchedulePriority
        
            typedef int ( ::OpenThreads::Thread::*getSchedulePriority_function_type )(  ) ;
            
            Thread_exposer.def( 
                "getSchedulePriority"
                , getSchedulePriority_function_type( &::OpenThreads::Thread::getSchedulePriority )
                , "  Get the threads schedule priority (if able)\n\n  Note: seting the environment variable OUTPUT_THREADLIB_SCHEDULING_INFO\n  will output scheduling information for each thread to stdout.\n\n  Return: 0 if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::getStackSize
        
            typedef ::size_t ( ::OpenThreads::Thread::*getStackSize_function_type )(  ) ;
            
            Thread_exposer.def( 
                "getStackSize"
                , getStackSize_function_type( &::OpenThreads::Thread::getStackSize )
                , "  Get the threads desired stack size.\n\n  Return: the threads stack size.  0 indicates that the stack size\n   has either not yet been initialized, or not yet been specified by\n   the application." );
        
        }
        { //::OpenThreads::Thread::getThreadId
        
            typedef int ( ::OpenThreads::Thread::*getThreadId_function_type )(  ) ;
            
            Thread_exposer.def( 
                "getThreadId"
                , getThreadId_function_type( &::OpenThreads::Thread::getThreadId )
                , "  Get a unique thread id.  This id is monotonically increasing.\n\n  Return: a unique thread identifier" );
        
        }
        { //::OpenThreads::Thread::isRunning
        
            typedef bool ( ::OpenThreads::Thread::*isRunning_function_type )(  ) ;
            
            Thread_exposer.def( 
                "isRunning"
                , isRunning_function_type( &::OpenThreads::Thread::isRunning )
                , "  Query the threads running status\n\n  Return: true if running, false if not." );
        
        }
        { //::OpenThreads::Thread::join
        
            typedef int ( ::OpenThreads::Thread::*join_function_type )(  ) ;
            
            Thread_exposer.def( 
                "join"
                , join_function_type( &::OpenThreads::Thread::join )
                , "  Join the calling process with the thread\n\n  Return: 0 if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::microSleep
        
            typedef int ( *microSleep_function_type )( unsigned int );
            
            Thread_exposer.def( 
                "microSleep"
                , microSleep_function_type( &::OpenThreads::Thread::microSleep )
                , ( bp::arg("microsec") )
                , " microSleep method, equivilant to the posix usleep(microsec).\n  This is not strictly thread API but is used\n so often with threads. Its basically UNIX usleep. Parameter is\n number of microseconds we current thread to sleep. Returns 0 on\n succes, non-zero on failure (UNIX errno or GetLastError() will give\n detailed description." );
        
        }
        { //::OpenThreads::Thread::printSchedulingInfo
        
            typedef void ( ::OpenThreads::Thread::*printSchedulingInfo_function_type )(  ) ;
            
            Thread_exposer.def( 
                "printSchedulingInfo"
                , printSchedulingInfo_function_type( &::OpenThreads::Thread::printSchedulingInfo )
                , "  Print the threads scheduling information to stdout." );
        
        }
        { //::OpenThreads::Thread::run
        
            typedef void ( ::OpenThreads::Thread::*run_function_type )(  ) ;
            
            Thread_exposer.def( 
                "run"
                , bp::pure_virtual( run_function_type(&::OpenThreads::Thread::run) )
                , "\n  Threads run method.  Must be implemented by derived classes.\n  This is where the action happens.\n" );
        
        }
        { //::OpenThreads::Thread::setCancelModeAsynchronous
        
            typedef int ( ::OpenThreads::Thread::*setCancelModeAsynchronous_function_type )(  ) ;
            
            Thread_exposer.def( 
                "setCancelModeAsynchronous"
                , setCancelModeAsynchronous_function_type( &::OpenThreads::Thread::setCancelModeAsynchronous )
                , "  Mark the thread to cancel aysncronously on Thread::cancel().\n  (May not be available with process-level implementations).\n\n  Return: 0 if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::setCancelModeDeferred
        
            typedef int ( ::OpenThreads::Thread::*setCancelModeDeferred_function_type )(  ) ;
            
            Thread_exposer.def( 
                "setCancelModeDeferred"
                , setCancelModeDeferred_function_type( &::OpenThreads::Thread::setCancelModeDeferred )
                , "  Mark the thread to cancel at the earliest convenience on\n  Thread::cancel() (This is the default)\n\n  Return: 0 if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::setCancelModeDisable
        
            typedef int ( ::OpenThreads::Thread::*setCancelModeDisable_function_type )(  ) ;
            
            Thread_exposer.def( 
                "setCancelModeDisable"
                , setCancelModeDisable_function_type( &::OpenThreads::Thread::setCancelModeDisable )
                , "  Disable thread cancelation altogether. Thread::cancel() has no effect.\n\n  Return: 0 if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::setProcessorAffinity
        
            typedef int ( ::OpenThreads::Thread::*setProcessorAffinity_function_type )( unsigned int ) ;
            
            Thread_exposer.def( 
                "setProcessorAffinity"
                , setProcessorAffinity_function_type( &::OpenThreads::Thread::setProcessorAffinity )
                , ( bp::arg("cpunum") )
                , " Threads processor affinity method.  This binds a thread to a\n processor whenever possible.   This call must be made before\n start() or startThread() and has no effect after the thread\n has been running.  In the pthreads implementation, this is only\n implemented on sgi, through a pthread extension.  On other pthread\n platforms this is ignored.  Returns 0 on success, implementations\n error on failure, or -1 if ignored." );
        
        }
        { //::OpenThreads::Thread::setSchedulePolicy
        
            typedef int ( ::OpenThreads::Thread::*setSchedulePolicy_function_type )( ::OpenThreads::Thread::ThreadPolicy ) ;
            
            Thread_exposer.def( 
                "setSchedulePolicy"
                , setSchedulePolicy_function_type( &::OpenThreads::Thread::setSchedulePolicy )
                , ( bp::arg("policy") )
                , "  Set the threads scheduling policy (if able)\n\n  Note: On some implementations (notably IRIX Sprocs & LinuxThreads)\n  The policy may prohibit the use of SCHEDULE_ROUND_ROBIN and\n  SCHEDULE_FIFO policies - due to their real-time nature, and\n  the danger of deadlocking the machine when used as super-user.\n  In such cases, the command is a no-op.\n\n  Note: seting the environment variable OUTPUT_THREADLIB_SCHEDULING_INFO\n  will output scheduling information for each thread to stdout.\n\n  Return: 0 if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::setSchedulePriority
        
            typedef int ( ::OpenThreads::Thread::*setSchedulePriority_function_type )( ::OpenThreads::Thread::ThreadPriority ) ;
            
            Thread_exposer.def( 
                "setSchedulePriority"
                , setSchedulePriority_function_type( &::OpenThreads::Thread::setSchedulePriority )
                , ( bp::arg("priority") )
                , "  Set the threads schedule priority.  This is a complex method.\n  Beware of thread priorities when using a many-to-many kernel\n  entity implemenation (such as IRIX pthreads).  If one is not carefull\n  to manage the thread priorities, a priority inversion deadlock can\n  easily occur (Although the OpenThreads::Mutex & OpenThreads::Barrier\n  constructs have been designed with this senario in mind).  Unless\n  you have explicit need to set the schedule pirorites for a given\n  task, it is best to leave them alone.\n\n  Note: some implementations (notably LinuxThreads and IRIX Sprocs)\n  only alow you to decrease thread priorities dynamically.  Thus,\n  a lower priority thread will not allow its priority to be raised\n  on the fly.\n\n  Note: seting the environment variable OUTPUT_THREADLIB_SCHEDULING_INFO\n  will output scheduling information for each thread to stdout.\n\n  Return: 0 if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::setStackSize
        
            typedef int ( ::OpenThreads::Thread::*setStackSize_function_type )( ::size_t ) ;
            
            Thread_exposer.def( 
                "setStackSize"
                , setStackSize_function_type( &::OpenThreads::Thread::setStackSize )
                , ( bp::arg("size") )
                , "  Set the threads desired stack size (in bytes).\n  This method is an attribute of the thread and must be called\n  *before* the start() method is invoked.\n\n  Note: a return code of 13 (EACESS) means that the thread stack\n  size can no longer be changed.\n\n  Return: 0 if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::start
        
            typedef int ( ::OpenThreads::Thread::*start_function_type )(  ) ;
            
            Thread_exposer.def( 
                "start"
                , start_function_type( &::OpenThreads::Thread::start )
                , "  Start the thread.  This method will configure the thread, set\n  its priority, and spawn it.\n\n  Note: if the stack size specified setStackSize is smaller than the\n  smallest allowable stack size,  the threads stack size will be set to\n  the minimum allowed, and may be retrieved via the getStackSize()\n\n  Return: 0 if normal, -1 if errno set, errno code otherwise." );
        
        }
        { //::OpenThreads::Thread::startThread
        
            typedef int ( ::OpenThreads::Thread::*startThread_function_type )(  ) ;
            
            Thread_exposer.def( 
                "startThread"
                , startThread_function_type( &::OpenThreads::Thread::startThread ) );
        
        }
        { //::OpenThreads::Thread::testCancel
        
            typedef int ( ::OpenThreads::Thread::*testCancel_function_type )(  ) ;
            
            Thread_exposer.def( 
                "testCancel"
                , testCancel_function_type( &::OpenThreads::Thread::testCancel )
                , " Test the cancel state of the thread.  If the thread has been canceled\n this method will cause the thread to exit now.  This method operates\n on the calling thread.\n\n Returns 0 if normal, -1 if called from a thread other that this." );
        
        }
        Thread_exposer.staticmethod( "CurrentThread" );
        Thread_exposer.staticmethod( "GetConcurrency" );
        Thread_exposer.staticmethod( "GetMasterPriority" );
        Thread_exposer.staticmethod( "Init" );
        Thread_exposer.staticmethod( "SetConcurrency" );
        Thread_exposer.staticmethod( "YieldCurrentThread" );
        Thread_exposer.staticmethod( "microSleep" );
    }

}
