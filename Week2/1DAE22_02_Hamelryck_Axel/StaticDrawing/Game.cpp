#include "pch.h"
#include "Game.h"
#include <iostream>
#include <cmath>

//Basic game functions
#pragma region gameFunctions											
void Start()
{
	// initialize game resources here
}

void Draw()
{
	ClearBackground(75.0f / 255, 0, 130.0f / 255);
	DrawFlag(40, 150);
	DrawCheckerPattern(40, 40, 100);
	DrawColorBand(500, 370, 300);
	DrawColumnChart(500, 40);
	DrawHouse(40.0f, 370.0f);
	DrawPentagram(500, 250, 100);

}

void Update(float elapsedSec)
{
	// process input, do physics 

	// e.g. Check keyboard state
	//const Uint8 *pStates = SDL_GetKeyboardState( nullptr );
	//if ( pStates[SDL_SCANCODE_RIGHT] )
	//{
	//	std::cout << "Right arrow key is down\n";
	//}
	//if ( pStates[SDL_SCANCODE_LEFT] && pStates[SDL_SCANCODE_UP])
	//{
	//	std::cout << "Left and up arrow keys are down\n";
	//}
}

void End()
{
	// free game resources here
}
#pragma endregion gameFunctions

//Keyboard and mouse input handling
#pragma region inputHandling											
void OnKeyDownEvent(SDL_Keycode key)
{

}

void OnKeyUpEvent(SDL_Keycode key)
{
	//switch (key)
	//{
	//case SDLK_LEFT:
	//	//std::cout << "Left arrow key released\n";
	//	break;
	//case SDLK_RIGHT:
	//	//std::cout << "Right arrow key released\n";
	//	break;
	//case SDLK_1:
	//case SDLK_KP_1:
	//	//std::cout << "Key 1 released\n";
	//	break;
	//}
}

void OnMouseMotionEvent(const SDL_MouseMotionEvent& e)
{
	//std::cout << "  [" << e.x << ", " << e.y << "]\n";
	//Point2f mousePos{ float( e.x ), float( g_WindowHeight - e.y ) };
}

void OnMouseDownEvent(const SDL_MouseButtonEvent& e)
{

}

void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{
	////std::cout << "  [" << e.x << ", " << e.y << "]\n";
	//switch (e.button)
	//{
	//case SDL_BUTTON_LEFT:
	//{
	//	//std::cout << "Left mouse button released\n";
	//	//Point2f mousePos{ float( e.x ), float( g_WindowHeight - e.y ) };
	//	break;
	//}
	//case SDL_BUTTON_RIGHT:
	//	//std::cout << "Right mouse button released\n";
	//	break;
	//case SDL_BUTTON_MIDDLE:
	//	//std::cout << "Middle mouse button released\n";
	//	break;
	//}
}
#pragma endregion inputHandling

#pragma region ownDefinitions
// Define your own functions here

void DrawHouse(float coordx, float coordy, float width/* = g_WindowWidth / 2.5f*/, float height/* = g_WindowHeight / 5.5f*/)
{
	SetColor(1, 0, 0);
	FillRect(coordx, coordy, width, height);
	SetColor(1, 1, 1);
	DrawRect(coordx, coordy, width, height);

	Point2f p1{ coordx, coordy + height };
	Point2f p2{ coordx + width, coordy + height };
	Point2f p3{ coordx + 0.5f * width, coordy + 2 * height };
	SetColor(1, 0, 0);
	FillTriangle(p1, p2, p3);
	SetColor(1, 1, 1);
	DrawTriangle(p1, p2, p3);
}

