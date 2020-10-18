#pragma once
#include "GameGlobals.hpp"
#include "Circle.hpp"
#include <time.h>
namespace Bullet {
	class Player {
		private:
			SDL_Color color = GameGlobals::colorCollection.at(15);
			float posX, posY, velocityX, velocityY = 0;
			int radius;
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
			bool Dash();
		public:
			Player();
			bool Update();
			float GetPosX();
			float GetPosY();
			float GetVelocityX();
			float GetVelocityY();
			int GetRadius();
			SDL_Color GetColor();
			void Render();
			void HandleEvent();
			void Update(float timeStep);
			bool IsDashReady();
			void Reset();
	};
}
