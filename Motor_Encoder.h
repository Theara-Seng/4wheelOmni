#ifndef MOTOR_ENCODER_H
#define MOTOR_ENCODER_H

#include "Arduino.h"
#include <Encoder.h>


class Motor
{
  public:
    Motor(uint8_t PWM1, uint8_t PWM2, uint8_t enc_1, uint8_t enc_2); 
    void initPins(); //initialize the output pin of the motor
    void commandMotor(int command); //command for the motor
    Encoder enc;  //object for the encoder
    
    
  private:         
        const uint8_t _PWM1;             
        const uint8_t _PWM2;             
        const uint8_t _enc_1;       
        const uint8_t _enc_2;  

};


#endif
