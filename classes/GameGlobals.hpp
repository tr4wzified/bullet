#pragma once
#include <SDL2/SDL.h>
#include <vector>
#include "helpers/ColorHelper.hpp"
namespace Bullet {
	class GameGlobals {
		public:
		static inline SDL_Renderer* sdlRenderer;
		static inline SDL_Window* sdlWindow;
		static inline SDL_Event sdlEvent;
		static inline int screenWidth = 1280;
		static inline int screenHeight = 720;
		static const inline std::string colorFile = "colors.ini";
		static const inline std::vector<SDL_Color> colorCollection = Bullet::ColorHelper::ReadColorsFromFile(colorFile);
		static const inline char* gameTitle = "BULLET";
	};
}
