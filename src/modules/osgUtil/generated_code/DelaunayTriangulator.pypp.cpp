// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgUtil.h"
#include "wrap_referenced.h"
#include "DelaunayTriangulator.pypp.hpp"

namespace bp = boost::python;

void register_DelaunayTriangulator_class(){

    { //::osgUtil::DelaunayTriangulator
        typedef bp::class_< osgUtil::DelaunayTriangulator, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgUtil::DelaunayTriangulator >, boost::noncopyable > DelaunayTriangulator_exposer_t;
        DelaunayTriangulator_exposer_t DelaunayTriangulator_exposer = DelaunayTriangulator_exposer_t( "DelaunayTriangulator", bp::no_init );
        bp::scope DelaunayTriangulator_scope( DelaunayTriangulator_exposer );
        DelaunayTriangulator_exposer.def( bp::init< >() );
        DelaunayTriangulator_exposer.def( bp::init< osg::Vec3Array *, bp::optional< osg::Vec3Array * > >(( bp::arg("points"), bp::arg("normals")=bp::object() )) );
        bp::implicitly_convertible< osg::Vec3Array *, osgUtil::DelaunayTriangulator >();
        { //::osgUtil::DelaunayTriangulator::addInputConstraint
        
            typedef void ( ::osgUtil::DelaunayTriangulator::*addInputConstraint_function_type )( ::osgUtil::DelaunayConstraint * ) ;
            
            DelaunayTriangulator_exposer.def( 
                "addInputConstraint"
                , addInputConstraint_function_type( &::osgUtil::DelaunayTriangulator::addInputConstraint )
                , ( bp::arg("dc") )
                , "\n Add an input constraint loop.\n the edges of the loop will constrain the triangulation.\n if remove!=0, the internal triangles of the constraint will be removed;\n the user may the replace the constraint line with an equivalent geometry.\n GWM July 2005\n" );
        
        }
        { //::osgUtil::DelaunayTriangulator::getInputPointArray
        
            typedef ::osg::Vec3Array const * ( ::osgUtil::DelaunayTriangulator::*getInputPointArray_function_type )(  ) const;
            
            DelaunayTriangulator_exposer.def( 
                "getInputPointArray"
                , getInputPointArray_function_type( &::osgUtil::DelaunayTriangulator::getInputPointArray )
                , bp::return_internal_reference< >()
                , "\n Get the const input point array.\n" );
        
        }
        { //::osgUtil::DelaunayTriangulator::getInputPointArray
        
            typedef ::osg::Vec3Array * ( ::osgUtil::DelaunayTriangulator::*getInputPointArray_function_type )(  ) ;
            
            DelaunayTriangulator_exposer.def( 
                "getInputPointArray"
                , getInputPointArray_function_type( &::osgUtil::DelaunayTriangulator::getInputPointArray )
                , bp::return_internal_reference< >()
                , "\n Get the input point array.\n" );
        
        }
        { //::osgUtil::DelaunayTriangulator::getOutputNormalArray
        
            typedef ::osg::Vec3Array const * ( ::osgUtil::DelaunayTriangulator::*getOutputNormalArray_function_type )(  ) const;
            
            DelaunayTriangulator_exposer.def( 
                "getOutputNormalArray"
                , getOutputNormalArray_function_type( &::osgUtil::DelaunayTriangulator::getOutputNormalArray )
                , bp::return_internal_reference< >()
                , "\n Get the const output normal array (optional).\n" );
        
        }
        { //::osgUtil::DelaunayTriangulator::getOutputNormalArray
        
            typedef ::osg::Vec3Array * ( ::osgUtil::DelaunayTriangulator::*getOutputNormalArray_function_type )(  ) ;
            
            DelaunayTriangulator_exposer.def( 
                "getOutputNormalArray"
                , getOutputNormalArray_function_type( &::osgUtil::DelaunayTriangulator::getOutputNormalArray )
                , bp::return_internal_reference< >()
                , "\n Get the output normal array (optional).\n" );
        
        }
        { //::osgUtil::DelaunayTriangulator::getTriangles
        
            typedef ::osg::DrawElementsUInt const * ( ::osgUtil::DelaunayTriangulator::*getTriangles_function_type )(  ) const;
            
            DelaunayTriangulator_exposer.def( 
                "getTriangles"
                , getTriangles_function_type( &::osgUtil::DelaunayTriangulator::getTriangles )
                , bp::return_internal_reference< >()
                , "\n Get the generated primitive (call triangulate() first).\n" );
        
        }
        { //::osgUtil::DelaunayTriangulator::getTriangles
        
            typedef ::osg::DrawElementsUInt * ( ::osgUtil::DelaunayTriangulator::*getTriangles_function_type )(  ) ;
            
            DelaunayTriangulator_exposer.def( 
                "getTriangles"
                , getTriangles_function_type( &::osgUtil::DelaunayTriangulator::getTriangles )
                , bp::return_internal_reference< >()
                , "\n Get the generated primitive (call triangulate() first).\n" );
        
        }
        { //::osgUtil::DelaunayTriangulator::removeInternalTriangles
        
            typedef void ( ::osgUtil::DelaunayTriangulator::*removeInternalTriangles_function_type )( ::osgUtil::DelaunayConstraint * ) ;
            
            DelaunayTriangulator_exposer.def( 
                "removeInternalTriangles"
                , removeInternalTriangles_function_type( &::osgUtil::DelaunayTriangulator::removeInternalTriangles )
                , ( bp::arg("constraint") )
                , "\n remove the triangles internal to the constraint loops.\n (Line strips cannot remove any internal triangles).\n" );
        
        }
        { //::osgUtil::DelaunayTriangulator::setInputPointArray
        
            typedef void ( ::osgUtil::DelaunayTriangulator::*setInputPointArray_function_type )( ::osg::Vec3Array * ) ;
            
            DelaunayTriangulator_exposer.def( 
                "setInputPointArray"
                , setInputPointArray_function_type( &::osgUtil::DelaunayTriangulator::setInputPointArray )
                , ( bp::arg("points") )
                , "\n Set the input point array.\n" );
        
        }
        { //::osgUtil::DelaunayTriangulator::setOutputNormalArray
        
            typedef void ( ::osgUtil::DelaunayTriangulator::*setOutputNormalArray_function_type )( ::osg::Vec3Array * ) ;
            
            DelaunayTriangulator_exposer.def( 
                "setOutputNormalArray"
                , setOutputNormalArray_function_type( &::osgUtil::DelaunayTriangulator::setOutputNormalArray )
                , ( bp::arg("normals") )
                , "\n Set the output normal array (optional).\n" );
        
        }
        { //::osgUtil::DelaunayTriangulator::triangulate
        
            typedef bool ( ::osgUtil::DelaunayTriangulator::*triangulate_function_type )(  ) ;
            
            DelaunayTriangulator_exposer.def( 
                "triangulate"
                , triangulate_function_type( &::osgUtil::DelaunayTriangulator::triangulate )
                , "\n Start triangulation.\n" );
        
        }
    }

}
