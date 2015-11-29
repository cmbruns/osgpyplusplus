// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgManipulator.h"
#include "PointerInfo.pypp.hpp"

namespace bp = boost::python;

void register_PointerInfo_class(){

    bp::class_< osgManipulator::PointerInfo >( "PointerInfo", bp::init< >() )    
        .def( bp::init< osgManipulator::PointerInfo const & >(( bp::arg("rhs") )) )    
        .def( 
            "addIntersection"
            , (void ( ::osgManipulator::PointerInfo::* )( ::osg::NodePath const &,::osg::Vec3d const & ) )( &::osgManipulator::PointerInfo::addIntersection )
            , ( bp::arg("nodePath"), bp::arg("intersectionPoint") ) )    
        .def( 
            "completed"
            , (bool ( ::osgManipulator::PointerInfo::* )(  ) const)( &::osgManipulator::PointerInfo::completed ) )    
        .def( 
            "contains"
            , (bool ( ::osgManipulator::PointerInfo::* )( ::osg::Node const * ) const)( &::osgManipulator::PointerInfo::contains )
            , ( bp::arg("node") ) )    
        .def( 
            "getEyeDir"
            , (::osg::Vec3d const & ( ::osgManipulator::PointerInfo::* )(  ) const)( &::osgManipulator::PointerInfo::getEyeDir )
            , bp::return_internal_reference< >() )    
        .def( 
            "getLocalIntersectPoint"
            , (::osg::Vec3d ( ::osgManipulator::PointerInfo::* )(  ) const)( &::osgManipulator::PointerInfo::getLocalIntersectPoint ) )    
        .def( 
            "getNearFarPoints"
            , (void ( ::osgManipulator::PointerInfo::* )( ::osg::Vec3d &,::osg::Vec3d & ) const)( &::osgManipulator::PointerInfo::getNearFarPoints )
            , ( bp::arg("nearPoint"), bp::arg("farPoint") ) )    
        .def( 
            "next"
            , (void ( ::osgManipulator::PointerInfo::* )(  ) )( &::osgManipulator::PointerInfo::next ) )    
        .def( 
            "reset"
            , (void ( ::osgManipulator::PointerInfo::* )(  ) )( &::osgManipulator::PointerInfo::reset ) )    
        .def( 
            "setCamera"
            , (void ( ::osgManipulator::PointerInfo::* )( ::osg::Camera * ) )( &::osgManipulator::PointerInfo::setCamera )
            , ( bp::arg("camera") ) )    
        .def( 
            "setMousePosition"
            , (void ( ::osgManipulator::PointerInfo::* )( float,float ) )( &::osgManipulator::PointerInfo::setMousePosition )
            , ( bp::arg("pixel_x"), bp::arg("pixel_y") ) )    
        .def( 
            "setNearFarPoints"
            , (void ( ::osgManipulator::PointerInfo::* )( ::osg::Vec3d,::osg::Vec3d ) )( &::osgManipulator::PointerInfo::setNearFarPoints )
            , ( bp::arg("nearPoint"), bp::arg("farPoint") ) )    
        .def_readwrite( "_hitIter", &osgManipulator::PointerInfo::_hitIter )    
        .def_readwrite( "_hitList", &osgManipulator::PointerInfo::_hitList );

}
