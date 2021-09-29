#include "pch.h"
#include "Game.h"
#include <iostream>

//Basic game functions
#pragma region gameFunctions											
void Start()
{
	// initialize game resources here
}

void Draw()
{
	ClearBackground();

	// Put your own draw statements here
	DrawStar();
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
void DrawStar()
{
	float outerRadius{ 200 };
	float deltaAngle{ (360 / 5.0f) * (g_Pi / 180.0f) };
	float angle_90{ 90 * (g_Pi / 180.0f) };
	float angle_45{ 45 * (g_Pi / 180.0f) };
	float angle_30{ 30 * (g_Pi / 180.0f) };
	float angle_60{ 60 * (g_Pi / 180.0f) };
	Point2f points[16];

	for (int i = 0; i < 4; ++i)
	{
		float coordx1 = (outerRadius * cosf(i * angle_90)) + g_WindowWidth / 2;
		float coordy1 = (outerRadius * sinf(i * angle_90)) + g_WindowHeight / 2;
		Point2f p{ coordx1, coordy1 };
		points[i] = p;
	}

	for (int i = 4; i < 8; ++i)
	{
		float coordx1 = (((2.0f / 3) * outerRadius) * cosf((i * angle_90) + angle_45)) + g_WindowWidth / 2;
		float coordy1 = (((2.0f / 3) * outerRadius) * sinf((i * angle_90) + angle_45)) + g_WindowHeight / 2;
		Point2f p{ coordx1, coordy1 };
		points[i] = p;
	}

	for (int i = 8; i < 12; ++i)
	{
		float coordx1 = (outerRadius / 3 * cosf((i * angle_90) + angle_30)) + g_WindowWidth / 2;
		float coordy1 = (outerRadius / 3 * sinf((i * angle_90) + angle_30)) + g_WindowHeight / 2;
		Point2f p{ coordx1, coordy1 };
		points[i] = p;
	}

	for (int i = 12; i < 16; ++i)
	{
		float coordx1 = (outerRadius / 3 * cosf((i * angle_90) + angle_60)) + g_WindowWidth / 2;
		float coordy1 = (outerRadius / 3 * sinf((i * angle_90) + angle_60)) + g_WindowHeight / 2;
		Point2f p{ coordx1, coordy1 };
		points[i] = p;
	}

	SetColor(1, 0, 0);
	DrawLine(points[0], points[8]);
	DrawLine(points[1], points[9]);
	DrawLine(points[2], points[10]);
	DrawLine(points[3], points[11]);

	DrawLine(points[4], points[12]);
	DrawLine(points[5], points[13]);
	DrawLine(points[6], points[14]);
	DrawLine(points[7], points[15]);

	DrawLine(points[0], points[15]);
	DrawLine(points[1], points[12]);
	DrawLine(points[2], points[13]);
	DrawLine(points[3], points[14]);

	DrawLine(points[4], points[8]);
	DrawLine(points[5], points[9]);
	DrawLine(points[6], points[10]);
	DrawLine(points[7], points[11]);


	






}
#pragma endregion ownDefinitions