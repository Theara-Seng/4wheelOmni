#ifndef PID_H
#define PID_H

#include "arduino.h"

class pid{
  public:
    pid(double kp, double ki, double kd);
    double calculate(double setPoint, double real, unsigned long dt);
    double _kp;
    double _ki;
    double _kd;
    double error;
    double integral;
    double derivative;
    double last_error;
    double command;
    const double boundary;
};

#endif
