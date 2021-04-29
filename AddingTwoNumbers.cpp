// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: April 2021
// This program calculates total from adding two numbers

#include <iostream>
#include <cmath>

int main() {
    // This program calculates total from adding two numbers
    int firstNumber;
    int secondNumber;
    int total;
    
    // input
	std::cout << "Enter first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter second number: ";
	std::cin >> secondNumber;
	
	// process
	total = firstNumber + secondNumber;
	
	// output
	std::cout << "" << std::endl;
	std::cout << "Total is " << total << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Done. " << std::endl;
}
