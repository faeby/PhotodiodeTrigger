#ifndef PhotodiodeTrigger_h
#define PhotodiodeTrigger_h

#include "Arduino.h"

class PhotodiodeTrigger
{
  public:
    PhotodiodeTrigger();
    PhotodiodeTrigger(int photodiodePin, int triggerLimit);
    bool triggered();  
  private:
    int _photodiodePin;
    int _triggerLimit;
};

#endif
