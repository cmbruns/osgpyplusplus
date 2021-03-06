// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "TextureCostEstimator.pypp.hpp"

namespace bp = boost::python;

void register_TextureCostEstimator_class(){

    bp::class_< osg::TextureCostEstimator, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::TextureCostEstimator >, boost::noncopyable >( "TextureCostEstimator", bp::init< >() )    
        .def( 
            "calibrate"
            , (void ( ::osg::TextureCostEstimator::* )( ::osg::RenderInfo & ) )( &::osg::TextureCostEstimator::calibrate )
            , ( bp::arg("renderInfo") ) )    
        .def( 
            "estimateCompileCost"
            , (::osg::CostPair ( ::osg::TextureCostEstimator::* )( ::osg::Texture const * ) const)( &::osg::TextureCostEstimator::estimateCompileCost )
            , ( bp::arg("texture") ) )    
        .def( 
            "estimateDrawCost"
            , (::osg::CostPair ( ::osg::TextureCostEstimator::* )( ::osg::Texture const * ) const)( &::osg::TextureCostEstimator::estimateDrawCost )
            , ( bp::arg("texture") ) )    
        .def( 
            "setDefaults"
            , (void ( ::osg::TextureCostEstimator::* )(  ) )( &::osg::TextureCostEstimator::setDefaults ) );

}
