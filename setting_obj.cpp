#include "setting_obj.h"
#include <String.h>

//=================================================================================================
setting_obj::setting_obj() {
    soName = "Default Setting Name";
    soDesc = "Default Setting Description";
    soType = SET_TYPE_BOOL;
    soBool = false;
}

//=================================================================================================
setting_obj::setting_obj(String nName, ESPFlashCounter* nFlshPtr) {
    soName = nName;
    soFlashCntPtr = nFlshPtr;
    soDesc = "Default description";
    soType = SET_TYPE_BOOL;
    soBool = 0;
}

//=================================================================================================
setting_obj::setting_obj(String nName, ESPFlashCounter* nFlshPtr) {
    soName = nName;
    soFlashCntPtr = nFlshPtr;
    soDesc = "Default description";
    soType = SET_TYPE_CNTR;
    soCntr = 0;
}

//=================================================================================================
setting_obj::setting_obj(String nName, ESPFlashString* nFlshPtr) {
    soName = nName;
    soFlashStringPtr = nFlshPtr;
    soDesc = "Default description";
    soType = SET_TYPE_SRING;
    soString = "EMPTY";
}

//=================================================================================================
setting_obj::setting_obj(String nName, ESPFlashCounter* nFlshPtr, uint8_t nValue) {
    soName = nName;
    soFlashCntPtr = nFlshPtr;
    soDesc = "Default description";
    soType = SET_TYPE_BOOL;
    soBool = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, ESPFlashCounter* nFlshPtr, uint8_t nValue) {
    soName = nName;
    soFlashCntPtr = nFlshPtr;
    soDesc = "Default description";
    soType = SET_TYPE_CNTR;
    soCntr = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, ESPFlashString* nFlshPtr, String nValue) {
    soName = nName;
    soFlashStringPtr = nFlshPtr;
    soDesc = "Default description";
    soType = SET_TYPE_SRING;
    soString = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, ESPFlashCounter* nFlshPtr, String nDesc, uint8_t nValue) {
    soName = nName;
    soFlashCntPtr = nFlshPtr;
    soDesc = nDesc;
    soType = SET_TYPE_BOOL;
    soBool = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, ESPFlashCounter* nFlshPtr, String nDesc, uint16_t nValue) {
  soName = nName;
  soFlashCntPtr = nFlshPtr;
  soDesc = nName;
  soType = SET_TYPE_CNTR;
  soCntr = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, ESPFlashString* nFlshPtr, String nDesc, String nValue) {
  soName = nName;
  soFlashStringPtr = nFlshPtr;
  soDesc = nName;
  soType = SET_TYPE_SRING;
  soString = nValue;
}