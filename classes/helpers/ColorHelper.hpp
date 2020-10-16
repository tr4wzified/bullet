#pragma once
#include <string>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <SDL2/SDL.h>
#include <vector>
namespace Bullet {
	class ColorHelper {
		public:
			static std::vector<SDL_Color> ReadColorsFromFile(std::string path);
	};
}
