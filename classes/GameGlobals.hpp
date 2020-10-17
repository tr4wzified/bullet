#pragma once
#include <SDL2/SDL.h>
namespace Bullet {
	class GameGlobals {
		public:
		static inline SDL_Renderer* sdlRenderer;
		static inline SDL_Window* sdlWindow;
		static inline SDL_Event sdlEvent;
		static inline int screenWidth = 1280;
		static inline int screenHeight = 720;
	};
}
