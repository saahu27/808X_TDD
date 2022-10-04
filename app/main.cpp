/**
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/TDD.hpp"

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
