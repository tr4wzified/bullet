#pragma once
#include <SDL2/SDL.h>
namespace Bullet {
	class DrawHelper {
		public:
			static void DrawCircle(SDL_Renderer* renderer, int32_t centreX, int32_t centreY, int32_t radius);
	};
}
