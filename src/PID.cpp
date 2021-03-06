#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;

    this->d_error = 0.0;
    this->p_error = 0.0;
    this->i_error = 0.0;

    this->prev_cte = 0.0;
}

void PID::UpdateError(double cte) {
    d_error = cte - prev_cte;
    i_error += cte;
    p_error = cte;

    prev_cte = cte;


}

double PID::TotalError() {
   return  Kp * p_error + Ki*i_error + Kd*d_error;
}

