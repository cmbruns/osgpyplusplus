#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgshape"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgUtil
from osgpypp import osgViewer


# Translated from file 'osgshape.cpp'

# OpenSceneGraph example, osgshape.
#*
#*  Permission is hereby granted, free of charge, to any person obtaining a copy
#*  of this software and associated documentation files (the "Software"), to deal
#*  in the Software without restriction, including without limitation the rights
#*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
#*  copies of the Software, and to permit persons to whom the Software is
#*  furnished to do so, subject to the following conditions:
#*
#*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
#*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
#*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
#*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
#*  THE SOFTWARE.
#

#include <osg/Geode>
#include <osg/ShapeDrawable>
#include <osg/Material>
#include <osg/Texture2D>
#include <osgUtil/ShaderGen>

#include <osgViewer/Viewer>

#include <osgDB/ReadFile>
#include <osgDB/WriteFile>

#include <osg/Math>

# for the grid data..
#include "../osghangglide/terrain_coords.h"

def createShapes():

    
    geode = osg.Geode()

    
    # ---------------------------------------
    # Set up a StateSet to texture the objects
    # ---------------------------------------
    stateset = osg.StateSet()

    image = osgDB.readImageFile( "Images/lz.rgb" )
    if image :
        texture = osg.Texture2D()
        texture.setImage(image)
        texture.setFilter(osg.Texture.MIN_FILTER, osg.Texture.LINEAR)
        stateset.setTextureAttributeAndModes(0,texture, osg.StateAttribute.ON)
    
    stateset.setMode(GL_LIGHTING, osg.StateAttribute.ON)
    
    geode.setStateSet( stateset )

    
    radius = 0.8
    height = 1.0
    
    hints = osg.TessellationHints()
    hints.setDetailRatio(0.5)
    
    geode.addDrawable(osg.ShapeDrawable(osg.Sphere(osg.Vec3(0.0,0.0,0.0),radius),hints))
    geode.addDrawable(osg.ShapeDrawable(osg.Box(osg.Vec3(2.0,0.0,0.0),2*radius),hints))
    geode.addDrawable(osg.ShapeDrawable(osg.Cone(osg.Vec3(4.0,0.0,0.0),radius,height),hints))
    geode.addDrawable(osg.ShapeDrawable(osg.Cylinder(osg.Vec3(6.0,0.0,0.0),radius,height),hints))
    geode.addDrawable(osg.ShapeDrawable(osg.Capsule(osg.Vec3(8.0,0.0,0.0),radius,height),hints))

    grid = osg.HeightField()
    grid.allocate(38,39)
    grid.setXInterval(0.28)
    grid.setYInterval(0.28)
    
    for(unsigned int r=0r<39++r)
        for(unsigned int c=0c<38++c)
            grid.setHeight(c,r,vertex[r+c*39][2])
    geode.addDrawable(osg.ShapeDrawable(grid))
    
    mesh = osg.ConvexHull()
    vertices = osg.Vec3Array(4)
    (*vertices)[0].set(9.0+0.0,-1.0+2.0,-1.0+0.0)
    (*vertices)[1].set(9.0+1.0,-1.0+0.0,-1.0+0.0)
    (*vertices)[2].set(9.0+2.0,-1.0+2.0,-1.0+0.0)
    (*vertices)[3].set(9.0+1.0,-1.0+1.0,-1.0+2.0)
    indices = osg.UByteArray(12)
    (*indices)[0]=0
    (*indices)[1]=2
    (*indices)[2]=1
    (*indices)[3]=0
    (*indices)[4]=1
    (*indices)[5]=3
    (*indices)[6]=1
    (*indices)[7]=2
    (*indices)[8]=3
    (*indices)[9]=2
    (*indices)[10]=0
    (*indices)[11]=3
    mesh.setVertices(vertices)
    mesh.setIndices(indices)
    geode.addDrawable(osg.ShapeDrawable(mesh))

    return geode

int main(int, char **)
    # construct the viewer.
    viewer = osgViewer.Viewer()

    # add model to viewer.
    viewer.setSceneData( createShapes() )

    return viewer.run()


if __name__ == "__main__":
    main(sys.argv)
