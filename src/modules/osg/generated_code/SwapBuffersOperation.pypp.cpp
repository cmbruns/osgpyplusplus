// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "SwapBuffersOperation.pypp.hpp"

namespace bp = boost::python;

struct SwapBuffersOperation_wrapper : osg::SwapBuffersOperation, bp::wrapper< osg::SwapBuffersOperation > {

    SwapBuffersOperation_wrapper( )
    : osg::SwapBuffersOperation( )
      , bp::wrapper< osg::SwapBuffersOperation >(){
        // null constructor
    
    }

    virtual void operator()( ::osg::GraphicsContext * context ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( boost::python::ptr(context) );
        else{
            this->osg::SwapBuffersOperation::operator()( boost::python::ptr(context) );
        }
    }
    
    void default___call__( ::osg::GraphicsContext * context ) {
        osg::SwapBuffersOperation::operator()( boost::python::ptr(context) );
    }

    virtual void release(  ) {
        if( bp::override func_release = this->get_override( "release" ) )
            func_release(  );
        else{
            this->osg::Operation::release(  );
        }
    }
    
    void default_release(  ) {
        osg::Operation::release( );
    }

};

void register_SwapBuffersOperation_class(){

    bp::class_< SwapBuffersOperation_wrapper, bp::bases< osg::GraphicsOperation >, osg::ref_ptr< ::osg::SwapBuffersOperation >, boost::noncopyable >( "SwapBuffersOperation", "\n SwapBufferOperation calls swap buffers on the GraphicsContext.\n", bp::init< >("\n SwapBufferOperation calls swap buffers on the GraphicsContext.\n") )    
        .def( 
            "__call__"
            , (void ( ::osg::SwapBuffersOperation::* )( ::osg::GraphicsContext * ) )(&::osg::SwapBuffersOperation::operator())
            , (void ( SwapBuffersOperation_wrapper::* )( ::osg::GraphicsContext * ) )(&SwapBuffersOperation_wrapper::default___call__)
            , ( bp::arg("context") ) )    
        .def( 
            "release"
            , (void ( ::osg::Operation::* )(  ) )(&::osg::Operation::release)
            , (void ( SwapBuffersOperation_wrapper::* )(  ) )(&SwapBuffersOperation_wrapper::default_release) );

}
