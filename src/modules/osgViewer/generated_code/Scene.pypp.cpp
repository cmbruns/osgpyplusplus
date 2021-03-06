// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgViewer.h"
#include "wrap_referenced.h"
#include "Scene.pypp.hpp"

namespace bp = boost::python;

struct Scene_wrapper : osgViewer::Scene, bp::wrapper< osgViewer::Scene > {

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgViewer::Scene::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgViewer::Scene::className( );
    }

};

void register_Scene_class(){

    bp::class_< Scene_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< Scene_wrapper >, boost::noncopyable >( "Scene", "\n Scene holds the higher level reference to a single scene graph.\n", bp::no_init )    
        .def( 
            "className"
            , (char const * ( ::osgViewer::Scene::* )(  ) const)(&::osgViewer::Scene::className)
            , (char const * ( Scene_wrapper::* )(  ) const)(&Scene_wrapper::default_className) )    
        .def( 
            "getDatabasePager"
            , (::osgDB::DatabasePager * ( ::osgViewer::Scene::* )(  ) )( &::osgViewer::Scene::getDatabasePager )
            , bp::return_internal_reference< >() )    
        .def( 
            "getDatabasePager"
            , (::osgDB::DatabasePager const * ( ::osgViewer::Scene::* )(  ) const)( &::osgViewer::Scene::getDatabasePager )
            , bp::return_internal_reference< >() )    
        .def( 
            "getImagePager"
            , (::osgDB::ImagePager * ( ::osgViewer::Scene::* )(  ) )( &::osgViewer::Scene::getImagePager )
            , bp::return_internal_reference< >() )    
        .def( 
            "getImagePager"
            , (::osgDB::ImagePager const * ( ::osgViewer::Scene::* )(  ) const)( &::osgViewer::Scene::getImagePager )
            , bp::return_internal_reference< >() )    
        .def( 
            "getScene"
            , (::osgViewer::Scene * (*)( ::osg::Node * ))( &::osgViewer::Scene::getScene )
            , ( bp::arg("node") )
            , bp::return_internal_reference< >()
            , " Get the Scene object that has the specified node assigned to it.\n return 0 if no Scene has yet been assigned the specified node." )    
        .def( 
            "getSceneData"
            , (::osg::Node * ( ::osgViewer::Scene::* )(  ) )( &::osgViewer::Scene::getSceneData )
            , bp::return_internal_reference< >() )    
        .def( 
            "getSceneData"
            , (::osg::Node const * ( ::osgViewer::Scene::* )(  ) const)( &::osgViewer::Scene::getSceneData )
            , bp::return_internal_reference< >() )    
        .def( 
            "setDatabasePager"
            , (void ( ::osgViewer::Scene::* )( ::osgDB::DatabasePager * ) )( &::osgViewer::Scene::setDatabasePager )
            , ( bp::arg("dp") ) )    
        .def( 
            "setImagePager"
            , (void ( ::osgViewer::Scene::* )( ::osgDB::ImagePager * ) )( &::osgViewer::Scene::setImagePager )
            , ( bp::arg("ip") ) )    
        .def( 
            "setSceneData"
            , (void ( ::osgViewer::Scene::* )( ::osg::Node * ) )( &::osgViewer::Scene::setSceneData )
            , ( bp::arg("node") ) )    
        .def( 
            "updateSceneGraph"
            , (void ( ::osgViewer::Scene::* )( ::osg::NodeVisitor & ) )( &::osgViewer::Scene::updateSceneGraph )
            , ( bp::arg("updateVisitor") ) )    
        .staticmethod( "getScene" );

}
