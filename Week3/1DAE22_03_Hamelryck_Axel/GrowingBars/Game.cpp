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
	ClearBackground(0, 0, 0);
	// Put your own draw statements here
	DrawYellowLoading();
	DrawRedLoading();
}

void Update(float elapsedSec)
{
	// process input, do physics 
	g_Seconds += elapsedSec;
	g_Frames++;
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
void DrawRedLoading()
{
	float maxHeight{ 80.0f };
	float maxWidth{ g_WindowWidth - 20 };
	float redValue{ (g_NrFramesRed / maxWidth) * 135 };
	SetColor((120 + redValue) / 255.0f, 0, 0);
	FillRect(10, 100, float(g_NrFramesRed), maxHeight);
	SetColor(1, 1, 1);
	DrawRect(10, 100, maxWidth, maxHeight, 4.0);
	g_NrFramesRed = (g_Frames / 30) * 15;
	g_NrFramesRed = g_NrFramesRed % int(maxWidth);
}

void DrawYellowLoading()
{
	float maxHeight{ g_WindowHeight / 4 };
	float maxWidth{ g_WindowWidth - 20 };
	SetColor(189 / 255.0f, 183 / 255.0f, 107 / 255.0f);
	FillRect(10, g_WindowHeight - 100, float(g_NrFramesYellow), maxHeight);
	SetColor(1, 1, 1);
	DrawRect(10, g_WindowHeight - 100, maxWidth, maxHeight, 4.0);
	g_NrFramesYellow++;
	g_NrFramesYellow = g_NrFramesYellow % int(maxWidth);

}

#pragma endregion ownDefinitions