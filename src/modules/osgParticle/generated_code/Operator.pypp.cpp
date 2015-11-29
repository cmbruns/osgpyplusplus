// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgParticle.h"
#include "wrap_referenced.h"
#include "Operator.pypp.hpp"

namespace bp = boost::python;

struct Operator_wrapper : osgParticle::Operator, bp::wrapper< osgParticle::Operator > {

    virtual void beginOperate( ::osgParticle::Program * arg0 ) {
        if( bp::override func_beginOperate = this->get_override( "beginOperate" ) )
            func_beginOperate( boost::python::ptr(arg0) );
        else{
            this->osgParticle::Operator::beginOperate( boost::python::ptr(arg0) );
        }
    }
    
    void default_beginOperate( ::osgParticle::Program * arg0 ) {
        osgParticle::Operator::beginOperate( boost::python::ptr(arg0) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgParticle::Operator::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgParticle::Operator::className( );
    }

    virtual void endOperate(  ) {
        if( bp::override func_endOperate = this->get_override( "endOperate" ) )
            func_endOperate(  );
        else{
            this->osgParticle::Operator::endOperate(  );
        }
    }
    
    void default_endOperate(  ) {
        osgParticle::Operator::endOperate( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgParticle::Operator::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgParticle::Operator::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgParticle::Operator::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgParticle::Operator::libraryName( );
    }

    virtual void operate( ::osgParticle::Particle * P, double dt ){
        bp::override func_operate = this->get_override( "operate" );
        func_operate( boost::python::ptr(P), dt );
    }

    virtual void operateParticles( ::osgParticle::ParticleSystem * ps, double dt ) {
        if( bp::override func_operateParticles = this->get_override( "operateParticles" ) )
            func_operateParticles( boost::python::ptr(ps), dt );
        else{
            this->osgParticle::Operator::operateParticles( boost::python::ptr(ps), dt );
        }
    }
    
    void default_operateParticles( ::osgParticle::ParticleSystem * ps, double dt ) {
        osgParticle::Operator::operateParticles( boost::python::ptr(ps), dt );
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

void register_Operator_class(){

    bp::class_< Operator_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< Operator_wrapper >, boost::noncopyable >( "Operator", "\n An abstract base class used by <CODE>ModularProgram</CODE> to perform operations on particles before they are updated.\n        To implement a new operator, derive from this class and override the <CODE>operate()</CODE> method.\n        You should also override the <CODE>beginOperate()</CODE> method to query the calling program for the reference frame\n        used, and initialize the right transformations if needed.\n", bp::no_init )    
        .def( 
            "beginOperate"
            , (void ( ::osgParticle::Operator::* )( ::osgParticle::Program * ) )(&::osgParticle::Operator::beginOperate)
            , (void ( Operator_wrapper::* )( ::osgParticle::Program * ) )(&Operator_wrapper::default_beginOperate)
            , ( bp::arg("arg0") ) )    
        .def( 
            "className"
            , (char const * ( ::osgParticle::Operator::* )(  ) const)(&::osgParticle::Operator::className)
            , (char const * ( Operator_wrapper::* )(  ) const)(&Operator_wrapper::default_className) )    
        .def( 
            "endOperate"
            , (void ( ::osgParticle::Operator::* )(  ) )(&::osgParticle::Operator::endOperate)
            , (void ( Operator_wrapper::* )(  ) )(&Operator_wrapper::default_endOperate) )    
        .def( 
            "isEnabled"
            , (bool ( ::osgParticle::Operator::* )(  ) const)( &::osgParticle::Operator::isEnabled ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgParticle::Operator::* )( ::osg::Object const * ) const)(&::osgParticle::Operator::isSameKindAs)
            , (bool ( Operator_wrapper::* )( ::osg::Object const * ) const)(&Operator_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgParticle::Operator::* )(  ) const)(&::osgParticle::Operator::libraryName)
            , (char const * ( Operator_wrapper::* )(  ) const)(&Operator_wrapper::default_libraryName) )    
        .def( 
            "operate"
            , bp::pure_virtual( (void ( ::osgParticle::Operator::* )( ::osgParticle::Particle *,double ) )(&::osgParticle::Operator::operate) )
            , ( bp::arg("P"), bp::arg("dt") )
            , "\n    Do something on a particle.\n            You must override it in descendant classes. Common operations\n            consist of modifying the particles velocity vector. The <CODE>dt</CODE> parameter is\n            the time elapsed from last operation.\n" )    
        .def( 
            "operateParticles"
            , (void ( ::osgParticle::Operator::* )( ::osgParticle::ParticleSystem *,double ) )(&::osgParticle::Operator::operateParticles)
            , (void ( Operator_wrapper::* )( ::osgParticle::ParticleSystem *,double ) )(&Operator_wrapper::default_operateParticles)
            , ( bp::arg("ps"), bp::arg("dt") ) )    
        .def( 
            "setEnabled"
            , (void ( ::osgParticle::Operator::* )( bool ) )( &::osgParticle::Operator::setEnabled )
            , ( bp::arg("v") ) );

}
