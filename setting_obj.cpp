#include "setting_obj.h"

#include <FS.h>
#include <String.h>

//=================================================================================================
setting_obj::setting_obj() {
    soName = "Default Setting Name";
    soDesc = "Default Setting Description";
    soType = SET_TYPE_BOOL;
    soBool = false;
}

//=================================================================================================
setting_obj::setting_obj(String nName, uint8_t nValue) {
    soName = nName;

    soDesc = "Default description";
    soType = SET_TYPE_CNTR;
    soCntr = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, uint16_t nValue) {
    soName = nName;

    soDesc = "Default description";
    soType = SET_TYPE_CNTR;
    soCntr = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, String nValue) {
    soName = nName;

    soDesc = "Default description";
    soType = SET_TYPE_SRING;
    soString = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, String nDesc, uint8_t nValue) {
    soName = nName;

    soDesc = nDesc;
    soType = SET_TYPE_BOOL;
    soBool = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, String nDesc, uint16_t nValue) {
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


//=================================================================================================
void setting_obj::soSetVal(uint8_t nValue) {
    soBool = nValue;
}

//=================================================================================================
void setting_obj::soSetVal(uint16_t nValue) {
    soCntr = nValue;
}

 //=================================================================================================
void setting_obj::soSetVal(String nValue) {
    soString = nValue;
}

//==================================================================================================
uint8_t setting_obj::getBool() {

    return soBool;
}

//==================================================================================================
uint16_t setting_obj::getCounter() {
    return soCntr;

}

//==================================================================================================
String  setting_obj::getString() {
    return soString;

}
