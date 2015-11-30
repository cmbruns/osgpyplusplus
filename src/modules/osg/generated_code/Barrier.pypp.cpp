// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "Barrier.pypp.hpp"

namespace bp = boost::python;

struct Barrier_wrapper : OpenThreads::Barrier, bp::wrapper< OpenThreads::Barrier > {

    Barrier_wrapper(int numThreads=0 )
    : OpenThreads::Barrier( numThreads )
      , bp::wrapper< OpenThreads::Barrier >(){
        // constructor
    
    }

    virtual void block( unsigned int numThreads=0 ) {
        if( bp::override func_block = this->get_override( "block" ) )
            func_block( numThreads );
        else{
            this->OpenThreads::Barrier::block( numThreads );
        }
    }
    
    void default_block( unsigned int numThreads=0 ) {
        OpenThreads::Barrier::block( numThreads );
    }

    virtual int numThreadsCurrentlyBlocked(  ) {
        if( bp::override func_numThreadsCurrentlyBlocked = this->get_override( "numThreadsCurrentlyBlocked" ) )
            return func_numThreadsCurrentlyBlocked(  );
        else{
            return this->OpenThreads::Barrier::numThreadsCurrentlyBlocked(  );
        }
    }
    
    int default_numThreadsCurrentlyBlocked(  ) {
        return OpenThreads::Barrier::numThreadsCurrentlyBlocked( );
    }

    virtual void release(  ) {
        if( bp::override func_release = this->get_override( "release" ) )
            func_release(  );
        else{
            this->OpenThreads::Barrier::release(  );
        }
    }
    
    void default_release(  ) {
        OpenThreads::Barrier::release( );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->OpenThreads::Barrier::reset(  );
        }
    }
    
    void default_reset(  ) {
        OpenThreads::Barrier::reset( );
    }

};

void register_Barrier_class(){

    { //::OpenThreads::Barrier
        typedef bp::class_< Barrier_wrapper, boost::noncopyable > Barrier_exposer_t;
        Barrier_exposer_t Barrier_exposer = Barrier_exposer_t( "Barrier", "\n  Class: Barrier\n  This class provides an object-oriented thread barrier interface\n\n  Warning: It is unwise to use the construct Barrier barrier in the\n           global namespace on sgis.  The object barrier\n           will confilict with the c-library sproc function barrier and\n           unpredictable results may occur. You have been warned.\n", bp::init< bp::optional< int > >(( bp::arg("numThreads")=(int)(0) ), "\n  Constructor\n") );
        bp::scope Barrier_scope( Barrier_exposer );
        bp::implicitly_convertible< int, OpenThreads::Barrier >();
        { //::OpenThreads::Barrier::block
        
            typedef void ( ::OpenThreads::Barrier::*block_function_type )( unsigned int ) ;
            typedef void ( Barrier_wrapper::*default_block_function_type )( unsigned int ) ;
            
            Barrier_exposer.def( 
                "block"
                , block_function_type(&::OpenThreads::Barrier::block)
                , default_block_function_type(&Barrier_wrapper::default_block)
                , ( bp::arg("numThreads")=(unsigned int)(0) ) );
        
        }
        { //::OpenThreads::Barrier::invalidate
        
            typedef void ( ::OpenThreads::Barrier::*invalidate_function_type )(  ) ;
            
            Barrier_exposer.def( 
                "invalidate"
                , invalidate_function_type( &::OpenThreads::Barrier::invalidate ) );
        
        }
        { //::OpenThreads::Barrier::numThreadsCurrentlyBlocked
        
            typedef int ( ::OpenThreads::Barrier::*numThreadsCurrentlyBlocked_function_type )(  ) ;
            typedef int ( Barrier_wrapper::*default_numThreadsCurrentlyBlocked_function_type )(  ) ;
            
            Barrier_exposer.def( 
                "numThreadsCurrentlyBlocked"
                , numThreadsCurrentlyBlocked_function_type(&::OpenThreads::Barrier::numThreadsCurrentlyBlocked)
                , default_numThreadsCurrentlyBlocked_function_type(&Barrier_wrapper::default_numThreadsCurrentlyBlocked) );
        
        }
        { //::OpenThreads::Barrier::release
        
            typedef void ( ::OpenThreads::Barrier::*release_function_type )(  ) ;
            typedef void ( Barrier_wrapper::*default_release_function_type )(  ) ;
            
            Barrier_exposer.def( 
                "release"
                , release_function_type(&::OpenThreads::Barrier::release)
                , default_release_function_type(&Barrier_wrapper::default_release) );
        
        }
        { //::OpenThreads::Barrier::reset
        
            typedef void ( ::OpenThreads::Barrier::*reset_function_type )(  ) ;
            typedef void ( Barrier_wrapper::*default_reset_function_type )(  ) ;
            
            Barrier_exposer.def( 
                "reset"
                , reset_function_type(&::OpenThreads::Barrier::reset)
                , default_reset_function_type(&Barrier_wrapper::default_reset) );
        
        }
    }

}
