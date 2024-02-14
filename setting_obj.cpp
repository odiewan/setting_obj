#include "setting_obj.h"
#include <String.h>

//=================================================================================================
setting_obj::setting_obj() {
    soName = "Default Setting Name";
    soDesc = "Default Setting Description";
    soType = SET_TYPE_BOOL;
    soBool = 0;
}

//=================================================================================================
setting_obj::setting_obj(String nName, String nDesc, uint8_t nValue) {
    soName = nName;
    soDesc = nDesc;
    soType = SET_TYPE_BOOL;
    soBool = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, String nDesc,  uint16_t nValue) {
    soName = nName;
    soDesc = nName;
    soType = SET_TYPE_CNTR;
    soCntr = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, String nDesc, String nValue) {
    soName = nName;
    soDesc = nName;
    soType = SET_TYPE_SRING;
    soString = nValue;
}