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
