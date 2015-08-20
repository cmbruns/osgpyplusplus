// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "wrap_referenced.h"
#include "actionvisitor.pypp.hpp"

namespace bp = boost::python;

struct ActionVisitor_wrapper : osgAnimation::ActionVisitor, bp::wrapper< osgAnimation::ActionVisitor > {

    ActionVisitor_wrapper( )
    : osgAnimation::ActionVisitor( )
      , bp::wrapper< osgAnimation::ActionVisitor >(){
        // null constructor
    
    }

    virtual void apply( ::osgAnimation::Action & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::ActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::Action & action ) {
        osgAnimation::ActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::Timeline & tm ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(tm) );
        else{
            this->osgAnimation::ActionVisitor::apply( boost::ref(tm) );
        }
    }
    
    void default_apply( ::osgAnimation::Timeline & tm ) {
        osgAnimation::ActionVisitor::apply( boost::ref(tm) );
    }

    virtual void apply( ::osgAnimation::ActionBlendIn & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::ActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionBlendIn & action ) {
        osgAnimation::ActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionBlendOut & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::ActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionBlendOut & action ) {
        osgAnimation::ActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionAnimation & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::ActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionAnimation & action ) {
        osgAnimation::ActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionStripAnimation & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::ActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionStripAnimation & action ) {
        osgAnimation::ActionVisitor::apply( boost::ref(action) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgAnimation::ActionVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgAnimation::ActionVisitor::className( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgAnimation::ActionVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgAnimation::ActionVisitor::libraryName( );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Referenced::setThreadSafeRefUnref( threadSafe );
    }

};

void register_ActionVisitor_class(){

    bp::class_< ActionVisitor_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ActionVisitor_wrapper >, boost::noncopyable >( "ActionVisitor", bp::init< >() )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::ActionVisitor::* )( ::osgAnimation::Action & ))(&::osgAnimation::ActionVisitor::apply)
            , (void ( ActionVisitor_wrapper::* )( ::osgAnimation::Action & ))(&ActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::ActionVisitor::* )( ::osgAnimation::Timeline & ))(&::osgAnimation::ActionVisitor::apply)
            , (void ( ActionVisitor_wrapper::* )( ::osgAnimation::Timeline & ))(&ActionVisitor_wrapper::default_apply)
            , ( bp::arg("tm") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::ActionVisitor::* )( ::osgAnimation::ActionBlendIn & ))(&::osgAnimation::ActionVisitor::apply)
            , (void ( ActionVisitor_wrapper::* )( ::osgAnimation::ActionBlendIn & ))(&ActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::ActionVisitor::* )( ::osgAnimation::ActionBlendOut & ))(&::osgAnimation::ActionVisitor::apply)
            , (void ( ActionVisitor_wrapper::* )( ::osgAnimation::ActionBlendOut & ))(&ActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::ActionVisitor::* )( ::osgAnimation::ActionAnimation & ))(&::osgAnimation::ActionVisitor::apply)
            , (void ( ActionVisitor_wrapper::* )( ::osgAnimation::ActionAnimation & ))(&ActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::ActionVisitor::* )( ::osgAnimation::ActionStripAnimation & ))(&::osgAnimation::ActionVisitor::apply)
            , (void ( ActionVisitor_wrapper::* )( ::osgAnimation::ActionStripAnimation & ))(&ActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "className"
            , (char const * ( ::osgAnimation::ActionVisitor::* )(  )const)(&::osgAnimation::ActionVisitor::className)
            , (char const * ( ActionVisitor_wrapper::* )(  )const)(&ActionVisitor_wrapper::default_className) )    
        .def( 
            "getCurrentLayer"
            , (int ( ::osgAnimation::ActionVisitor::* )(  )const)( &::osgAnimation::ActionVisitor::getCurrentLayer ) )    
        .def( 
            "getCurrentTimeline"
            , (::osgAnimation::Timeline * ( ::osgAnimation::ActionVisitor::* )(  ))( &::osgAnimation::ActionVisitor::getCurrentTimeline )
            , bp::return_internal_reference< >() )    
        .def( 
            "getStackedFrameAction"
            , (::std::vector< std::pair<unsigned int, osg::ref_ptr<osgAnimation::Action> > > const & ( ::osgAnimation::ActionVisitor::* )(  )const)( &::osgAnimation::ActionVisitor::getStackedFrameAction )
            , bp::return_internal_reference< >() )    
        .def( 
            "libraryName"
            , (char const * ( ::osgAnimation::ActionVisitor::* )(  )const)(&::osgAnimation::ActionVisitor::libraryName)
            , (char const * ( ActionVisitor_wrapper::* )(  )const)(&ActionVisitor_wrapper::default_libraryName) )    
        .def( 
            "popFrameAction"
            , (void ( ::osgAnimation::ActionVisitor::* )(  ))( &::osgAnimation::ActionVisitor::popFrameAction ) )    
        .def( 
            "popTimeline"
            , (void ( ::osgAnimation::ActionVisitor::* )(  ))( &::osgAnimation::ActionVisitor::popTimeline ) )    
        .def( 
            "pushFrameActionOnStack"
            , (void ( ::osgAnimation::ActionVisitor::* )( ::osgAnimation::FrameAction const & ))( &::osgAnimation::ActionVisitor::pushFrameActionOnStack )
            , ( bp::arg("fa") ) )    
        .def( 
            "pushTimelineOnStack"
            , (void ( ::osgAnimation::ActionVisitor::* )( ::osgAnimation::Timeline * ))( &::osgAnimation::ActionVisitor::pushTimelineOnStack )
            , ( bp::arg("tm") ) )    
        .def( 
            "setCurrentLayer"
            , (void ( ::osgAnimation::ActionVisitor::* )( int ))( &::osgAnimation::ActionVisitor::setCurrentLayer )
            , ( bp::arg("layer") ) )    
        .def( 
            "traverse"
            , (void ( ::osgAnimation::ActionVisitor::* )( ::osgAnimation::Action & ))( &::osgAnimation::ActionVisitor::traverse )
            , ( bp::arg("visitor") ) );

}