// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgDB.h"
#include "wrap_referenced.h"
#include "InputException.pypp.hpp"

namespace bp = boost::python;

void register_InputException_class(){

    bp::class_< osgDB::InputException, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgDB::InputException >, boost::noncopyable >( "InputException", bp::init< std::vector< std::string > const &, std::string const & >(( bp::arg("fields"), bp::arg("err") )) )    
        .def( 
            "getError"
            , (::std::string const & ( ::osgDB::InputException::* )(  ) const)( &::osgDB::InputException::getError )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "getField"
            , (::std::string const & ( ::osgDB::InputException::* )(  ) const)( &::osgDB::InputException::getField )
            , bp::return_value_policy< bp::copy_const_reference >() );

}
