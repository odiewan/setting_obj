#ifndef SETTING_OBJ_H_
#define SETTING_OBJ_H_

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
     bool soCanEdit;

     uint8_t soBool;
     uint16_t soCntr;
     String soString;

     setting_obj();

     setting_obj(String nName, uint8_t nValue, bool nReadOnly);
     setting_obj(String nName, uint16_t nValue, bool nReadOnly);
     setting_obj(String nName, String nValue, bool nReadOnly);

     setting_obj(String nName, String nDesc, uint8_t nValue, bool nReadOnly);
     setting_obj(String nName, String nDesc, uint16_t nValue, bool nReadOnly);
     setting_obj(String nName, String nDesc, String nValue, bool nReadOnly);

     void soSetVal(uint8_t nValue);
     void soSetVal(uint16_t nValue);
     void soSetVal(String nValue);

     uint8_t getBool();
     uint16_t getCounter();
     String getString();

     String getValAsString();


};

#endif
