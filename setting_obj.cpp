#include "setting_obj.h"

// #include <FS.h>
#include <String.h>

//=================================================================================================
setting_obj::setting_obj() {
    constructor_core();
    }



//===================================================================================================
setting_obj::setting_obj(String nName, bool nDefValue, bool nReadOnly) {
    constructor_core();
    soName = nName;
    soType = SET_TYPE_BOOL;
    // ESPFlashCounter soEspFlashCounterPtr("/counter");
    // soEspFlashCounterPtr.set(nDefValue);
    }

//===================================================================================================
setting_obj::setting_obj(String nName, uint16_t nDefValue, bool nReadOnly) {
    constructor_core();
    soName = nName;
    soType = SET_TYPE_CNTR;
    // ESPFlashCounter soEspFlashCounterPtr("/counter");
    // soEspFlashCounterPtr.set(nDefValue);
    }

//===================================================================================================
setting_obj::setting_obj(String nName, String nDefValue, bool nReadOnly) {
    constructor_core();
    soName = nName;
    soType = SET_TYPE_STRING;
    // ESPFlashString soEspFlashString(String(nDefValue));
    }


// //===================================================================================================
// setting_obj::setting_obj(String nName, bool nValue, ESPFlashCounter* nEspFlashCntr, bool nReadOnly) {
//     soName = nName;
//     soType = SET_TYPE_BOOL;
//     soEspFlashCounterPtr = soEspFlashCounterPtr;
// }

// //===================================================================================================
// setting_obj::setting_obj(String nName, uint16_t nValue, ESPFlashCounter* nEspFlashCntr, bool nReadOnly) {
//     soName = nName;
//     soType = SET_TYPE_CNTR;
//     soEspFlashCounterPtr = soEspFlashCounterPtr;
// }

// //===================================================================================================
// setting_obj::setting_obj(String nName, String nValue, ESPFlashString* nEspFlashStr, bool nReadOnly) {
//     soName = nName;
//     soType = SET_TYPE_STRING;
//     soEspFlashString = nEspFlashStr;
// }


//===================================================================================================
void setting_obj::constructor_core() {
    soName = "def setting object";
    soDesc = "setting obj desc";
    soType = SET_TYPE_BOOL;
    soReadOnly = false;
    soBool = false;
    soCntr = 0;
    soString = "def_str";
    // SPIFFS.begin();

    }

//=================================================================================================
void setting_obj::soSetVal(bool nValue) {
    soBool = nValue;
    // soEspFlashCounterPtr->set(nValue);
    }

//=================================================================================================
void setting_obj::soSetVal(uint16_t nValue) {
    soCntr = nValue;
    // soEspFlashCounterPtr->set(nValue);
    }

//=================================================================================================
void setting_obj::soSetVal(String nValue) {
    soString = nValue;
    // soEspFlashString->set(nValue);
    }

//==================================================================================================
bool setting_obj::getBool() {
    return soBool;
    // return (bool)soEspFlashCounterPtr->get();
}

//==================================================================================================
uint16_t setting_obj::getCounter() {
    // return (uint16_t)soEspFlashCounterPtr->get();
return soCntr;
}

//==================================================================================================
String  setting_obj::getString() {
    // return soEspFlashString->get();
    return soString;
}

//==================================================================================================
String  setting_obj::getValAsString() {
    String _tmpStr = ":";

    switch (soType) {
        case SET_TYPE_BOOL:
            _tmpStr += (String)soBool;
            break;
        case SET_TYPE_CNTR:
            _tmpStr += (String)soCntr;
            break;
        case SET_TYPE_STRING:
            _tmpStr += soString;
            break;

        default:
            _tmpStr += "d";
            break;
    }
    return _tmpStr;

}
