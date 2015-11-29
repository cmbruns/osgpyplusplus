// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgUtil.h"
#include "wrap_referenced.h"
#include "GLObjectsOperation.pypp.hpp"

namespace bp = boost::python;

struct GLObjectsOperation_wrapper : osgUtil::GLObjectsOperation, bp::wrapper< osgUtil::GLObjectsOperation > {

    GLObjectsOperation_wrapper(unsigned int mode=268 )
    : osgUtil::GLObjectsOperation( mode )
      , bp::wrapper< osgUtil::GLObjectsOperation >(){
        // constructor
    
    }

    GLObjectsOperation_wrapper(::osg::Node * subgraph, unsigned int mode=268 )
    : osgUtil::GLObjectsOperation( boost::python::ptr(subgraph), mode )
      , bp::wrapper< osgUtil::GLObjectsOperation >(){
        // constructor
    
    }

    virtual void operator()( ::osg::GraphicsContext * context ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( boost::python::ptr(context) );
        else{
            this->osgUtil::GLObjectsOperation::operator()( boost::python::ptr(context) );
        }
    }
    
    void default___call__( ::osg::GraphicsContext * context ) {
        osgUtil::GLObjectsOperation::operator()( boost::python::ptr(context) );
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

void register_GLObjectsOperation_class(){

    { //::osgUtil::GLObjectsOperation
        typedef bp::class_< GLObjectsOperation_wrapper, bp::bases< ::osg::GraphicsOperation >, osg::ref_ptr< GLObjectsOperation_wrapper >, boost::noncopyable > GLObjectsOperation_exposer_t;
        GLObjectsOperation_exposer_t GLObjectsOperation_exposer = GLObjectsOperation_exposer_t( "GLObjectsOperation", bp::init< bp::optional< unsigned int > >(( bp::arg("mode")=(unsigned int)(268) )) );
        bp::scope GLObjectsOperation_scope( GLObjectsOperation_exposer );
        bp::implicitly_convertible< unsigned int, osgUtil::GLObjectsOperation >();
        GLObjectsOperation_exposer.def( bp::init< osg::Node *, bp::optional< unsigned int > >(( bp::arg("subgraph"), bp::arg("mode")=(unsigned int)(268) )) );
        bp::implicitly_convertible< osg::Node *, osgUtil::GLObjectsOperation >();
        { //::osgUtil::GLObjectsOperation::operator()
        
            typedef void ( ::osgUtil::GLObjectsOperation::*__call___function_type )( ::osg::GraphicsContext * ) ;
            typedef void ( GLObjectsOperation_wrapper::*default___call___function_type )( ::osg::GraphicsContext * ) ;
            
            GLObjectsOperation_exposer.def( 
                "__call__"
                , __call___function_type(&::osgUtil::GLObjectsOperation::operator())
                , default___call___function_type(&GLObjectsOperation_wrapper::default___call__)
                , ( bp::arg("context") ) );
        
        }
    }

}
