#include "setting_obj.h"
#include <String.h>

//=================================================================================================
setting_obj::setting_obj() {
    setIndex = 0;
    setName = "Default Setting Name";
    setDesc = "Default Setting Description";
    setType = SET_TYPE_BOOL;
    setValue = 0;
}

//=================================================================================================
setting_obj::setting_obj(uint8_t nIdx, String nName, String nDesc, uint8_t nType, uint8_t nValue) {
    setIndex = nIdx;
    setName = nName;
    setDesc = nDesc;
    setType = nType;
    setValue = nValue;
}

//=================================================================================================
setting_obj::setting_obj(uint8_t nIdx, String nName, uint8_t nType, uint8_t nValue) {
    setIndex = nIdx;
    setName = nName;
    setDesc = nName;
    setType = nType;
    setValue = nValue;
}

//=================================================================================================
setting_obj::setting_obj(String nName, uint8_t nType, uint8_t nValue) {
    setIndex = 0;
    setName = nName;
    setDesc = nName;
    setType = nType;
    setValue = nValue;
}

// //=================================================================================================
// setting_obj::setting_obj(uint8_t nIdx, uint8_t * nPtr, String nName, uint8_t nType){
//     setEepromPtr = nPtr;
//     setIndex = nIdx;
//     setName = nName;
//     setDesc = nName;
//     setType = nType;
//     setValue = nPtr[nIdx];
// }