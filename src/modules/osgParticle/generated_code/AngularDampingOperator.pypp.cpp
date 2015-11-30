// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgParticle.h"
#include "wrap_referenced.h"
#include "AngularDampingOperator.pypp.hpp"

namespace bp = boost::python;

struct AngularDampingOperator_wrapper : osgParticle::AngularDampingOperator, bp::wrapper< osgParticle::AngularDampingOperator > {

    AngularDampingOperator_wrapper( )
    : osgParticle::AngularDampingOperator( )
      , bp::wrapper< osgParticle::AngularDampingOperator >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgParticle::AngularDampingOperator::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgParticle::AngularDampingOperator::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgParticle::AngularDampingOperator::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgParticle::AngularDampingOperator::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgParticle::AngularDampingOperator::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgParticle::AngularDampingOperator::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgParticle::AngularDampingOperator::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgParticle::AngularDampingOperator::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgParticle::AngularDampingOperator::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgParticle::AngularDampingOperator::libraryName( );
    }

    virtual void operate( ::osgParticle::Particle * P, double dt ) {
        if( bp::override func_operate = this->get_override( "operate" ) )
            func_operate( boost::python::ptr(P), dt );
        else{
            this->osgParticle::AngularDampingOperator::operate( boost::python::ptr(P), dt );
        }
    }
    
    void default_operate( ::osgParticle::Particle * P, double dt ) {
        osgParticle::AngularDampingOperator::operate( boost::python::ptr(P), dt );
    }

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

