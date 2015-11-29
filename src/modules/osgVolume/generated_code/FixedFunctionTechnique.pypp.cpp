// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgVolume.h"
#include "wrap_referenced.h"
#include "FixedFunctionTechnique.pypp.hpp"

namespace bp = boost::python;

struct FixedFunctionTechnique_wrapper : osgVolume::FixedFunctionTechnique, bp::wrapper< osgVolume::FixedFunctionTechnique > {

    FixedFunctionTechnique_wrapper( )
    : osgVolume::FixedFunctionTechnique( )
      , bp::wrapper< osgVolume::FixedFunctionTechnique >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgVolume::FixedFunctionTechnique::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgVolume::FixedFunctionTechnique::className( );
    }

    virtual void cleanSceneGraph(  ) {
        if( bp::override func_cleanSceneGraph = this->get_override( "cleanSceneGraph" ) )
            func_cleanSceneGraph(  );
        else{
            this->osgVolume::FixedFunctionTechnique::cleanSceneGraph(  );
        }
    }
    
    void default_cleanSceneGraph(  ) {
        osgVolume::FixedFunctionTechnique::cleanSceneGraph( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgVolume::FixedFunctionTechnique::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgVolume::FixedFunctionTechnique::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgVolume::FixedFunctionTechnique::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgVolume::FixedFunctionTechnique::cloneType( );
    }

    virtual void cull( ::osgUtil::CullVisitor * nv ) {
        if( bp::override func_cull = this->get_override( "cull" ) )
            func_cull( boost::python::ptr(nv) );
        else{
            this->osgVolume::FixedFunctionTechnique::cull( boost::python::ptr(nv) );
        }
    }
    
    void default_cull( ::osgUtil::CullVisitor * nv ) {
        osgVolume::FixedFunctionTechnique::cull( boost::python::ptr(nv) );
    }

    virtual void init(  ) {
        if( bp::override func_init = this->get_override( "init" ) )
            func_init(  );
        else{
            this->osgVolume::FixedFunctionTechnique::init(  );
        }
    }
    
    void default_init(  ) {
        osgVolume::FixedFunctionTechnique::init( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgVolume::FixedFunctionTechnique::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgVolume::FixedFunctionTechnique::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgVolume::FixedFunctionTechnique::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgVolume::FixedFunctionTechnique::libraryName( );
    }

    virtual void traverse( ::osg::NodeVisitor & nv ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(nv) );
        else{
            this->osgVolume::FixedFunctionTechnique::traverse( boost::ref(nv) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv ) {
        osgVolume::FixedFunctionTechnique::traverse( boost::ref(nv) );
    }

    virtual void update( ::osgUtil::UpdateVisitor * nv ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( boost::python::ptr(nv) );
        else{
            this->osgVolume::FixedFunctionTechnique::update( boost::python::ptr(nv) );
        }
    }
    
    void default_update( ::osgUtil::UpdateVisitor * nv ) {
        osgVolume::FixedFunctionTechnique::update( boost::python::ptr(nv) );
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
            this->osg::Object::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::Object::resizeGLObjectBuffers( arg0 );
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

void register_FixedFunctionTechnique_class(){

    bp::class_< FixedFunctionTechnique_wrapper, bp::bases< osgVolume::VolumeTechnique >, osg::ref_ptr< FixedFunctionTechnique_wrapper >, boost::noncopyable >( "FixedFunctionTechnique", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "className"
            , (char const * ( ::osgVolume::FixedFunctionTechnique::* )(  ) const)(&::osgVolume::FixedFunctionTechnique::className)
            , (char const * ( FixedFunctionTechnique_wrapper::* )(  ) const)(&FixedFunctionTechnique_wrapper::default_className) )    
        .def( 
            "cleanSceneGraph"
            , (void ( ::osgVolume::FixedFunctionTechnique::* )(  ) )(&::osgVolume::FixedFunctionTechnique::cleanSceneGraph)
            , (void ( FixedFunctionTechnique_wrapper::* )(  ) )(&FixedFunctionTechnique_wrapper::default_cleanSceneGraph) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgVolume::FixedFunctionTechnique::* )( ::osg::CopyOp const & ) const)(&::osgVolume::FixedFunctionTechnique::clone)
            , (::osg::Object * ( FixedFunctionTechnique_wrapper::* )( ::osg::CopyOp const & ) const)(&FixedFunctionTechnique_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgVolume::FixedFunctionTechnique::* )(  ) const)(&::osgVolume::FixedFunctionTechnique::cloneType)
            , (::osg::Object * ( FixedFunctionTechnique_wrapper::* )(  ) const)(&FixedFunctionTechnique_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cull"
            , (void ( ::osgVolume::FixedFunctionTechnique::* )( ::osgUtil::CullVisitor * ) )(&::osgVolume::FixedFunctionTechnique::cull)
            , (void ( FixedFunctionTechnique_wrapper::* )( ::osgUtil::CullVisitor * ) )(&FixedFunctionTechnique_wrapper::default_cull)
            , ( bp::arg("nv") ) )    
        .def( 
            "getNumSlices"
            , (unsigned int ( ::osgVolume::FixedFunctionTechnique::* )(  ) const)( &::osgVolume::FixedFunctionTechnique::getNumSlices ) )    
        .def( 
            "init"
            , (void ( ::osgVolume::FixedFunctionTechnique::* )(  ) )(&::osgVolume::FixedFunctionTechnique::init)
            , (void ( FixedFunctionTechnique_wrapper::* )(  ) )(&FixedFunctionTechnique_wrapper::default_init) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgVolume::FixedFunctionTechnique::* )( ::osg::Object const * ) const)(&::osgVolume::FixedFunctionTechnique::isSameKindAs)
            , (bool ( FixedFunctionTechnique_wrapper::* )( ::osg::Object const * ) const)(&FixedFunctionTechnique_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgVolume::FixedFunctionTechnique::* )(  ) const)(&::osgVolume::FixedFunctionTechnique::libraryName)
            , (char const * ( FixedFunctionTechnique_wrapper::* )(  ) const)(&FixedFunctionTechnique_wrapper::default_libraryName) )    
        .def( 
            "setNumSlices"
            , (void ( ::osgVolume::FixedFunctionTechnique::* )( unsigned int ) )( &::osgVolume::FixedFunctionTechnique::setNumSlices )
            , ( bp::arg("numSlices") ) )    
        .def( 
            "traverse"
            , (void ( ::osgVolume::FixedFunctionTechnique::* )( ::osg::NodeVisitor & ) )(&::osgVolume::FixedFunctionTechnique::traverse)
            , (void ( FixedFunctionTechnique_wrapper::* )( ::osg::NodeVisitor & ) )(&FixedFunctionTechnique_wrapper::default_traverse)
            , ( bp::arg("nv") ) )    
        .def( 
            "update"
            , (void ( ::osgVolume::FixedFunctionTechnique::* )( ::osgUtil::UpdateVisitor * ) )(&::osgVolume::FixedFunctionTechnique::update)
            , (void ( FixedFunctionTechnique_wrapper::* )( ::osgUtil::UpdateVisitor * ) )(&FixedFunctionTechnique_wrapper::default_update)
            , ( bp::arg("nv") ) );

}
