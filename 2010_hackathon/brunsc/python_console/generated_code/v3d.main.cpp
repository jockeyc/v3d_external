// This file has been generated by Py++.

#include "boost/python.hpp"

#include "__convenience.pypp.hpp"

#include "__call_policies.pypp.hpp"

#include "__ctypes_integration.pypp.hpp"

#include "wrappable_v3d.h"

#include "generated_code/Image4DSimple.pypp.hpp"

#include "generated_code/ImageWindow.pypp.hpp"

#include "generated_code/LocationSimple.pypp.hpp"

#include "generated_code/NeuronSWC.pypp.hpp"

#include "generated_code/NeuronTree.pypp.hpp"

#include "generated_code/RGB8.pypp.hpp"

#include "generated_code/TriviewControl.pypp.hpp"

#include "generated_code/V3D_GlobalSetting.pypp.hpp"

#include "generated_code/View3DControl.pypp.hpp"

#include "generated_code/XYZ.pypp.hpp"

#include "generated_code/v3d_enumerations.pypp.hpp"

#include "generated_code/v3d_free_functions.pypp.hpp"

namespace bp = boost::python;

#include "convert_qstring.h"

BOOST_PYTHON_MODULE(v3d){
    register_enumerations();

    register_qstring_conversion();

    register_Image4DSimple_class();

    register_ImageWindow_class();

    register_LocationSimple_class();

    register_NeuronSWC_class();

    bp::implicitly_convertible< NeuronSWC, XYZ >();

    register_NeuronTree_class();

    register_RGB8_class();

    register_TriviewControl_class();

    register_V3D_GlobalSetting_class();

    register_View3DControl_class();

    register_XYZ_class();

    register_free_functions();
}

