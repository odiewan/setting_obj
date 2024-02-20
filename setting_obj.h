#ifndef SETTING_OBJ_H_
#define SETTING_OBJ_H_

#include <String.h>
#include "ESPFlashCounter.h"
#include "ESPFlashString.h"
#include "Arduino.h"

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

     uint8_t soBool;
     uint16_t soCntr;
     String soString;
     ESPFlashCounter* soFlashCntPtr;
     ESPFlashString* soFlashStringPtr;

     setting_obj();

     setting_obj(String nName, ESPFlashCounter* nFlshPtr, uint8_t nValue);
     setting_obj(String nName, ESPFlashCounter* nFlshPtr, uint16_t nValue);
     setting_obj(String nName, ESPFlashString* nFlshPtr, String nValue);

     setting_obj(String nName, ESPFlashCounter* nFlshPtr);
     setting_obj(String nName, ESPFlashCounter* nFlshPtr);
     setting_obj(String nName, ESPFlashString* nFlshPtr);

     setting_obj(String nName, ESPFlashCounter* nFlshPtr, String nDesc, uint8_t nValue);
     setting_obj(String nName, ESPFlashCounter* nFlshPtr, String nDesc, uint16_t nValue);
     setting_obj(String nName, ESPFlashString* nFlshPtr, String nDesc, String nValue);
};

#endif
