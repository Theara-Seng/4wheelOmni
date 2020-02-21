#include "Motor_Encoder.h"
#include "kinematic_equation.h"
#include "pid.h"

//declare the pin of the motor and encoder
Motor Motor1(2,3,22,23);
Motor Motor2(4,5,24,25);
Motor Motor3(6,7,26,27);
Motor Motor4(8,9,28,29);


void setup() {
  // put your setup code here, to run once:
Motor1.initPins();
Motor2.initPins();
Motor3.initPins();
Motor4.initPins();
}

void loop() {
  // put your main code here, to run repeatedly:

}
