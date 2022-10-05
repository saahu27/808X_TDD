[![Coverage Status](https://coveralls.io/repos/github/saahu27/808X_TDD/badge.svg?branch=main)](https://coveralls.io/github/saahu27/808X_TDD?branch=main)
# 808X_TDD

ENPM808X - Week 5 - Test Driven Development (TDD)

This repository pertains to the test driven development exercise. The group members are:

Divyansh Agrawal
Sahruday Patti
Madhu Narra Chittibabu
Bhargav Soothram Kumar

Part 1:

The members of the pair for Part 1 of this repository are :

	Divyansh Agrawal (Navigator)
	Sahruday Patti (Driver)

Part 2:

The members of the pair for Part 2 of this repository are :

	Madhu Narra Chittibabu (Driver)
	Bhargav Soothram Kumar (Navigator)
	
Design : We want to implement a PID control system for an autonomous robot. Our input sensor measurement gives feedback values of present velocities for every one second. So we want out control system to run at every one second to save processing time and power. For this rate in change in time we have determined by electrical simulations of real system that our optimal Proportional, Integral and Derivative constants are 0.1, 0.01, 0.001 and with a tolerance of 0.1 will be a stable system. 

Problem Statement: Implement a PID Control Software system in C++ using the above hyperparameters.  

UML Diagram:
![Alt text](https://github.com/saahu27/808X_TDD/blob/main/UML%20and%20Activity/UML.PNG?raw=true "Title")

Activity Diagram:
![Alt text](https://github.com/saahu27/808X_TDD/blob/main/UML%20and%20Activity/Activity_diag.png?raw=true "Title")

Steps to build:

	go to the root directory
	mkdir build
	cd build
	cmake ..
	make

Steps to run:

	./app/shell-app

Steps to unit tests:

	./test/cpp-test 

Steps to code coverage:

	sudo apt-get install lcov
	cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
	make
	make code_coverage

For any other queries, please contact us at dagrawa1@umd.edu OR sahruday@umd.edu. 
