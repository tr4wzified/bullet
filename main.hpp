// Includes
#pragma once

// Bullet
#include "classes/helpers/ColorHelper.hpp"
#include "classes/Player.hpp"
#include "classes/LTimer.hpp"
#include "classes/GameGlobals.hpp"

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
Player player = Player(20.0, 20.0, 5);
LTimer stepTimer;

// Functions
int main(int argc, char* argv[]);
int Init();
int Quit();
int Draw();
