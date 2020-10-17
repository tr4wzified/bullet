#pragma once
#include "helpers/DrawHelper.hpp"
#include "GameGlobals.hpp"
#include <time.h>
namespace Bullet {
	class Player {
		private:
			float posX, posY, velocityX, velocityY = 0;
			int radius = 12;
			// Default movement speed, pixels/sec
			const float VEL = 500.0;
			// Dash movement speed multiplier
			const float dashMultiplier = 225.0;
			// Dash cooldown in sec
			const clock_t dashCooldown = 1.5 * CLOCKS_PER_SEC;
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
			Player(float posX, float posY, int radius);
			bool Update();
			float GetPosX();
			float GetPosY();
			float GetVelocityX();
			float GetVelocityY();
			int GetRadius();
			void Render();
			void HandleEvent();
			void Update(float timeStep);
			bool IsDashReady();
	};
}
