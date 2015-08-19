// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "wrap_referenced.h"
#include "updatebone.pypp.hpp"

namespace bp = boost::python;

struct UpdateBone_wrapper : osgAnimation::UpdateBone, bp::wrapper< osgAnimation::UpdateBone > {

    UpdateBone_wrapper(::std::string const & name="" )
    : osgAnimation::UpdateBone( name )
      , bp::wrapper< osgAnimation::UpdateBone >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgAnimation::UpdateBone::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgAnimation::UpdateBone::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgAnimation::UpdateBone::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgAnimation::UpdateBone::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgAnimation::UpdateBone::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgAnimation::UpdateBone::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgAnimation::UpdateBone::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgAnimation::UpdateBone::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgAnimation::UpdateBone::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgAnimation::UpdateBone::libraryName( );
    }

    virtual void operator()( ::osg::Node * node, ::osg::NodeVisitor * nv ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( boost::python::ptr(node), boost::python::ptr(nv) );
        else{
            this->osgAnimation::UpdateBone::operator()( boost::python::ptr(node), boost::python::ptr(nv) );
        }
    }
    
    void default___call__( ::osg::Node * node, ::osg::NodeVisitor * nv ) {
        osgAnimation::UpdateBone::operator()( boost::python::ptr(node), boost::python::ptr(nv) );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Object::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Object::computeDataVariance( );
    }

    virtual ::osg::Referenced * getUserData(  ) {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced * default_getUserData(  ) {
        return osg::Object::getUserData( );
    }

    virtual ::osg::Referenced const * getUserData(  ) const  {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced const * default_getUserData(  ) const  {
        return osg::Object::getUserData( );
    }

    virtual int link( ::osgAnimation::Animation * animation ) {
        if( bp::override func_link = this->get_override( "link" ) )
            return func_link( boost::python::ptr(animation) );
        else{
            return this->osgAnimation::AnimationUpdateCallback< osg::NodeCallback >::link( boost::python::ptr(animation) );
        }
    }
    
    int default_link( ::osgAnimation::Animation * animation ) {
        return osgAnimation::AnimationUpdateCallback< osg::NodeCallback >::link( boost::python::ptr(animation) );
    }

    virtual bool link( ::osgAnimation::Channel * channel ) {
        if( bp::override func_link = this->get_override( "link" ) )
            return func_link( boost::python::ptr(channel) );
        else{
            return this->osgAnimation::UpdateMatrixTransform::link( boost::python::ptr(channel) );
        }
    }
    
    bool default_link( ::osgAnimation::Channel * channel ) {
        return osgAnimation::UpdateMatrixTransform::link( boost::python::ptr(channel) );
    }

    virtual void resizeGLObjectBuffers( unsigned int arg0 ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( arg0 );
        else{
            this->osg::Object::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::Object::resizeGLObjectBuffers( arg0 );
    }

    virtual void setName( ::std::string const & name ) {
        if( bp::override func_setName = this->get_override( "setName" ) )
            func_setName( name );
        else{
            this->osg::Object::setName( name );
        }
    }
    
    void default_setName( ::std::string const & name ) {
        osg::Object::setName( name );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Object::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Object::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUserData( ::osg::Referenced * obj ) {
        if( bp::override func_setUserData = this->get_override( "setUserData" ) )
            func_setUserData( boost::python::ptr(obj) );
        else{
            this->osg::Object::setUserData( boost::python::ptr(obj) );
        }
    }
    
    void default_setUserData( ::osg::Referenced * obj ) {
        osg::Object::setUserData( boost::python::ptr(obj) );
    }

};

void register_UpdateBone_class(){

    { //::osgAnimation::UpdateBone
        typedef bp::class_< UpdateBone_wrapper, bp::bases< osgAnimation::UpdateMatrixTransform >, osg::ref_ptr< UpdateBone_wrapper >, boost::noncopyable > UpdateBone_exposer_t;
        UpdateBone_exposer_t UpdateBone_exposer = UpdateBone_exposer_t( "UpdateBone", bp::init< bp::optional< std::string const & > >(( bp::arg("name")="" )) );
        bp::scope UpdateBone_scope( UpdateBone_exposer );
        bp::implicitly_convertible< std::string const &, osgAnimation::UpdateBone >();
        { //::osgAnimation::UpdateBone::className
        
            typedef char const * ( ::osgAnimation::UpdateBone::*className_function_type)(  ) const;
            typedef char const * ( UpdateBone_wrapper::*default_className_function_type)(  ) const;
            
            UpdateBone_exposer.def( 
                "className"
                , className_function_type(&::osgAnimation::UpdateBone::className)
                , default_className_function_type(&UpdateBone_wrapper::default_className) );
        
        }
        { //::osgAnimation::UpdateBone::clone
        
            typedef ::osg::Object * ( ::osgAnimation::UpdateBone::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( UpdateBone_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            UpdateBone_exposer.def( 
                "clone"
                , clone_function_type(&::osgAnimation::UpdateBone::clone)
                , default_clone_function_type(&UpdateBone_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgAnimation::UpdateBone::cloneType
        
            typedef ::osg::Object * ( ::osgAnimation::UpdateBone::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( UpdateBone_wrapper::*default_cloneType_function_type)(  ) const;
            
            UpdateBone_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osgAnimation::UpdateBone::cloneType)
                , default_cloneType_function_type(&UpdateBone_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgAnimation::UpdateBone::isSameKindAs
        
            typedef bool ( ::osgAnimation::UpdateBone::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( UpdateBone_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            UpdateBone_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osgAnimation::UpdateBone::isSameKindAs)
                , default_isSameKindAs_function_type(&UpdateBone_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osgAnimation::UpdateBone::libraryName
        
            typedef char const * ( ::osgAnimation::UpdateBone::*libraryName_function_type)(  ) const;
            typedef char const * ( UpdateBone_wrapper::*default_libraryName_function_type)(  ) const;
            
            UpdateBone_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgAnimation::UpdateBone::libraryName)
                , default_libraryName_function_type(&UpdateBone_wrapper::default_libraryName) );
        
        }
        { //::osgAnimation::UpdateBone::operator()
        
            typedef void ( ::osgAnimation::UpdateBone::*__call___function_type)( ::osg::Node *,::osg::NodeVisitor * ) ;
            typedef void ( UpdateBone_wrapper::*default___call___function_type)( ::osg::Node *,::osg::NodeVisitor * ) ;
            
            UpdateBone_exposer.def( 
                "__call__"
                , __call___function_type(&::osgAnimation::UpdateBone::operator())
                , default___call___function_type(&UpdateBone_wrapper::default___call__)
                , ( bp::arg("node"), bp::arg("nv") ) );
        
        }
        { //::osgAnimation::AnimationUpdateCallback< osg::NodeCallback >::link
        
            typedef osgAnimation::UpdateBone exported_class_t;
            typedef int ( exported_class_t::*link_function_type)( ::osgAnimation::Animation * ) ;
            typedef int ( UpdateBone_wrapper::*default_link_function_type)( ::osgAnimation::Animation * ) ;
            
            UpdateBone_exposer.def( 
                "link"
                , link_function_type(&::osgAnimation::AnimationUpdateCallback< osg::NodeCallback >::link)
                , default_link_function_type(&UpdateBone_wrapper::default_link)
                , ( bp::arg("animation") ) );
        
        }
        { //::osgAnimation::UpdateMatrixTransform::link
        
            typedef bool ( ::osgAnimation::UpdateMatrixTransform::*link_function_type)( ::osgAnimation::Channel * ) ;
            typedef bool ( UpdateBone_wrapper::*default_link_function_type)( ::osgAnimation::Channel * ) ;
            
            UpdateBone_exposer.def( 
                "link"
                , link_function_type(&::osgAnimation::UpdateMatrixTransform::link)
                , default_link_function_type(&UpdateBone_wrapper::default_link)
                , ( bp::arg("channel") ) );
        
        }
    }

}
