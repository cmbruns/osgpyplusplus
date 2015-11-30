// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgFX.h"
#include "wrap_referenced.h"
#include "Technique.pypp.hpp"

namespace bp = boost::python;

struct Technique_wrapper : osgFX::Technique, bp::wrapper< osgFX::Technique > {

    virtual void getRequiredExtensions( ::std::vector< std::string > & arg0 ) const  {
        if( bp::override func_getRequiredExtensions = this->get_override( "getRequiredExtensions" ) )
            func_getRequiredExtensions( boost::ref(arg0) );
        else{
            this->osgFX::Technique::getRequiredExtensions( boost::ref(arg0) );
        }
    }
    
    void default_getRequiredExtensions( ::std::vector< std::string > & arg0 ) const  {
        osgFX::Technique::getRequiredExtensions( boost::ref(arg0) );
    }

    virtual char const * techniqueDescription(  ) {
        if( bp::override func_techniqueDescription = this->get_override( "techniqueDescription" ) )
            return func_techniqueDescription(  );
        else{
            return this->osgFX::Technique::techniqueDescription(  );
        }
    }
    
    char const * default_techniqueDescription(  ) {
        return osgFX::Technique::techniqueDescription( );
    }

    virtual char const * techniqueName(  ) {
        if( bp::override func_techniqueName = this->get_override( "techniqueName" ) )
            return func_techniqueName(  );
        else{
            return this->osgFX::Technique::techniqueName(  );
        }
    }
    
    char const * default_techniqueName(  ) {
        return osgFX::Technique::techniqueName( );
    }

    virtual void traverse( ::osg::NodeVisitor & nv, ::osgFX::Effect * fx ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(nv), boost::python::ptr(fx) );
        else{
            this->osgFX::Technique::traverse( boost::ref(nv), boost::python::ptr(fx) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv, ::osgFX::Effect * fx ) {
        osgFX::Technique::traverse( boost::ref(nv), boost::python::ptr(fx) );
    }

    virtual bool validate( ::osg::State & arg0 ) const  {
        if( bp::override func_validate = this->get_override( "validate" ) )
            return func_validate( boost::ref(arg0) );
        else{
            return this->osgFX::Technique::validate( boost::ref(arg0) );
        }
    }
    
    bool default_validate( ::osg::State & arg0 ) const  {
        return osgFX::Technique::validate( boost::ref(arg0) );
    }

};

void register_Technique_class(){

    bp::class_< Technique_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< Technique_wrapper >, boost::noncopyable >( "Technique", "\n     This is the base class for effect techniques. A technique represents one\n     of the possible ways to implement a special effect. This base class is\n     abstract, you will have to subclass your own techniques for your custom\n     effects.\n     Derived classes will have to implement the define_passes() method to\n     configure the rendering pass(es) that make up the technique. Usually\n     you will create one StateSet object for each rendering pass and then\n     youll call addPass(stateset).\n     The validate() method should return true if the technique is valid within\n     the current rendering context, false otherwise. The default implementation\n     of validate() calls getRequiredExtensions() and tests whether all required\n     extensions are supported or not, returning false if at least one extension\n     is not supported.\n", bp::no_init )    
        .def( 
            "getNumPasses"
            , (int ( ::osgFX::Technique::* )(  ) const)( &::osgFX::Technique::getNumPasses ) )    
        .def( 
            "getPassStateSet"
            , (::osg::StateSet * ( ::osgFX::Technique::* )( int ) )( &::osgFX::Technique::getPassStateSet )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getPassStateSet"
            , (::osg::StateSet const * ( ::osgFX::Technique::* )( int ) const)( &::osgFX::Technique::getPassStateSet )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getRequiredExtensions"
            , (void ( ::osgFX::Technique::* )( ::std::vector< std::string > & ) const)(&::osgFX::Technique::getRequiredExtensions)
            , (void ( Technique_wrapper::* )( ::std::vector< std::string > & ) const)(&Technique_wrapper::default_getRequiredExtensions)
            , ( bp::arg("arg0") ) )    
        .def( 
            "techniqueDescription"
            , (char const * ( ::osgFX::Technique::* )(  ) )(&::osgFX::Technique::techniqueDescription)
            , (char const * ( Technique_wrapper::* )(  ) )(&Technique_wrapper::default_techniqueDescription) )    
        .def( 
            "techniqueName"
            , (char const * ( ::osgFX::Technique::* )(  ) )(&::osgFX::Technique::techniqueName)
            , (char const * ( Technique_wrapper::* )(  ) )(&Technique_wrapper::default_techniqueName) )    
        .def( 
            "traverse"
            , (void ( ::osgFX::Technique::* )( ::osg::NodeVisitor &,::osgFX::Effect * ) )(&::osgFX::Technique::traverse)
            , (void ( Technique_wrapper::* )( ::osg::NodeVisitor &,::osgFX::Effect * ) )(&Technique_wrapper::default_traverse)
            , ( bp::arg("nv"), bp::arg("fx") ) )    
        .def( 
            "validate"
            , (bool ( ::osgFX::Technique::* )( ::osg::State & ) const)(&::osgFX::Technique::validate)
            , (bool ( Technique_wrapper::* )( ::osg::State & ) const)(&Technique_wrapper::default_validate)
            , ( bp::arg("arg0") ) );

}
