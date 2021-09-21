#include "pch.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <string>

void GenerateRandomNumber(); //foward function declaration
int main()
{
    /*int a{}, b{};
    std::cout << "Getal?\n";
    std::cin >> a;
    std::cout << a << std::endl;

    std::cout << "Getal 2?\n";
    std::cin >> b;
    std::cout << b << std::endl;*/

    std::string text;
    text = "DAE";
    std::cout << text << std::endl;
    text = text + " world";
    std::cout << text << std::endl;
    text = text + std::to_string(12);
    std::cout << text << std::endl;

    float fPi{ float(M_PI) };
    float result{ sinf(1.25) };
    GenerateRandomNumber();
    GenerateRandomNumber();
    GenerateRandomNumber();
    GenerateRandomNumber();
}

void GenerateRandomNumber()
{
    int random{};
    random = rand() % 10 + 100;
    std::cout << random;
    
}

