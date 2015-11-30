// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgParticle.h"
#include "rangef.pypp.hpp"

namespace bp = boost::python;

void register_rangef_class(){

    bp::class_< osgParticle::range< float > >( "rangef", "\n        A simple struct template useful to store ranges of values as min/max pairs.\n        This struct template helps storing min/max ranges for values of any kind; class <CODE>ValueType</CODE> is\n        the type of values to be stored, and it must support operations <CODE>ValueType + ValueType</CODE>, <CODE>ValueType - ValueType</CODE>,\n        and <CODE>ValueType * float</CODE>, otherwise the <CODE>geValueTyperandom()</CODE> method will not compile.\n        This struct could be extended to customize the random number generator (now it uses only\n        <CODE>std::rand()</CODE>).\n", bp::init< >("\n Construct the object by calling default constructors for min and max.\n") )    
        .def( bp::init< float const &, float const & >(( bp::arg("mn"), bp::arg("mx") ), "\n Construct and initialize min and max directly.\n") )    
        .def( 
            "get_random"
            , (float ( ::osgParticle::range<float>::* )(  ) const)( &::osgParticle::range< float >::get_random )
            , "\n Get a random value between min and max.\n" )    
        .def( 
            "get_random_sqrtf"
            , (float ( ::osgParticle::range<float>::* )(  ) const)( &::osgParticle::range< float >::get_random_sqrtf )
            , "\n Get a random square root value between min and max.\n" )    
        .def( 
            "mid"
            , (float ( ::osgParticle::range<float>::* )(  ) const)( &::osgParticle::range< float >::mid ) )    
        .def( 
            "set"
            , (void ( ::osgParticle::range<float>::* )( float const &,float const & ) )( &::osgParticle::range< float >::set )
            , ( bp::arg("mn"), bp::arg("mx") )
            , "\n Set min and max.\n" )    
        .def_readwrite( "maximum", &osgParticle::range< float >::maximum, "\n Higher bound.\n" )    
        .def_readwrite( "minimum", &osgParticle::range< float >::minimum, "\n Lower bound.\n" );

}