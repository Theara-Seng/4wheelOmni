
#include "kinematic_equation.h"

float calculateVx( float v1, float v2, float v3, float v4, float theta, float R_robot) {
  return (1.0/2.0)*(v1*cos(theta-PI/4.0) + v2*cos(theta+PI/4.0)-v3*cos(theta-PI/4.0)-v4*cos(theta+PI/4.0))   ;
}


float calculateVy( float v1, float v2, float v3, float v4, float theta, float R_robot) {
  return (1.0/2.0)*(v1*sin(theta-PI/4.0) + v2*sin(theta+PI/4.0)-v3*sin(theta-PI/4.0)-v4*sin(theta+PI/4.0))   ;
}


float calculateOmega( float v1, float v2, float v3, float v4, float theta,  float R_robot) {
  return  (-1.0/(4.0*R_robot))*(v1+v2+v3+v4)  ;
}



float calculateV1( float vx, float vy, float Omega, float theta, float R_robot) {
  return ( vx*sin(theta+PI/4) - vy*cos(theta+PI/4) - R_robot*Omega );
}

float calculateV2( float vx, float vy, float Omega, float theta, float R_robot) {
  return ( vx*sin(theta+3*PI/4) - vy*cos(theta+3*PI/4) - R_robot*Omega );
}

float calculateV3( float vx, float vy, float Omega, float theta, float R_robot) {
  return ( vx*sin(theta+5*PI/4) - vy*cos(theta+5*PI/4) - R_robot*Omega );
}
float calculateV4( float vx, float vy, float Omega, float theta, float R_robot ) {
  return ( vx*sin(theta+7*PI/4) - vy*cos(theta+7*PI/4) - R_robot*Omega );
}
