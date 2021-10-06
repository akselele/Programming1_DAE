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
	DrawGreenRect();
	DrawBlueRect();
	DrawRedRect();
	 DrawYellowRect();
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
void DrawGreenRect()
{
	SetColor(0, 0, 0);
	DrawRect(g_GreenRect, -g_MaxWidth, g_MaxWidth);
	SetColor(0, 129.0f / 255, 0, 0.5f);
	FillRect(g_GreenRect, -g_MaxWidth, g_MaxWidth);
	g_GreenRect.x++;
	g_GreenRect.y--;

	g_GreenRect.x = float(int(g_GreenRect.x) % int(g_WindowHeight));
	g_GreenRect.y = float(int(g_GreenRect.y + g_WindowWidth) % int(g_WindowHeight));
}

void DrawBlueRect()
{
	SetColor(0, 0, 0);
	DrawRect(g_BlueRect, g_MaxWidth, g_MaxWidth);
	SetColor(0, 0, 1, 0.5f);
	FillRect(g_BlueRect, g_MaxWidth, g_MaxWidth);
	g_BlueRect.x--;
	g_BlueRect.y--;

	g_BlueRect.x = float(int(g_BlueRect.x + g_WindowWidth) % int(g_WindowHeight));
	g_BlueRect.y = float(int(g_BlueRect.y + g_WindowHeight) % int(g_WindowHeight));
}

void DrawRedRect()
{
	SetColor(0, 0, 0);
	DrawRect(g_RedRect, -g_MaxWidth, -g_MaxWidth);
	SetColor(1, 0, 0, 0.5f);
	FillRect(g_RedRect, -g_MaxWidth, -g_MaxWidth);
	g_RedRect.x++;
	g_RedRect.y++;

	g_RedRect.x = float(int(g_RedRect.x + g_WindowWidth) % int(g_WindowHeight));
	g_RedRect.y = float(int(g_RedRect.y + g_WindowHeight) % int(g_WindowHeight));
}

void DrawYellowRect()
{
	SetColor(0, 0, 0);
	DrawRect(g_YellowRect, g_MaxWidth, -g_MaxWidth);
	SetColor(1, 1, 0, 0.5f);
	FillRect(g_YellowRect, g_MaxWidth, -g_MaxWidth);
	g_YellowRect.x--;
	g_YellowRect.y++;

	g_YellowRect.x = float(int(g_YellowRect.x + g_WindowWidth) % int(g_WindowHeight));
	g_YellowRect.y = float(int(g_YellowRect.y) % int(g_WindowHeight));
}
#pragma endregion ownDefinitions