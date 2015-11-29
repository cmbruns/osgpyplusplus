// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgUtil.h"
#include "wrap_referenced.h"
#include "StateGraph.pypp.hpp"

namespace bp = boost::python;

struct StateGraph_wrapper : osgUtil::StateGraph, bp::wrapper< osgUtil::StateGraph > {

    StateGraph_wrapper( )
    : osgUtil::StateGraph( )
      , bp::wrapper< osgUtil::StateGraph >(){
        // null constructor
    
    }

    StateGraph_wrapper(::osgUtil::StateGraph * parent, ::osg::StateSet const * stateset )
    : osgUtil::StateGraph( boost::python::ptr(parent), boost::python::ptr(stateset) )
      , bp::wrapper< osgUtil::StateGraph >(){
        // constructor
    
    }

    static ::osgUtil::StateGraph * get__parent(osgUtil::StateGraph const & inst ){
        return inst._parent;
    }
    
    static void set__parent( osgUtil::StateGraph & inst, ::osgUtil::StateGraph * new_value ){ 
        inst._parent = new_value;
    }

};

void register_StateGraph_class(){

    bp::class_< StateGraph_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< StateGraph_wrapper >, boost::noncopyable >( "StateGraph", bp::init< >() )    
        .def( bp::init< osgUtil::StateGraph *, osg::StateSet const * >(( bp::arg("parent"), bp::arg("stateset") )) )    
        .def( 
            "addLeaf"
            , (void ( ::osgUtil::StateGraph::* )( ::osgUtil::RenderLeaf * ) )( &::osgUtil::StateGraph::addLeaf )
            , ( bp::arg("leaf") ) )    
        .def( 
            "clean"
            , (void ( ::osgUtil::StateGraph::* )(  ) )( &::osgUtil::StateGraph::clean ) )    
        .def( 
            "cloneType"
            , (::osgUtil::StateGraph * ( ::osgUtil::StateGraph::* )(  ) const)( &::osgUtil::StateGraph::cloneType )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "empty"
            , (bool ( ::osgUtil::StateGraph::* )(  ) const)( &::osgUtil::StateGraph::empty ) )    
        .def( 
            "find_or_insert"
            , (::osgUtil::StateGraph * ( ::osgUtil::StateGraph::* )( ::osg::StateSet const * ) )( &::osgUtil::StateGraph::find_or_insert )
            , ( bp::arg("stateset") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getAverageDistance"
            , (float ( ::osgUtil::StateGraph::* )(  ) const)( &::osgUtil::StateGraph::getAverageDistance ) )    
        .def( 
            "getMinimumDistance"
            , (float ( ::osgUtil::StateGraph::* )(  ) const)( &::osgUtil::StateGraph::getMinimumDistance ) )    
        .def( 
            "getStateSet"
            , (::osg::StateSet const * ( ::osgUtil::StateGraph::* )(  ) const)( &::osgUtil::StateGraph::getStateSet )
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osgUtil::StateGraph::* )(  ) )( &::osgUtil::StateGraph::getUserData )
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osgUtil::StateGraph::* )(  ) const)( &::osgUtil::StateGraph::getUserData )
            , bp::return_internal_reference< >() )    
        .def( 
            "leaves_empty"
            , (bool ( ::osgUtil::StateGraph::* )(  ) const)( &::osgUtil::StateGraph::leaves_empty ) )    
        .def( 
            "moveStateGraph"
            , (void (*)( ::osg::State &,::osgUtil::StateGraph *,::osgUtil::StateGraph * ))( &::osgUtil::StateGraph::moveStateGraph )
            , ( bp::arg("state"), bp::arg("sg_curr"), bp::arg("sg_new") ) )    
        .def( 
            "moveToRootStateGraph"
            , (void (*)( ::osg::State &,::osgUtil::StateGraph * ))( &::osgUtil::StateGraph::moveToRootStateGraph )
            , ( bp::arg("state"), bp::arg("sg_curr") ) )    
        .def( 
            "numToPop"
            , (int (*)( ::osgUtil::StateGraph * ))( &::osgUtil::StateGraph::numToPop )
            , ( bp::arg("sg_curr") ) )    
        .def( 
            "prune"
            , (void ( ::osgUtil::StateGraph::* )(  ) )( &::osgUtil::StateGraph::prune ) )    
        .def( 
            "reset"
            , (void ( ::osgUtil::StateGraph::* )(  ) )( &::osgUtil::StateGraph::reset ) )    
        .def( 
            "setStateSet"
            , (void ( ::osgUtil::StateGraph::* )( ::osg::StateSet const * ) )( &::osgUtil::StateGraph::setStateSet )
            , ( bp::arg("stateset") ) )    
        .def( 
            "setUserData"
            , (void ( ::osgUtil::StateGraph::* )( ::osg::Referenced * ) )( &::osgUtil::StateGraph::setUserData )
            , ( bp::arg("obj") ) )    
        .def( 
            "sortFrontToBack"
            , (void ( ::osgUtil::StateGraph::* )(  ) )( &::osgUtil::StateGraph::sortFrontToBack ) )    
        .def_readwrite( "_averageDistance", &osgUtil::StateGraph::_averageDistance )    
        .def_readwrite( "_depth", &osgUtil::StateGraph::_depth )    
        .def_readwrite( "_dynamic", &osgUtil::StateGraph::_dynamic )    
        .def_readwrite( "_leaves", &osgUtil::StateGraph::_leaves )    
        .def_readwrite( "_minimumDistance", &osgUtil::StateGraph::_minimumDistance )    
        .add_property( "_parent"
                    , bp::make_function( (::osgUtil::StateGraph * (*)( ::osgUtil::StateGraph const & ))(&StateGraph_wrapper::get__parent), bp::return_internal_reference< >() )
                    , bp::make_function( (void (*)( ::osgUtil::StateGraph &,::osgUtil::StateGraph * ))(&StateGraph_wrapper::set__parent), bp::with_custodian_and_ward_postcall< 1, 2 >() ) )    
        .def_readwrite( "_stateset", &osgUtil::StateGraph::_stateset )    
        .def_readwrite( "_userData", &osgUtil::StateGraph::_userData )    
        .staticmethod( "moveStateGraph" )    
        .staticmethod( "moveToRootStateGraph" )    
        .staticmethod( "numToPop" );

}
