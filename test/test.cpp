#include <gtest/gtest.h>
#include "../include/TDD.hpp"
#include <iostream>

controller::PID PIDController;

TEST(ControllerComputeTest, should_pass) {
  EXPECT_NEAR(PIDController.ComputeVel(10, 20), 20, 0.1);
}

TEST(ControllerReturnDtTest, should_pass) {
  EXPECT_GT(PIDController.returndt(), 0);
}
