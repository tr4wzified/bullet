// Includes
#pragma once

// Bullet
#include "classes/helpers/ColorHelper.hpp"

// System Libraries
#include <SDL2/SDL.h>
#include <string>
#include <vector>

// Using
using namespace Bullet;

// Variables
inline static const char* gameTitle = "BULLET";
const std::string colorFile = "colors.ini";
bool gameRunning = true;
SDL_Window* sdlWindow = nullptr;
SDL_Renderer* sdlRenderer = nullptr;
SDL_Event event;

// Functions
int main(int argc, char* argv[]);
int Init();
int Quit();

