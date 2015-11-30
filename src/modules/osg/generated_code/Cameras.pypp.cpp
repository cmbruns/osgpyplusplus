// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/list.hpp"
#include "wrap_osg.h"
#include "Cameras.pypp.hpp"

namespace bp = boost::python;

void register_Cameras_class(){

    { //::std::list< osg::Camera* >
        typedef bp::class_< std::list< osg::Camera* > > Cameras_exposer_t;
        Cameras_exposer_t Cameras_exposer = Cameras_exposer_t( "Cameras", "\n  A standard container with linear time access to elements,\n  and fixed time insertion/deletion at any point in the sequence.\n\n  fngroup sequences\n\n  Tparam: _Tp  Type of element.\n  Tparam: _Alloc  Allocator type, defaults to allocator<_Tp>.\n\n  Meets the requirements of a <a href=tables.html#65>container</a>, a\n  <a href=tables.html#66>reversible container</a>, and a\n  <a href=tables.html#67>sequence</a>, including the\n  <a href=tables.html#68>optional sequence requirements</a> with the\n  %exception of @c at and @c operator[].\n\n  This is a E: doubly E: linked %list.  Traversal up and down the\n  %list requires linear time, but adding and removing elements (or\n  E: nodes) is done in constant time, regardless of where the\n  change takes place.  Unlike std::vector and std::deque,\n  random-access iterators are not provided, so subscripting ( @c\n  [] ) access is not allowed.  For algorithms which only need\n  sequential access, this lack makes no difference.\n\n  Also unlike the other standard containers, std::list provides\n  specialized algorithms %unique to linked lists, such as\n  splicing, sorting, and in-place reversal.\n\n  A couple points on memory allocation for list<Tp>:\n\n  First, we never actually allocate a Tp, we allocate\n  List_node<Tp>s and trust [20.1.5]/4 to DTRT.  This is to ensure\n  that after elements from %list<X,Alloc1> are spliced into\n  %list<X,Alloc2>, destroying the memory of the second %list is a\n  valid operation, i.e., Alloc1 giveth and Alloc2 taketh away.\n\n  Second, a %list conceptually represented as\n  [Code]\n    A <---> B <---> C <---> D\n  E:ndcode\n  is actually circular; a link exists between A and D.  The %list\n  class holds (as its only data member) a private list::iterator\n  pointing to E: D, not to E: A!  To get to the head of the %list,\n  we start at the tail and move forward by one.  When this member\n  iterators next/previous pointers refer to itself, the %list is\n  %empty.\n" );
        bp::scope Cameras_scope( Cameras_exposer );
        Cameras_exposer.def( bp::indexing::list_suite< std::list< osg::Camera* > >::with_policies(bp::return_internal_reference< >()) );
    }

}
