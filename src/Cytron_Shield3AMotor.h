#ifndef SHIELD3AMOTOR_h
#define SHIELD3AMOTOR_h

#include "Arduino.h"

#define DIR1 4
#define EN1  5
#define EN2  6
#define DIR2 7
#define SIGNED_MAGNITUDE  false
#define LOCKED_ANTI_PHASE true

class Shield3AMotor
{
  public:
    Shield3AMotor(boolean mode);
    void control(signed int motor1Speed, signed int motor2Speed);
    
  private:
  	boolean _mode;
};

#endif
