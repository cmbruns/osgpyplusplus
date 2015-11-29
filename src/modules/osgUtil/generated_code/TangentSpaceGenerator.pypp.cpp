// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgUtil.h"
#include "wrap_referenced.h"
#include "TangentSpaceGenerator.pypp.hpp"

namespace bp = boost::python;

void register_TangentSpaceGenerator_class(){

    bp::class_< osgUtil::TangentSpaceGenerator, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgUtil::TangentSpaceGenerator >, boost::noncopyable >( "TangentSpaceGenerator", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "generate"
            , (void ( ::osgUtil::TangentSpaceGenerator::* )( ::osg::Geometry *,int ) )( &::osgUtil::TangentSpaceGenerator::generate )
            , ( bp::arg("geo"), bp::arg("normal_map_tex_unit")=(int)(0) ) )    
        .def( 
            "getBinormalArray"
            , (::osg::Vec4Array * ( ::osgUtil::TangentSpaceGenerator::* )(  ) )( &::osgUtil::TangentSpaceGenerator::getBinormalArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getBinormalArray"
            , (::osg::Vec4Array const * ( ::osgUtil::TangentSpaceGenerator::* )(  ) const)( &::osgUtil::TangentSpaceGenerator::getBinormalArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getIndices"
            , (::osg::IndexArray * ( ::osgUtil::TangentSpaceGenerator::* )(  ) )( &::osgUtil::TangentSpaceGenerator::getIndices )
            , bp::return_internal_reference< >() )    
        .def( 
            "getNormalArray"
            , (::osg::Vec4Array * ( ::osgUtil::TangentSpaceGenerator::* )(  ) )( &::osgUtil::TangentSpaceGenerator::getNormalArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getNormalArray"
            , (::osg::Vec4Array const * ( ::osgUtil::TangentSpaceGenerator::* )(  ) const)( &::osgUtil::TangentSpaceGenerator::getNormalArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getTangentArray"
            , (::osg::Vec4Array * ( ::osgUtil::TangentSpaceGenerator::* )(  ) )( &::osgUtil::TangentSpaceGenerator::getTangentArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getTangentArray"
            , (::osg::Vec4Array const * ( ::osgUtil::TangentSpaceGenerator::* )(  ) const)( &::osgUtil::TangentSpaceGenerator::getTangentArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "setBinormalArray"
            , (void ( ::osgUtil::TangentSpaceGenerator::* )( ::osg::Vec4Array * ) )( &::osgUtil::TangentSpaceGenerator::setBinormalArray )
            , ( bp::arg("array") ) )    
        .def( 
            "setNormalArray"
            , (void ( ::osgUtil::TangentSpaceGenerator::* )( ::osg::Vec4Array * ) )( &::osgUtil::TangentSpaceGenerator::setNormalArray )
            , ( bp::arg("array") ) )    
        .def( 
            "setTangentArray"
            , (void ( ::osgUtil::TangentSpaceGenerator::* )( ::osg::Vec4Array * ) )( &::osgUtil::TangentSpaceGenerator::setTangentArray )
            , ( bp::arg("array") ) );

}
