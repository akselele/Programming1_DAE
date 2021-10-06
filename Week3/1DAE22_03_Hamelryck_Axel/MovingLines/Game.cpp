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
	DrawMovingLines();
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
void DrawMovingLines()
{
	SetColor(1, 1, 1);
	DrawLine(g_Horizonal1Point1, g_Horizonal1Point2);
	g_Horizonal1Point1.y--;
	g_Horizonal1Point2.y--;
	g_Horizonal1Point1.y = float(int(g_Horizonal1Point1.y + g_WindowHeight) % int(g_WindowHeight));
	g_Horizonal1Point2.y = float(int(g_Horizonal1Point2.y + g_WindowHeight) % int(g_WindowHeight));

	DrawLine(g_Horizonal2Point1, g_Horizonal2Point2);
	g_Horizonal2Point1.y++;
	g_Horizonal2Point2.y++;
	g_Horizonal2Point1.y = float(int(g_Horizonal2Point1.y) % int(g_WindowHeight));
	g_Horizonal2Point2.y = float(int(g_Horizonal2Point2.y) % int(g_WindowHeight));

	DrawLine(g_Vertical1Point1, g_Vertical1Point2);
	g_Vertical1Point1.x++;
	g_Vertical1Point2.x++;
	g_Vertical1Point1.x = float(int(g_Vertical1Point1.x) % int(g_WindowHeight));
	g_Vertical1Point2.x = float(int(g_Vertical1Point2.x) % int(g_WindowHeight));

	DrawLine(g_Vertical2Point1, g_Vertical2Point2);
	g_Vertical2Point1.x--;
	g_Vertical2Point2.x--;
	g_Vertical2Point1.x = float(int(g_Vertical2Point1.x + g_WindowWidth) % int(g_WindowHeight));
	g_Vertical2Point2.x = float(int(g_Vertical2Point2.x + g_WindowWidth) % int(g_WindowHeight));

	SetColor(1, 1, 0);
	DrawLine(g_Horizonal1Point1, g_Vertical1Point2);
	DrawLine(g_Vertical1Point2, g_Horizonal2Point2);
	DrawLine(g_Horizonal2Point2, g_Vertical2Point1);
	DrawLine(g_Vertical2Point1, g_Horizonal1Point1);
}
#pragma endregion ownDefinitions