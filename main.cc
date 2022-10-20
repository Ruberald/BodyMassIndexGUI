#include <iostream>
#include <string>
#include <utility>
#include "Calculation.h"

typedef std::pair<float, std::string> Result;

extern Result calculateBMI(float weight, float height);

int main()
{
	float weight, height;

	std::cout << "Enter weight: ";
	std::cin >> weight;

	std::cout << "Enter height: ";
	std::cin >> height;

	Result result = calculateBMI(weight, height);
	std::cout << "Your BMI is " << result.first << std::endl;
	std::cout << "Result: " << result.second << std::endl;
}