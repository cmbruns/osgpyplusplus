// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "Stats.pypp.hpp"

namespace bp = boost::python;

void register_Stats_class(){

    { //::osg::Stats
        typedef bp::class_< osg::Stats, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::Stats >, boost::noncopyable > Stats_exposer_t;
        Stats_exposer_t Stats_exposer = Stats_exposer_t( "Stats", bp::no_init );
        bp::scope Stats_scope( Stats_exposer );
        Stats_exposer.def( bp::init< std::string const & >(( bp::arg("name") )) );
        bp::implicitly_convertible< std::string const &, osg::Stats >();
        Stats_exposer.def( bp::init< std::string const &, unsigned int >(( bp::arg("name"), bp::arg("numberOfFrames") )) );
        { //::osg::Stats::allocate
        
            typedef void ( ::osg::Stats::*allocate_function_type )( unsigned int ) ;
            
            Stats_exposer.def( 
                "allocate"
                , allocate_function_type( &::osg::Stats::allocate )
                , ( bp::arg("numberOfFrames") ) );
        
        }
        { //::osg::Stats::collectStats
        
            typedef void ( ::osg::Stats::*collectStats_function_type )( ::std::string const &,bool ) ;
            
            Stats_exposer.def( 
                "collectStats"
                , collectStats_function_type( &::osg::Stats::collectStats )
                , ( bp::arg("str"), bp::arg("flag") ) );
        
        }
        { //::osg::Stats::collectStats
        
            typedef bool ( ::osg::Stats::*collectStats_function_type )( ::std::string const & ) const;
            
            Stats_exposer.def( 
                "collectStats"
                , collectStats_function_type( &::osg::Stats::collectStats )
                , ( bp::arg("str") ) );
        
        }
        { //::osg::Stats::getAttributeMap
        
            typedef ::std::map< std::string, double > & ( ::osg::Stats::*getAttributeMap_function_type )( unsigned int ) ;
            
            Stats_exposer.def( 
                "getAttributeMap"
                , getAttributeMap_function_type( &::osg::Stats::getAttributeMap )
                , ( bp::arg("frameNumber") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Stats::getAttributeMap
        
            typedef ::std::map< std::string, double > const & ( ::osg::Stats::*getAttributeMap_function_type )( unsigned int ) const;
            
            Stats_exposer.def( 
                "getAttributeMap"
                , getAttributeMap_function_type( &::osg::Stats::getAttributeMap )
                , ( bp::arg("frameNumber") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Stats::getEarliestFrameNumber
        
            typedef unsigned int ( ::osg::Stats::*getEarliestFrameNumber_function_type )(  ) const;
            
            Stats_exposer.def( 
                "getEarliestFrameNumber"
                , getEarliestFrameNumber_function_type( &::osg::Stats::getEarliestFrameNumber ) );
        
        }
        { //::osg::Stats::getLatestFrameNumber
        
            typedef unsigned int ( ::osg::Stats::*getLatestFrameNumber_function_type )(  ) const;
            
            Stats_exposer.def( 
                "getLatestFrameNumber"
                , getLatestFrameNumber_function_type( &::osg::Stats::getLatestFrameNumber ) );
        
        }
        { //::osg::Stats::getName
        
            typedef ::std::string const & ( ::osg::Stats::*getName_function_type )(  ) const;
            
            Stats_exposer.def( 
                "getName"
                , getName_function_type( &::osg::Stats::getName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::osg::Stats::report
        
            typedef void ( ::osg::Stats::*report_function_type )( ::std::ostream &,char const * ) const;
            
            Stats_exposer.def( 
                "report"
                , report_function_type( &::osg::Stats::report )
                , ( bp::arg("out"), bp::arg("indent")=bp::object() ) );
        
        }
        { //::osg::Stats::report
        
            typedef void ( ::osg::Stats::*report_function_type )( ::std::ostream &,unsigned int,char const * ) const;
            
            Stats_exposer.def( 
                "report"
                , report_function_type( &::osg::Stats::report )
                , ( bp::arg("out"), bp::arg("frameNumber"), bp::arg("indent")=bp::object() ) );
        
        }
        { //::osg::Stats::setAttribute
        
            typedef bool ( ::osg::Stats::*setAttribute_function_type )( unsigned int,::std::string const &,double ) ;
            
            Stats_exposer.def( 
                "setAttribute"
                , setAttribute_function_type( &::osg::Stats::setAttribute )
                , ( bp::arg("frameNumber"), bp::arg("attributeName"), bp::arg("value") ) );
        
        }
        { //::osg::Stats::setName
        
            typedef void ( ::osg::Stats::*setName_function_type )( ::std::string const & ) ;
            
            Stats_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Stats::setName )
                , ( bp::arg("name") ) );
        
        }
    }

}
