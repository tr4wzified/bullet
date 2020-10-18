#pragma once
#include "GameGlobals.hpp"
#include <SDL2/SDL2_gfxPrimitives.h>
namespace Bullet {
	class Circle {
		protected:
		float x, y, radius;
		SDL_Color color;
		public:
		Circle(float x, float y, float radius, SDL_Color color) {
			this->x = x;
			this->y = y;
			this->radius = radius;
			this->color = color;
		}
		float GetX() {
			return x;
		}

		float GetY() {
			return y;
		}

		float GetRadius() {
			return radius;
		}

		SDL_Color GetColor() {
			return color;
		}

		void SetAlpha(Uint8 alpha) {
			color.a = alpha;
		}

		void SetRadius(float radius) {
			this->radius = radius;
		}

		void Render() {
			filledCircleRGBA(GameGlobals::sdlRenderer, x, y, radius, color.r, color.g, color.b, color.a);
		}

		float DistanceTo(Circle& c) {
			return sqrt((pow((c.x - x), 2)) + pow((c.y - y), 2)) - (c.radius + radius);
		}
	};
}
