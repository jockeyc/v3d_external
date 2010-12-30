// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrappable_v3d.h"
#include "v3d_free_functions.pypp.hpp"

namespace bp = boost::python;

void register_free_functions(){

    { //::getGlobalSetting
    
        typedef ::V3D_GlobalSetting ( *getGlobalSetting_function_type )(  );
        
        bp::def( 
            "getGlobalSetting"
            , getGlobalSetting_function_type( &::getGlobalSetting ) );
    
    }

    { //::hello
    
        typedef ::QString ( *hello_function_type )(  );
        
        bp::def( 
            "hello"
            , hello_function_type( &::hello ) );
    
    }

    { //::hello2
    
        typedef ::std::string ( *hello2_function_type )( ::QString const & );
        
        bp::def( 
            "hello2"
            , hello2_function_type( &::hello2 )
            , ( bp::arg("s") ) );
    
    }

    { //::setGlobalSetting
    
        typedef bool ( *setGlobalSetting_function_type )( ::V3D_GlobalSetting & );
        
        bp::def( 
            "setGlobalSetting"
            , setGlobalSetting_function_type( &::setGlobalSetting )
            , ( bp::arg("gs") ) );
    
    }

}
