#include "pch.h"
#include <iostream>

int main()
{
	int number{ 5 };
	char character{ 'f' };
	bool isBool{ true };
	float fFloat{ 5.5f };
	double dDouble{ 5.5 };
	std::cout << "int = (" << number << ")" << std::endl;
	std::cout << "character = (" << character << ")" << std::endl;
	std::cout << "boolean = (" << isBool << ")" << std::endl;
	std::cout << "float = (" << fFloat << ")" << std::endl;
	std::cout << "double = (" << dDouble << ")" << std::endl;

	int i = 10;
	int x = 2;
	std::cout << i / x;
	number = 10;
	character = 'y';
	isBool = false;
	fFloat = 11.0f;
	dDouble = 11.0f;
	std::cout << std::endl;	
	std::cout << "new int = (" << number << ")" << std::endl;
	std::cout << "new character = (" << character << ")" << std::endl;
	std::cout << "new boolean = (" << isBool << ")" << std::endl;
	std::cout << "new float = (" << fFloat << ")" << std::endl;
	std::cout << "new double = (" << dDouble << ")" << std::endl;
	std::cout << std::endl;

	std::cout << "Enter a number (without decimals): ";
	std::cin >> number;
	std::cout << "Enter a single character: ";
	std::cin >> character;
	std::cout << "Enter true or false (0 or 1): ";
	std::cin >> isBool;
	std::cout << "Enter a float (with decimals): ";
	std::cin >> fFloat;
	std::cout << "Enter a double (with decimals): ";
	std::cin >> dDouble;
	std::cout << std::endl;
	
	//4.1.7
	std::cout << "new user int = (" << number << ")" << std::endl;
	std::cout << "new user character = (" << character << ")" << std::endl;
	std::cout << "new user boolean = (" << isBool << ")" << std::endl;
	std::cout << "new user float = (" << fFloat << ")" << std::endl;
	std::cout << "new user double = (" << dDouble << ")" << std::endl;
	std::cout << std::endl;

	//4.2.1
	std::cout << "number variable + 5 = " << number + 5 << std::endl;
	std::cout << "float variable + 3.8f = " << fFloat + 3.8f << std::endl;
	std::cout << "double variable + 1.8 = " << dDouble + 1.8 << std::endl;
	std::cout << "character variable + 'n' = " << character + 'n' << std::endl;
	std::cout << "mixture: char + int - 2 = " << character + number - 5 << std::endl;
	std::cout << std::endl;

	//4.2.2
	std::cout << "number variable * 5 = " << number * 5 << std::endl;
	std::cout << "number variable / 2 = " << number / 5 << std::endl;
	std::cout << "float variable * 1.5f = " << fFloat / 1.5f << std::endl;
	std::cout << "float variable / 1.5f = " << fFloat / 1.5f << std::endl;
	std::cout << "double variable + 1.8 = " << dDouble + 1.8 << std::endl;
	std::cout << "mixture: number / float = " << number / fFloat << std::endl;

	//4.2.3
	//should give 11
	number = 5 + (2 * 3);
	std::cout << number << std::endl;
	//should give 0
	number = 2 - ((2 * 3) - 4);
	std::cout << number;
	//should give 16.65
	fFloat = 1.5f * (2.2f + 8.9f);
	std::cout << fFloat;

}
