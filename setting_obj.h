#ifndef SETTING_OBJ_H_
#define SETTING_OBJ_H_

#include <String.h>
#include "Arduino.h"
#include "ESPFlashCounter.h"
#include "ESPFlashString.h"

enum settingTypes {
  SET_TYPE_BOOL,
  SET_TYPE_CNTR,
  SET_TYPE_SRING,
  NUM_SETTING_TYPES
};

class setting_obj {
  public:
     String soName;
     String soDesc;
     uint8_t soType;  // bool, cntr, string
     ESPFlashString soEspFlashStr;
     ESPFlashCounter soEspFlashCnt;

     uint8_t soBool;
     uint16_t soCntr;
     String soString;

     setting_obj();
     setting_obj(String nName, String nDesc, uint8_t nValue);
     setting_obj(String nName, String nDesc, uint16_t nValue);
     setting_obj(String nName, String nDesc, String nValue);
     //  setting_obj(uint8_t nIdx, uint8_t* nPtr, String nName, uint8_t nType);
};

#endif
