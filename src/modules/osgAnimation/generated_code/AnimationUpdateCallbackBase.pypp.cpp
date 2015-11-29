// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "wrap_referenced.h"
#include "AnimationUpdateCallbackBase.pypp.hpp"

namespace bp = boost::python;

struct AnimationUpdateCallbackBase_wrapper : osgAnimation::AnimationUpdateCallbackBase, bp::wrapper< osgAnimation::AnimationUpdateCallbackBase > {

    AnimationUpdateCallbackBase_wrapper()
    : osgAnimation::AnimationUpdateCallbackBase()
      , bp::wrapper< osgAnimation::AnimationUpdateCallbackBase >(){
        // null constructor
        
    }

    virtual bool link( ::osgAnimation::Channel * channel ){
        bp::override func_link = this->get_override( "link" );
        return func_link( boost::python::ptr(channel) );
    }

    virtual int link( ::osgAnimation::Animation * animation ){
        bp::override func_link = this->get_override( "link" );
        return func_link( boost::python::ptr(animation) );
    }

    virtual char const * className(  ) const {
        bp::override func_className = this->get_override( "className" );
        return func_className(  );
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

    virtual bool isSameKindAs( ::osg::Object const * arg0 ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(arg0) );
        else{
            return this->osg::Object::isSameKindAs( boost::python::ptr(arg0) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * arg0 ) const  {
        return osg::Object::isSameKindAs( boost::python::ptr(arg0) );
    }

    virtual char const * libraryName(  ) const {
        bp::override func_libraryName = this->get_override( "libraryName" );
        return func_libraryName(  );
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

void register_AnimationUpdateCallbackBase_class(){

    bp::class_< AnimationUpdateCallbackBase_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< AnimationUpdateCallbackBase_wrapper >, boost::noncopyable >( "AnimationUpdateCallbackBase", bp::no_init )    
        .def( 
            "link"
            , bp::pure_virtual( (bool ( ::osgAnimation::AnimationUpdateCallbackBase::* )( ::osgAnimation::Channel * ) )(&::osgAnimation::AnimationUpdateCallbackBase::link) )
            , ( bp::arg("channel") ) )    
        .def( 
            "link"
            , bp::pure_virtual( (int ( ::osgAnimation::AnimationUpdateCallbackBase::* )( ::osgAnimation::Animation * ) )(&::osgAnimation::AnimationUpdateCallbackBase::link) )
            , ( bp::arg("animation") ) );

}
