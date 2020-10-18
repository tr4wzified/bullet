#pragma once
#include "GameGlobals.hpp"
#include <SDL2/SDL2_gfxPrimitives.h>
#include <time.h>
#include "Circle.hpp"
namespace Bullet {
	class Player : public Circle {
		private:
			float velocityX, velocityY = 0;
			// Default movement speed, pixels/sec
			float VEL;
			// Dash movement speed multiplier
			float dashMultiplier;
			// Dash cooldown in sec
			const clock_t dashCooldown = 1.0 * CLOCKS_PER_SEC;
			// If < 0, dash is available
			clock_t start = clock();
			clock_t elapsed;
			bool wBeingHeld = false;
			bool sBeingHeld = false;
			bool aBeingHeld = false;
			bool dBeingHeld = false;
			bool dashing = false;
		public:
			Player(float x, float y, float radius);
			bool Update();
			float GetVelocityX();
			float GetVelocityY();
			void HandleEvent();
			void Update(float timeStep);
			bool IsDashReady();
			void Reset();
	};
}
