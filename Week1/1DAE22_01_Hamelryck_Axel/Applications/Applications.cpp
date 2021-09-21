#include "pch.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

void RgbaToFloat();
void DistanceToMetersCm();
void RadiansToDegrees();
void DegreesToRadians();
void Rotations();
void ElapsedTime();
void Velocity();
void CircumferenceAndAreaCircle();
void CircumferenceAndAreaRectangle();
void AreaTriangle();
int main()
{
    AreaTriangle();
}

void RgbaToFloat()
{
    int rgba1{};
    int rgba2{};
    int rgba3{};
    int rgba4{};
    std::cout << "RGBA in [0, 255]? ";
    std::cin >> rgba1 >> rgba2 >> rgba3 >> rgba4;
    std::cout << "RGBA in [0.0f, 1.0f]:" << std::endl;
    std::cout << rgba1 / 255.0f << std::endl;
    std::cout << rgba2 / 255.0f << std::endl;
    std::cout << rgba3 / 255.0f << std::endl;
    std::cout << rgba4 / 255.0f << std::endl;
}

void DistanceToMetersCm()
{
    float distance{};
    std::cout << "Distance in km? ";
    std::cin >> distance;
    std::cout << int(distance * 1000) << " meters, " << int(distance * 100000) << " cm" << std::endl;
}

void RadiansToDegrees()
{
    float radians{};
    std::cout << "Angle in radians? ";
    std::cin >> radians;
    std::cout << radians * (180 / float(M_PI)) << " degrees"; 
}

void DegreesToRadians()
{
    float degrees{};
    std::cout << "Angle in degrees? ";
    std::cin >> degrees;
    std::cout << degrees * (float(M_PI) / 180) << " degrees";
}

void Rotations()
{
    int seconds{};
    std::cout << "Seconds of one rotation? ";
    std::cin >> seconds;
    std::cout << 360.0f / seconds << " degrees/second";
}

void ElapsedTime()
{
    float speed{};
    int time{};
    std::cout << "Speed (km/h)? ";
    std::cin >> speed;
    std::cout << "Elapsed time (minutes)? ";
    std::cin >> time;
    std::cout << speed * (time / 60.0f) * 1000 << " meters";
}

void Velocity()
{
    int seconds{};
    std::cout << "Seconds? ";
    std::cin >> seconds;
    std::cout << seconds * 9.8f << " m/sec";
}

void CircumferenceAndAreaCircle()
{
    float radius{};
    std::cout << "Radius of circle? ";
    std::cin >> radius;
    std::cout << "Circumference: " << 2 * float(M_PI) * radius << std::endl;
    std::cout << "Area: " << float(M_PI) * pow(radius, 2);
}

void CircumferenceAndAreaRectangle()
{
    float width{}, height{};
    std::cout << "Width and height? ";
    std::cin >> width >> height;
    std::cout << "Circumference: " << 2 * (width + height) << std::endl;
    std::cout << "Area: " << width * height;
}

void AreaTriangle()
{
    float base{}, height{};
    std::cout << "Base and height? ";
    std::cin >> base >> height;
    std::cout << "Area: " << 0.5 * base * height;
}