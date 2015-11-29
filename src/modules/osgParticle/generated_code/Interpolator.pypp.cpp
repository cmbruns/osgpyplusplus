// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgParticle.h"
#include "wrap_referenced.h"
#include "Interpolator.pypp.hpp"

namespace bp = boost::python;

struct Interpolator_wrapper : osgParticle::Interpolator, bp::wrapper< osgParticle::Interpolator > {

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgParticle::Interpolator::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgParticle::Interpolator::className( );
    }

    virtual float interpolate( float t, float y1, float y2 ) const {
        bp::override func_interpolate = this->get_override( "interpolate" );
        return func_interpolate( t, y1, y2 );
    }

    virtual ::osg::Vec2 interpolate( float t, ::osg::Vec2 const & y1, ::osg::Vec2 const & y2 ) const  {
        if( bp::override func_interpolate = this->get_override( "interpolate" ) )
            return func_interpolate( t, boost::ref(y1), boost::ref(y2) );
        else{
            return this->osgParticle::Interpolator::interpolate( t, boost::ref(y1), boost::ref(y2) );
        }
    }
    
    ::osg::Vec2 default_interpolate( float t, ::osg::Vec2 const & y1, ::osg::Vec2 const & y2 ) const  {
        return osgParticle::Interpolator::interpolate( t, boost::ref(y1), boost::ref(y2) );
    }

    virtual ::osg::Vec3 interpolate( float t, ::osg::Vec3 const & y1, ::osg::Vec3 const & y2 ) const  {
        if( bp::override func_interpolate = this->get_override( "interpolate" ) )
            return func_interpolate( t, boost::ref(y1), boost::ref(y2) );
        else{
            return this->osgParticle::Interpolator::interpolate( t, boost::ref(y1), boost::ref(y2) );
        }
    }
    
    ::osg::Vec3 default_interpolate( float t, ::osg::Vec3 const & y1, ::osg::Vec3 const & y2 ) const  {
        return osgParticle::Interpolator::interpolate( t, boost::ref(y1), boost::ref(y2) );
    }

    virtual ::osg::Vec4 interpolate( float t, ::osg::Vec4 const & y1, ::osg::Vec4 const & y2 ) const  {
        if( bp::override func_interpolate = this->get_override( "interpolate" ) )
            return func_interpolate( t, boost::ref(y1), boost::ref(y2) );
        else{
            return this->osgParticle::Interpolator::interpolate( t, boost::ref(y1), boost::ref(y2) );
        }
    }
    
    ::osg::Vec4 default_interpolate( float t, ::osg::Vec4 const & y1, ::osg::Vec4 const & y2 ) const  {
        return osgParticle::Interpolator::interpolate( t, boost::ref(y1), boost::ref(y2) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgParticle::Interpolator::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgParticle::Interpolator::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgParticle::Interpolator::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgParticle::Interpolator::libraryName( );
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

void register_Interpolator_class(){

    bp::class_< Interpolator_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< Interpolator_wrapper >, boost::noncopyable >( "Interpolator", "\n An abstract base class for implementing interpolators.\n", bp::no_init )    
        .def( 
            "className"
            , (char const * ( ::osgParticle::Interpolator::* )(  ) const)(&::osgParticle::Interpolator::className)
            , (char const * ( Interpolator_wrapper::* )(  ) const)(&Interpolator_wrapper::default_className) )    
        .def( 
            "interpolate"
            , bp::pure_virtual( (float ( ::osgParticle::Interpolator::* )( float,float,float ) const)(&::osgParticle::Interpolator::interpolate) )
            , ( bp::arg("t"), bp::arg("y1"), bp::arg("y2") )
            , "\n Interpolate between floats. Must be overriden in descendant classes.\n" )    
        .def( 
            "interpolate"
            , (::osg::Vec2 ( ::osgParticle::Interpolator::* )( float,::osg::Vec2 const &,::osg::Vec2 const & ) const)(&::osgParticle::Interpolator::interpolate)
            , (::osg::Vec2 ( Interpolator_wrapper::* )( float,::osg::Vec2 const &,::osg::Vec2 const & ) const)(&Interpolator_wrapper::default_interpolate)
            , ( bp::arg("t"), bp::arg("y1"), bp::arg("y2") ) )    
        .def( 
            "interpolate"
            , (::osg::Vec3 ( ::osgParticle::Interpolator::* )( float,::osg::Vec3 const &,::osg::Vec3 const & ) const)(&::osgParticle::Interpolator::interpolate)
            , (::osg::Vec3 ( Interpolator_wrapper::* )( float,::osg::Vec3 const &,::osg::Vec3 const & ) const)(&Interpolator_wrapper::default_interpolate)
            , ( bp::arg("t"), bp::arg("y1"), bp::arg("y2") ) )    
        .def( 
            "interpolate"
            , (::osg::Vec4 ( ::osgParticle::Interpolator::* )( float,::osg::Vec4 const &,::osg::Vec4 const & ) const)(&::osgParticle::Interpolator::interpolate)
            , (::osg::Vec4 ( Interpolator_wrapper::* )( float,::osg::Vec4 const &,::osg::Vec4 const & ) const)(&Interpolator_wrapper::default_interpolate)
            , ( bp::arg("t"), bp::arg("y1"), bp::arg("y2") ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgParticle::Interpolator::* )( ::osg::Object const * ) const)(&::osgParticle::Interpolator::isSameKindAs)
            , (bool ( Interpolator_wrapper::* )( ::osg::Object const * ) const)(&Interpolator_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgParticle::Interpolator::* )(  ) const)(&::osgParticle::Interpolator::libraryName)
            , (char const * ( Interpolator_wrapper::* )(  ) const)(&Interpolator_wrapper::default_libraryName) );

}
