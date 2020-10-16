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
			ColorHelper();
			bool ReadColorsFromFile(std::string path);
			bool SetColor(int index, SDL_Color& color);
			std::vector<SDL_Color>& GetCurrentColors();
		private:
			std::vector<SDL_Color> currentColors;
	};
}
