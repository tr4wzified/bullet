// Includes
#pragma once
#include <SDL2/SDL.h>
#include <string>
#include <vector>

// Using
using std::string;
using std::vector;

// Variables
inline static const char* gameTitle = "BULLET";
bool gameRunning = true;
SDL_Window* sdlWindow = nullptr;
SDL_Renderer* sdlRenderer = nullptr;
SDL_Event event;

// Functions
int main(int argc, char* argv[]);
int Init();
int Quit();
