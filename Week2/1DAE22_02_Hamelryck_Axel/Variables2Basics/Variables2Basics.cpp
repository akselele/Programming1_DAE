// Hamelryck, Axel - 1DAE22
#include "pch.h"
#include <iostream>
#include <string>

void IsEven(int number);
void RandomNumberInt(int min, int max);
void RandomNumberFloat(float min, float max);
void LetterToAsciiValue();
void RandomLetterToAsciiValue();
void RoundFloats();
void AspectRatio();
void PrefixPostfix();
void ExploreString();
void StringConcatenation();
void ConvertingNumbersToString();
void ConvertingStringsToNumbers();
int main()
{
	// 1. Show my data
	std::cout << "My name is Axel, Hamelryck" << std::endl;
	std::cout << "I am in group 1DAE22" << std::endl << std::endl;

	// 2. Show my student history
	std::cout << "Name of my high school: Atheneum Vilvoorde & ColomaPLUS " << std::endl;
	std::cout << "In the last year I had 4 hours math a week" << std::endl << std::endl;

	// Exercises
	IsEven(7);
	IsEven(10);
	IsEven(85);
	srand(int(time(nullptr)));
	RandomNumberInt(0, 50);

	RandomNumberInt(10, 80);
	RandomNumberInt(-20, 20);
	RandomNumberInt(-2, 2);
	RandomNumberFloat(5.00f, 10.00f);
	RandomNumberFloat(-5.00f, 5.00f);

	LetterToAsciiValue();

	RandomLetterToAsciiValue();

	RoundFloats();

	AspectRatio();

	PrefixPostfix();

	ExploreString();

	StringConcatenation();

	ConvertingNumbersToString();

	ConvertingStringsToNumbers();

	// Wait
	std::cout << "Push ENTER to quit\n";
	std::cin.get();
	std::cin.get();

	return 0;
}

void IsEven(int number)
{
	//bool result = number % 2 == 0;
	int result = number % 2;
	std::cout << "Is " << number << " even (1 => yes, 0 => no): " << result << std::endl;
}

void RandomNumberInt(int min, int max)
{
	int result{ rand() % ((max - min) + 1) + min };
	std::cout << "Random number between " << min << " and " << max << ": " << result << std::endl;
}

void RandomNumberFloat(float min, float max)
{
	//float result{ max + (rand() / (RAND_MAX / (min - max))) };
	//float result{ float(rand() % int(((max - min) + 1) + min)) };
	float difference{ (max - min) * 100 };
	float result{ float(rand() % (int(difference) + 1) + int(min * 100))/100.0f  };


	std::cout << "Random number between " << min << " and " << max << ": " << result << std::endl;
}

void LetterToAsciiValue()
{
	char letter{};
	std::cout << "Letter? ";
	std::cin >> letter;
	int asciiValue{ letter };
	std::cout << "Letter " << letter << ", ASCII value " << asciiValue << std::endl;
}

void RandomLetterToAsciiValue()
{
	char result{ char(rand() % 26 + 'a') };
	std::cout << "Random letter " << result << ", ASCII value " << int(result) << std::endl;
}

void RoundFloats()
{
	float value_1{ 5.44f };
	float value_2{ 5.45f };
	float value_3{ 5.51f };
	std::cout << value_1 << ", rounded: " << round(value_1) << ", int cast: " << int(value_1) << std::endl;
	std::cout << value_2 << ", rounded: " << round(value_2) << ", int cast: " << int(value_2) << std::endl;
	std::cout << value_3 << ", rounded: " << round(value_3) << ", int cast: " << int(value_3) << std::endl;
}

void AspectRatio()
{
	float ratio{ 1920.0f / 1080 };
	std::cout << "The aspect ratio of full HD (1920x1080) is: " << ratio << std::endl;
}

void PrefixPostfix()
{
	// first cout is 'i: 11, j:11'; second sout is 'k:11, l:10'
	int i{ 10 };
	int j{ ++i };
	std::cout << "i:" << i << ", j: " << j << std::endl;

	int k{ 10 };
	int l{ k++ };
	std::cout << "k:" << k << ", l: " << l << std::endl;
}

void ExploreString()
{
	std::string string_1{};
	std::cout << "String without initialize: " << string_1 << std::endl;
	std::string string_2{ "String 2 test" };
	std::cout << "bracket initializer: " << string_2 << std::endl;
	string_2 = "assignment operator";
	std::cout << "String assignment operator: " << string_2 << std::endl;
}

void StringConcatenation()
{
	std::string firstWord{};
	std::string secondWord{};
	std::cout << "First word? ";
	std::cin >> firstWord;
	std::cout << "Second word? ";
	std::cin >> secondWord;
	std::cout << firstWord + secondWord << std::endl;

	std::cout << std::endl;

	std::string school{ "DA" };
	std::cout << school + "E Howest" << std::endl;
	char letter{ 'E' };
	std::cout << school + letter << std::endl;
	std::cout << school + 'E' << std::endl;
}

void ConvertingNumbersToString()
{
	std::string numbersLog;
	int enteredNr{};
	std::cout << "Enter an integer value: ";
	std::cin >> enteredNr;
	numbersLog += std::to_string(enteredNr) + " ";
	std::cout << "Enter an integer value: ";
	std::cin >> enteredNr;
	numbersLog += std::to_string(enteredNr) + " ";
	std::cout << "Enter an integer value: ";
	std::cin >> enteredNr;
	numbersLog += std::to_string(enteredNr);
	std::cout << numbersLog << std::endl;
}

void ConvertingStringsToNumbers()
{
	std::string string_1{ "3" };
	std::string string_2{ "3.1415" };
	std::cout << "One string contains " << string_1 << std::endl;
	std::cout << "Other string contains " << string_2 << std::endl;
	std::cout << "Adding strings " << string_1 + string_2 << std::endl;
	std::cout << "Adding strings " << std::stoi(string_1) + std::stof(string_2) << std::endl;

}