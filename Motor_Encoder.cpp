#include "Motor_Encoder.h"


//Constructor for the class Motor Encoder
Motor::Motor(uint8_t PWM1, uint8_t PWM2, uint8_t enc_1, uint8_t enc_2): _PWM1(PWM1), _PWM2(PWM2),_enc_1(enc_1), _enc_2(enc_2),enc(enc_1, enc_2){
  
}

 void Motor::initPins() {        
  pinMode(_PWM1, OUTPUT);
  pinMode(_PWM2, OUTPUT);
  }

  
void Motor::commandMotor(int command) {  
  command = max(-255,min(255,command));
  if (command > 0) {
    digitalWrite(_PWM1, LOW);
    analogWrite(_PWM2, abs(command));
    }
  else if (command < 0) {
    digitalWrite(_PWM2, LOW);
    analogWrite(_PWM1, -(command));
    } 
  else {
    digitalWrite(_PWM1, LOW);
    digitalWrite(_PWM2, LOW);
    } 
  }
