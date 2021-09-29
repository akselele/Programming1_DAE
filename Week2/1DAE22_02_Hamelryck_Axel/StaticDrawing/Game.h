#pragma once
using namespace utils;
#pragma region gameInformation
// Set your name and group in the title here
std::string g_WindowTitle{ "StaticDrawing - Hamelryck, Axel - 1DAE22" };

// Change the window dimensions here
float g_WindowWidth{ 1000 };
float g_WindowHeight{ 600 };
#pragma endregion gameInformation



#pragma region ownDeclarations
// Declare your own global variables here

// Declare your own functions here

void DrawHouse(float coordx, float coordy, float width = g_WindowWidth / 2.5f, float height = g_WindowHeight / 5.5f);
void DrawFlag(float coordx, float coordy, float width = g_WindowWidth / 3.0f, float height = g_WindowHeight / 3.0f);
void DrawCheckerPattern(float coordx, float coordy, float size = g_WindowWidth / 3.0f);
void DrawColorBand(float coordx, float coordy, float width = g_WindowWidth / 2.5f);
void DrawPentagram(float centerx, float centery, float radius = 80.0f);
void DrawColumnChart(float coordx, float coordy, float width = g_WindowWidth / 2.5f, float height = 100.0f);
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
