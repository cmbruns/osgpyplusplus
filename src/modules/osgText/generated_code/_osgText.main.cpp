// This file has been generated by Py++.

#include "boost/python.hpp"

#include "__array_1.pypp.hpp"

#include "indexing_suite/value_traits.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "indexing_suite/map.hpp"

#include "wrap_osgText.h"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/Bevel.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/FadeText.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/Font.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/Glyph.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/Glyph3D.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/GlyphGeometry.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/GlyphTexture.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/GlyphTextureList.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/Glyphs.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/String.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/Style.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/Text.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/Text3D.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/TextBase.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/TextureGlyphQuadMap.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/VectorUInt.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/_osgText_enumerations.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/_osgText_free_functions.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/vector_less__osg_scope_Vec2f__greater_.pypp.hpp"

#include "/home/cmbruns/git/osgpyplusplus/src/modules/osgText/generated_code/vector_less__osg_scope_Vec4f__greater_.pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_osgText){
    register_enumerations();

    register_Glyphs_class();

    register_GlyphTextureList_class();

    register_vector_less__osg_scope_Vec4f__greater__class();

    register_vector_less__osg_scope_Vec2f__greater__class();

    register_TextureGlyphQuadMap_class();

    register_Bevel_class();

    register_Font_class();

    register_VectorUInt_class();

    register_String_class();

    register_TextBase_class();

    register_Text_class();

    register_FadeText_class();

    register_Glyph_class();

    register_Glyph3D_class();

    register_GlyphGeometry_class();

    register_GlyphTexture_class();

    register_Style_class();

    register_Text3D_class();

    register_free_functions();
}

