// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgDB.h"
#include "RegisterCompressorProxy.pypp.hpp"

namespace bp = boost::python;

void register_RegisterCompressorProxy_class(){

    bp::class_< osgDB::RegisterCompressorProxy >( "RegisterCompressorProxy", bp::init< std::string const &, osgDB::BaseCompressor * >(( bp::arg("name"), bp::arg("compressor") )) );

}
