// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "MatrixTransform.pypp.hpp"

namespace bp = boost::python;

struct MatrixTransform_wrapper : osg::MatrixTransform, bp::wrapper< osg::MatrixTransform > {

    MatrixTransform_wrapper( )
    : osg::MatrixTransform( )
      , bp::wrapper< osg::MatrixTransform >(){
        // null constructor
    
    }

    MatrixTransform_wrapper(::osg::Matrix const & matix )
    : osg::MatrixTransform( boost::ref(matix) )
      , bp::wrapper< osg::MatrixTransform >(){
        // constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osg::MatrixTransform::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osg::MatrixTransform::accept( boost::ref(nv) );
    }

    virtual ::osg::MatrixTransform * asMatrixTransform(  ) {
        if( bp::override func_asMatrixTransform = this->get_override( "asMatrixTransform" ) )
            return func_asMatrixTransform(  );
        else{
            return this->osg::MatrixTransform::asMatrixTransform(  );
        }
    }
    
    ::osg::MatrixTransform * default_asMatrixTransform(  ) {
        return osg::MatrixTransform::asMatrixTransform( );
    }

    virtual ::osg::MatrixTransform const * asMatrixTransform(  ) const  {
        if( bp::override func_asMatrixTransform = this->get_override( "asMatrixTransform" ) )
            return func_asMatrixTransform(  );
        else{
            return this->osg::MatrixTransform::asMatrixTransform(  );
        }
    }
    
    ::osg::MatrixTransform const * default_asMatrixTransform(  ) const  {
        return osg::MatrixTransform::asMatrixTransform( );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::MatrixTransform::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::MatrixTransform::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::MatrixTransform::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::MatrixTransform::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::MatrixTransform::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::MatrixTransform::cloneType( );
    }

