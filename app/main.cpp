/**
 * @copyright Copyright (c) 2022
 *
 */

#include "../include/TDD.hpp"

int main() {
  controller::PID PIDController;
  std::cout << "Enter the target velocity: ";
  double targetVel;
  std::cin >> targetVel;

  std::cout << "Enter the initial velocity: ";
  double currentVel;
  std::cin >> currentVel;

  PIDController.RunController(targetVel, currentVel);
}
