// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "polytope.pypp.hpp"

namespace bp = boost::python;

void register_Polytope_class(){

    { //::osg::Polytope
        typedef bp::class_< osg::Polytope > Polytope_exposer_t;
        Polytope_exposer_t Polytope_exposer = Polytope_exposer_t( "Polytope", "\n A Polytope class for representing convex clipping volumes made up of a set of planes.\n When adding planes, their normals should point inwards (into the volume)\n", bp::init< >() );
        bp::scope Polytope_scope( Polytope_exposer );
        Polytope_exposer.def( bp::init< osg::Polytope const & >(( bp::arg("cv") )) );
        Polytope_exposer.def( bp::init< std::vector< osg::Plane > const & >(( bp::arg("pl") )) );
        bp::implicitly_convertible< std::vector< osg::Plane > const &, osg::Polytope >();
        { //::osg::Polytope::add
        
            typedef void ( ::osg::Polytope::*add_function_type)( ::osg::Plane const & ) ;
            
            Polytope_exposer.def( 
                "add"
                , add_function_type( &::osg::Polytope::add )
                , ( bp::arg("pl") ) );
        
        }
        { //::osg::Polytope::clear
        
            typedef void ( ::osg::Polytope::*clear_function_type)(  ) ;
            
            Polytope_exposer.def( 
                "clear"
                , clear_function_type( &::osg::Polytope::clear ) );
        
        }
        { //::osg::Polytope::contains
        
            typedef bool ( ::osg::Polytope::*contains_function_type)( ::osg::Vec3 const & ) const;
            
            Polytope_exposer.def( 
                "contains"
                , contains_function_type( &::osg::Polytope::contains )
                , ( bp::arg("v") )
                , " Check whether a vertex is contained within clipping set." );
        
        }
        { //::osg::Polytope::contains
        
            typedef bool ( ::osg::Polytope::*contains_function_type)( ::std::vector< osg::Vec3f > const & ) ;
            
            Polytope_exposer.def( 
                "contains"
                , contains_function_type( &::osg::Polytope::contains )
                , ( bp::arg("vertices") )
                , " Check whether any part of vertex list is contained within clipping set." );
        
        }
        { //::osg::Polytope::contains
        
            typedef bool ( ::osg::Polytope::*contains_function_type)( ::osg::BoundingSphere const & ) ;
            
            Polytope_exposer.def( 
                "contains"
                , contains_function_type( &::osg::Polytope::contains )
                , ( bp::arg("bs") )
                , " Check whether any part of a bounding sphere is contained within clipping set.\n            Using a mask to determine which planes should be used for the check, and\n            modifying the mask to turn off planes which wouldnt contribute to clipping\n            of any internal objects.  This feature is used in osgUtil::CullVisitor\n            to prevent redundant plane checking." );
        
        }
        { //::osg::Polytope::contains
        
            typedef bool ( ::osg::Polytope::*contains_function_type)( ::osg::BoundingBox const & ) ;
            
            Polytope_exposer.def( 
                "contains"
                , contains_function_type( &::osg::Polytope::contains )
                , ( bp::arg("bb") )
                , " Check whether any part of a bounding box is contained within clipping set.\n            Using a mask to determine which planes should be used for the check, and\n            modifying the mask to turn off planes which wouldnt contribute to clipping\n            of any internal objects.  This feature is used in osgUtil::CullVisitor\n            to prevent redundant plane checking." );
        
        }
        { //::osg::Polytope::containsAllOf
        
            typedef bool ( ::osg::Polytope::*containsAllOf_function_type)( ::std::vector< osg::Vec3f > const & ) ;
            
            Polytope_exposer.def( 
                "containsAllOf"
                , containsAllOf_function_type( &::osg::Polytope::containsAllOf )
                , ( bp::arg("vertices") )
                , " Check whether all of vertex list is contained with clipping set." );
        
        }
        { //::osg::Polytope::containsAllOf
        
            typedef bool ( ::osg::Polytope::*containsAllOf_function_type)( ::osg::BoundingSphere const & ) ;
            
            Polytope_exposer.def( 
                "containsAllOf"
                , containsAllOf_function_type( &::osg::Polytope::containsAllOf )
                , ( bp::arg("bs") )
                , " Check whether the entire bounding sphere is contained within clipping set." );
        
        }
        { //::osg::Polytope::containsAllOf
        
            typedef bool ( ::osg::Polytope::*containsAllOf_function_type)( ::osg::BoundingBox const & ) ;
            
            Polytope_exposer.def( 
                "containsAllOf"
                , containsAllOf_function_type( &::osg::Polytope::containsAllOf )
                , ( bp::arg("bb") )
                , " Check whether the entire bounding box is contained within clipping set." );
        
        }
        { //::osg::Polytope::empty
        
            typedef bool ( ::osg::Polytope::*empty_function_type)(  ) const;
            
            Polytope_exposer.def( 
                "empty"
                , empty_function_type( &::osg::Polytope::empty ) );
        
        }
        { //::osg::Polytope::flip
        
            typedef void ( ::osg::Polytope::*flip_function_type)(  ) ;
            
            Polytope_exposer.def( 
                "flip"
                , flip_function_type( &::osg::Polytope::flip )
                , " flip/reverse the orientation of all the planes." );
        
        }
        { //::osg::Polytope::getCurrentMask
        
            typedef unsigned int & ( ::osg::Polytope::*getCurrentMask_function_type)(  ) ;
            
            Polytope_exposer.def( 
                "getCurrentMask"
                , getCurrentMask_function_type( &::osg::Polytope::getCurrentMask )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Polytope::getCurrentMask
        
            typedef unsigned int ( ::osg::Polytope::*getCurrentMask_function_type)(  ) const;
            
            Polytope_exposer.def( 
                "getCurrentMask"
                , getCurrentMask_function_type( &::osg::Polytope::getCurrentMask ) );
        
        }
        { //::osg::Polytope::getMaskStack
        
            typedef ::osg::fast_back_stack< unsigned int > & ( ::osg::Polytope::*getMaskStack_function_type)(  ) ;
            
            Polytope_exposer.def( 
                "getMaskStack"
                , getMaskStack_function_type( &::osg::Polytope::getMaskStack )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Polytope::getMaskStack
        
            typedef ::osg::fast_back_stack< unsigned int > const & ( ::osg::Polytope::*getMaskStack_function_type)(  ) const;
            
            Polytope_exposer.def( 
                "getMaskStack"
                , getMaskStack_function_type( &::osg::Polytope::getMaskStack )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Polytope::getPlaneList
        
            typedef ::std::vector< osg::Plane > & ( ::osg::Polytope::*getPlaneList_function_type)(  ) ;
            
            Polytope_exposer.def( 
                "getPlaneList"
                , getPlaneList_function_type( &::osg::Polytope::getPlaneList )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Polytope::getPlaneList
        
            typedef ::std::vector< osg::Plane > const & ( ::osg::Polytope::*getPlaneList_function_type)(  ) const;
            
            Polytope_exposer.def( 
                "getPlaneList"
                , getPlaneList_function_type( &::osg::Polytope::getPlaneList )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Polytope::getReferenceVertexList
        
            typedef ::std::vector< osg::Vec3f > & ( ::osg::Polytope::*getReferenceVertexList_function_type)(  ) ;
            
            Polytope_exposer.def( 
                "getReferenceVertexList"
                , getReferenceVertexList_function_type( &::osg::Polytope::getReferenceVertexList )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Polytope::getReferenceVertexList
        
            typedef ::std::vector< osg::Vec3f > const & ( ::osg::Polytope::*getReferenceVertexList_function_type)(  ) const;
            
            Polytope_exposer.def( 
                "getReferenceVertexList"
                , getReferenceVertexList_function_type( &::osg::Polytope::getReferenceVertexList )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Polytope::getResultMask
        
            typedef unsigned int ( ::osg::Polytope::*getResultMask_function_type)(  ) const;
            
            Polytope_exposer.def( 
                "getResultMask"
                , getResultMask_function_type( &::osg::Polytope::getResultMask ) );
        
        }
        { //::osg::Polytope::operator=
        
            typedef ::osg::Polytope & ( ::osg::Polytope::*assign_function_type)( ::osg::Polytope const & ) ;
            
            Polytope_exposer.def( 
                "assign"
                , assign_function_type( &::osg::Polytope::operator= )
                , ( bp::arg("cv") )
                , bp::return_self< >() );
        
        }
        { //::osg::Polytope::popCurrentMask
        
            typedef void ( ::osg::Polytope::*popCurrentMask_function_type)(  ) ;
            
            Polytope_exposer.def( 
                "popCurrentMask"
                , popCurrentMask_function_type( &::osg::Polytope::popCurrentMask ) );
        
        }
        { //::osg::Polytope::pushCurrentMask
        
            typedef void ( ::osg::Polytope::*pushCurrentMask_function_type)(  ) ;
            
            Polytope_exposer.def( 
                "pushCurrentMask"
                , pushCurrentMask_function_type( &::osg::Polytope::pushCurrentMask ) );
        
        }
        { //::osg::Polytope::set
        
            typedef void ( ::osg::Polytope::*set_function_type)( ::std::vector< osg::Plane > const & ) ;
            
            Polytope_exposer.def( 
                "set"
                , set_function_type( &::osg::Polytope::set )
                , ( bp::arg("pl") ) );
        
        }
        { //::osg::Polytope::setAndTransformProvidingInverse
        
            typedef void ( ::osg::Polytope::*setAndTransformProvidingInverse_function_type)( ::osg::Polytope const &,::osg::Matrix const & ) ;
            
            Polytope_exposer.def( 
                "setAndTransformProvidingInverse"
                , setAndTransformProvidingInverse_function_type( &::osg::Polytope::setAndTransformProvidingInverse )
                , ( bp::arg("pt"), bp::arg("matrix") ) );
        
        }
        { //::osg::Polytope::setReferenceVertexList
        
            typedef void ( ::osg::Polytope::*setReferenceVertexList_function_type)( ::std::vector< osg::Vec3f > & ) ;
            
            Polytope_exposer.def( 
                "setReferenceVertexList"
                , setReferenceVertexList_function_type( &::osg::Polytope::setReferenceVertexList )
                , ( bp::arg("vertices") ) );
        
        }
        { //::osg::Polytope::setResultMask
        
            typedef void ( ::osg::Polytope::*setResultMask_function_type)( unsigned int ) ;
            
            Polytope_exposer.def( 
                "setResultMask"
                , setResultMask_function_type( &::osg::Polytope::setResultMask )
                , ( bp::arg("mask") ) );
        
        }
        { //::osg::Polytope::setToBoundingBox
        
            typedef void ( ::osg::Polytope::*setToBoundingBox_function_type)( ::osg::BoundingBox const & ) ;
            
            Polytope_exposer.def( 
                "setToBoundingBox"
                , setToBoundingBox_function_type( &::osg::Polytope::setToBoundingBox )
                , ( bp::arg("bb") )
                , " Create a Polytope which is a equivalent to BoundingBox." );
        
        }
        { //::osg::Polytope::setToUnitFrustum
        
            typedef void ( ::osg::Polytope::*setToUnitFrustum_function_type)( bool,bool ) ;
            
            Polytope_exposer.def( 
                "setToUnitFrustum"
                , setToUnitFrustum_function_type( &::osg::Polytope::setToUnitFrustum )
                , ( bp::arg("withNear")=(bool)(true), bp::arg("withFar")=(bool)(true) )
                , " Create a Polytope which is a cube, centered at 0,0,0, with sides of 2 units." );
        
        }
        { //::osg::Polytope::setupMask
        
            typedef void ( ::osg::Polytope::*setupMask_function_type)(  ) ;
            
            Polytope_exposer.def( 
                "setupMask"
                , setupMask_function_type( &::osg::Polytope::setupMask ) );
        
        }
        { //::osg::Polytope::transform
        
            typedef void ( ::osg::Polytope::*transform_function_type)( ::osg::Matrix const & ) ;
            
            Polytope_exposer.def( 
                "transform"
                , transform_function_type( &::osg::Polytope::transform )
                , ( bp::arg("matrix") )
                , " Transform the clipping set by matrix.  Note, this operations carries out\n the calculation of the inverse of the matrix since a plane must\n be multiplied by the inverse transposed to transform it. This\n makes this operation expensive.  If the inverse has been already\n calculated elsewhere then use transformProvidingInverse() instead.\n See http://www.worldserver.com/turk/computergraphics/NormalTransformations.pdf" );
        
        }
        { //::osg::Polytope::transformProvidingInverse
        
            typedef void ( ::osg::Polytope::*transformProvidingInverse_function_type)( ::osg::Matrix const & ) ;
            
            Polytope_exposer.def( 
                "transformProvidingInverse"
                , transformProvidingInverse_function_type( &::osg::Polytope::transformProvidingInverse )
                , ( bp::arg("matrix") )
                , " Transform the clipping set by provide a pre inverted matrix.\n see transform for details." );
        
        }
    }

}
