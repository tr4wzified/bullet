// Includes
#pragma once

// Bullet
#include "classes/helpers/ColorHelper.hpp"
#include "classes/Player.hpp"
#include "classes/LTimer.hpp"
#include "classes/GameGlobals.hpp"
#include "classes/Trail.hpp"

// System Libraries
#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>
#include <string>
#include <vector>

// Using
using namespace Bullet;

// Variables
bool gameRunning = true;
LTimer stepTimer;
Player player = Player();
Trail playerTrail = Trail(&player, GameGlobals::GetTrailLength());

// Functions
int main(int argc, char* argv[]);
int Init();
int Quit();
int Draw();
