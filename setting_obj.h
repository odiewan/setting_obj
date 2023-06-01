#ifndef SETTING_OBJ_H_
#define SETTING_OBJ_H_

#include "Arduino.h"
#include <String.h>

enum settingTypes {
    SET_TYPE_BOOL,
    SET_TYPE_INT8,
    NUM_SETTING_TYPES
};


class setting_obj {
    public:
        uint8_t setIndex; //--index to 512 x 1 byte nvram space
        String setName;
        String setDesc;
        uint8_t setType; // bool char int
        uint8_t setValue;

        setting_obj();
        setting_obj(uint8_t nIdx, String nName, String nDesc, uint8_t nType, uint8_t nValue);

};

#endif
