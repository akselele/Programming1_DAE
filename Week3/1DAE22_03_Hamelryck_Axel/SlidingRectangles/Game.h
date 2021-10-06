#pragma once
using namespace utils;
#pragma region gameInformation
// Set your name and group in the title here
std::string g_WindowTitle{ "SlidingRectangles - Hamelryck, Axel - 1DAE22" };

// Change the window dimensions here
float g_WindowWidth{ 800 };
float g_WindowHeight{ 800 };
#pragma endregion gameInformation



#pragma region ownDeclarations
// Declare your own global variables here
const float g_MaxWidth{ g_WindowWidth / 5 };
// Mirroring horizontally
Point2f g_GreenRect{ (g_WindowWidth / 2) - g_MaxWidth/2 + g_MaxWidth, (g_WindowHeight / 2) - g_MaxWidth/2 };
Point2f g_BlueRect{ (g_WindowWidth / 2) - g_MaxWidth / 2, (g_WindowHeight / 2) - g_MaxWidth / 2 };
// Mirroring horizontally and vertically
Point2f g_RedRect{ (g_WindowWidth / 2) - g_MaxWidth / 2 + g_MaxWidth, (g_WindowHeight / 2) - g_MaxWidth / 2 + g_MaxWidth };
// Mirroring vertically
Point2f g_YellowRect{ (g_WindowWidth / 2) - g_MaxWidth / 2, (g_WindowHeight / 2) - g_MaxWidth / 2 + g_MaxWidth};
// Declare your own functions here
void DrawGreenRect();
void DrawBlueRect();
void DrawRedRect();
void DrawYellowRect();
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
