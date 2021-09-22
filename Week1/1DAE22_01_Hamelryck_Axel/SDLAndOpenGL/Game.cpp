#include "pch.h"
#include "Game.h"

//Basic game functions
#pragma region gameFunctions											
void Start()
{
	// initialize game resources here
}

void Draw()
{
	ClearBackground();
	//Diagonal lines
	SetColor(1, 0, 0);
	DrawLine(0, 0, g_WindowWidth, g_WindowHeight);
	DrawLine(0, g_WindowHeight, g_WindowWidth, 0);

	//Rectangles
	SetColor(1, 1, 1);
	//bottom 3 rectangles
	DrawRect(0, 0, g_WindowWidth / 3, g_WindowHeight / 3);
	DrawRect(0, 0, (g_WindowWidth / 3) * 2, g_WindowHeight / 3);
	DrawRect(0, 0, g_WindowWidth, g_WindowHeight / 3);
	//middle 3 rectangles
	DrawRect(0, g_WindowHeight / 3, g_WindowWidth / 3, g_WindowHeight / 3);
	DrawRect(0, g_WindowHeight / 3, (g_WindowWidth / 3) * 2, g_WindowHeight / 3);
	DrawRect(0, g_WindowHeight / 3, g_WindowWidth, g_WindowHeight / 3);
	//top 3 rectangles
	DrawRect(0, (g_WindowHeight / 3) * 2, g_WindowWidth / 3, g_WindowHeight / 3);
	DrawRect(0, (g_WindowHeight / 3) * 2, (g_WindowWidth / 3) * 2, g_WindowHeight / 3);
	DrawRect(0, (g_WindowHeight / 3) * 2, g_WindowWidth, g_WindowHeight / 3);

	// Green borders
	SetColor(0, 128 / 255.0f, 0);
	//bottom
	DrawLine(0, 0, g_WindowWidth, 0);
	//left
	DrawLine(0, 0, 0, g_WindowHeight, 2);
	//top
	DrawLine(0, g_WindowHeight, g_WindowWidth, g_WindowHeight, 2);
	//right
	DrawLine(g_WindowWidth, g_WindowHeight, g_WindowWidth, 0);

	//Middle point
	SetColor(0, 0, 1);
	FillEllipse(g_WindowWidth / 2, g_WindowHeight / 2, g_Pi, g_Pi);
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

#pragma endregion ownDefinitions