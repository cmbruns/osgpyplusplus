// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgParticle.h"
#include "rangev3.pypp.hpp"

namespace bp = boost::python;

void register_rangev3_class(){

    bp::class_< osgParticle::range< osg::Vec3f > >( "rangev3", "\n        A simple struct template useful to store ranges of values as min/max pairs.\n        This struct template helps storing min/max ranges for values of any kind; class <CODE>ValueType</CODE> is\n        the type of values to be stored, and it must support operations <CODE>ValueType + ValueType</CODE>, <CODE>ValueType - ValueType</CODE>,\n        and <CODE>ValueType * float</CODE>, otherwise the <CODE>geValueTyperandom()</CODE> method will not compile.\n        This struct could be extended to customize the random number generator (now it uses only\n        <CODE>std::rand()</CODE>).\n", bp::init< >("\n Construct the object by calling default constructors for min and max.\n") )    
        .def( bp::init< osg::Vec3f const &, osg::Vec3f const & >(( bp::arg("mn"), bp::arg("mx") ), "\n Construct and initialize min and max directly.\n") )    
        .def( 
            "get_random"
            , (::osg::Vec3f ( ::osgParticle::range<osg::Vec3f>::* )(  ) const)( &::osgParticle::range< osg::Vec3f >::get_random )
            , "\n Get a random value between min and max.\n" )    
        .def( 
            "get_random_sqrtf"
            , (::osg::Vec3f ( ::osgParticle::range<osg::Vec3f>::* )(  ) const)( &::osgParticle::range< osg::Vec3f >::get_random_sqrtf )
            , "\n Get a random square root value between min and max.\n" )    
        .def( 
            "mid"
            , (::osg::Vec3f ( ::osgParticle::range<osg::Vec3f>::* )(  ) const)( &::osgParticle::range< osg::Vec3f >::mid ) )    
        .def( 
            "set"
            , (void ( ::osgParticle::range<osg::Vec3f>::* )( ::osg::Vec3f const &,::osg::Vec3f const & ) )( &::osgParticle::range< osg::Vec3f >::set )
            , ( bp::arg("mn"), bp::arg("mx") )
            , "\n Set min and max.\n" )    
        .def_readwrite( "maximum", &osgParticle::range< osg::Vec3f >::maximum, "\n Higher bound.\n" )    
        .def_readwrite( "minimum", &osgParticle::range< osg::Vec3f >::minimum, "\n Lower bound.\n" );

}