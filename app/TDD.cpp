/**
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/TDD.hpp"


void controller::PID::SetterErrorPrevious(double Error) {
        errorPrevious_ = Error;
}

double controller::PID::GetterErrorPrevious() {
        return errorPrevious_;
}

void controller::PID::SetterErrorIntegral(double Error) {
        errorIntegral_ = Error;
}

double controller::PID::GetterErrorIntegral() {
        return errorIntegral_;
}

double controller::PID::ComputeVel(double targetVel, double currentVel) {
        std::cout << "target velocity is: " << targetVel;
    return 2.0;
}

double controller::PID::RunController(double targetVel, double currentVel) {
        return currentVel;
}

double controller::PID::returndt() {
        return dt_;
}