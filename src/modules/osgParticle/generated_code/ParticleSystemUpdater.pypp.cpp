// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgParticle.h"
#include "wrap_referenced.h"
#include "ParticleSystemUpdater.pypp.hpp"

namespace bp = boost::python;

struct ParticleSystemUpdater_wrapper : osgParticle::ParticleSystemUpdater, bp::wrapper< osgParticle::ParticleSystemUpdater > {

    ParticleSystemUpdater_wrapper( )
    : osgParticle::ParticleSystemUpdater( )
      , bp::wrapper< osgParticle::ParticleSystemUpdater >(){
        // null constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osgParticle::ParticleSystemUpdater::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osgParticle::ParticleSystemUpdater::accept( boost::ref(nv) );
    }

    virtual bool addParticleSystem( ::osgParticle::ParticleSystem * ps ) {
        if( bp::override func_addParticleSystem = this->get_override( "addParticleSystem" ) )
            return func_addParticleSystem( boost::python::ptr(ps) );
        else{
            return this->osgParticle::ParticleSystemUpdater::addParticleSystem( boost::python::ptr(ps) );
        }
    }
    
    bool default_addParticleSystem( ::osgParticle::ParticleSystem * ps ) {
        return osgParticle::ParticleSystemUpdater::addParticleSystem( boost::python::ptr(ps) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgParticle::ParticleSystemUpdater::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgParticle::ParticleSystemUpdater::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgParticle::ParticleSystemUpdater::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgParticle::ParticleSystemUpdater::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgParticle::ParticleSystemUpdater::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgParticle::ParticleSystemUpdater::cloneType( );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osgParticle::ParticleSystemUpdater::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osgParticle::ParticleSystemUpdater::computeBound( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgParticle::ParticleSystemUpdater::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgParticle::ParticleSystemUpdater::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgParticle::ParticleSystemUpdater::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgParticle::ParticleSystemUpdater::libraryName( );
    }

    virtual bool removeParticleSystem( ::osgParticle::ParticleSystem * ps ) {
        if( bp::override func_removeParticleSystem = this->get_override( "removeParticleSystem" ) )
            return func_removeParticleSystem( boost::python::ptr(ps) );
        else{
            return this->osgParticle::ParticleSystemUpdater::removeParticleSystem( boost::python::ptr(ps) );
        }
    }
    
    bool default_removeParticleSystem( ::osgParticle::ParticleSystem * ps ) {
        return osgParticle::ParticleSystemUpdater::removeParticleSystem( boost::python::ptr(ps) );
    }

    virtual bool removeParticleSystem( unsigned int i, unsigned int numParticleSystemsToRemove=1 ) {
        if( bp::override func_removeParticleSystem = this->get_override( "removeParticleSystem" ) )
            return func_removeParticleSystem( i, numParticleSystemsToRemove );
        else{
            return this->osgParticle::ParticleSystemUpdater::removeParticleSystem( i, numParticleSystemsToRemove );
        }
    }
    
    bool default_removeParticleSystem( unsigned int i, unsigned int numParticleSystemsToRemove=1 ) {
        return osgParticle::ParticleSystemUpdater::removeParticleSystem( i, numParticleSystemsToRemove );
    }

    virtual bool replaceParticleSystem( ::osgParticle::ParticleSystem * origPS, ::osgParticle::ParticleSystem * newPS ) {
        if( bp::override func_replaceParticleSystem = this->get_override( "replaceParticleSystem" ) )
            return func_replaceParticleSystem( boost::python::ptr(origPS), boost::python::ptr(newPS) );
        else{
            return this->osgParticle::ParticleSystemUpdater::replaceParticleSystem( boost::python::ptr(origPS), boost::python::ptr(newPS) );
        }
    }
    
    bool default_replaceParticleSystem( ::osgParticle::ParticleSystem * origPS, ::osgParticle::ParticleSystem * newPS ) {
        return osgParticle::ParticleSystemUpdater::replaceParticleSystem( boost::python::ptr(origPS), boost::python::ptr(newPS) );
    }

    virtual bool setParticleSystem( unsigned int i, ::osgParticle::ParticleSystem * ps ) {
        if( bp::override func_setParticleSystem = this->get_override( "setParticleSystem" ) )
            return func_setParticleSystem( i, boost::python::ptr(ps) );
        else{
            return this->osgParticle::ParticleSystemUpdater::setParticleSystem( i, boost::python::ptr(ps) );
        }
    }
    
    bool default_setParticleSystem( unsigned int i, ::osgParticle::ParticleSystem * ps ) {
        return osgParticle::ParticleSystemUpdater::setParticleSystem( i, boost::python::ptr(ps) );
    }

    virtual void traverse( ::osg::NodeVisitor & nv ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(nv) );
        else{
            this->osgParticle::ParticleSystemUpdater::traverse( boost::ref(nv) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv ) {
        osgParticle::ParticleSystemUpdater::traverse( boost::ref(nv) );
    }

    virtual ::osg::Camera * asCamera(  ) {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera * default_asCamera(  ) {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Camera const * asCamera(  ) const  {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera const * default_asCamera(  ) const  {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Geode * asGeode(  ) {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode * default_asGeode(  ) {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Geode const * asGeode(  ) const  {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode const * default_asGeode(  ) const  {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Group * asGroup(  ) {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Switch * asSwitch(  ) {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch * default_asSwitch(  ) {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Switch const * asSwitch(  ) const  {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch const * default_asSwitch(  ) const  {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Transform * asTransform(  ) {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform * default_asTransform(  ) {
        return osg::Node::asTransform( );
    }

    virtual ::osg::Transform const * asTransform(  ) const  {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform const * default_asTransform(  ) const  {
        return osg::Node::asTransform( );
    }

    virtual void ascend( ::osg::NodeVisitor & nv ) {
        if( bp::override func_ascend = this->get_override( "ascend" ) )
            func_ascend( boost::ref(nv) );
        else{
            this->osg::Node::ascend( boost::ref(nv) );
        }
    }
    
    void default_ascend( ::osg::NodeVisitor & nv ) {
        osg::Node::ascend( boost::ref(nv) );
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

    virtual void resizeGLObjectBuffers( unsigned int arg0 ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( arg0 );
        else{
            this->osg::Node::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::Node::resizeGLObjectBuffers( arg0 );
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
            this->osg::Node::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Node::setThreadSafeRefUnref( threadSafe );
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

void register_ParticleSystemUpdater_class(){

    bp::class_< ParticleSystemUpdater_wrapper, bp::bases< ::osg::Node >, osg::ref_ptr< ParticleSystemUpdater_wrapper >, boost::noncopyable >( "ParticleSystemUpdater", "\n    A useful node class for updating particle systems automatically.\n        When a ParticleSystemUpdater is traversed by a cull visitor, it calls the\n        update() method on the specified particle systems. You should place this updater\n        AFTER other nodes like emitters and programs.\n", bp::no_init )    
        .def( bp::init< >("\n    A useful node class for updating particle systems automatically.\n        When a ParticleSystemUpdater is traversed by a cull visitor, it calls the\n        update() method on the specified particle systems. You should place this updater\n        AFTER other nodes like emitters and programs.\n") )    
        .def( 
            "accept"
            , (void ( ::osgParticle::ParticleSystemUpdater::* )( ::osg::NodeVisitor & ) )(&::osgParticle::ParticleSystemUpdater::accept)
            , (void ( ParticleSystemUpdater_wrapper::* )( ::osg::NodeVisitor & ) )(&ParticleSystemUpdater_wrapper::default_accept)
            , ( bp::arg("nv") ) )    
        .def( 
            "addParticleSystem"
            , (bool ( ::osgParticle::ParticleSystemUpdater::* )( ::osgParticle::ParticleSystem * ) )(&::osgParticle::ParticleSystemUpdater::addParticleSystem)
            , (bool ( ParticleSystemUpdater_wrapper::* )( ::osgParticle::ParticleSystem * ) )(&ParticleSystemUpdater_wrapper::default_addParticleSystem)
            , ( bp::arg("ps") ) )    
        .def( 
            "className"
            , (char const * ( ::osgParticle::ParticleSystemUpdater::* )(  ) const)(&::osgParticle::ParticleSystemUpdater::className)
            , (char const * ( ParticleSystemUpdater_wrapper::* )(  ) const)(&ParticleSystemUpdater_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgParticle::ParticleSystemUpdater::* )( ::osg::CopyOp const & ) const)(&::osgParticle::ParticleSystemUpdater::clone)
            , (::osg::Object * ( ParticleSystemUpdater_wrapper::* )( ::osg::CopyOp const & ) const)(&ParticleSystemUpdater_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgParticle::ParticleSystemUpdater::* )(  ) const)(&::osgParticle::ParticleSystemUpdater::cloneType)
            , (::osg::Object * ( ParticleSystemUpdater_wrapper::* )(  ) const)(&ParticleSystemUpdater_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeBound"
            , (::osg::BoundingSphere ( ::osgParticle::ParticleSystemUpdater::* )(  ) const)(&::osgParticle::ParticleSystemUpdater::computeBound)
            , (::osg::BoundingSphere ( ParticleSystemUpdater_wrapper::* )(  ) const)(&ParticleSystemUpdater_wrapper::default_computeBound) )    
        .def( 
            "containsParticleSystem"
            , (bool ( ::osgParticle::ParticleSystemUpdater::* )( ::osgParticle::ParticleSystem const * ) const)( &::osgParticle::ParticleSystemUpdater::containsParticleSystem )
            , ( bp::arg("ps") ) )    
        .def( 
            "getNumParticleSystems"
            , (unsigned int ( ::osgParticle::ParticleSystemUpdater::* )(  ) const)( &::osgParticle::ParticleSystemUpdater::getNumParticleSystems ) )    
        .def( 
            "getParticleSystem"
            , (::osgParticle::ParticleSystem * ( ::osgParticle::ParticleSystemUpdater::* )( unsigned int ) )( &::osgParticle::ParticleSystemUpdater::getParticleSystem )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getParticleSystem"
            , (::osgParticle::ParticleSystem const * ( ::osgParticle::ParticleSystemUpdater::* )( unsigned int ) const)( &::osgParticle::ParticleSystemUpdater::getParticleSystem )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getParticleSystemIndex"
            , (unsigned int ( ::osgParticle::ParticleSystemUpdater::* )( ::osgParticle::ParticleSystem const * ) const)( &::osgParticle::ParticleSystemUpdater::getParticleSystemIndex )
            , ( bp::arg("ps") ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgParticle::ParticleSystemUpdater::* )( ::osg::Object const * ) const)(&::osgParticle::ParticleSystemUpdater::isSameKindAs)
            , (bool ( ParticleSystemUpdater_wrapper::* )( ::osg::Object const * ) const)(&ParticleSystemUpdater_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgParticle::ParticleSystemUpdater::* )(  ) const)(&::osgParticle::ParticleSystemUpdater::libraryName)
            , (char const * ( ParticleSystemUpdater_wrapper::* )(  ) const)(&ParticleSystemUpdater_wrapper::default_libraryName) )    
        .def( 
            "removeParticleSystem"
            , (bool ( ::osgParticle::ParticleSystemUpdater::* )( ::osgParticle::ParticleSystem * ) )(&::osgParticle::ParticleSystemUpdater::removeParticleSystem)
            , (bool ( ParticleSystemUpdater_wrapper::* )( ::osgParticle::ParticleSystem * ) )(&ParticleSystemUpdater_wrapper::default_removeParticleSystem)
            , ( bp::arg("ps") ) )    
        .def( 
            "removeParticleSystem"
            , (bool ( ::osgParticle::ParticleSystemUpdater::* )( unsigned int,unsigned int ) )(&::osgParticle::ParticleSystemUpdater::removeParticleSystem)
            , (bool ( ParticleSystemUpdater_wrapper::* )( unsigned int,unsigned int ) )(&ParticleSystemUpdater_wrapper::default_removeParticleSystem)
            , ( bp::arg("i"), bp::arg("numParticleSystemsToRemove")=(unsigned int)(1) ) )    
        .def( 
            "replaceParticleSystem"
            , (bool ( ::osgParticle::ParticleSystemUpdater::* )( ::osgParticle::ParticleSystem *,::osgParticle::ParticleSystem * ) )(&::osgParticle::ParticleSystemUpdater::replaceParticleSystem)
            , (bool ( ParticleSystemUpdater_wrapper::* )( ::osgParticle::ParticleSystem *,::osgParticle::ParticleSystem * ) )(&ParticleSystemUpdater_wrapper::default_replaceParticleSystem)
            , ( bp::arg("origPS"), bp::arg("newPS") ) )    
        .def( 
            "setParticleSystem"
            , (bool ( ::osgParticle::ParticleSystemUpdater::* )( unsigned int,::osgParticle::ParticleSystem * ) )(&::osgParticle::ParticleSystemUpdater::setParticleSystem)
            , (bool ( ParticleSystemUpdater_wrapper::* )( unsigned int,::osgParticle::ParticleSystem * ) )(&ParticleSystemUpdater_wrapper::default_setParticleSystem)
            , ( bp::arg("i"), bp::arg("ps") ) )    
        .def( 
            "traverse"
            , (void ( ::osgParticle::ParticleSystemUpdater::* )( ::osg::NodeVisitor & ) )(&::osgParticle::ParticleSystemUpdater::traverse)
            , (void ( ParticleSystemUpdater_wrapper::* )( ::osg::NodeVisitor & ) )(&ParticleSystemUpdater_wrapper::default_traverse)
            , ( bp::arg("nv") ) );

}