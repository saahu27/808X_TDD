#include <gtest/gtest.h>
#include "../include/TDD.hpp"
#include <iostream>

controller::PID PIDController;

TEST(ControllerComputeTest_increasing, should_pass) {
  EXPECT_NEAR(PIDController.RunController(10, 20), 20, 0.1);
}

TEST(ControllerComputeTes_decreasing, should_pass) {
  EXPECT_NEAR(PIDController.RunController(20, 10), 10, 0.1);
}

TEST(ControllerReturnDtTest, should_pass) {
  EXPECT_GT(PIDController.returndt(), 0);
}
