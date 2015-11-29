// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgDB.h"
#include "wrap_referenced.h"
#include "InputException.pypp.hpp"

namespace bp = boost::python;

struct InputException_wrapper : osgDB::InputException, bp::wrapper< osgDB::InputException > {

    InputException_wrapper(::std::vector< std::string > const & fields, ::std::string const & err )
    : osgDB::InputException( boost::ref(fields), err )
      , bp::wrapper< osgDB::InputException >(){
        // constructor
    
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

void register_InputException_class(){

    bp::class_< InputException_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< InputException_wrapper >, boost::noncopyable >( "InputException", bp::init< std::vector< std::string > const &, std::string const & >(( bp::arg("fields"), bp::arg("err") )) )    
        .def( 
            "getError"
            , (::std::string const & ( ::osgDB::InputException::* )(  ) const)( &::osgDB::InputException::getError )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "getField"
            , (::std::string const & ( ::osgDB::InputException::* )(  ) const)( &::osgDB::InputException::getField )
            , bp::return_value_policy< bp::copy_const_reference >() );

}
