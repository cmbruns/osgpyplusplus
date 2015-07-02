// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osgga.h"
#include "keymanipmap.pypp.hpp"

namespace bp = boost::python;

void register_KeyManipMap_class(){

    bp::class_< std::map< int, std::pair<std::string, osg::ref_ptr<osgGA::CameraManipulator> > > >( "KeyManipMap" )    
        .def( bp::indexing::map_suite< std::map< int, std::pair<std::string, osg::ref_ptr<osgGA::CameraManipulator> > > >() );

}
