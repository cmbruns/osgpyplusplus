// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "OperationQueue.pypp.hpp"

namespace bp = boost::python;

void register_OperationQueue_class(){

    bp::class_< osg::OperationQueue, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::OperationQueue >, boost::noncopyable >( "OperationQueue", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "add"
            , (void ( ::osg::OperationQueue::* )( ::osg::Operation * ) )( &::osg::OperationQueue::add )
            , ( bp::arg("operation") )
            , "\n Add operation to end of OperationQueue, this will be\n executed by the operation thread once this operation gets to the head of the queue.\n" )    
        .def( 
            "empty"
            , (bool ( ::osg::OperationQueue::* )(  ) )( &::osg::OperationQueue::empty )
            , "\n Return true if the operation queue is empty.\n" )    
        .def( 
            "getNextOperation"
            , (::osg::ref_ptr< osg::Operation > ( ::osg::OperationQueue::* )( bool ) )( &::osg::OperationQueue::getNextOperation )
            , ( bp::arg("blockIfEmpty")=(bool)(false) )
            , "\n Get the next operation from the operation queue.\n Return null ref_ptr<> if no operations are left in queue.\n" )    
        .def( 
            "getNumOperationsInQueue"
            , (unsigned int ( ::osg::OperationQueue::* )(  ) )( &::osg::OperationQueue::getNumOperationsInQueue )
            , "\n Return the num of pending operations that are sitting in the OperationQueue.\n" )    
        .def( 
            "getOperationThreads"
            , (::std::set< osg::OperationThread* > const & ( ::osg::OperationQueue::* )(  ) const)( &::osg::OperationQueue::getOperationThreads )
            , bp::return_internal_reference< >()
            , "\n Get the set of OperationThreads that are sharing this OperationQueue.\n" )    
        .def( 
            "releaseAllOperations"
            , (void ( ::osg::OperationQueue::* )(  ) )( &::osg::OperationQueue::releaseAllOperations )
            , "\n Call release on all operations.\n" )    
        .def( 
            "releaseOperationsBlock"
            , (void ( ::osg::OperationQueue::* )(  ) )( &::osg::OperationQueue::releaseOperationsBlock )
            , "\n Release operations block that is used to block threads that are waiting on an empty operations queue.\n" )    
        .def( 
            "remove"
            , (void ( ::osg::OperationQueue::* )( ::osg::Operation * ) )( &::osg::OperationQueue::remove )
            , ( bp::arg("operation") )
            , "\n Remove operation from OperationQueue.\n" )    
        .def( 
            "remove"
            , (void ( ::osg::OperationQueue::* )( ::std::string const & ) )( &::osg::OperationQueue::remove )
            , ( bp::arg("name") )
            , "\n Remove named operation from OperationQueue.\n" )    
        .def( 
            "removeAllOperations"
            , (void ( ::osg::OperationQueue::* )(  ) )( &::osg::OperationQueue::removeAllOperations )
            , "\n Remove all operations from OperationQueue.\n" )    
        .def( 
            "runOperations"
            , (void ( ::osg::OperationQueue::* )( ::osg::Object * ) )( &::osg::OperationQueue::runOperations )
            , ( bp::arg("callingObject")=bp::object() )
            , "\n Run the operations.\n" );

}
