#pragma once
#include "GameGlobals.hpp"
#include <SDL2/SDL2_gfxPrimitives.h>
namespace Bullet {
	class Circle {
		public:
		float x, y, rad;
		SDL_Color color;
		Circle(float x, float y, float rad, SDL_Color color) {
			this->x = x;
			this->y = y;
			this->rad = rad;
			this->color = color;
		}
		void Render() {
			filledCircleRGBA(GameGlobals::sdlRenderer, x, y, rad, color.r, color.g, color.b, color.a);
		}
	};
}
