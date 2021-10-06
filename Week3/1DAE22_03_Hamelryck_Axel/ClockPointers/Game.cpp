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

	// Put your own draw statements here
	DrawLongPointer();
	DrawShortPointer();
}

void Update(float elapsedSec)
{
	g_NrFrames++;
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
void DrawShortPointer()
{
	const float length{ 100.0f };
	const float one_third{ 1 / 3.0f };
	Point2f center{ g_WindowWidth / 2, g_WindowHeight / 2 };
	Point2f end{ };
	g_ShortAngleX = -(g_NrFrames / 240 / 12);
	g_ShortAngleY = -(g_NrFrames / 240 / 12);
	float valueX = (length * cosf(g_ShortAngleX));
	float valueY = (length * sinf(g_ShortAngleY));
	end.x = valueX + center.x;
	end.y = valueY + center.y;
	//DrawLine(center, end);

	float valueX2 = ((length * one_third) * cosf(g_ShortAngleX + one_third));
	float valueY2 = ((length * one_third) * sinf(g_ShortAngleY + one_third));
	Point2f second{ center.x + valueX2, center.y + valueY2 };
	DrawLine(center, second);

	float valueX3 = ((length * one_third) * cosf(g_ShortAngleX - one_third));
	float valueY3 = ((length * one_third) * sinf(g_ShortAngleY - one_third));
	Point2f third{ center.x + valueX3, center.y + valueY3 };
	DrawLine(center, third);

	DrawLine(second, end);
	DrawLine(third, end);
}

void DrawLongPointer()
{
	const float length{ 160.0f };
	const float one_third{ 1 / 3.0f };
	Point2f center{ g_WindowWidth / 2, g_WindowHeight / 2 };
	Point2f end{ };
	g_LongAngleX = -(g_NrFrames / 240);
	g_LongAngleY = -(g_NrFrames / 240);
	float valueX = (length * cosf(g_LongAngleX));
	float valueY = (length * sinf(g_LongAngleY));
	end.x = valueX + center.x;
	end.y = valueY + center.y;
	//DrawEllipse(center, length, length);
	//DrawLine(center, end);


	float valueX2 = ((length * one_third) * cosf(g_LongAngleX + one_third));
	float valueY2 = ((length * one_third) * sinf(g_LongAngleY + one_third));
	Point2f second{ center.x + valueX2, center.y + valueY2 };
	DrawLine(center, second);

	float valueX3 = ((length * one_third) * cosf(g_LongAngleX - one_third));
	float valueY3 = ((length * one_third) * sinf(g_LongAngleY - one_third));
	Point2f third{ center.x + valueX3, center.y + valueY3 };
	DrawLine(center, third);

	DrawLine(second, end);
	DrawLine(third, end);
}
#pragma endregion ownDefinitions