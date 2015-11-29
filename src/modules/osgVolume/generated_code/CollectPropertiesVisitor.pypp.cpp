// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgVolume.h"
#include "CollectPropertiesVisitor.pypp.hpp"

namespace bp = boost::python;

struct CollectPropertiesVisitor_wrapper : osgVolume::CollectPropertiesVisitor, bp::wrapper< osgVolume::CollectPropertiesVisitor > {

    CollectPropertiesVisitor_wrapper(osgVolume::CollectPropertiesVisitor const & arg )
    : osgVolume::CollectPropertiesVisitor( arg )
      , bp::wrapper< osgVolume::CollectPropertiesVisitor >(){
        // copy constructor
        
    }

    CollectPropertiesVisitor_wrapper(bool traverseOnlyActiveChildren=true )
    : osgVolume::CollectPropertiesVisitor( traverseOnlyActiveChildren )
      , bp::wrapper< osgVolume::CollectPropertiesVisitor >(){
        // constructor
    
    }

    virtual void apply( ::osgVolume::Property & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osgVolume::CollectPropertiesVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osgVolume::Property & arg0 ) {
        osgVolume::CollectPropertiesVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osgVolume::TransferFunctionProperty & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osgVolume::CollectPropertiesVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osgVolume::TransferFunctionProperty & arg0 ) {
        osgVolume::CollectPropertiesVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osgVolume::ScalarProperty & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osgVolume::CollectPropertiesVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osgVolume::ScalarProperty & arg0 ) {
        osgVolume::CollectPropertiesVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osgVolume::IsoSurfaceProperty & iso ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(iso) );
        else{
            this->osgVolume::CollectPropertiesVisitor::apply( boost::ref(iso) );
        }
    }
    
    void default_apply( ::osgVolume::IsoSurfaceProperty & iso ) {
        osgVolume::CollectPropertiesVisitor::apply( boost::ref(iso) );
    }

    virtual void apply( ::osgVolume::AlphaFuncProperty & af ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(af) );
        else{
            this->osgVolume::CollectPropertiesVisitor::apply( boost::ref(af) );
        }
    }
    
    void default_apply( ::osgVolume::AlphaFuncProperty & af ) {
        osgVolume::CollectPropertiesVisitor::apply( boost::ref(af) );
    }

    virtual void apply( ::osgVolume::MaximumIntensityProjectionProperty & mip ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(mip) );
        else{
            this->osgVolume::CollectPropertiesVisitor::apply( boost::ref(mip) );
        }
    }
    
    void default_apply( ::osgVolume::MaximumIntensityProjectionProperty & mip ) {
        osgVolume::CollectPropertiesVisitor::apply( boost::ref(mip) );
    }

    virtual void apply( ::osgVolume::LightingProperty & lp ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(lp) );
        else{
            this->osgVolume::CollectPropertiesVisitor::apply( boost::ref(lp) );
        }
    }
    
    void default_apply( ::osgVolume::LightingProperty & lp ) {
        osgVolume::CollectPropertiesVisitor::apply( boost::ref(lp) );
    }

    virtual void apply( ::osgVolume::SampleDensityProperty & sdp ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(sdp) );
        else{
            this->osgVolume::CollectPropertiesVisitor::apply( boost::ref(sdp) );
        }
    }
    
    void default_apply( ::osgVolume::SampleDensityProperty & sdp ) {
        osgVolume::CollectPropertiesVisitor::apply( boost::ref(sdp) );
    }

    virtual void apply( ::osgVolume::SampleDensityWhenMovingProperty & sdp ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(sdp) );
        else{
            this->osgVolume::CollectPropertiesVisitor::apply( boost::ref(sdp) );
        }
    }
    
    void default_apply( ::osgVolume::SampleDensityWhenMovingProperty & sdp ) {
        osgVolume::CollectPropertiesVisitor::apply( boost::ref(sdp) );
    }

    virtual void apply( ::osgVolume::TransparencyProperty & tp ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(tp) );
        else{
            this->osgVolume::CollectPropertiesVisitor::apply( boost::ref(tp) );
        }
    }
    
    void default_apply( ::osgVolume::TransparencyProperty & tp ) {
        osgVolume::CollectPropertiesVisitor::apply( boost::ref(tp) );
    }

    virtual void apply( ::osgVolume::CompositeProperty & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osgVolume::PropertyVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osgVolume::CompositeProperty & arg0 ) {
        osgVolume::PropertyVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osgVolume::SwitchProperty & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osgVolume::PropertyVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osgVolume::SwitchProperty & arg0 ) {
        osgVolume::PropertyVisitor::apply( boost::ref(arg0) );
    }

};

