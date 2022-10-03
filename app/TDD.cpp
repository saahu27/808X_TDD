/**
 * @file grades.cpp
 * @author Divyansh Agrawal (dagrawa1@umd.edu), Sahruday Patti (sahruday@umd.edu)
 * @brief this file contains all the function definitions 
 * @version 0.1
 * @date 2022-09-29
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

double controller::PID::returndt() {
        return dt_;
}