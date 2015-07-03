// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "hit.pypp.hpp"

namespace bp = boost::python;

void register_Hit_class(){

    { //::osgUtil::Hit
        typedef bp::class_< osgUtil::Hit > Hit_exposer_t;
        Hit_exposer_t Hit_exposer = Hit_exposer_t( "Hit", bp::init< >() );
        bp::scope Hit_scope( Hit_exposer );
        Hit_exposer.def( bp::init< osgUtil::Hit const & >(( bp::arg("hit") )) );
        { //::osgUtil::Hit::getDrawable
        
            typedef ::osg::Drawable * ( ::osgUtil::Hit::*getDrawable_function_type )(  ) ;
            
            Hit_exposer.def( 
                "getDrawable"
                , getDrawable_function_type( &::osgUtil::Hit::getDrawable )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getDrawable
        
            typedef ::osg::Drawable const * ( ::osgUtil::Hit::*getDrawable_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getDrawable"
                , getDrawable_function_type( &::osgUtil::Hit::getDrawable )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getGeode
        
            typedef ::osg::Geode * ( ::osgUtil::Hit::*getGeode_function_type )(  ) ;
            
            Hit_exposer.def( 
                "getGeode"
                , getGeode_function_type( &::osgUtil::Hit::getGeode )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getGeode
        
            typedef ::osg::Geode const * ( ::osgUtil::Hit::*getGeode_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getGeode"
                , getGeode_function_type( &::osgUtil::Hit::getGeode )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getInverseMatrix
        
            typedef ::osg::RefMatrix const * ( ::osgUtil::Hit::*getInverseMatrix_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getInverseMatrix"
                , getInverseMatrix_function_type( &::osgUtil::Hit::getInverseMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getLocalIntersectNormal
        
            typedef ::osg::Vec3 const & ( ::osgUtil::Hit::*getLocalIntersectNormal_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getLocalIntersectNormal"
                , getLocalIntersectNormal_function_type( &::osgUtil::Hit::getLocalIntersectNormal )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getLocalIntersectPoint
        
            typedef ::osg::Vec3 const & ( ::osgUtil::Hit::*getLocalIntersectPoint_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getLocalIntersectPoint"
                , getLocalIntersectPoint_function_type( &::osgUtil::Hit::getLocalIntersectPoint )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getLocalLineSegment
        
            typedef ::osg::LineSegment const * ( ::osgUtil::Hit::*getLocalLineSegment_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getLocalLineSegment"
                , getLocalLineSegment_function_type( &::osgUtil::Hit::getLocalLineSegment )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getMatrix
        
            typedef ::osg::RefMatrix const * ( ::osgUtil::Hit::*getMatrix_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getMatrix"
                , getMatrix_function_type( &::osgUtil::Hit::getMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getNodePath
        
            typedef ::osg::NodePath & ( ::osgUtil::Hit::*getNodePath_function_type )(  ) ;
            
            Hit_exposer.def( 
                "getNodePath"
                , getNodePath_function_type( &::osgUtil::Hit::getNodePath )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getNodePath
        
            typedef ::osg::NodePath const & ( ::osgUtil::Hit::*getNodePath_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getNodePath"
                , getNodePath_function_type( &::osgUtil::Hit::getNodePath )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getOriginalLineSegment
        
            typedef ::osg::LineSegment const * ( ::osgUtil::Hit::*getOriginalLineSegment_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getOriginalLineSegment"
                , getOriginalLineSegment_function_type( &::osgUtil::Hit::getOriginalLineSegment )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getPrimitiveIndex
        
            typedef int ( ::osgUtil::Hit::*getPrimitiveIndex_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getPrimitiveIndex"
                , getPrimitiveIndex_function_type( &::osgUtil::Hit::getPrimitiveIndex ) );
        
        }
        { //::osgUtil::Hit::getRatio
        
            typedef float ( ::osgUtil::Hit::*getRatio_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getRatio"
                , getRatio_function_type( &::osgUtil::Hit::getRatio ) );
        
        }
        { //::osgUtil::Hit::getVecIndexList
        
            typedef ::std::vector< int > const & ( ::osgUtil::Hit::*getVecIndexList_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getVecIndexList"
                , getVecIndexList_function_type( &::osgUtil::Hit::getVecIndexList )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Hit::getWorldIntersectNormal
        
            typedef ::osg::Vec3 const ( ::osgUtil::Hit::*getWorldIntersectNormal_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getWorldIntersectNormal"
                , getWorldIntersectNormal_function_type( &::osgUtil::Hit::getWorldIntersectNormal ) );
        
        }
        { //::osgUtil::Hit::getWorldIntersectPoint
        
            typedef ::osg::Vec3 const ( ::osgUtil::Hit::*getWorldIntersectPoint_function_type )(  ) const;
            
            Hit_exposer.def( 
                "getWorldIntersectPoint"
                , getWorldIntersectPoint_function_type( &::osgUtil::Hit::getWorldIntersectPoint ) );
        
        }
        Hit_exposer.def( bp::self < bp::self );
        { //::osgUtil::Hit::operator=
        
            typedef ::osgUtil::Hit & ( ::osgUtil::Hit::*assign_function_type )( ::osgUtil::Hit const & ) ;
            
            Hit_exposer.def( 
                "assign"
                , assign_function_type( &::osgUtil::Hit::operator= )
                , ( bp::arg("hit") )
                , bp::return_self< >() );
        
        }
        Hit_exposer.def_readwrite( "_drawable", &osgUtil::Hit::_drawable );
        Hit_exposer.def_readwrite( "_geode", &osgUtil::Hit::_geode );
        Hit_exposer.def_readwrite( "_intersectNormal", &osgUtil::Hit::_intersectNormal );
        Hit_exposer.def_readwrite( "_intersectPoint", &osgUtil::Hit::_intersectPoint );
        Hit_exposer.def_readwrite( "_inverse", &osgUtil::Hit::_inverse );
        Hit_exposer.def_readwrite( "_localLineSegment", &osgUtil::Hit::_localLineSegment );
        Hit_exposer.def_readwrite( "_matrix", &osgUtil::Hit::_matrix );
        Hit_exposer.def_readwrite( "_nodePath", &osgUtil::Hit::_nodePath );
        Hit_exposer.def_readwrite( "_originalLineSegment", &osgUtil::Hit::_originalLineSegment );
        Hit_exposer.def_readwrite( "_primitiveIndex", &osgUtil::Hit::_primitiveIndex );
        Hit_exposer.def_readwrite( "_ratio", &osgUtil::Hit::_ratio );
        Hit_exposer.def_readwrite( "_vecIndexList", &osgUtil::Hit::_vecIndexList );
    }

}