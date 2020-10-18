#pragma once
#include "GameGlobals.hpp"
#include "Player.hpp"
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
		float DistanceTo(Circle& c) {
			return sqrt((pow((c.x - x), 2)) + pow((c.y - y), 2)) - (c.rad + rad);
		}
		float DistanceTo(Player& p) {
			return sqrt((pow((p.GetPosX() - x), 2)) + pow((p.GetPosY() - y), 2)) - (p.GetRadius() + rad);
		}
	};
}
