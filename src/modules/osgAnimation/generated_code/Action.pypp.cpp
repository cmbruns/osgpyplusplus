// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgAnimation.h"
#include "wrap_referenced.h"
#include "Action.pypp.hpp"

namespace bp = boost::python;

struct Action_wrapper : osgAnimation::Action, bp::wrapper< osgAnimation::Action > {

    struct Callback_wrapper : osgAnimation::Action::Callback, bp::wrapper< osgAnimation::Action::Callback > {
    
        Callback_wrapper( )
        : osgAnimation::Action::Callback( )
          , bp::wrapper< osgAnimation::Action::Callback >(){
            // null constructor
        
        }
    
        virtual char const * className(  ) const  {
            if( bp::override func_className = this->get_override( "className" ) )
                return func_className(  );
            else{
                return this->osgAnimation::Action::Callback::className(  );
            }
        }
        
        char const * default_className(  ) const  {
            return osgAnimation::Action::Callback::className( );
        }
    
        virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
            if( bp::override func_clone = this->get_override( "clone" ) )
                return func_clone( boost::ref(copyop) );
            else{
                return this->osgAnimation::Action::Callback::clone( boost::ref(copyop) );
            }
        }
        
        ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
            return osgAnimation::Action::Callback::clone( boost::ref(copyop) );
        }
    
        virtual ::osg::Object * cloneType(  ) const  {
            if( bp::override func_cloneType = this->get_override( "cloneType" ) )
                return func_cloneType(  );
            else{
                return this->osgAnimation::Action::Callback::cloneType(  );
            }
        }
        
        ::osg::Object * default_cloneType(  ) const  {
            return osgAnimation::Action::Callback::cloneType( );
        }
    
        virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
            if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
                return func_isSameKindAs( boost::python::ptr(obj) );
            else{
                return this->osgAnimation::Action::Callback::isSameKindAs( boost::python::ptr(obj) );
            }
        }
        
        bool default_isSameKindAs( ::osg::Object const * obj ) const  {
            return osgAnimation::Action::Callback::isSameKindAs( boost::python::ptr(obj) );
        }
    
        virtual char const * libraryName(  ) const  {
            if( bp::override func_libraryName = this->get_override( "libraryName" ) )
                return func_libraryName(  );
            else{
                return this->osgAnimation::Action::Callback::libraryName(  );
            }
        }
        
        char const * default_libraryName(  ) const  {
            return osgAnimation::Action::Callback::libraryName( );
        }
    
        virtual void operator()( ::osgAnimation::Action * arg0, ::osgAnimation::ActionVisitor * arg1 ) {
            if( bp::override func___call__ = this->get_override( "__call__" ) )
                func___call__( boost::python::ptr(arg0), boost::python::ptr(arg1) );
            else{
                this->osgAnimation::Action::Callback::operator()( boost::python::ptr(arg0), boost::python::ptr(arg1) );
            }
        }
        
        void default___call__( ::osgAnimation::Action * arg0, ::osgAnimation::ActionVisitor * arg1 ) {
            osgAnimation::Action::Callback::operator()( boost::python::ptr(arg0), boost::python::ptr(arg1) );
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

    Action_wrapper( )
    : osgAnimation::Action( )
      , bp::wrapper< osgAnimation::Action >(){
        // null constructor
    
    }

    virtual void accept( ::osgAnimation::ActionVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osgAnimation::Action::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osgAnimation::ActionVisitor & nv ) {
        osgAnimation::Action::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgAnimation::Action::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgAnimation::Action::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgAnimation::Action::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgAnimation::Action::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgAnimation::Action::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgAnimation::Action::cloneType( );
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

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgAnimation::Action::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgAnimation::Action::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgAnimation::Action::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgAnimation::Action::libraryName( );
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

void register_Action_class(){

    { //::osgAnimation::Action
        typedef bp::class_< Action_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< Action_wrapper >, boost::noncopyable > Action_exposer_t;
        Action_exposer_t Action_exposer = Action_exposer_t( "Action", bp::init< >() );
        bp::scope Action_scope( Action_exposer );
        bp::class_< Action_wrapper::Callback_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< Action_wrapper::Callback_wrapper >, boost::noncopyable >( "Callback", bp::init< >() )    
            .def( 
                "addNestedCallback"
                , (void ( ::osgAnimation::Action::Callback::* )( ::osgAnimation::Action::Callback * ) )( &::osgAnimation::Action::Callback::addNestedCallback )
                , ( bp::arg("callback") ) )    
            .def( 
                "className"
                , (char const * ( ::osgAnimation::Action::Callback::* )(  ) const)(&::osgAnimation::Action::Callback::className)
                , (char const * ( Action_wrapper::Callback_wrapper::* )(  ) const)(&Action_wrapper::Callback_wrapper::default_className) )    
            .def( 
                "clone"
                , (::osg::Object * ( ::osgAnimation::Action::Callback::* )( ::osg::CopyOp const & ) const)(&::osgAnimation::Action::Callback::clone)
                , (::osg::Object * ( Action_wrapper::Callback_wrapper::* )( ::osg::CopyOp const & ) const)(&Action_wrapper::Callback_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() )    
            .def( 
                "cloneType"
                , (::osg::Object * ( ::osgAnimation::Action::Callback::* )(  ) const)(&::osgAnimation::Action::Callback::cloneType)
                , (::osg::Object * ( Action_wrapper::Callback_wrapper::* )(  ) const)(&Action_wrapper::Callback_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() )    
            .def( 
                "getNestedCallback"
                , (::osgAnimation::Action::Callback * ( ::osgAnimation::Action::Callback::* )(  ) )( &::osgAnimation::Action::Callback::getNestedCallback )
                , bp::return_internal_reference< >() )    
            .def( 
                "isSameKindAs"
                , (bool ( ::osgAnimation::Action::Callback::* )( ::osg::Object const * ) const)(&::osgAnimation::Action::Callback::isSameKindAs)
                , (bool ( Action_wrapper::Callback_wrapper::* )( ::osg::Object const * ) const)(&Action_wrapper::Callback_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) )    
            .def( 
                "libraryName"
                , (char const * ( ::osgAnimation::Action::Callback::* )(  ) const)(&::osgAnimation::Action::Callback::libraryName)
                , (char const * ( Action_wrapper::Callback_wrapper::* )(  ) const)(&Action_wrapper::Callback_wrapper::default_libraryName) )    
            .def( 
                "__call__"
                , (void ( ::osgAnimation::Action::Callback::* )( ::osgAnimation::Action *,::osgAnimation::ActionVisitor * ) )(&::osgAnimation::Action::Callback::operator())
                , (void ( Action_wrapper::Callback_wrapper::* )( ::osgAnimation::Action *,::osgAnimation::ActionVisitor * ) )(&Action_wrapper::Callback_wrapper::default___call__)
                , ( bp::arg("arg0"), bp::arg("arg1") ) )    
            .def( 
                "removeCallback"
                , (void ( ::osgAnimation::Action::Callback::* )( ::osgAnimation::Action::Callback * ) )( &::osgAnimation::Action::Callback::removeCallback )
                , ( bp::arg("cb") ) );
        { //::osgAnimation::Action::accept
        
            typedef void ( ::osgAnimation::Action::*accept_function_type )( ::osgAnimation::ActionVisitor & ) ;
            typedef void ( Action_wrapper::*default_accept_function_type )( ::osgAnimation::ActionVisitor & ) ;
            
            Action_exposer.def( 
                "accept"
                , accept_function_type(&::osgAnimation::Action::accept)
                , default_accept_function_type(&Action_wrapper::default_accept)
                , ( bp::arg("nv") ) );
        
        }
        { //::osgAnimation::Action::className
        
            typedef char const * ( ::osgAnimation::Action::*className_function_type )(  ) const;
            typedef char const * ( Action_wrapper::*default_className_function_type )(  ) const;
            
            Action_exposer.def( 
                "className"
                , className_function_type(&::osgAnimation::Action::className)
                , default_className_function_type(&Action_wrapper::default_className) );
        
        }
        { //::osgAnimation::Action::clone
        
            typedef ::osg::Object * ( ::osgAnimation::Action::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( Action_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            Action_exposer.def( 
                "clone"
                , clone_function_type(&::osgAnimation::Action::clone)
                , default_clone_function_type(&Action_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgAnimation::Action::cloneType
        
            typedef ::osg::Object * ( ::osgAnimation::Action::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( Action_wrapper::*default_cloneType_function_type )(  ) const;
            
            Action_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osgAnimation::Action::cloneType)
                , default_cloneType_function_type(&Action_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgAnimation::Action::evaluateFrame
        
            typedef bool ( ::osgAnimation::Action::*evaluateFrame_function_type )( unsigned int,unsigned int &,unsigned int & ) ;
            
            Action_exposer.def( 
                "evaluateFrame"
                , evaluateFrame_function_type( &::osgAnimation::Action::evaluateFrame )
                , ( bp::arg("frame"), bp::arg("resultframe"), bp::arg("nbloop") ) );
        
        }
        { //::osgAnimation::Action::getCallback
        
            typedef ::osgAnimation::Action::Callback * ( ::osgAnimation::Action::*getCallback_function_type )( unsigned int ) ;
            
            Action_exposer.def( 
                "getCallback"
                , getCallback_function_type( &::osgAnimation::Action::getCallback )
                , ( bp::arg("frame") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgAnimation::Action::getDuration
        
            typedef double ( ::osgAnimation::Action::*getDuration_function_type )(  ) const;
            
            Action_exposer.def( 
                "getDuration"
                , getDuration_function_type( &::osgAnimation::Action::getDuration ) );
        
        }
        { //::osgAnimation::Action::getFrameCallback
        
            typedef ::osgAnimation::Action::Callback * ( ::osgAnimation::Action::*getFrameCallback_function_type )( unsigned int ) ;
            
            Action_exposer.def( 
                "getFrameCallback"
                , getFrameCallback_function_type( &::osgAnimation::Action::getFrameCallback )
                , ( bp::arg("frame") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgAnimation::Action::getFrameCallback
        
            typedef ::osgAnimation::Action::Callback * ( ::osgAnimation::Action::*getFrameCallback_function_type )( double ) ;
            
            Action_exposer.def( 
                "getFrameCallback"
                , getFrameCallback_function_type( &::osgAnimation::Action::getFrameCallback )
                , ( bp::arg("time") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgAnimation::Action::getFramesPerSecond
        
            typedef unsigned int ( ::osgAnimation::Action::*getFramesPerSecond_function_type )(  ) const;
            
            Action_exposer.def( 
                "getFramesPerSecond"
                , getFramesPerSecond_function_type( &::osgAnimation::Action::getFramesPerSecond ) );
        
        }
        { //::osgAnimation::Action::getLoop
        
            typedef unsigned int ( ::osgAnimation::Action::*getLoop_function_type )(  ) const;
            typedef unsigned int ( Action_wrapper::*default_getLoop_function_type )(  ) const;
            
            Action_exposer.def( 
                "getLoop"
                , getLoop_function_type(&::osgAnimation::Action::getLoop)
                , default_getLoop_function_type(&Action_wrapper::default_getLoop) );
        
        }
        { //::osgAnimation::Action::getNumFrames
        
            typedef unsigned int ( ::osgAnimation::Action::*getNumFrames_function_type )(  ) const;
            
            Action_exposer.def( 
                "getNumFrames"
                , getNumFrames_function_type( &::osgAnimation::Action::getNumFrames ) );
        
        }
        { //::osgAnimation::Action::isSameKindAs
        
            typedef bool ( ::osgAnimation::Action::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( Action_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            Action_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osgAnimation::Action::isSameKindAs)
                , default_isSameKindAs_function_type(&Action_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osgAnimation::Action::libraryName
        
            typedef char const * ( ::osgAnimation::Action::*libraryName_function_type )(  ) const;
            typedef char const * ( Action_wrapper::*default_libraryName_function_type )(  ) const;
            
            Action_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgAnimation::Action::libraryName)
                , default_libraryName_function_type(&Action_wrapper::default_libraryName) );
        
        }
        { //::osgAnimation::Action::removeCallback
        
            typedef void ( ::osgAnimation::Action::*removeCallback_function_type )( ::osgAnimation::Action::Callback * ) ;
            
            Action_exposer.def( 
                "removeCallback"
                , removeCallback_function_type( &::osgAnimation::Action::removeCallback )
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgAnimation::Action::setCallback
        
            typedef void ( ::osgAnimation::Action::*setCallback_function_type )( double,::osgAnimation::Action::Callback * ) ;
            
            Action_exposer.def( 
                "setCallback"
                , setCallback_function_type( &::osgAnimation::Action::setCallback )
                , ( bp::arg("when"), bp::arg("callback") ) );
        
        }
        { //::osgAnimation::Action::setCallback
        
            typedef void ( ::osgAnimation::Action::*setCallback_function_type )( unsigned int,::osgAnimation::Action::Callback * ) ;
            
            Action_exposer.def( 
                "setCallback"
                , setCallback_function_type( &::osgAnimation::Action::setCallback )
                , ( bp::arg("frame"), bp::arg("callback") ) );
        
        }
        { //::osgAnimation::Action::setDuration
        
            typedef void ( ::osgAnimation::Action::*setDuration_function_type )( double ) ;
            
            Action_exposer.def( 
                "setDuration"
                , setDuration_function_type( &::osgAnimation::Action::setDuration )
                , ( bp::arg("duration") ) );
        
        }
        { //::osgAnimation::Action::setLoop
        
            typedef void ( ::osgAnimation::Action::*setLoop_function_type )( unsigned int ) ;
            typedef void ( Action_wrapper::*default_setLoop_function_type )( unsigned int ) ;
            
            Action_exposer.def( 
                "setLoop"
                , setLoop_function_type(&::osgAnimation::Action::setLoop)
                , default_setLoop_function_type(&Action_wrapper::default_setLoop)
                , ( bp::arg("nb") ) );
        
        }
        { //::osgAnimation::Action::setNumFrames
        
            typedef void ( ::osgAnimation::Action::*setNumFrames_function_type )( unsigned int ) ;
            
            Action_exposer.def( 
                "setNumFrames"
                , setNumFrames_function_type( &::osgAnimation::Action::setNumFrames )
                , ( bp::arg("numFrames") ) );
        
        }
        { //::osgAnimation::Action::traverse
        
            typedef void ( ::osgAnimation::Action::*traverse_function_type )( ::osgAnimation::ActionVisitor & ) ;
            typedef void ( Action_wrapper::*default_traverse_function_type )( ::osgAnimation::ActionVisitor & ) ;
            
            Action_exposer.def( 
                "traverse"
                , traverse_function_type(&::osgAnimation::Action::traverse)
                , default_traverse_function_type(&Action_wrapper::default_traverse)
                , ( bp::arg("arg0") ) );
        
        }
    }

}