void DrawFlag(float coordx, float coordy, float width/* = g_WindowWidth / 3.0f*/, float height/* = g_WindowHeight /3.0f*/)
{
	float colorWidth{ width / 3 };

	SetColor(0, 0, 0);
	Point2f blackRectPoint{ coordx, coordy };
	FillRect(blackRectPoint, colorWidth, height);

	SetColor(1, 1, 0);
	Point2f yellowRectPoint{ coordx + (width / 3), coordy };
	FillRect(yellowRectPoint, colorWidth, height);

	SetColor(1, 0, 0);
	Point2f redRectPoint{ coordx + (2.0f * (width / 3)), coordy };
	FillRect(redRectPoint, colorWidth, height);

	SetColor(1, 1, 1);
	Point2f rectPoint{ coordx, coordy };
	DrawRect(rectPoint, width, height);

}

void DrawCheckerPattern(float coordx, float coordy, float size/* = g_WindowWidth / 3.0f*/)
{
	float colorWidth{ size / 3 };

	SetColor(0, 0, 0);
	FillRect(coordx, coordy, colorWidth, colorWidth);
	FillRect(coordx + 2.0f * colorWidth, coordy, colorWidth, colorWidth);
	FillRect(coordx, coordy + 2.0f * colorWidth, colorWidth, colorWidth);
	FillRect(coordx + 2.0f * colorWidth, coordy + 2.0f * colorWidth, colorWidth, colorWidth);
	FillRect(coordx + colorWidth, coordy + colorWidth, colorWidth, colorWidth);

	SetColor(1, 1, 1);
	FillRect(coordx + colorWidth, coordy, colorWidth, colorWidth);
	FillRect(coordx, coordy + colorWidth, colorWidth, colorWidth);
	FillRect(coordx + 2.0f * colorWidth, coordy + colorWidth, colorWidth, colorWidth);
	FillRect(coordx + 2.0f * colorWidth, coordy + colorWidth, colorWidth, colorWidth);
	FillRect(coordx + colorWidth, coordy + 2.0f * colorWidth, colorWidth, colorWidth);
	DrawRect(coordx, coordy, size, size);
}

void DrawColorBand(float coordx, float coordy, float width /* = g_WindowWidth / 1.5f */)
{
	float colorWidth{ width / 9 };
	float height{ colorWidth * 4 };
	Color4f gradient{ 0, 0, 0, 0.5f };

	SetColor(105.0f / 255, 105.0f / 255, 105.0f / 255);
	FillRect(coordx, coordy, colorWidth, height);
	SetColor(gradient);
	FillRect(coordx + 0.0f * colorWidth, coordy, colorWidth, height / 2);

	SetColor(1, 0, 0);
	FillRect(coordx + colorWidth, coordy, colorWidth, height);
	SetColor(gradient);
	FillRect(coordx + 1.0f * colorWidth, coordy, colorWidth, height / 2);

	SetColor(0, 128.0f / 255, 0);
	FillRect(coordx + 2.0f * colorWidth, coordy, colorWidth, height);
	SetColor(gradient);
	FillRect(coordx + 2.0f * colorWidth, coordy, colorWidth, height / 2);

	SetColor(0, 0, 1);
	FillRect(coordx + 3.0f * colorWidth, coordy, colorWidth, height);
	SetColor(gradient);
	FillRect(coordx + 3.0f * colorWidth, coordy, colorWidth, height / 2);

	SetColor(128.0f / 255, 0, 128.0f / 255);
	FillRect(coordx + 4.0f * colorWidth, coordy, colorWidth, height);
	SetColor(gradient);
	FillRect(coordx + 4.0f * colorWidth, coordy, colorWidth, height / 2);

	SetColor(1, 1, 0);
	FillRect(coordx + 5.0f * colorWidth, coordy, colorWidth, height);
	SetColor(gradient);
	FillRect(coordx + 5.0f * colorWidth, coordy, colorWidth, height / 2);

	SetColor(127.0f / 255, 1, 0);
	FillRect(coordx + 6.0f * colorWidth, coordy, colorWidth, height);
	SetColor(gradient);
	FillRect(coordx + 6.0f * colorWidth, coordy, colorWidth, height / 2);

	SetColor(0, 1, 1);
	FillRect(coordx + 7.0f * colorWidth, coordy, colorWidth, height);
	SetColor(gradient);
	FillRect(coordx + 7.0f * colorWidth, coordy, colorWidth, height / 2);

	SetColor(1, 1, 1);
	FillRect(coordx + 8.0f * colorWidth, coordy, colorWidth, height);
	SetColor(gradient);
	FillRect(coordx + 8.0f * colorWidth, coordy, colorWidth, height / 2);

	SetColor(1, 1, 0);
	DrawRect(coordx, coordy, width, height, 3);


}