void register_AngularDampingOperator_class(){

    bp::class_< AngularDampingOperator_wrapper, bp::bases< osgParticle::Operator >, osg::ref_ptr< AngularDampingOperator_wrapper >, boost::noncopyable >( "AngularDampingOperator", "\n A angular damping operator applies damping constant to particles angular velocity.\n    Refer to David McAllisters Particle System API (http://www.particlesystems.org)\n", bp::no_init )    
        .def( bp::init< >("\n A angular damping operator applies damping constant to particles angular velocity.\n    Refer to David McAllisters Particle System API (http://www.particlesystems.org)\n") )    
        .def( 
            "className"
            , (char const * ( ::osgParticle::AngularDampingOperator::* )(  ) const)(&::osgParticle::AngularDampingOperator::className)
            , (char const * ( AngularDampingOperator_wrapper::* )(  ) const)(&AngularDampingOperator_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgParticle::AngularDampingOperator::* )( ::osg::CopyOp const & ) const)(&::osgParticle::AngularDampingOperator::clone)
            , (::osg::Object * ( AngularDampingOperator_wrapper::* )( ::osg::CopyOp const & ) const)(&AngularDampingOperator_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgParticle::AngularDampingOperator::* )(  ) const)(&::osgParticle::AngularDampingOperator::cloneType)
            , (::osg::Object * ( AngularDampingOperator_wrapper::* )(  ) const)(&AngularDampingOperator_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getCutoff"
            , (void ( ::osgParticle::AngularDampingOperator::* )( float &,float & ) const)( &::osgParticle::AngularDampingOperator::getCutoff )
            , ( bp::arg("low"), bp::arg("high") )
            , " Get the velocity cutoff factors" )    
        .def( 
            "getCutoffHigh"
            , (float ( ::osgParticle::AngularDampingOperator::* )(  ) const)( &::osgParticle::AngularDampingOperator::getCutoffHigh ) )    
        .def( 
            "getCutoffLow"
            , (float ( ::osgParticle::AngularDampingOperator::* )(  ) const)( &::osgParticle::AngularDampingOperator::getCutoffLow ) )    
        .def( 
            "getDamping"
            , (void ( ::osgParticle::AngularDampingOperator::* )( float &,float &,float & ) const)( &::osgParticle::AngularDampingOperator::getDamping )
            , ( bp::arg("x"), bp::arg("y"), bp::arg("z") )
            , " Get the damping factors" )    
        .def( 
            "getDamping"
            , (::osg::Vec3 const & ( ::osgParticle::AngularDampingOperator::* )(  ) const)( &::osgParticle::AngularDampingOperator::getDamping )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgParticle::AngularDampingOperator::* )( ::osg::Object const * ) const)(&::osgParticle::AngularDampingOperator::isSameKindAs)
            , (bool ( AngularDampingOperator_wrapper::* )( ::osg::Object const * ) const)(&AngularDampingOperator_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgParticle::AngularDampingOperator::* )(  ) const)(&::osgParticle::AngularDampingOperator::libraryName)
            , (char const * ( AngularDampingOperator_wrapper::* )(  ) const)(&AngularDampingOperator_wrapper::default_libraryName) )    
        .def( 
            "operate"
            , (void ( ::osgParticle::AngularDampingOperator::* )( ::osgParticle::Particle *,double ) )(&::osgParticle::AngularDampingOperator::operate)
            , (void ( AngularDampingOperator_wrapper::* )( ::osgParticle::Particle *,double ) )(&AngularDampingOperator_wrapper::default_operate)
            , ( bp::arg("P"), bp::arg("dt") ) )    
        .def( 
            "setCutoff"
            , (void ( ::osgParticle::AngularDampingOperator::* )( float,float ) )( &::osgParticle::AngularDampingOperator::setCutoff )
            , ( bp::arg("low"), bp::arg("high") )
            , " Set the velocity cutoff factors" )    
        .def( 
            "setCutoffHigh"
            , (void ( ::osgParticle::AngularDampingOperator::* )( float ) )( &::osgParticle::AngularDampingOperator::setCutoffHigh )
            , ( bp::arg("low") ) )    
        .def( 
            "setCutoffLow"
            , (void ( ::osgParticle::AngularDampingOperator::* )( float ) )( &::osgParticle::AngularDampingOperator::setCutoffLow )
            , ( bp::arg("low") ) )    
        .def( 
            "setDamping"
            , (void ( ::osgParticle::AngularDampingOperator::* )( float,float,float ) )( &::osgParticle::AngularDampingOperator::setDamping )
            , ( bp::arg("x"), bp::arg("y"), bp::arg("z") )
            , " Set the damping factors" )    
        .def( 
            "setDamping"
            , (void ( ::osgParticle::AngularDampingOperator::* )( ::osg::Vec3 const & ) )( &::osgParticle::AngularDampingOperator::setDamping )
            , ( bp::arg("damping") ) )    
        .def( 
            "setDamping"
            , (void ( ::osgParticle::AngularDampingOperator::* )( float ) )( &::osgParticle::AngularDampingOperator::setDamping )
            , ( bp::arg("x") )
            , " Set the damping factors to one value" )    
        .def( 
            "beginOperate"
            , (void ( ::osgParticle::Operator::* )( ::osgParticle::Program * ) )(&::osgParticle::Operator::beginOperate)
            , (void ( AngularDampingOperator_wrapper::* )( ::osgParticle::Program * ) )(&AngularDampingOperator_wrapper::default_beginOperate)
            , ( bp::arg("arg0") ) )    
        .def( 
            "endOperate"
            , (void ( ::osgParticle::Operator::* )(  ) )(&::osgParticle::Operator::endOperate)
            , (void ( AngularDampingOperator_wrapper::* )(  ) )(&AngularDampingOperator_wrapper::default_endOperate) )    
        .def( 
            "operateParticles"
            , (void ( ::osgParticle::Operator::* )( ::osgParticle::ParticleSystem *,double ) )(&::osgParticle::Operator::operateParticles)
            , (void ( AngularDampingOperator_wrapper::* )( ::osgParticle::ParticleSystem *,double ) )(&AngularDampingOperator_wrapper::default_operateParticles)
            , ( bp::arg("ps"), bp::arg("dt") ) );

}