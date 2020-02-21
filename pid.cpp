#include "pid.h"


pid::pid(double kp, double ki, double kd): _kp(kp), _ki(ki), _kd(kd), boundary(1.0) {
  integral = 0.0;
  last_error = 0.0;
}
double pid::calculate(double setPoint, double real, unsigned long dt){

    error=setPoint-real;
    derivative=(error-last_error)/dt;
    integral += error*dt;
    integral=max(-boundary, min(boundary, integral));
    command =_kp*error +_ki*integral+_kd*derivative;
    last_error=error;
    return command;
 }
