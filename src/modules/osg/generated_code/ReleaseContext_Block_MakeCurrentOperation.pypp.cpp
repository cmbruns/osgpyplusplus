// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "ReleaseContext_Block_MakeCurrentOperation.pypp.hpp"

namespace bp = boost::python;

struct ReleaseContext_Block_MakeCurrentOperation_wrapper : osg::ReleaseContext_Block_MakeCurrentOperation, bp::wrapper< osg::ReleaseContext_Block_MakeCurrentOperation > {

    ReleaseContext_Block_MakeCurrentOperation_wrapper( )
    : osg::ReleaseContext_Block_MakeCurrentOperation( )
      , bp::wrapper< osg::ReleaseContext_Block_MakeCurrentOperation >(){
        // null constructor
    
    }

    virtual void operator()( ::osg::GraphicsContext * context ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( boost::python::ptr(context) );
        else{
            this->osg::ReleaseContext_Block_MakeCurrentOperation::operator()( boost::python::ptr(context) );
        }
    }
    
    void default___call__( ::osg::GraphicsContext * context ) {
        osg::ReleaseContext_Block_MakeCurrentOperation::operator()( boost::python::ptr(context) );
    }

    virtual void release(  ) {
        if( bp::override func_release = this->get_override( "release" ) )
            func_release(  );
        else{
            this->osg::ReleaseContext_Block_MakeCurrentOperation::release(  );
        }
    }
    
    void default_release(  ) {
        osg::ReleaseContext_Block_MakeCurrentOperation::release( );
    }

};

void register_ReleaseContext_Block_MakeCurrentOperation_class(){

    bp::class_< ReleaseContext_Block_MakeCurrentOperation_wrapper, bp::bases< osg::GraphicsOperation, osg::RefBlock >, osg::ref_ptr< ::osg::ReleaseContext_Block_MakeCurrentOperation >, boost::noncopyable >( "ReleaseContext_Block_MakeCurrentOperation", "\n ReleaseContext_Block_MakeCurrentOperation releases the context for another thread to acquire,\n then blocks waiting for context to be released, once the block is release the context is re-acquired.\n", bp::init< >("\n ReleaseContext_Block_MakeCurrentOperation releases the context for another thread to acquire,\n then blocks waiting for context to be released, once the block is release the context is re-acquired.\n") )    
        .def( 
            "__call__"
            , (void ( ::osg::ReleaseContext_Block_MakeCurrentOperation::* )( ::osg::GraphicsContext * ) )(&::osg::ReleaseContext_Block_MakeCurrentOperation::operator())
            , (void ( ReleaseContext_Block_MakeCurrentOperation_wrapper::* )( ::osg::GraphicsContext * ) )(&ReleaseContext_Block_MakeCurrentOperation_wrapper::default___call__)
            , ( bp::arg("context") ) )    
        .def( 
            "release"
            , (void ( ::osg::ReleaseContext_Block_MakeCurrentOperation::* )(  ) )(&::osg::ReleaseContext_Block_MakeCurrentOperation::release)
            , (void ( ReleaseContext_Block_MakeCurrentOperation_wrapper::* )(  ) )(&ReleaseContext_Block_MakeCurrentOperation_wrapper::default_release) );

}
