// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "wrap_referenced.h"
#include "ActionBlendIn.pypp.hpp"

namespace bp = boost::python;

struct ActionBlendIn_wrapper : osgAnimation::ActionBlendIn, bp::wrapper< osgAnimation::ActionBlendIn > {

    ActionBlendIn_wrapper( )
    : osgAnimation::ActionBlendIn( )
      , bp::wrapper< osgAnimation::ActionBlendIn >(){
        // null constructor
    
    }

    ActionBlendIn_wrapper(::osgAnimation::Animation * animation, double duration, double weight )
    : osgAnimation::ActionBlendIn( boost::python::ptr(animation), duration, weight )
      , bp::wrapper< osgAnimation::ActionBlendIn >(){
        // constructor
    
    }

    virtual void accept( ::osgAnimation::ActionVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osgAnimation::ActionBlendIn::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osgAnimation::ActionVisitor & nv ) {
        osgAnimation::ActionBlendIn::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgAnimation::ActionBlendIn::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgAnimation::ActionBlendIn::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgAnimation::ActionBlendIn::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgAnimation::ActionBlendIn::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgAnimation::ActionBlendIn::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgAnimation::ActionBlendIn::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgAnimation::ActionBlendIn::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgAnimation::ActionBlendIn::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgAnimation::ActionBlendIn::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgAnimation::ActionBlendIn::libraryName( );
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

    virtual unsigned int getLoop(  ) const  {
        if( bp::override func_getLoop = this->get_override( "getLoop" ) )
            return func_getLoop(  );
        else{
            return this->osgAnimation::Action::getLoop(  );
        }
    }
    
    unsigned int default_getLoop(  ) const  {
        return osgAnimation::Action::getLoop( );
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

    virtual void setLoop( unsigned int nb ) {
        if( bp::override func_setLoop = this->get_override( "setLoop" ) )
            func_setLoop( nb );
        else{
            this->osgAnimation::Action::setLoop( nb );
        }
    }
    
    void default_setLoop( unsigned int nb ) {
        osgAnimation::Action::setLoop( nb );
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

    virtual void traverse( ::osgAnimation::ActionVisitor & arg0 ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(arg0) );
        else{
            this->osgAnimation::Action::traverse( boost::ref(arg0) );
        }
    }
    
    void default_traverse( ::osgAnimation::ActionVisitor & arg0 ) {
        osgAnimation::Action::traverse( boost::ref(arg0) );
    }

};

void register_ActionBlendIn_class(){

    bp::class_< ActionBlendIn_wrapper, bp::bases< osgAnimation::Action >, osg::ref_ptr< ActionBlendIn_wrapper >, boost::noncopyable >( "ActionBlendIn", "\n blend in from 0 to weight in duration\n", bp::init< >() )    
        .def( bp::init< osgAnimation::Animation *, double, double >(( bp::arg("animation"), bp::arg("duration"), bp::arg("weight") )) )    
        .def( 
            "accept"
            , (void ( ::osgAnimation::ActionBlendIn::* )( ::osgAnimation::ActionVisitor & ) )(&::osgAnimation::ActionBlendIn::accept)
            , (void ( ActionBlendIn_wrapper::* )( ::osgAnimation::ActionVisitor & ) )(&ActionBlendIn_wrapper::default_accept)
            , ( bp::arg("nv") ) )    
        .def( 
            "className"
            , (char const * ( ::osgAnimation::ActionBlendIn::* )(  ) const)(&::osgAnimation::ActionBlendIn::className)
            , (char const * ( ActionBlendIn_wrapper::* )(  ) const)(&ActionBlendIn_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgAnimation::ActionBlendIn::* )( ::osg::CopyOp const & ) const)(&::osgAnimation::ActionBlendIn::clone)
            , (::osg::Object * ( ActionBlendIn_wrapper::* )( ::osg::CopyOp const & ) const)(&ActionBlendIn_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgAnimation::ActionBlendIn::* )(  ) const)(&::osgAnimation::ActionBlendIn::cloneType)
            , (::osg::Object * ( ActionBlendIn_wrapper::* )(  ) const)(&ActionBlendIn_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeWeight"
            , (void ( ::osgAnimation::ActionBlendIn::* )( unsigned int ) )( &::osgAnimation::ActionBlendIn::computeWeight )
            , ( bp::arg("frame") ) )    
        .def( 
            "getAnimation"
            , (::osgAnimation::Animation * ( ::osgAnimation::ActionBlendIn::* )(  ) )( &::osgAnimation::ActionBlendIn::getAnimation )
            , bp::return_internal_reference< >() )    
        .def( 
            "getWeight"
            , (double ( ::osgAnimation::ActionBlendIn::* )(  ) const)( &::osgAnimation::ActionBlendIn::getWeight ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgAnimation::ActionBlendIn::* )( ::osg::Object const * ) const)(&::osgAnimation::ActionBlendIn::isSameKindAs)
            , (bool ( ActionBlendIn_wrapper::* )( ::osg::Object const * ) const)(&ActionBlendIn_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgAnimation::ActionBlendIn::* )(  ) const)(&::osgAnimation::ActionBlendIn::libraryName)
            , (char const * ( ActionBlendIn_wrapper::* )(  ) const)(&ActionBlendIn_wrapper::default_libraryName) )    
        .def( 
            "getLoop"
            , (unsigned int ( ::osgAnimation::Action::* )(  ) const)(&::osgAnimation::Action::getLoop)
            , (unsigned int ( ActionBlendIn_wrapper::* )(  ) const)(&ActionBlendIn_wrapper::default_getLoop) )    
        .def( 
            "setLoop"
            , (void ( ::osgAnimation::Action::* )( unsigned int ) )(&::osgAnimation::Action::setLoop)
            , (void ( ActionBlendIn_wrapper::* )( unsigned int ) )(&ActionBlendIn_wrapper::default_setLoop)
            , ( bp::arg("nb") ) )    
        .def( 
            "traverse"
            , (void ( ::osgAnimation::Action::* )( ::osgAnimation::ActionVisitor & ) )(&::osgAnimation::Action::traverse)
            , (void ( ActionBlendIn_wrapper::* )( ::osgAnimation::ActionVisitor & ) )(&ActionBlendIn_wrapper::default_traverse)
            , ( bp::arg("arg0") ) );

}
