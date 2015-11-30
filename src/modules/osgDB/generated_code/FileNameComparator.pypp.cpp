// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgDB.h"
#include "FileNameComparator.pypp.hpp"

namespace bp = boost::python;

void register_FileNameComparator_class(){

    bp::class_< osgDB::FileNameComparator >( "FileNameComparator", "\n Functor for helping sort filename in alphabetical and numerical order when using in conjunction with std::sort.\n" )    
        .def( 
            "__call__"
            , (bool ( ::osgDB::FileNameComparator::* )( ::std::string const &,::std::string const & ) const)( &::osgDB::FileNameComparator::operator() )
            , ( bp::arg("lhs"), bp::arg("rhs") )
            , "\n Functor for helping sort filename in alphabetical and numerical order when using in conjunction with std::sort.\n" );

}
