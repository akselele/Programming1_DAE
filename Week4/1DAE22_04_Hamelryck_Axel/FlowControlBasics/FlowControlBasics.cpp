// Hamelryck, Axel - 1DAE22

#include "pch.h"
#include <iostream>
#include "ActorState.cpp"

void PrintTruthTable();
void CompareTwoNumbers();
void CalculatePrice();
void ConvertDayNumber();
void CheckForLeapYear();
void ConvertSeconds();
void UseEnumerations();
int main()
{
	srand(int(time(nullptr)));

	//PrintTruthTable();
	//CompareTwoNumbers();
	//CalculatePrice();
	//ConvertDayNumber();
	//CheckForLeapYear();
	//ConvertSeconds();
	UseEnumerations();
	std::cin.get();
	std::cin.get();
}

void PrintTruthTable()
{
	bool valueTrue{ true };
	bool valueFalse{ false };

	std::cout << std::boolalpha << (valueTrue && valueFalse) << std::endl;
	std::cout << std::boolalpha << (valueTrue && valueTrue) << std::endl;
	std::cout << std::boolalpha << (valueFalse && valueFalse) << std::endl;
	std::cout << std::boolalpha << (valueTrue && valueFalse) << std::endl;

	std::cout << std::boolalpha << (valueTrue || valueFalse) << std::endl;
	std::cout << std::boolalpha << (valueTrue || valueTrue) << std::endl;
	std::cout << std::boolalpha << (valueFalse || valueFalse) << std::endl;
	std::cout << std::boolalpha << (valueTrue || valueFalse) << std::endl;

	std::cout << std::boolalpha << !valueTrue << std::endl;
	std::cout << std::boolalpha << !valueFalse << std::endl;
}

void CompareTwoNumbers()
{
	int numberOne{ rand() % 10 + 1 };
	int numberTwo{ rand() % 10 + 1 };
	std::cout << "First number is: " << numberOne << std::endl;
	std::cout << "Second number is: " << numberTwo << std::endl;
	if (numberOne > numberTwo)
	{
		std::cout << "First number is larger than second number." << std::endl;
	}
	else if (numberTwo > numberOne)
	{
		std::cout << "Second number is larger than first number." << std::endl;
	}
	else
	{
		std::cout << "Both are equal." << std::endl;
	}
}

void CalculatePrice()
{
	int input{};
	std::cout << "Nr of ballpoints? ";
	std::cin >> input;
	if (input < 20)
	{
		std::cout << "Total price is: " << input * 4.00f << std::endl;
	}
	else if (input < 50)
	{
		std::cout << "Total price is: " << input * 3.50f << std::endl;
	}
	else if (input <= 100)
	{
		std::cout << "Total price is: " << input * 3.25f << std::endl;
	}
	else if (input > 100)
	{
		std::cout << "Total price is: " << input * 3.10f << std::endl;
	}
}

void ConvertDayNumber()
{
	int input{};
	std::cout << "Day number? ";
	std::cin >> input;
	if (input == 1)
	{
		std::cout << "Start of week.";
	}
	else if (input <= 4)
	{
		std::cout << "Middle of week.";
	}
	else if (input == 5)
	{
		std::cout << "Nearly weekend.";
	}
	else if (input <= 7)
	{
		std::cout << "Weekend";
	}
	else
	{
		std::cout << "Wrong input";
	}
}

void CheckForLeapYear()
{
	int year{};
	int daysInFebruari{ 29 };
	std::cout << "Year? ";
	std::cin >> year;
	if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
	{
		daysInFebruari = 28;
	}
	std::cout << year << ": " << daysInFebruari << std::endl;
}

void ConvertSeconds()
{
	int seconds{};
	std::cout << "Number of seconds? ";
	std::cin >> seconds;
	std::cout << (seconds / 3600 / 24) << " days" << std::endl;
	std::cout << (seconds % (3600 * 24)) / 3600 << " hours" << std::endl;
	std::cout << (seconds % 3600 / 60) << " minutes" << std::endl;
	std::cout << (seconds % 60) << " seconds" << std::endl;
}

void UseEnumerations()
{
	int stateInt{ rand() % 3  };
	ActorState stateOne = static_cast<ActorState>(stateInt);
	switch (int(stateOne))
	{
	case 0:
		std::cout << "Running" << std::endl;
		break;
	case 1:
		std::cout << "Flying" << std::endl;
		break;
	case 2:
		std::cout << "Falling" << std::endl;
		break;
	}
}