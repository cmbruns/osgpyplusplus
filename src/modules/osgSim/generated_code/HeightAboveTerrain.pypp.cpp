// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgSim.h"
#include "HeightAboveTerrain.pypp.hpp"

namespace bp = boost::python;

void register_HeightAboveTerrain_class(){

    bp::class_< osgSim::HeightAboveTerrain, boost::noncopyable >( "HeightAboveTerrain", "\n Helper class for setting up and acquiring height above terrain intersections with terrain.\n By default assigns a osgSim::DatabaseCacheReadCallback that enables automatic loading\n of external PagedLOD tiles to ensure that the highest level of detail is used in intersections.\n This automatic loading of tiles is done by the intersection traversal that is done within\n the computeIntersections(..) method, so can result in long intersection times when external\n tiles have to be loaded.\n The external loading of tiles can be disabled by removing the read callback, this is done by\n calling the setDatabaseCacheReadCallback(DatabaseCacheReadCallback*) method with a value of 0.\n", bp::no_init )    
        .def( bp::init< >("\n Helper class for setting up and acquiring height above terrain intersections with terrain.\n By default assigns a osgSim::DatabaseCacheReadCallback that enables automatic loading\n of external PagedLOD tiles to ensure that the highest level of detail is used in intersections.\n This automatic loading of tiles is done by the intersection traversal that is done within\n the computeIntersections(..) method, so can result in long intersection times when external\n tiles have to be loaded.\n The external loading of tiles can be disabled by removing the read callback, this is done by\n calling the setDatabaseCacheReadCallback(DatabaseCacheReadCallback*) method with a value of 0.\n") )    
        .def( 
            "addPoint"
            , (unsigned int ( ::osgSim::HeightAboveTerrain::* )( ::osg::Vec3d const & ) )( &::osgSim::HeightAboveTerrain::addPoint )
            , ( bp::arg("point") )
            , "\n Add a height above terrain test point in the CoordinateFrame.\n" )    
        .def( 
            "clear"
            , (void ( ::osgSim::HeightAboveTerrain::* )(  ) )( &::osgSim::HeightAboveTerrain::clear )
            , "\n Clear the internal HAT List so it contains no height above terrain tests.\n" )    
        .def( 
            "clearDatabaseCache"
            , (void ( ::osgSim::HeightAboveTerrain::* )(  ) )( &::osgSim::HeightAboveTerrain::clearDatabaseCache )
            , "\n Clear the database cache.\n" )    
        .def( 
            "computeHeightAboveTerrain"
            , (double (*)( ::osg::Node *,::osg::Vec3d const &,unsigned int ))( &::osgSim::HeightAboveTerrain::computeHeightAboveTerrain )
            , ( bp::arg("scene"), bp::arg("point"), bp::arg("traversalMask")=(unsigned int)(4294967295u) )
            , "\n Compute the vertical distance between the specified scene graph and a single HAT point.\n" )    
        .def( 
            "computeIntersections"
            , (void ( ::osgSim::HeightAboveTerrain::* )( ::osg::Node *,unsigned int ) )( &::osgSim::HeightAboveTerrain::computeIntersections )
            , ( bp::arg("scene"), bp::arg("traversalMask")=(unsigned int)(4294967295u) )
            , "\n Compute the HAT intersections with the specified scene graph.\n The results are all stored in the form of a single height above terrain value per HAT test.\n Note, if the topmost node is a CoordinateSystemNode then the input points are assumed to be geocentric,\n with the up vector defined by the EllipsoidModel attached to the CoordinateSystemNode.\n If the topmost node is not a CoordinateSystemNode then a local coordinates frame is assumed, with a local up vector.\n" )    
        .def( 
            "getDatabaseCacheReadCallback"
            , (::osgSim::DatabaseCacheReadCallback * ( ::osgSim::HeightAboveTerrain::* )(  ) )( &::osgSim::HeightAboveTerrain::getDatabaseCacheReadCallback )
            , bp::return_internal_reference< >()
            , "\n Get the ReadCallback that does the reading of external PagedLOD models, and caching of loaded subgraphs.\n" )    
        .def( 
            "getHeightAboveTerrain"
            , (double ( ::osgSim::HeightAboveTerrain::* )( unsigned int ) const)( &::osgSim::HeightAboveTerrain::getHeightAboveTerrain )
            , ( bp::arg("i") )
            , "\n Get the intersection height for a single height above terrain test.\n Note, you must call computeIntersections(..) before you can query the HeightAboveTerrain.\n If no intersections are found then height returned will be the height above mean sea level.\n" )    
        .def( 
            "getLowestHeight"
            , (double ( ::osgSim::HeightAboveTerrain::* )(  ) const)( &::osgSim::HeightAboveTerrain::getLowestHeight )
            , "\n Get the lowest height that the should be tested for.\n" )    
        .def( 
            "getNumPoints"
            , (unsigned int ( ::osgSim::HeightAboveTerrain::* )(  ) const)( &::osgSim::HeightAboveTerrain::getNumPoints )
            , "\n Get the number of height above terrain tests.\n" )    
        .def( 
            "getPoint"
            , (::osg::Vec3d const & ( ::osgSim::HeightAboveTerrain::* )( unsigned int ) const)( &::osgSim::HeightAboveTerrain::getPoint )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >()
            , "\n Get the source point of single height above terrain test.\n" )    
        .def( 
            "setDatabaseCacheReadCallback"
            , (void ( ::osgSim::HeightAboveTerrain::* )( ::osgSim::DatabaseCacheReadCallback * ) )( &::osgSim::HeightAboveTerrain::setDatabaseCacheReadCallback )
            , ( bp::arg("dcrc") )
            , "\n Set the ReadCallback that does the reading of external PagedLOD models, and caching of loaded subgraphs.\n Note, if you have multiple LineOfSight or HeightAboveTerrain objects in use at one time then you should share a single\n DatabaseCacheReadCallback between all of them.\n" )    
        .def( 
            "setLowestHeight"
            , (void ( ::osgSim::HeightAboveTerrain::* )( double ) )( &::osgSim::HeightAboveTerrain::setLowestHeight )
            , ( bp::arg("lowestHeight") )
            , "\n Set the lowest height that the should be tested for.\n Defaults to -1000, i.e. 1000m below mean sea level.\n" )    
        .def( 
            "setPoint"
            , (void ( ::osgSim::HeightAboveTerrain::* )( unsigned int,::osg::Vec3d const & ) )( &::osgSim::HeightAboveTerrain::setPoint )
            , ( bp::arg("i"), bp::arg("point") )
            , "\n Set the source point of single height above terrain test.\n" )    
        .staticmethod( "computeHeightAboveTerrain" );

}