    virtual bool computeLocalToWorldMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * arg1 ) const  {
        if( bp::override func_computeLocalToWorldMatrix = this->get_override( "computeLocalToWorldMatrix" ) )
            return func_computeLocalToWorldMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
        else{
            return this->osg::MatrixTransform::computeLocalToWorldMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
        }
    }
    
    bool default_computeLocalToWorldMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * arg1 ) const  {
        return osg::MatrixTransform::computeLocalToWorldMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
    }

    virtual bool computeWorldToLocalMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * arg1 ) const  {
        if( bp::override func_computeWorldToLocalMatrix = this->get_override( "computeWorldToLocalMatrix" ) )
            return func_computeWorldToLocalMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
        else{
            return this->osg::MatrixTransform::computeWorldToLocalMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
        }
    }
    
    bool default_computeWorldToLocalMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * arg1 ) const  {
        return osg::MatrixTransform::computeWorldToLocalMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::MatrixTransform::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::MatrixTransform::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::MatrixTransform::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::MatrixTransform::libraryName( );
    }

    virtual bool addChild( ::osg::Node * child ) {
        if( bp::override func_addChild = this->get_override( "addChild" ) )
            return func_addChild( boost::python::ptr(child) );
        else{
            return this->osg::Group::addChild( boost::python::ptr(child) );
        }
    }
    
    bool default_addChild( ::osg::Node * child ) {
        return osg::Group::addChild( boost::python::ptr(child) );
    }

    virtual ::osg::Camera * asCamera(  ) {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera * default_asCamera(  ) {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Camera const * asCamera(  ) const  {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera const * default_asCamera(  ) const  {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Geode * asGeode(  ) {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode * default_asGeode(  ) {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Geode const * asGeode(  ) const  {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode const * default_asGeode(  ) const  {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Group * asGroup(  ) {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Group::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Group::asGroup( );
    }

    virtual ::osg::PositionAttitudeTransform * asPositionAttitudeTransform(  ) {
        if( bp::override func_asPositionAttitudeTransform = this->get_override( "asPositionAttitudeTransform" ) )
            return func_asPositionAttitudeTransform(  );
        else{
            return this->osg::Transform::asPositionAttitudeTransform(  );
        }
    }
    
    ::osg::PositionAttitudeTransform * default_asPositionAttitudeTransform(  ) {
        return osg::Transform::asPositionAttitudeTransform( );
    }

    virtual ::osg::PositionAttitudeTransform const * asPositionAttitudeTransform(  ) const  {
        if( bp::override func_asPositionAttitudeTransform = this->get_override( "asPositionAttitudeTransform" ) )
            return func_asPositionAttitudeTransform(  );
        else{
            return this->osg::Transform::asPositionAttitudeTransform(  );
        }
    }
    
    ::osg::PositionAttitudeTransform const * default_asPositionAttitudeTransform(  ) const  {
        return osg::Transform::asPositionAttitudeTransform( );
    }

    virtual ::osg::Switch * asSwitch(  ) {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch * default_asSwitch(  ) {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Switch const * asSwitch(  ) const  {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch const * default_asSwitch(  ) const  {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Transform * asTransform(  ) {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Transform::asTransform(  );
        }
    }
    
    ::osg::Transform * default_asTransform(  ) {
        return osg::Transform::asTransform( );
    }

    virtual ::osg::Transform const * asTransform(  ) const  {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Transform::asTransform(  );
        }
    }
    
    ::osg::Transform const * default_asTransform(  ) const  {
        return osg::Transform::asTransform( );
    }

    virtual void ascend( ::osg::NodeVisitor & nv ) {
        if( bp::override func_ascend = this->get_override( "ascend" ) )
            func_ascend( boost::ref(nv) );
        else{
            this->osg::Node::ascend( boost::ref(nv) );
        }
    }
    
    void default_ascend( ::osg::NodeVisitor & nv ) {
        osg::Node::ascend( boost::ref(nv) );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::Transform::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::Transform::computeBound( );
    }

    virtual bool insertChild( unsigned int index, ::osg::Node * child ) {
        if( bp::override func_insertChild = this->get_override( "insertChild" ) )
            return func_insertChild( index, boost::python::ptr(child) );
        else{
            return this->osg::Group::insertChild( index, boost::python::ptr(child) );
        }
    }
    
    bool default_insertChild( unsigned int index, ::osg::Node * child ) {
        return osg::Group::insertChild( index, boost::python::ptr(child) );
    }

    virtual bool removeChildren( unsigned int pos, unsigned int numChildrenToRemove ) {
        if( bp::override func_removeChildren = this->get_override( "removeChildren" ) )
            return func_removeChildren( pos, numChildrenToRemove );
        else{
            return this->osg::Group::removeChildren( pos, numChildrenToRemove );
        }
    }
    
    bool default_removeChildren( unsigned int pos, unsigned int numChildrenToRemove ) {
        return osg::Group::removeChildren( pos, numChildrenToRemove );
    }

    virtual bool replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        if( bp::override func_replaceChild = this->get_override( "replaceChild" ) )
            return func_replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        else{
            return this->osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        }
    }
    
    bool default_replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        return osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Group::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Group::resizeGLObjectBuffers( maxSize );
    }

    virtual bool setChild( unsigned int i, ::osg::Node * node ) {
        if( bp::override func_setChild = this->get_override( "setChild" ) )
            return func_setChild( i, boost::python::ptr(node) );
        else{
            return this->osg::Group::setChild( i, boost::python::ptr(node) );
        }
    }
    
    bool default_setChild( unsigned int i, ::osg::Node * node ) {
        return osg::Group::setChild( i, boost::python::ptr(node) );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Group::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Group::setThreadSafeRefUnref( threadSafe );
    }

    virtual void traverse( ::osg::NodeVisitor & nv ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(nv) );
        else{
            this->osg::Group::traverse( boost::ref(nv) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv ) {
        osg::Group::traverse( boost::ref(nv) );
    }

};

void register_MatrixTransform_class(){

    { //::osg::MatrixTransform
        typedef bp::class_< MatrixTransform_wrapper, bp::bases< osg::Transform >, osg::ref_ptr< ::osg::MatrixTransform >, boost::noncopyable > MatrixTransform_exposer_t;
        MatrixTransform_exposer_t MatrixTransform_exposer = MatrixTransform_exposer_t( "MatrixTransform", "\n MatrixTransform - is a subclass of Transform which has an osg::Matrix\n which represents a 4x4 transformation of its children from local coordinates\n into the Transforms parent coordinates.\n", bp::no_init );
        bp::scope MatrixTransform_scope( MatrixTransform_exposer );
        MatrixTransform_exposer.def( bp::init< >("\n MatrixTransform - is a subclass of Transform which has an osg::Matrix\n which represents a 4x4 transformation of its children from local coordinates\n into the Transforms parent coordinates.\n") );
        MatrixTransform_exposer.def( bp::init< osg::Matrix const & >(( bp::arg("matix") )) );
        bp::implicitly_convertible< osg::Matrix const &, osg::MatrixTransform >();
        { //::osg::MatrixTransform::accept
        
            typedef void ( ::osg::MatrixTransform::*accept_function_type )( ::osg::NodeVisitor & ) ;
            typedef void ( MatrixTransform_wrapper::*default_accept_function_type )( ::osg::NodeVisitor & ) ;
            
            MatrixTransform_exposer.def( 
                "accept"
                , accept_function_type(&::osg::MatrixTransform::accept)
                , default_accept_function_type(&MatrixTransform_wrapper::default_accept)
                , ( bp::arg("nv") ) );
        
        }
        { //::osg::MatrixTransform::asMatrixTransform
        
            typedef ::osg::MatrixTransform * ( ::osg::MatrixTransform::*asMatrixTransform_function_type )(  ) ;
            typedef ::osg::MatrixTransform * ( MatrixTransform_wrapper::*default_asMatrixTransform_function_type )(  ) ;
            
            MatrixTransform_exposer.def( 
                "asMatrixTransform"
                , asMatrixTransform_function_type(&::osg::MatrixTransform::asMatrixTransform)
                , default_asMatrixTransform_function_type(&MatrixTransform_wrapper::default_asMatrixTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::MatrixTransform::asMatrixTransform
        
            typedef ::osg::MatrixTransform const * ( ::osg::MatrixTransform::*asMatrixTransform_function_type )(  ) const;
            typedef ::osg::MatrixTransform const * ( MatrixTransform_wrapper::*default_asMatrixTransform_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "asMatrixTransform"
                , asMatrixTransform_function_type(&::osg::MatrixTransform::asMatrixTransform)
                , default_asMatrixTransform_function_type(&MatrixTransform_wrapper::default_asMatrixTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::MatrixTransform::className
        
            typedef char const * ( ::osg::MatrixTransform::*className_function_type )(  ) const;
            typedef char const * ( MatrixTransform_wrapper::*default_className_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "className"
                , className_function_type(&::osg::MatrixTransform::className)
                , default_className_function_type(&MatrixTransform_wrapper::default_className) );
        
        }
        { //::osg::MatrixTransform::clone
        
            typedef ::osg::Object * ( ::osg::MatrixTransform::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( MatrixTransform_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            MatrixTransform_exposer.def( 
                "clone"
                , clone_function_type(&::osg::MatrixTransform::clone)
                , default_clone_function_type(&MatrixTransform_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::MatrixTransform::cloneType
        
            typedef ::osg::Object * ( ::osg::MatrixTransform::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( MatrixTransform_wrapper::*default_cloneType_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::MatrixTransform::cloneType)
                , default_cloneType_function_type(&MatrixTransform_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::MatrixTransform::computeLocalToWorldMatrix
        
            typedef bool ( ::osg::MatrixTransform::*computeLocalToWorldMatrix_function_type )( ::osg::Matrix &,::osg::NodeVisitor * ) const;
            typedef bool ( MatrixTransform_wrapper::*default_computeLocalToWorldMatrix_function_type )( ::osg::Matrix &,::osg::NodeVisitor * ) const;
            
            MatrixTransform_exposer.def( 
                "computeLocalToWorldMatrix"
                , computeLocalToWorldMatrix_function_type(&::osg::MatrixTransform::computeLocalToWorldMatrix)
                , default_computeLocalToWorldMatrix_function_type(&MatrixTransform_wrapper::default_computeLocalToWorldMatrix)
                , ( bp::arg("matrix"), bp::arg("arg1") ) );
        
        }
        { //::osg::MatrixTransform::computeWorldToLocalMatrix
        
            typedef bool ( ::osg::MatrixTransform::*computeWorldToLocalMatrix_function_type )( ::osg::Matrix &,::osg::NodeVisitor * ) const;
            typedef bool ( MatrixTransform_wrapper::*default_computeWorldToLocalMatrix_function_type )( ::osg::Matrix &,::osg::NodeVisitor * ) const;
            
            MatrixTransform_exposer.def( 
                "computeWorldToLocalMatrix"
                , computeWorldToLocalMatrix_function_type(&::osg::MatrixTransform::computeWorldToLocalMatrix)
                , default_computeWorldToLocalMatrix_function_type(&MatrixTransform_wrapper::default_computeWorldToLocalMatrix)
                , ( bp::arg("matrix"), bp::arg("arg1") ) );
        
        }
        { //::osg::MatrixTransform::getInverseMatrix
        
            typedef ::osg::Matrix const & ( ::osg::MatrixTransform::*getInverseMatrix_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "getInverseMatrix"
                , getInverseMatrix_function_type( &::osg::MatrixTransform::getInverseMatrix )
                , bp::return_internal_reference< >()
                , " Get the inverse matrix." );
        
        }
        { //::osg::MatrixTransform::getMatrix
        
            typedef ::osg::Matrix const & ( ::osg::MatrixTransform::*getMatrix_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "getMatrix"
                , getMatrix_function_type( &::osg::MatrixTransform::getMatrix )
                , bp::return_internal_reference< >()
                , " Get the matrix." );
        
        }
        { //::osg::MatrixTransform::isSameKindAs
        
            typedef bool ( ::osg::MatrixTransform::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( MatrixTransform_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            MatrixTransform_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::MatrixTransform::isSameKindAs)
                , default_isSameKindAs_function_type(&MatrixTransform_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::MatrixTransform::libraryName
        
            typedef char const * ( ::osg::MatrixTransform::*libraryName_function_type )(  ) const;
            typedef char const * ( MatrixTransform_wrapper::*default_libraryName_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::MatrixTransform::libraryName)
                , default_libraryName_function_type(&MatrixTransform_wrapper::default_libraryName) );
        
        }
        { //::osg::MatrixTransform::postMult
        
            typedef void ( ::osg::MatrixTransform::*postMult_function_type )( ::osg::Matrix const & ) ;
            
            MatrixTransform_exposer.def( 
                "postMult"
                , postMult_function_type( &::osg::MatrixTransform::postMult )
                , ( bp::arg("mat") )
                , " post multiply the transforms matrix." );
        
        }
        { //::osg::MatrixTransform::preMult
        
            typedef void ( ::osg::MatrixTransform::*preMult_function_type )( ::osg::Matrix const & ) ;
            
            MatrixTransform_exposer.def( 
                "preMult"
                , preMult_function_type( &::osg::MatrixTransform::preMult )
                , ( bp::arg("mat") )
                , " pre multiply the transforms matrix." );
        
        }
        { //::osg::MatrixTransform::setMatrix
        
            typedef void ( ::osg::MatrixTransform::*setMatrix_function_type )( ::osg::Matrix const & ) ;
            
            MatrixTransform_exposer.def( 
                "setMatrix"
                , setMatrix_function_type( &::osg::MatrixTransform::setMatrix )
                , ( bp::arg("mat") )
                , " Set the transforms matrix." );
        
        }
        { //::osg::Group::addChild
        
            typedef bool ( ::osg::Group::*addChild_function_type )( ::osg::Node * ) ;
            typedef bool ( MatrixTransform_wrapper::*default_addChild_function_type )( ::osg::Node * ) ;
            
            MatrixTransform_exposer.def( 
                "addChild"
                , addChild_function_type(&::osg::Group::addChild)
                , default_addChild_function_type(&MatrixTransform_wrapper::default_addChild)
                , ( bp::arg("child") ) );
        
        }
        { //::osg::Node::asCamera
        
            typedef ::osg::Camera * ( ::osg::Node::*asCamera_function_type )(  ) ;
            typedef ::osg::Camera * ( MatrixTransform_wrapper::*default_asCamera_function_type )(  ) ;
            
            MatrixTransform_exposer.def( 
                "asCamera"
                , asCamera_function_type(&::osg::Node::asCamera)
                , default_asCamera_function_type(&MatrixTransform_wrapper::default_asCamera)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asCamera
        
            typedef ::osg::Camera const * ( ::osg::Node::*asCamera_function_type )(  ) const;
            typedef ::osg::Camera const * ( MatrixTransform_wrapper::*default_asCamera_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "asCamera"
                , asCamera_function_type(&::osg::Node::asCamera)
                , default_asCamera_function_type(&MatrixTransform_wrapper::default_asCamera)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asGeode
        
            typedef ::osg::Geode * ( ::osg::Node::*asGeode_function_type )(  ) ;
            typedef ::osg::Geode * ( MatrixTransform_wrapper::*default_asGeode_function_type )(  ) ;
            
            MatrixTransform_exposer.def( 
                "asGeode"
                , asGeode_function_type(&::osg::Node::asGeode)
                , default_asGeode_function_type(&MatrixTransform_wrapper::default_asGeode)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asGeode
        
            typedef ::osg::Geode const * ( ::osg::Node::*asGeode_function_type )(  ) const;
            typedef ::osg::Geode const * ( MatrixTransform_wrapper::*default_asGeode_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "asGeode"
                , asGeode_function_type(&::osg::Node::asGeode)
                , default_asGeode_function_type(&MatrixTransform_wrapper::default_asGeode)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Group::asGroup
        
            typedef ::osg::Group * ( ::osg::Group::*asGroup_function_type )(  ) ;
            typedef ::osg::Group * ( MatrixTransform_wrapper::*default_asGroup_function_type )(  ) ;
            
            MatrixTransform_exposer.def( 
                "asGroup"
                , asGroup_function_type(&::osg::Group::asGroup)
                , default_asGroup_function_type(&MatrixTransform_wrapper::default_asGroup)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Group::asGroup
        
            typedef ::osg::Group const * ( ::osg::Group::*asGroup_function_type )(  ) const;
            typedef ::osg::Group const * ( MatrixTransform_wrapper::*default_asGroup_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "asGroup"
                , asGroup_function_type(&::osg::Group::asGroup)
                , default_asGroup_function_type(&MatrixTransform_wrapper::default_asGroup)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Transform::asPositionAttitudeTransform
        
            typedef ::osg::PositionAttitudeTransform * ( ::osg::Transform::*asPositionAttitudeTransform_function_type )(  ) ;
            typedef ::osg::PositionAttitudeTransform * ( MatrixTransform_wrapper::*default_asPositionAttitudeTransform_function_type )(  ) ;
            
            MatrixTransform_exposer.def( 
                "asPositionAttitudeTransform"
                , asPositionAttitudeTransform_function_type(&::osg::Transform::asPositionAttitudeTransform)
                , default_asPositionAttitudeTransform_function_type(&MatrixTransform_wrapper::default_asPositionAttitudeTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Transform::asPositionAttitudeTransform
        
            typedef ::osg::PositionAttitudeTransform const * ( ::osg::Transform::*asPositionAttitudeTransform_function_type )(  ) const;
            typedef ::osg::PositionAttitudeTransform const * ( MatrixTransform_wrapper::*default_asPositionAttitudeTransform_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "asPositionAttitudeTransform"
                , asPositionAttitudeTransform_function_type(&::osg::Transform::asPositionAttitudeTransform)
                , default_asPositionAttitudeTransform_function_type(&MatrixTransform_wrapper::default_asPositionAttitudeTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asSwitch
        
            typedef ::osg::Switch * ( ::osg::Node::*asSwitch_function_type )(  ) ;
            typedef ::osg::Switch * ( MatrixTransform_wrapper::*default_asSwitch_function_type )(  ) ;
            
            MatrixTransform_exposer.def( 
                "asSwitch"
                , asSwitch_function_type(&::osg::Node::asSwitch)
                , default_asSwitch_function_type(&MatrixTransform_wrapper::default_asSwitch)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asSwitch
        
            typedef ::osg::Switch const * ( ::osg::Node::*asSwitch_function_type )(  ) const;
            typedef ::osg::Switch const * ( MatrixTransform_wrapper::*default_asSwitch_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "asSwitch"
                , asSwitch_function_type(&::osg::Node::asSwitch)
                , default_asSwitch_function_type(&MatrixTransform_wrapper::default_asSwitch)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Transform::asTransform
        
            typedef ::osg::Transform * ( ::osg::Transform::*asTransform_function_type )(  ) ;
            typedef ::osg::Transform * ( MatrixTransform_wrapper::*default_asTransform_function_type )(  ) ;
            
            MatrixTransform_exposer.def( 
                "asTransform"
                , asTransform_function_type(&::osg::Transform::asTransform)
                , default_asTransform_function_type(&MatrixTransform_wrapper::default_asTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Transform::asTransform
        
            typedef ::osg::Transform const * ( ::osg::Transform::*asTransform_function_type )(  ) const;
            typedef ::osg::Transform const * ( MatrixTransform_wrapper::*default_asTransform_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "asTransform"
                , asTransform_function_type(&::osg::Transform::asTransform)
                , default_asTransform_function_type(&MatrixTransform_wrapper::default_asTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::ascend
        
            typedef void ( ::osg::Node::*ascend_function_type )( ::osg::NodeVisitor & ) ;
            typedef void ( MatrixTransform_wrapper::*default_ascend_function_type )( ::osg::NodeVisitor & ) ;
            
            MatrixTransform_exposer.def( 
                "ascend"
                , ascend_function_type(&::osg::Node::ascend)
                , default_ascend_function_type(&MatrixTransform_wrapper::default_ascend)
                , ( bp::arg("nv") ) );
        
        }
        { //::osg::Transform::computeBound
        
            typedef ::osg::BoundingSphere ( ::osg::Transform::*computeBound_function_type )(  ) const;
            typedef ::osg::BoundingSphere ( MatrixTransform_wrapper::*default_computeBound_function_type )(  ) const;
            
            MatrixTransform_exposer.def( 
                "computeBound"
                , computeBound_function_type(&::osg::Transform::computeBound)
                , default_computeBound_function_type(&MatrixTransform_wrapper::default_computeBound) );
        
        }
        { //::osg::Group::insertChild
        
            typedef bool ( ::osg::Group::*insertChild_function_type )( unsigned int,::osg::Node * ) ;
            typedef bool ( MatrixTransform_wrapper::*default_insertChild_function_type )( unsigned int,::osg::Node * ) ;
            
            MatrixTransform_exposer.def( 
                "insertChild"
                , insertChild_function_type(&::osg::Group::insertChild)
                , default_insertChild_function_type(&MatrixTransform_wrapper::default_insertChild)
                , ( bp::arg("index"), bp::arg("child") ) );
        
        }
        { //::osg::Group::removeChildren
        
            typedef bool ( ::osg::Group::*removeChildren_function_type )( unsigned int,unsigned int ) ;
            typedef bool ( MatrixTransform_wrapper::*default_removeChildren_function_type )( unsigned int,unsigned int ) ;
            
            MatrixTransform_exposer.def( 
                "removeChildren"
                , removeChildren_function_type(&::osg::Group::removeChildren)
                , default_removeChildren_function_type(&MatrixTransform_wrapper::default_removeChildren)
                , ( bp::arg("pos"), bp::arg("numChildrenToRemove") ) );
        
        }
        { //::osg::Group::replaceChild
        
            typedef bool ( ::osg::Group::*replaceChild_function_type )( ::osg::Node *,::osg::Node * ) ;
            typedef bool ( MatrixTransform_wrapper::*default_replaceChild_function_type )( ::osg::Node *,::osg::Node * ) ;
            
            MatrixTransform_exposer.def( 
                "replaceChild"
                , replaceChild_function_type(&::osg::Group::replaceChild)
                , default_replaceChild_function_type(&MatrixTransform_wrapper::default_replaceChild)
                , ( bp::arg("origChild"), bp::arg("newChild") ) );
        
        }
        { //::osg::Group::resizeGLObjectBuffers
        
            typedef void ( ::osg::Group::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( MatrixTransform_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            MatrixTransform_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Group::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&MatrixTransform_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::Group::setChild
        
            typedef bool ( ::osg::Group::*setChild_function_type )( unsigned int,::osg::Node * ) ;
            typedef bool ( MatrixTransform_wrapper::*default_setChild_function_type )( unsigned int,::osg::Node * ) ;
            
            MatrixTransform_exposer.def( 
                "setChild"
                , setChild_function_type(&::osg::Group::setChild)
                , default_setChild_function_type(&MatrixTransform_wrapper::default_setChild)
                , ( bp::arg("i"), bp::arg("node") ) );
        
        }
        { //::osg::Group::setThreadSafeRefUnref
        
            typedef void ( ::osg::Group::*setThreadSafeRefUnref_function_type )( bool ) ;
            typedef void ( MatrixTransform_wrapper::*default_setThreadSafeRefUnref_function_type )( bool ) ;
            
            MatrixTransform_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Group::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&MatrixTransform_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Group::traverse
        
            typedef void ( ::osg::Group::*traverse_function_type )( ::osg::NodeVisitor & ) ;
            typedef void ( MatrixTransform_wrapper::*default_traverse_function_type )( ::osg::NodeVisitor & ) ;
            
            MatrixTransform_exposer.def( 
                "traverse"
                , traverse_function_type(&::osg::Group::traverse)
                , default_traverse_function_type(&MatrixTransform_wrapper::default_traverse)
                , ( bp::arg("nv") ) );
        
        }
    }

}
