// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "GraphicsOperation.pypp.hpp"

namespace bp = boost::python;

struct GraphicsOperation_wrapper : osg::GraphicsOperation, bp::wrapper< osg::GraphicsOperation > {

    virtual void operator()( ::osg::Object * object ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( boost::python::ptr(object) );
        else{
            this->osg::GraphicsOperation::operator()( boost::python::ptr(object) );
        }
    }
    
    void default___call__( ::osg::Object * object ) {
        osg::GraphicsOperation::operator()( boost::python::ptr(object) );
    }

    virtual void operator()( ::osg::GraphicsContext * context ){
        bp::override func___call__ = this->get_override( "__call__" );
        func___call__( boost::python::ptr(context) );
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

void register_GraphicsOperation_class(){

    bp::class_< GraphicsOperation_wrapper, bp::bases< osg::Operation >, osg::ref_ptr< ::osg::GraphicsOperation >, boost::noncopyable >( "GraphicsOperation", bp::no_init )    
        .def( 
            "__call__"
            , (void ( ::osg::GraphicsOperation::* )( ::osg::Object * ) )(&::osg::GraphicsOperation::operator())
            , (void ( GraphicsOperation_wrapper::* )( ::osg::Object * ) )(&GraphicsOperation_wrapper::default___call__)
            , ( bp::arg("object") ) )    
        .def( 
            "__call__"
            , bp::pure_virtual( (void ( ::osg::GraphicsOperation::* )( ::osg::GraphicsContext * ) )(&::osg::GraphicsOperation::operator()) )
            , ( bp::arg("context") ) )    
        .def( 
            "release"
            , (void ( ::osg::Operation::* )(  ) )(&::osg::Operation::release)
            , (void ( GraphicsOperation_wrapper::* )(  ) )(&GraphicsOperation_wrapper::default_release) );

}
