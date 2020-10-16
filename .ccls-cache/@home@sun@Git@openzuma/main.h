#pragma once
#include <SDL2/SDL.h>
#include <string>
#include <vector>

using std::string;
using std::vector;
inline static const char* gameTitle = "BULLET";
bool gameRunning = true;
SDL_Window* sdlWindow = nullptr;
SDL_Renderer* sdlRenderer = nullptr;