void register_CollectPropertiesVisitor_class(){

    { //::osgVolume::CollectPropertiesVisitor
        typedef bp::class_< CollectPropertiesVisitor_wrapper, bp::bases< osgVolume::PropertyVisitor > > CollectPropertiesVisitor_exposer_t;
        CollectPropertiesVisitor_exposer_t CollectPropertiesVisitor_exposer = CollectPropertiesVisitor_exposer_t( "CollectPropertiesVisitor", bp::init< bp::optional< bool > >(( bp::arg("traverseOnlyActiveChildren")=(bool)(true) )) );
        bp::scope CollectPropertiesVisitor_scope( CollectPropertiesVisitor_exposer );
        bp::implicitly_convertible< bool, osgVolume::CollectPropertiesVisitor >();
        { //::osgVolume::CollectPropertiesVisitor::apply
        
            typedef void ( ::osgVolume::CollectPropertiesVisitor::*apply_function_type )( ::osgVolume::Property & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::Property & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::CollectPropertiesVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgVolume::CollectPropertiesVisitor::apply
        
            typedef void ( ::osgVolume::CollectPropertiesVisitor::*apply_function_type )( ::osgVolume::TransferFunctionProperty & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::TransferFunctionProperty & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::CollectPropertiesVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgVolume::CollectPropertiesVisitor::apply
        
            typedef void ( ::osgVolume::CollectPropertiesVisitor::*apply_function_type )( ::osgVolume::ScalarProperty & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::ScalarProperty & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::CollectPropertiesVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgVolume::CollectPropertiesVisitor::apply
        
            typedef void ( ::osgVolume::CollectPropertiesVisitor::*apply_function_type )( ::osgVolume::IsoSurfaceProperty & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::IsoSurfaceProperty & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::CollectPropertiesVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("iso") ) );
        
        }
        { //::osgVolume::CollectPropertiesVisitor::apply
        
            typedef void ( ::osgVolume::CollectPropertiesVisitor::*apply_function_type )( ::osgVolume::AlphaFuncProperty & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::AlphaFuncProperty & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::CollectPropertiesVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("af") ) );
        
        }
        { //::osgVolume::CollectPropertiesVisitor::apply
        
            typedef void ( ::osgVolume::CollectPropertiesVisitor::*apply_function_type )( ::osgVolume::MaximumIntensityProjectionProperty & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::MaximumIntensityProjectionProperty & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::CollectPropertiesVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("mip") ) );
        
        }
        { //::osgVolume::CollectPropertiesVisitor::apply
        
            typedef void ( ::osgVolume::CollectPropertiesVisitor::*apply_function_type )( ::osgVolume::LightingProperty & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::LightingProperty & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::CollectPropertiesVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("lp") ) );
        
        }
        { //::osgVolume::CollectPropertiesVisitor::apply
        
            typedef void ( ::osgVolume::CollectPropertiesVisitor::*apply_function_type )( ::osgVolume::SampleDensityProperty & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::SampleDensityProperty & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::CollectPropertiesVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("sdp") ) );
        
        }
        { //::osgVolume::CollectPropertiesVisitor::apply
        
            typedef void ( ::osgVolume::CollectPropertiesVisitor::*apply_function_type )( ::osgVolume::SampleDensityWhenMovingProperty & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::SampleDensityWhenMovingProperty & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::CollectPropertiesVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("sdp") ) );
        
        }
        { //::osgVolume::CollectPropertiesVisitor::apply
        
            typedef void ( ::osgVolume::CollectPropertiesVisitor::*apply_function_type )( ::osgVolume::TransparencyProperty & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::TransparencyProperty & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::CollectPropertiesVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("tp") ) );
        
        }
        CollectPropertiesVisitor_exposer.def_readwrite( "_afProperty", &osgVolume::CollectPropertiesVisitor::_afProperty );
        CollectPropertiesVisitor_exposer.def_readwrite( "_isoProperty", &osgVolume::CollectPropertiesVisitor::_isoProperty );
        CollectPropertiesVisitor_exposer.def_readwrite( "_lightingProperty", &osgVolume::CollectPropertiesVisitor::_lightingProperty );
        CollectPropertiesVisitor_exposer.def_readwrite( "_mipProperty", &osgVolume::CollectPropertiesVisitor::_mipProperty );
        CollectPropertiesVisitor_exposer.def_readwrite( "_sampleDensityProperty", &osgVolume::CollectPropertiesVisitor::_sampleDensityProperty );
        CollectPropertiesVisitor_exposer.def_readwrite( "_sampleDensityWhenMovingProperty", &osgVolume::CollectPropertiesVisitor::_sampleDensityWhenMovingProperty );
        CollectPropertiesVisitor_exposer.def_readwrite( "_tfProperty", &osgVolume::CollectPropertiesVisitor::_tfProperty );
        CollectPropertiesVisitor_exposer.def_readwrite( "_transparencyProperty", &osgVolume::CollectPropertiesVisitor::_transparencyProperty );
        { //::osgVolume::PropertyVisitor::apply
        
            typedef void ( ::osgVolume::PropertyVisitor::*apply_function_type )( ::osgVolume::CompositeProperty & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::CompositeProperty & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::PropertyVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgVolume::PropertyVisitor::apply
        
            typedef void ( ::osgVolume::PropertyVisitor::*apply_function_type )( ::osgVolume::SwitchProperty & ) ;
            typedef void ( CollectPropertiesVisitor_wrapper::*default_apply_function_type )( ::osgVolume::SwitchProperty & ) ;
            
            CollectPropertiesVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgVolume::PropertyVisitor::apply)
                , default_apply_function_type(&CollectPropertiesVisitor_wrapper::default_apply)
                , ( bp::arg("arg0") ) );
        
        }
    }

}
