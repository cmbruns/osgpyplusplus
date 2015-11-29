// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgDB.h"
#include "wrap_referenced.h"
#include "FindFileCallback.pypp.hpp"

namespace bp = boost::python;

struct FindFileCallback_wrapper : osgDB::FindFileCallback, bp::wrapper< osgDB::FindFileCallback > {

    FindFileCallback_wrapper()
    : osgDB::FindFileCallback()
      , bp::wrapper< osgDB::FindFileCallback >(){
        // null constructor
        
    }

    virtual ::std::string findDataFile( ::std::string const & filename, ::osgDB::Options const * options, ::osgDB::CaseSensitivity caseSensitivity ) {
        if( bp::override func_findDataFile = this->get_override( "findDataFile" ) )
            return func_findDataFile( filename, boost::python::ptr(options), caseSensitivity );
        else{
            return this->osgDB::FindFileCallback::findDataFile( filename, boost::python::ptr(options), caseSensitivity );
        }
    }
    
    ::std::string default_findDataFile( ::std::string const & filename, ::osgDB::Options const * options, ::osgDB::CaseSensitivity caseSensitivity ) {
        return osgDB::FindFileCallback::findDataFile( filename, boost::python::ptr(options), caseSensitivity );
    }

    virtual ::std::string findLibraryFile( ::std::string const & filename, ::osgDB::Options const * options, ::osgDB::CaseSensitivity caseSensitivity ) {
        if( bp::override func_findLibraryFile = this->get_override( "findLibraryFile" ) )
            return func_findLibraryFile( filename, boost::python::ptr(options), caseSensitivity );
        else{
            return this->osgDB::FindFileCallback::findLibraryFile( filename, boost::python::ptr(options), caseSensitivity );
        }
    }
    
    ::std::string default_findLibraryFile( ::std::string const & filename, ::osgDB::Options const * options, ::osgDB::CaseSensitivity caseSensitivity ) {
        return osgDB::FindFileCallback::findLibraryFile( filename, boost::python::ptr(options), caseSensitivity );
    }

};

void register_FindFileCallback_class(){

    bp::class_< FindFileCallback_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< FindFileCallback_wrapper >, boost::noncopyable >( "FindFileCallback", bp::no_init )    
        .def( 
            "findDataFile"
            , (::std::string ( ::osgDB::FindFileCallback::* )( ::std::string const &,::osgDB::Options const *,::osgDB::CaseSensitivity ) )(&::osgDB::FindFileCallback::findDataFile)
            , (::std::string ( FindFileCallback_wrapper::* )( ::std::string const &,::osgDB::Options const *,::osgDB::CaseSensitivity ) )(&FindFileCallback_wrapper::default_findDataFile)
            , ( bp::arg("filename"), bp::arg("options"), bp::arg("caseSensitivity") ) )    
        .def( 
            "findLibraryFile"
            , (::std::string ( ::osgDB::FindFileCallback::* )( ::std::string const &,::osgDB::Options const *,::osgDB::CaseSensitivity ) )(&::osgDB::FindFileCallback::findLibraryFile)
            , (::std::string ( FindFileCallback_wrapper::* )( ::std::string const &,::osgDB::Options const *,::osgDB::CaseSensitivity ) )(&FindFileCallback_wrapper::default_findLibraryFile)
            , ( bp::arg("filename"), bp::arg("options"), bp::arg("caseSensitivity") ) );

}
