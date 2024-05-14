#include "setting_obj.h"

#include <FS.h>
#include <String.h>

//=================================================================================================
setting_obj::setting_obj() {
    soName = "Default Setting Name";
    soDesc = "Default Setting Description";
    soType = SET_TYPE_BOOL;
    soBool = false;
    soCanEdit = false;
}

//=================================================================================================
setting_obj::setting_obj(String nName, uint8_t nValue, bool nCanEdit) {
    soName = nName;

    soDesc = "Default description";
    soType = SET_TYPE_CNTR;
    soCntr = nValue;
    soCanEdit = nCanEdit;
}

//=================================================================================================
setting_obj::setting_obj(String nName, uint16_t nValue, bool nCanEdit) {
    soName = nName;

    soDesc = "Default description";
    soType = SET_TYPE_CNTR;
    soCntr = nValue;
    soCanEdit = nCanEdit;
}

//=================================================================================================
setting_obj::setting_obj(String nName, String nValue, bool nCanEdit) {
    soName = nName;

    soDesc = "Default description";
    soType = SET_TYPE_SRING;
    soString = nValue;
    soCanEdit = nCanEdit;
}

//=================================================================================================
setting_obj::setting_obj(String nName, String nDesc, uint8_t nValue, bool nCanEdit) {
    soName = nName;

    soDesc = nDesc;
    soType = SET_TYPE_BOOL;
    soBool = nValue;
    soCanEdit = nCanEdit;
}

//=================================================================================================
setting_obj::setting_obj(String nName, String nDesc, uint16_t nValue, bool nCanEdit) {
  soName = nName;

  soDesc = nName;
  soType = SET_TYPE_CNTR;
  soCntr = nValue;
  soCanEdit = nCanEdit;
}

//=================================================================================================
setting_obj::setting_obj(String nName, String nDesc, String nValue, bool nCanEdit) {
  soName = nName;
  soDesc = nName;
  soType = SET_TYPE_SRING;
  soString = nValue;
  soCanEdit = nCanEdit;
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

//==================================================================================================
String  setting_obj::getValAsString() {
    String _tmpStr;

    switch (soType) {
        case SET_TYPE_BOOL:
            _tmpStr = String(soBool);
            break;
        case SET_TYPE_CNTR:
            _tmpStr = String(soCntr);
            break;
        case SET_TYPE_SRING:
            _tmpStr = soString;
            break;

        default:
            break;
    }
    return _tmpStr;
}
