#ifndef SETTING_OBJ_H_
#define SETTING_OBJ_H_

#include "Arduino.h"
#include <String.h>


class setting_obj {
    public:
        uint8_t setIndex; //--index to 512 x 1 byte nvram space
        String setName;
        String setDesc;
        unit8_t setType; // bool char int

        setting_obj(uint8_t nIdx, String nName, String nDesc, uint8_t nType);
}


#endif
