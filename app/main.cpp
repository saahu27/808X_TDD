/**
 * @file main.cpp
 * @author Divyansh Agrawal (dagrawa1@umd.edu), Sahruday Patti (sahruday@umd.edu)
 * @brief main file for the Test Driven Development - Week 5 - Group 
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/TDD.hpp"
// #include "../include/TDD.cpp"

int main() {
controller::PID PIDController;
std::cout << "Enter the target velocity (double): " << std::endl;
double targetVel;
std::cin >> targetVel;

std::cout << "Enter the initial velocity (double): " << std::endl;
double currentVel;
std::cin >> currentVel;

double outputVel;
outputVel = PIDController.ComputeVel(targetVel, currentVel);
}