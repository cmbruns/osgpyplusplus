// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgParticle.h"
#include "wrap_referenced.h"
#include "Counter.pypp.hpp"

namespace bp = boost::python;

struct Counter_wrapper : osgParticle::Counter, bp::wrapper< osgParticle::Counter > {

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgParticle::Counter::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgParticle::Counter::className( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgParticle::Counter::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgParticle::Counter::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgParticle::Counter::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgParticle::Counter::libraryName( );
    }

    virtual int numParticlesToCreate( double dt ) const {
        bp::override func_numParticlesToCreate = this->get_override( "numParticlesToCreate" );
        return func_numParticlesToCreate( dt );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & arg0 ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone( boost::ref(arg0) );
    }

    virtual ::osg::Object * cloneType(  ) const {
        bp::override func_cloneType = this->get_override( "cloneType" );
        return func_cloneType(  );
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

void register_Counter_class(){

    bp::class_< Counter_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< Counter_wrapper >, boost::noncopyable >( "Counter", bp::no_init )    
        .def( 
            "className"
            , (char const * ( ::osgParticle::Counter::* )(  ) const)(&::osgParticle::Counter::className)
            , (char const * ( Counter_wrapper::* )(  ) const)(&Counter_wrapper::default_className) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgParticle::Counter::* )( ::osg::Object const * ) const)(&::osgParticle::Counter::isSameKindAs)
            , (bool ( Counter_wrapper::* )( ::osg::Object const * ) const)(&Counter_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgParticle::Counter::* )(  ) const)(&::osgParticle::Counter::libraryName)
            , (char const * ( Counter_wrapper::* )(  ) const)(&Counter_wrapper::default_libraryName) )    
        .def( 
            "numParticlesToCreate"
            , bp::pure_virtual( (int ( ::osgParticle::Counter::* )( double ) const)(&::osgParticle::Counter::numParticlesToCreate) )
            , ( bp::arg("dt") ) );

}
