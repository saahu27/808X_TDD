/**
 * @file grades.hpp
 * @author Divyansh Agrawal (dagrawa1@umd.edu) Sahruday Patti (sahrudaypatti@umd.edu)
 * @brief header file
 * @version 0.1
 * @date 2022-09-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once
#include <array>
#include <iostream>
#include <vector>
#include <numeric>
#include <string>

namespace controller {
   
class PID{
 public:
    double GetterErrorPrevious();

    void SetterErrorPrevious();

    double ComputeVel();

 private:

    const double ki_;  //
    const double kp_;  //
    const double kd_;  //
    const double dt_ = 1;  //
    double errorPrevious_;  //
    const double tolerance_ = 0.1;  //
    

};
}  // namespace controller
