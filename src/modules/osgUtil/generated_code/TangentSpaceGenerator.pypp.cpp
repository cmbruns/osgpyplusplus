// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgUtil.h"
#include "wrap_referenced.h"
#include "TangentSpaceGenerator.pypp.hpp"

namespace bp = boost::python;

void register_TangentSpaceGenerator_class(){

    bp::class_< osgUtil::TangentSpaceGenerator, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgUtil::TangentSpaceGenerator >, boost::noncopyable >( "TangentSpaceGenerator", "\n The TangentSpaceGenerator class generates three arrays containing tangent-space basis vectors.\n It takes a texture-mapped Geometry object as input, traverses its primitive sets and computes\n Tangent, Normal and Binormal vectors for each vertex, storing them into arrays.\n The resulting arrays can be used as vertex program varying (per-vertex) parameters,\n enabling advanced effects like bump-mapping.\n To use this class, simply call the generate() method specifying the Geometry object\n you want to process and the texture unit that contains UV mapping for the normal map;\n then you can retrieve the TBN arrays by calling getTangentArray(), getNormalArray()\n and getBinormalArray() methods.\n", bp::no_init )    
        .def( bp::init< >("\n The TangentSpaceGenerator class generates three arrays containing tangent-space basis vectors.\n It takes a texture-mapped Geometry object as input, traverses its primitive sets and computes\n Tangent, Normal and Binormal vectors for each vertex, storing them into arrays.\n The resulting arrays can be used as vertex program varying (per-vertex) parameters,\n enabling advanced effects like bump-mapping.\n To use this class, simply call the generate() method specifying the Geometry object\n you want to process and the texture unit that contains UV mapping for the normal map;\n then you can retrieve the TBN arrays by calling getTangentArray(), getNormalArray()\n and getBinormalArray() methods.\n") )    
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
