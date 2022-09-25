#include "setting_obj.h"

setting_obj::setting_obj(uint8_t nIdx, String nName, String nDesc, uint8_t nType) {
    setIndex = nIdx;
    setName = nName;
    setDesc = nDesc;
    setType = nType;
}
