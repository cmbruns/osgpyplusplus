// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "wrap_referenced.h"
#include "AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater_.pypp.hpp"

namespace bp = boost::python;

struct AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper : osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >, bp::wrapper< osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > > {

    AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper( )
    : osgAnimation::AnimationUpdateCallback<osg::StateAttributeCallback>( )
      , bp::wrapper< osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > >(){
        // null constructor
    
    }

    AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper(::std::string const & name )
    : osgAnimation::AnimationUpdateCallback<osg::StateAttributeCallback>( name )
      , bp::wrapper< osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::libraryName( );
    }

    virtual bool link( ::osgAnimation::Channel * arg0 ) {
        if( bp::override func_link = this->get_override( "link" ) )
            return func_link( boost::python::ptr(arg0) );
        else{
            return this->osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::link( boost::python::ptr(arg0) );
        }
    }
    
    bool default_link( ::osgAnimation::Channel * arg0 ) {
        return osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::link( boost::python::ptr(arg0) );
    }

    virtual int link( ::osgAnimation::Animation * animation ) {
        if( bp::override func_link = this->get_override( "link" ) )
            return func_link( boost::python::ptr(animation) );
        else{
            return this->osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::link( boost::python::ptr(animation) );
        }
    }
    
    int default_link( ::osgAnimation::Animation * animation ) {
        return osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::link( boost::python::ptr(animation) );
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

void register_AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__class(){

    { //::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >
        typedef bp::class_< AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper, bp::bases< osgAnimation::AnimationUpdateCallbackBase >, osg::ref_ptr< AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper >, boost::noncopyable > AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer_t;
        AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer_t AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer = AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer_t( "AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater_", bp::init< >() );
        bp::scope AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__scope( AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer );
        AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer.def( bp::init< std::string const & >(( bp::arg("name") )) );
        bp::implicitly_convertible< std::string const &, osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > >();
        { //::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::className
        
            typedef osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > exported_class_t;
            typedef char const * ( exported_class_t::*className_function_type )(  ) const;
            typedef char const * ( AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::*default_className_function_type )(  ) const;
            
            AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer.def( 
                "className"
                , className_function_type(&::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::className)
                , default_className_function_type(&AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::default_className) );
        
        }
        { //::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::clone
        
            typedef osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > exported_class_t;
            typedef ::osg::Object * ( exported_class_t::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer.def( 
                "clone"
                , clone_function_type(&::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::clone)
                , default_clone_function_type(&AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::cloneType
        
            typedef osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > exported_class_t;
            typedef ::osg::Object * ( exported_class_t::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::*default_cloneType_function_type )(  ) const;
            
            AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::cloneType)
                , default_cloneType_function_type(&AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::getName
        
            typedef osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > exported_class_t;
            typedef ::std::string const & ( exported_class_t::*getName_function_type )(  ) const;
            
            AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer.def( 
                "getName"
                , getName_function_type( &::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::getName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::isSameKindAs
        
            typedef osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > exported_class_t;
            typedef bool ( exported_class_t::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::isSameKindAs)
                , default_isSameKindAs_function_type(&AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::libraryName
        
            typedef osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > exported_class_t;
            typedef char const * ( exported_class_t::*libraryName_function_type )(  ) const;
            typedef char const * ( AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::*default_libraryName_function_type )(  ) const;
            
            AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::libraryName)
                , default_libraryName_function_type(&AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::default_libraryName) );
        
        }
        { //::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::link
        
            typedef osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > exported_class_t;
            typedef bool ( exported_class_t::*link_function_type )( ::osgAnimation::Channel * ) ;
            typedef bool ( AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::*default_link_function_type )( ::osgAnimation::Channel * ) ;
            
            AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer.def( 
                "link"
                , link_function_type(&::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::link)
                , default_link_function_type(&AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::default_link)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::link
        
            typedef osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback > exported_class_t;
            typedef int ( exported_class_t::*link_function_type )( ::osgAnimation::Animation * ) ;
            typedef int ( AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::*default_link_function_type )( ::osgAnimation::Animation * ) ;
            
            AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__exposer.def( 
                "link"
                , link_function_type(&::osgAnimation::AnimationUpdateCallback< osg::StateAttributeCallback >::link)
                , default_link_function_type(&AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__wrapper::default_link)
                , ( bp::arg("animation") ) );
        
        }
    }

}
