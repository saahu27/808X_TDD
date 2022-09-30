/**
 * @file grades.hpp
 * @author Divyansh Agrawal (dagrawa1@umd.edu)
 * @brief header file
 * @version 0.1
 * @date 2022-09-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once
// #include <array>
#include <iostream>
// #include <vector>
// #include <numeric>
// #include <string>

namespace controller {
   
class PID{
 public:
   // PID();

    double GetterErrorPrevious();

    void SetterErrorPrevious(double Error);

    double ComputeVel(double targetVel, double currentVel);

    double returndt();
   
  //  ~PID();
   

 private:

    const double ki_ = 0.1;  //
    const double kp_ = 0.01;  //
    const double kd_ = 0.001;  //
    const double dt_ = 1;  //
    double errorPrevious_;  //
    const double tolerance_ = 0.1;  //
    

};
}  // namespace controller