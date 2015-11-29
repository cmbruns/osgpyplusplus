// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osgDB.h"
#include "ImageProcessorList.pypp.hpp"

namespace bp = boost::python;

void register_ImageProcessorList_class(){

    { //::std::vector< osg::ref_ptr<osgDB::ImageProcessor> >
        typedef bp::class_< std::vector< osg::ref_ptr<osgDB::ImageProcessor> > > ImageProcessorList_exposer_t;
        ImageProcessorList_exposer_t ImageProcessorList_exposer = ImageProcessorList_exposer_t( "ImageProcessorList" );
        bp::scope ImageProcessorList_scope( ImageProcessorList_exposer );
        ImageProcessorList_exposer.def( bp::indexing::vector_suite< std::vector< osg::ref_ptr<osgDB::ImageProcessor> > >() );
    }

}
