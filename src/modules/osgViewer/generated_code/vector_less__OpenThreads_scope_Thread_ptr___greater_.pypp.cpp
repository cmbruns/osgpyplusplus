// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osgViewer.h"
#include "vector_less__OpenThreads_scope_Thread_ptr___greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__OpenThreads_scope_Thread_ptr___greater__class(){

    bp::class_< std::vector< OpenThreads::Thread* > >("vector_less__OpenThreads_scope_Thread_ptr___greater_")    
        .def( bp::indexing::vector_suite< std::vector< OpenThreads::Thread* > >::with_policies(bp::return_internal_reference< >()) );

}
