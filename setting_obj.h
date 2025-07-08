#ifndef SETTING_OBJ_H_
#define SETTING_OBJ_H_

#include "Arduino.h"
#include <String.h>

enum settingTypes {
  SET_TYPE_BOOL,
  SET_TYPE_CNTR,
  SET_TYPE_STRING,
  NUM_SETTING_TYPES
  };

class setting_obj {
  public:
    int soIndex;
    String soName;
    String soDesc;
    uint8_t soType;  // bool, cntr, string
    bool soReadOnly;

    uint8_t soByte;

    uint8_t soBool;
    int soCntr;
    String soString;

    setting_obj();

    // ESPFlashCounter* soEspFlashCounterPtr;
    // ESPFlashString* soEspFlashString;

    setting_obj(String nName, int nIndex, bool nValue, bool nReadOnly);
    setting_obj(String nName, int nIndex, int nValue, bool nReadOnly);
    setting_obj(String nName, int nIndex, String nValue, bool nReadOnly);

    // setting_obj(String nName, bool nValue, ESPFlashCounter* nEspFlashCntr, bool nReadOnly);
    // setting_obj(String nName, uint16_t nValue, ESPFlashCounter* nEspFlashCntr, bool nReadOnly);
    // setting_obj(String nName, String nValue, ESPFlashString* nEspFlashStr, bool nReadOnly);


    void soSetVal(bool nValue);
    void soSetVal(int nValue);
    void soSetVal(String nValue);


    bool getBool();
    int getCounter();
    String getString();
    uint8_t getVal() { return soByte; };
    uint getIndex() { return soIndex;};

    String getValAsString();

  private:
    void constructor_core();

};

#endif
