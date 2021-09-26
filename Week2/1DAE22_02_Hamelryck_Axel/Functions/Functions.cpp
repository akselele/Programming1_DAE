// Hamelryck, Axel - 1DAE22
#include "pch.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

void TestOneParFunctions(int argAngle);
void TestTwoParFunctions(int base, int exponent);
int main()
{
	// 1. Show my data
	std::cout << "My name is Hamelryck, Axel" << std::endl;
	std::cout << "I am in group 1DAE22" << std::endl << std::endl;

	// 2. Show my student history
	std::cout << "Name of my high school: Atheneum Vilvoorde" << std::endl;
	std::cout << "In the last year I had 4 hours math a week" << std::endl << std::endl;

	// Exercise one parameter
	std::cout << "Use existing function with 1 parameter" << std::endl;
	TestOneParFunctions(0);
	TestOneParFunctions(1);
	TestOneParFunctions(2);
	TestOneParFunctions(3);
	TestOneParFunctions(4);
	TestOneParFunctions(2 * 2);
	std::cout << std::endl;
	//Exercise two parameters
	std::cout << "Use existing function with 2 parameters" << std::endl;
	TestTwoParFunctions(3, 4);

	// Wait
	std::cout << "Push ENTER to quit\n";
	std::cin.get();

	return 0;
}

void TestOneParFunctions(int argAngle)
{
	double pi = 3.1415926535;
	double angle{ argAngle * (pi / 4) };
	double cosAngle{ cos(angle) };
	std::cout << "Angle: " << angle << std::endl;
	std::cout << "  cos: " << cosAngle << std::endl;
}

void TestTwoParFunctions(int side_1, int side_2)
{
	double result = pow(side_1, side_2);
	double pythagoras = sqrt(pow(side_1, 2) + pow(side_2, 2));
	std::cout << "Hypotenuse of " << side_1 << " and " << side_2 << " = " << pythagoras << std::endl;
}