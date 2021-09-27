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
	ClearBackground(75.0f / 255, 0, 130.0f / 255);
	//DrawFlag();
	DrawCheckerPattern();
	// Put your own draw statements here

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

void DrawHouse()
{

}

void DrawFlag()
{
	float coordx{ 80.0f };
	float coordy{ 50.0f };
	float width{ g_WindowWidth / 3.0f };
	float height{ g_WindowHeight / 3.0f };
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

void DrawCheckerPattern()
{
	float coordx{ 80.0f };
	float coordy{ 30.0f };
	float width{ g_WindowWidth / 3.0f };
	float colorWidth{ width / 3 };

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
	DrawRect(coordx, coordy, width, width);
}

void DrawColorBand()
{
	float coordx{};
	float coordy{};
	float width{};
	float height{ 4.0f * width };
	float greyRgb{ 105.0f / 255 };
	SetColor(greyRgb, greyRgb, greyRgb);
	
}

void DrawPentagram()
{

}

void DrawColumnChart()
{

}

#pragma endregion ownDefinitions