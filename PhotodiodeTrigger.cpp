#include "Arduino.h"
#include "PhotodiodeTrigger.h"

PhotodiodeTrigger::PhotodiodeTrigger(int photodiodePin, int triggerLimit)
{
  _photodiodePin = photodiodePin;
  _triggerLimit = triggerLimit;
}

bool PhotodiodeTrigger::triggered()
{
  return analogRead(_photodiodePin) <= _triggerLimit;
}