void DrawPentagram(float centerx, float centery, float radius /* = 80.0f*/)
{
	float deltaAngle{ (360 / 5.0f) * (g_Pi / 180.0f) };
	Point2f points[5];

	for (int i = 0; i < 5; ++i)
	{
		float coordx1 = (radius * cos(i * deltaAngle)) + centerx;
		float coordy1 = (radius * sin(i * deltaAngle)) + centery;
		Point2f p{ coordx1, coordy1 };
		points[i] = p;
	}

	//Deze code werkt, is gewoon de code uitvoeren zonder for-loop
	/*float coordx1 = (radius * cos(0 * deltaAngle)) + 300;
	float coordy1 = (radius * sin(0 * deltaAngle)) + 250;
	Point2f p1{ coordx1, coordy1 };

	float coordx2 = (radius * cos(1 * deltaAngle)) + 300;
	float coordy2 = (radius * sin(1 * deltaAngle)) + 250;
	Point2f p2{ coordx2, coordy2 };

	float coordx3 = (radius * cos(2 * deltaAngle)) + 300;
	float coordy3 = (radius * sin(2 * deltaAngle)) + 250;
	Point2f p3{ coordx3, coordy3 };

	float coordx4 = (radius * cos(3 * deltaAngle)) + 300;
	float coordy4 = (radius * sin(3 * deltaAngle)) + 250;
	Point2f p4{ coordx4, coordy4 };

	float coordx5 = (radius * cos(4 * deltaAngle)) + 300;
	float coordy5 = (radius * sin(4 * deltaAngle)) + 250;
	Point2f p5{ coordx5, coordy5 };*/

	/*DrawLine(p1, p3);
	DrawLine(p1, p4);
	DrawLine(p2, p5);
	DrawLine(p2, p4);
	DrawLine(p3, p5);*/

	SetColor(1, 0, 0);
	DrawLine(points[0], points[2]);
	DrawLine(points[0], points[3]);
	DrawLine(points[1], points[4]);
	DrawLine(points[1], points[3]);
	DrawLine(points[2], points[4]);


}

void DrawColumnChart(float coordx, float coordy, float width /* = g_WindowWidth / 2.5f */, float height /* = 100.0f*/)
{
	float colorWidth{ width / 4 };
	int firstGroup{ 95 };
	int secondGroup{ 80 };
	int thirdGroup{ 50 };
	int fourthGroup{ 20 };

	/*std::cout << "% People playing games" << std::endl;
	std::cout << "In the range [0, 20]? ";
	std::cin >> firstGroup;
	std::cout << "In the range [21, 40]? ";
	std::cin >> secondGroup;
	std::cout << "In the range [41, 60]? ";
	std::cin >> thirdGroup;
	std::cout << "Older than 60? ";
	std::cin >> fourthGroup;*/


	SetColor(70.0f / 255, 130.0f / 255, 180.0f / 255);
	FillRect(coordx, coordy, colorWidth, height * (firstGroup / 100.0f));

	SetColor(30.0f / 255, 144.0f / 255, 255);
	FillRect(coordx + 1.0f * colorWidth, coordy, colorWidth, height * (secondGroup / 100.0f));

	SetColor(95.0f / 255, 158.0f / 255, 160.0f / 255);
	FillRect(coordx + 2.0f * colorWidth, coordy, colorWidth, height * (thirdGroup / 100.0f));

	SetColor(72.0f / 255, 61.0f / 255, 139.0f / 255);
	FillRect(coordx + 3.0f * colorWidth, coordy, colorWidth, height * (fourthGroup / 100.0f));

}

#pragma endregion ownDefinitions