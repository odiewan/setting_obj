#ifndef SETTING_OBJ_H_
#define SETTING_OBJ_H_

#include "Arduino.h"
#include <String.h>

enum settingTypes {
  SET_TYPE_BOOL,
  SET_TYPE_INT8,
  SET_TYPE_BOOL_NV,
  SET_TYPE_INT8_NV,
  NUM_SETTING_TYPES
};

class setting_obj {
    public:
     uint8_t* setEepromPtr;
     uint8_t setIndex;  //--index to 512 x 1 byte nvram space
     String setName;
     String setDesc;
     uint8_t setType;  // bool char int
     uint8_t setValue;

     setting_obj();
     setting_obj(uint8_t nIdx, String nName, String nDesc, uint8_t nType, uint8_t nValue);
     setting_obj(uint8_t nIdx, String nName, uint8_t nType, uint8_t nValue);
     setting_obj(String nName, uint8_t nType, uint8_t nValue);
     //  setting_obj(uint8_t nIdx, uint8_t* nPtr, String nName, uint8_t nType);
};

#endif
