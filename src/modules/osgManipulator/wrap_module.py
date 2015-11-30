# Copyright (c) 2014, Howard Hughes Medical Institute, All rights reserved.
# Redistribution and use in source and binary forms, with or without 
# modification, are permitted provided that the following conditions are met:
#   * Redistributions of source code must retain the above copyright notice, 
#   this list of conditions and the following disclaimer.
#   * Redistributions in binary form must reproduce the above copyright notice, 
#   this list of conditions and the following disclaimer in the documentation 
#   and/or other materials provided with the distribution.
#   * Neither the name of the Howard Hughes Medical Institute nor the names of 
#   its contributors may be used to endorse or promote products derived from 
#   this software without specific prior written permission.
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, ANY 
# IMPLIED WARRANTIES OF MERCHANTABILITY, NON-INFRINGEMENT, OR FITNESS FOR A 
# PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR 
# CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
# EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
# PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; 
# REASONABLE ROYALTIES; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

from pyplusplus import module_builder
from pyplusplus.module_builder.call_policies import *
from pyplusplus import function_transformers as FT
from pygccxml import declarations
import os
import sys
import re

sys.path.append("..")
from wrap_helpers import *

class OsgManipulatorWrapper(BaseWrapper):
    "Class that knows how to generate code for osgManipulator python module"
    def __init__(self):
        BaseWrapper.__init__(self, files=["wrap_osgManipulator.h",])
        # Don't rewrap anything already wrapped by osg etc.
        # See http://www.language-binding.net/pyplusplus/documentation/multi_module_development.html
        # For base classes to be properly referenced, we really need to register all of the dependencies...
        # TODO - temporarily suspending dependencies until wrapping is converged
        self.mb.register_module_dependency('../osg/generated_code/')
        self.mb.register_module_dependency('../osgUtil/generated_code/')
        self.mb.register_module_dependency('../osgDB/generated_code/')
        self.mb.register_module_dependency('../osgGA/generated_code/') # Included to linearize dependency chain
        self.mb.register_module_dependency('../osgText/generated_code/')
        self.mb.register_module_dependency('../osgViewer/generated_code/')
            
    def wrap(self):
        mb = self.mb
        
        # Wrap everything in the "osgManipulator" namespace
        osgManipulator = mb.namespace("osgManipulator")
        osgManipulator.include()

        mb.free_functions(lambda f: f.name.startswith("osgManipulator")).include()

        wrap_call_policies(self.mb)

        # linux compile error HalfWayMapGenerator.pypp.cpp:13:113: error: `HalfWayMapGenerator_wrapper` was not declared in this scope
        for cls_name in [
                 "CommandManager",
                 ]:
            cls = osgManipulator.class_(cls_name)
            cls.wrapper_alias = cls.decl_string

        self.wrap_all_osg_referenced(osgManipulator)
            
        hide_nonpublic(mb)

        #

        cls = osgManipulator.class_("Dragger")
        # Putting the transformation in the correct base class can make a big difference
        # 1>C:\boost\include\boost-1_56\boost/python/detail/destroy.hpp(33) : error C2248: 'osgManipulator::MotionCommand::~MotionCommand' : cannot access protected member declared in class 'osgManipulator::MotionCommand'
        cls.member_functions("dispatch").add_transformation(FT.modify_type("command", remove_const_from_reference))
        cls.member_functions("receive").add_transformation(FT.modify_type("command", remove_const_from_reference))
        hack_osg_arg(cls, "handle", "arg1")
    
        # C:\boost\include\boost-1_56\boost/python/detail/destroy.hpp(33) : error C2248: 'osgGA::GUIEventAdapter::~GUIEventAdapter' : cannot access protected member declared in class 'osgGA::GUIEventAdapter'
        for cls in osgManipulator.classes(lambda c: c.name.endswith("Dragger")):
            hack_osg_arg(cls, "handle", "ea")

        # 2>C:\boost\include\boost-1_56\boost/python/detail/destroy.hpp(33) : error C2248: 'osgManipulator::Constraint::~Constraint' : cannot access protected member declared in class 'osgManipulator::Constraint'
        for cls in osgManipulator.classes(lambda c: c.name.endswith("Command")):
            hack_osg_arg(cls, "accept", "constraint")

        # many protected destructor compile errors related to "receive" method
        for cls in osgManipulator.classes(lambda c: c.name.endswith("Callback")):
            hack_osg_arg(cls, "receive", "command")
            hack_osg_arg(cls, "receive", "arg0")

        osgManipulator.class_("CompositeDragger").member_function("findDragger").exclude()

        self.generate_module_code('_osgManipulator')

if __name__ == "__main__":
    wrapper = OsgManipulatorWrapper()
    wrapper.wrap()
