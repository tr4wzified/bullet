// Includes
#pragma once

// Bullet
#include "classes/helpers/ColorHelper.hpp"
#include "classes/Player.hpp"

// System Libraries
#include <SDL2/SDL.h>
#include <string>
#include <vector>

// Using
using namespace Bullet;

// Variables
inline static const char* gameTitle = "BULLET";
const std::string colorFile = "colors.ini";
static std::vector<SDL_Color> colorCollection = Bullet::ColorHelper::ReadColorsFromFile(colorFile);
bool gameRunning = true;
SDL_Window* sdlWindow = nullptr;
SDL_Renderer* sdlRenderer = nullptr;
SDL_Event event;
Player player = Player(300, 300, 5);

// Functions
int main(int argc, char* argv[]);
int Init();
int Quit();
int Draw();
