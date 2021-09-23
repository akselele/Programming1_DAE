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
	/*SetColor(199 / 255.0f, 21 / 255.0f, 133 / 255.0f);
	DrawEllipse(g_WindowWidth / 2, g_WindowHeight / 2, g_WindowHeight / 2, g_WindowHeight / 2);
	SetColor(0, 0, 1);
	FillEllipse(g_WindowWidth / 3, g_WindowHeight / 1.5f, g_WindowHeight / 60, g_WindowHeight / 60);
	FillEllipse(g_WindowWidth / 1.5f, g_WindowHeight / 1.5f, g_WindowHeight / 150, g_WindowHeight / 150);
	SetColor(199 / 255.0f, 21 / 255.0f, 133 / 255.0f);
	DrawLine(g_WindowWidth / 3, g_WindowHeight - (g_WindowHeight / 1.65f), g_WindowWidth / 1.5f, g_WindowHeight - (g_WindowHeight / 1.65f));*/
	SetColor(1, 0, 0);
	FillEllipse(g_MousePos, 3, 3);
	//165, 182
	//333, 182
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
	std::cout << e.x << " - " << e.y << std::endl;
	//Point2f mousePos{ float(e.x), float(g_WindowHeight - e.y) };
	Point2f mousePos{ float(e.x), float(g_WindowHeight - e.y) };
	g_MousePos = mousePos;
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

#pragma endregion ownDefinitions