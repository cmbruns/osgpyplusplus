// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "UserDataContainer.pypp.hpp"

namespace bp = boost::python;

struct UserDataContainer_wrapper : osg::UserDataContainer, bp::wrapper< osg::UserDataContainer > {

    virtual void addDescription( ::std::string const & desc ){
        bp::override func_addDescription = this->get_override( "addDescription" );
        func_addDescription( desc );
    }

    virtual unsigned int addUserObject( ::osg::Object * obj ){
        bp::override func_addUserObject = this->get_override( "addUserObject" );
        return func_addUserObject( boost::python::ptr(obj) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::UserDataContainer::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::UserDataContainer::className( );
    }

    virtual unsigned int getNumDescriptions(  ) const {
        bp::override func_getNumDescriptions = this->get_override( "getNumDescriptions" );
        return func_getNumDescriptions(  );
    }

    virtual unsigned int getNumUserObjects(  ) const {
        bp::override func_getNumUserObjects = this->get_override( "getNumUserObjects" );
        return func_getNumUserObjects(  );
    }

    virtual ::osg::Referenced * getUserData(  ){
        bp::override func_getUserData = this->get_override( "getUserData" );
        return func_getUserData(  );
    }

    virtual ::osg::Referenced const * getUserData(  ) const {
        bp::override func_getUserData = this->get_override( "getUserData" );
        return func_getUserData(  );
    }

    virtual unsigned int getUserObjectIndex( ::osg::Object const * obj, unsigned int startPos=0 ) const {
        bp::override func_getUserObjectIndex = this->get_override( "getUserObjectIndex" );
        return func_getUserObjectIndex( boost::python::ptr(obj), startPos );
    }

    virtual unsigned int getUserObjectIndex( ::std::string const & name, unsigned int startPos=0 ) const {
        bp::override func_getUserObjectIndex = this->get_override( "getUserObjectIndex" );
        return func_getUserObjectIndex( name, startPos );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::UserDataContainer::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::UserDataContainer::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::UserDataContainer::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::UserDataContainer::libraryName( );
    }

    virtual void removeUserObject( unsigned int i ){
        bp::override func_removeUserObject = this->get_override( "removeUserObject" );
        func_removeUserObject( i );
    }

    virtual void setDescriptions( ::std::vector< std::string > const & descriptions ){
        bp::override func_setDescriptions = this->get_override( "setDescriptions" );
        func_setDescriptions( boost::ref(descriptions) );
    }

    virtual void setUserData( ::osg::Referenced * obj ){
        bp::override func_setUserData = this->get_override( "setUserData" );
        func_setUserData( boost::python::ptr(obj) );
    }

    virtual void setUserObject( unsigned int i, ::osg::Object * obj ){
        bp::override func_setUserObject = this->get_override( "setUserObject" );
        func_setUserObject( i, boost::python::ptr(obj) );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & arg0 ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone( boost::ref(arg0) );
    }

    virtual ::osg::Object * cloneType(  ) const {
        bp::override func_cloneType = this->get_override( "cloneType" );
        return func_cloneType(  );
    }

};

void register_UserDataContainer_class(){

    bp::class_< UserDataContainer_wrapper, bp::bases< osg::Object >, osg::ref_ptr< ::osg::UserDataContainer >, boost::noncopyable >( "UserDataContainer", "\n Internal structure for storing all user data.\n", bp::no_init )    
        .def( 
            "addDescription"
            , bp::pure_virtual( (void ( ::osg::UserDataContainer::* )( ::std::string const & ) )(&::osg::UserDataContainer::addDescription) )
            , ( bp::arg("desc") )
            , "\n Add a description string.\n" )    
        .def( 
            "addUserObject"
            , bp::pure_virtual( (unsigned int ( ::osg::UserDataContainer::* )( ::osg::Object * ) )(&::osg::UserDataContainer::addUserObject) )
            , ( bp::arg("obj") )
            , "\n Add user data object. Returns the index position of object added.\n" )    
        .def( 
            "className"
            , (char const * ( ::osg::UserDataContainer::* )(  ) const)(&::osg::UserDataContainer::className)
            , (char const * ( UserDataContainer_wrapper::* )(  ) const)(&UserDataContainer_wrapper::default_className) )    
        .def( 
            "getNumDescriptions"
            , bp::pure_virtual( (unsigned int ( ::osg::UserDataContainer::* )(  ) const)(&::osg::UserDataContainer::getNumDescriptions) )
            , "\n Get number of description strings.\n" )    
        .def( 
            "getNumUserObjects"
            , bp::pure_virtual( (unsigned int ( ::osg::UserDataContainer::* )(  ) const)(&::osg::UserDataContainer::getNumUserObjects) )
            , "\n Get number of user objects assigned to this object.\n" )    
        .def( 
            "getUserData"
            , bp::pure_virtual( (::osg::Referenced * ( ::osg::UserDataContainer::* )(  ) )(&::osg::UserDataContainer::getUserData) )
            , bp::return_internal_reference< >()
            , "\n Get user data.\n" )    
        .def( 
            "getUserData"
            , bp::pure_virtual( (::osg::Referenced const * ( ::osg::UserDataContainer::* )(  ) const)(&::osg::UserDataContainer::getUserData) )
            , bp::return_internal_reference< >()
            , "\n Get const user data.\n" )    
        .def( 
            "getUserObjectIndex"
            , bp::pure_virtual( (unsigned int ( ::osg::UserDataContainer::* )( ::osg::Object const *,unsigned int ) const)(&::osg::UserDataContainer::getUserObjectIndex) )
            , ( bp::arg("obj"), bp::arg("startPos")=(unsigned int)(0) )
            , "\n Get the index position of specified user data object.\n" )    
        .def( 
            "getUserObjectIndex"
            , bp::pure_virtual( (unsigned int ( ::osg::UserDataContainer::* )( ::std::string const &,unsigned int ) const)(&::osg::UserDataContainer::getUserObjectIndex) )
            , ( bp::arg("name"), bp::arg("startPos")=(unsigned int)(0) )
            , "\n Get the index position of first user data object that matches specified name.\n" )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::UserDataContainer::* )( ::osg::Object const * ) const)(&::osg::UserDataContainer::isSameKindAs)
            , (bool ( UserDataContainer_wrapper::* )( ::osg::Object const * ) const)(&UserDataContainer_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::UserDataContainer::* )(  ) const)(&::osg::UserDataContainer::libraryName)
            , (char const * ( UserDataContainer_wrapper::* )(  ) const)(&UserDataContainer_wrapper::default_libraryName) )    
        .def( 
            "removeUserObject"
            , bp::pure_virtual( (void ( ::osg::UserDataContainer::* )( unsigned int ) )(&::osg::UserDataContainer::removeUserObject) )
            , ( bp::arg("i") )
            , "\n Remove element from the list of user data objects.\n" )    
        .def( 
            "setDescriptions"
            , bp::pure_virtual( (void ( ::osg::UserDataContainer::* )( ::std::vector< std::string > const & ) )(&::osg::UserDataContainer::setDescriptions) )
            , ( bp::arg("descriptions") )
            , "\n Set the list of string descriptions.\n" )    
        .def( 
            "setUserData"
            , bp::pure_virtual( (void ( ::osg::UserDataContainer::* )( ::osg::Referenced * ) )(&::osg::UserDataContainer::setUserData) )
            , ( bp::arg("obj") )
            , "\n Set user data, data must be subclassed from Referenced to allow\n automatic memory handling.  If your own data isnt directly\n subclassed from Referenced then create an adapter object\n which points to your own object and handles the memory addressing.\n" )    
        .def( 
            "setUserObject"
            , bp::pure_virtual( (void ( ::osg::UserDataContainer::* )( unsigned int,::osg::Object * ) )(&::osg::UserDataContainer::setUserObject) )
            , ( bp::arg("i"), bp::arg("obj") )
            , "\n Add element to list of user data objects.\n" )    
        .def( 
            "clone"
            , bp::pure_virtual( (::osg::Object * ( ::osg::Object::* )( ::osg::CopyOp const & ) const)(&::osg::Object::clone) )
            , ( bp::arg("arg0") )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\n Clone an object, with Object* return type.\n            Must be defined by derived classes.\n" )    
        .def( 
            "cloneType"
            , bp::pure_virtual( (::osg::Object * ( ::osg::Object::* )(  ) const)(&::osg::Object::cloneType) )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\n Clone the type of an object, with Object* return type.\n            Must be defined by derived classes.\n" );

}
