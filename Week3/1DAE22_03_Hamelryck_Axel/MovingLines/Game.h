#pragma once
using namespace utils;
#pragma region gameInformation
// Set your name and group in the title here
std::string g_WindowTitle{ "MovingLines - Hamelryck, Axel - 1DAE22" };

// Change the window dimensions here
float g_WindowWidth{ 500 };
float g_WindowHeight{ 500 };
#pragma endregion gameInformation



#pragma region ownDeclarations
// Declare your own global variables here
Point2f g_Horizonal1Point1{ 0, g_WindowHeight };
Point2f g_Horizonal1Point2{ g_WindowWidth, g_WindowHeight };

Point2f g_Horizonal2Point1{ 0, 0 };
Point2f g_Horizonal2Point2{ g_WindowWidth, 0 };

Point2f g_Vertical1Point1{ 0, g_WindowHeight };
Point2f g_Vertical1Point2{ 0, 0 };

Point2f g_Vertical2Point1{ g_WindowWidth, g_WindowHeight };
Point2f g_Vertical2Point2{ g_WindowWidth, 0 };
// Declare your own functions here
void DrawMovingLines();
#pragma endregion ownDeclarations

#pragma region gameFunctions											
void Start();
void Draw();
void Update(float elapsedSec);
void End();
#pragma endregion gameFunctions

#pragma region inputHandling											
void OnKeyDownEvent(SDL_Keycode key);
void OnKeyUpEvent(SDL_Keycode key);
void OnMouseMotionEvent(const SDL_MouseMotionEvent& e);
void OnMouseDownEvent(const SDL_MouseButtonEvent& e);
void OnMouseUpEvent(const SDL_MouseButtonEvent& e);
#pragma endregion inputHandling
