// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgDB.h"
#include "wrap_referenced.h"
#include "ObjectWrapper.pypp.hpp"

namespace bp = boost::python;

void register_ObjectWrapper_class(){

    bp::class_< osgDB::ObjectWrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgDB::ObjectWrapper >, boost::noncopyable >( "ObjectWrapper", bp::no_init )    
        .def( bp::init< osg::Object *, std::string const &, std::string const & >(( bp::arg("proto"), bp::arg("name"), bp::arg("associates") )) )    
        .def( bp::init< osg::Object *, std::string const &, std::string const &, std::string const & >(( bp::arg("proto"), bp::arg("domain"), bp::arg("name"), bp::arg("associates") )) )    
        .def( 
            "addFinishedObjectReadCallback"
            , (void ( ::osgDB::ObjectWrapper::* )( ::osgDB::FinishedObjectReadCallback * ) )( &::osgDB::ObjectWrapper::addFinishedObjectReadCallback )
            , ( bp::arg("forc") ) )    
        .def( 
            "addSerializer"
            , (void ( ::osgDB::ObjectWrapper::* )( ::osgDB::BaseSerializer *,::osgDB::BaseSerializer::Type ) )( &::osgDB::ObjectWrapper::addSerializer )
            , ( bp::arg("s"), bp::arg("t")=::osgDB::BaseSerializer::RW_UNDEFINED ) )    
        .def( 
            "getAssociates"
            , (::osgDB::StringList const & ( ::osgDB::ObjectWrapper::* )(  ) const)( &::osgDB::ObjectWrapper::getAssociates )
            , bp::return_internal_reference< >() )    
        .def( 
            "getName"
            , (::std::string const & ( ::osgDB::ObjectWrapper::* )(  ) const)( &::osgDB::ObjectWrapper::getName )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "getProto"
            , (::osg::Object const * ( ::osgDB::ObjectWrapper::* )(  ) const)( &::osgDB::ObjectWrapper::getProto )
            , bp::return_internal_reference< >() )    
        .def( 
            "getSerializer"
            , (::osgDB::BaseSerializer * ( ::osgDB::ObjectWrapper::* )( ::std::string const & ) )( &::osgDB::ObjectWrapper::getSerializer )
            , ( bp::arg("name") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getUpdatedVersion"
            , (int ( ::osgDB::ObjectWrapper::* )(  ) const)( &::osgDB::ObjectWrapper::getUpdatedVersion ) )    
        .def( 
            "markSerializerAsRemoved"
            , (void ( ::osgDB::ObjectWrapper::* )( ::std::string const & ) )( &::osgDB::ObjectWrapper::markSerializerAsRemoved )
            , ( bp::arg("name") ) )    
        .def( 
            "read"
            , (bool ( ::osgDB::ObjectWrapper::* )( ::osgDB::InputStream &,::osg::Object & ) )( &::osgDB::ObjectWrapper::read )
            , ( bp::arg("arg0"), bp::arg("arg1") ) )    
        .def( 
            "readSchema"
            , (bool ( ::osgDB::ObjectWrapper::* )( ::osgDB::StringList const &,::std::vector< int > const & ) )( &::osgDB::ObjectWrapper::readSchema )
            , ( bp::arg("properties"), bp::arg("types") ) )    
        .def( 
            "resetSchema"
            , (void ( ::osgDB::ObjectWrapper::* )(  ) )( &::osgDB::ObjectWrapper::resetSchema ) )    
        .def( 
            "setUpdatedVersion"
            , (void ( ::osgDB::ObjectWrapper::* )( int ) )( &::osgDB::ObjectWrapper::setUpdatedVersion )
            , ( bp::arg("ver") ) )    
        .def( 
            "writeSchema"
            , (void ( ::osgDB::ObjectWrapper::* )( ::osgDB::StringList &,::std::vector< int > & ) )( &::osgDB::ObjectWrapper::writeSchema )
            , ( bp::arg("properties"), bp::arg("types") ) );

}
