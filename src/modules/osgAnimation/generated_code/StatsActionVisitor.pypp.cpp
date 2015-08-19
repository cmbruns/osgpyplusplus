// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "wrap_referenced.h"
#include "statsactionvisitor.pypp.hpp"

namespace bp = boost::python;

struct StatsActionVisitor_wrapper : osgAnimation::StatsActionVisitor, bp::wrapper< osgAnimation::StatsActionVisitor > {

    StatsActionVisitor_wrapper( )
    : osgAnimation::StatsActionVisitor( )
      , bp::wrapper< osgAnimation::StatsActionVisitor >(){
        // null constructor
    
    }

    StatsActionVisitor_wrapper(::osg::Stats * stats, unsigned int frame )
    : osgAnimation::StatsActionVisitor( boost::python::ptr(stats), frame )
      , bp::wrapper< osgAnimation::StatsActionVisitor >(){
        // constructor
    
    }

    virtual void apply( ::osgAnimation::Timeline & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::Timeline & action ) {
        osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::Action & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::Action & action ) {
        osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionBlendIn & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionBlendIn & action ) {
        osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionBlendOut & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionBlendOut & action ) {
        osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionAnimation & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionAnimation & action ) {
        osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionStripAnimation & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionStripAnimation & action ) {
        osgAnimation::StatsActionVisitor::apply( boost::ref(action) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgAnimation::StatsActionVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgAnimation::StatsActionVisitor::className( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgAnimation::StatsActionVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgAnimation::StatsActionVisitor::libraryName( );
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

void register_StatsActionVisitor_class(){

    bp::class_< StatsActionVisitor_wrapper, bp::bases< osgAnimation::UpdateActionVisitor >, osg::ref_ptr< StatsActionVisitor_wrapper >, boost::noncopyable >( "StatsActionVisitor", bp::init< >() )    
        .def( bp::init< osg::Stats *, unsigned int >(( bp::arg("stats"), bp::arg("frame") )) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::StatsActionVisitor::* )( ::osgAnimation::Timeline & ))(&::osgAnimation::StatsActionVisitor::apply)
            , (void ( StatsActionVisitor_wrapper::* )( ::osgAnimation::Timeline & ))(&StatsActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::StatsActionVisitor::* )( ::osgAnimation::Action & ))(&::osgAnimation::StatsActionVisitor::apply)
            , (void ( StatsActionVisitor_wrapper::* )( ::osgAnimation::Action & ))(&StatsActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::StatsActionVisitor::* )( ::osgAnimation::ActionBlendIn & ))(&::osgAnimation::StatsActionVisitor::apply)
            , (void ( StatsActionVisitor_wrapper::* )( ::osgAnimation::ActionBlendIn & ))(&StatsActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::StatsActionVisitor::* )( ::osgAnimation::ActionBlendOut & ))(&::osgAnimation::StatsActionVisitor::apply)
            , (void ( StatsActionVisitor_wrapper::* )( ::osgAnimation::ActionBlendOut & ))(&StatsActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::StatsActionVisitor::* )( ::osgAnimation::ActionAnimation & ))(&::osgAnimation::StatsActionVisitor::apply)
            , (void ( StatsActionVisitor_wrapper::* )( ::osgAnimation::ActionAnimation & ))(&StatsActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "apply"
            , (void ( ::osgAnimation::StatsActionVisitor::* )( ::osgAnimation::ActionStripAnimation & ))(&::osgAnimation::StatsActionVisitor::apply)
            , (void ( StatsActionVisitor_wrapper::* )( ::osgAnimation::ActionStripAnimation & ))(&StatsActionVisitor_wrapper::default_apply)
            , ( bp::arg("action") ) )    
        .def( 
            "className"
            , (char const * ( ::osgAnimation::StatsActionVisitor::* )(  )const)(&::osgAnimation::StatsActionVisitor::className)
            , (char const * ( StatsActionVisitor_wrapper::* )(  )const)(&StatsActionVisitor_wrapper::default_className) )    
        .def( 
            "getChannels"
            , (::std::vector< std::string > const & ( ::osgAnimation::StatsActionVisitor::* )(  )const)( &::osgAnimation::StatsActionVisitor::getChannels )
            , bp::return_internal_reference< >() )    
        .def( 
            "getStats"
            , (::osg::Stats * ( ::osgAnimation::StatsActionVisitor::* )(  ))( &::osgAnimation::StatsActionVisitor::getStats )
            , bp::return_internal_reference< >() )    
        .def( 
            "libraryName"
            , (char const * ( ::osgAnimation::StatsActionVisitor::* )(  )const)(&::osgAnimation::StatsActionVisitor::libraryName)
            , (char const * ( StatsActionVisitor_wrapper::* )(  )const)(&StatsActionVisitor_wrapper::default_libraryName) )    
        .def( 
            "reset"
            , (void ( ::osgAnimation::StatsActionVisitor::* )(  ))( &::osgAnimation::StatsActionVisitor::reset ) )    
        .def( 
            "setFrame"
            , (void ( ::osgAnimation::StatsActionVisitor::* )( unsigned int ))( &::osgAnimation::StatsActionVisitor::setFrame )
            , ( bp::arg("frame") ) )    
        .def( 
            "setStats"
            , (void ( ::osgAnimation::StatsActionVisitor::* )( ::osg::Stats * ))( &::osgAnimation::StatsActionVisitor::setStats )
            , ( bp::arg("stats") ) );

}
