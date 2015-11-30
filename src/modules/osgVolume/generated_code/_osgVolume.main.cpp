// This file has been generated by Py++.

#include "boost/python.hpp"

#include "__call_policies.pypp.hpp"

#include "__convenience.pypp.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "wrap_osgVolume.h"

#include "AlphaFuncProperty.pypp.hpp"

#include "CollectPropertiesVisitor.pypp.hpp"

#include "CompositeLayer.pypp.hpp"

#include "CompositeProperty.pypp.hpp"

#include "FixedFunctionTechnique.pypp.hpp"

#include "ImageDetails.pypp.hpp"

#include "ImageLayer.pypp.hpp"

#include "IsoSurfaceProperty.pypp.hpp"

#include "Layer.pypp.hpp"

#include "LightingProperty.pypp.hpp"

#include "Locator.pypp.hpp"

#include "LocatorCallbacks.pypp.hpp"

#include "MaximumIntensityProjectionProperty.pypp.hpp"

#include "Property.pypp.hpp"

#include "PropertyAdjustmentCallback.pypp.hpp"

#include "PropertyVisitor.pypp.hpp"

#include "RayTracedTechnique.pypp.hpp"

#include "SampleDensityProperty.pypp.hpp"

#include "SampleDensityWhenMovingProperty.pypp.hpp"

#include "ScalarProperty.pypp.hpp"

#include "SwitchProperty.pypp.hpp"

#include "TileID.pypp.hpp"

#include "TransferFunctionProperty.pypp.hpp"

#include "TransparencyProperty.pypp.hpp"

#include "Volume.pypp.hpp"

#include "VolumeTechnique.pypp.hpp"

#include "VolumeTile.pypp.hpp"

#include "_osgVolume_free_functions.pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_osgVolume){
    register_LocatorCallbacks_class();

    register_Property_class();

    register_ScalarProperty_class();

    register_AlphaFuncProperty_class();

    register_PropertyVisitor_class();

    register_CollectPropertiesVisitor_class();

    register_Layer_class();

    register_CompositeLayer_class();

    register_CompositeProperty_class();

    register_VolumeTechnique_class();

    register_FixedFunctionTechnique_class();

    register_ImageDetails_class();

    register_ImageLayer_class();

    register_IsoSurfaceProperty_class();

    register_LightingProperty_class();

    register_Locator_class();

    register_MaximumIntensityProjectionProperty_class();

    register_PropertyAdjustmentCallback_class();

    register_RayTracedTechnique_class();

    register_SampleDensityProperty_class();

    register_SampleDensityWhenMovingProperty_class();

    register_SwitchProperty_class();

    register_TileID_class();

    register_TransferFunctionProperty_class();

    register_TransparencyProperty_class();

    register_Volume_class();

    register_VolumeTile_class();

    register_free_functions();
}

