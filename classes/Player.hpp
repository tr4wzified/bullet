#pragma once
#include "helpers/DrawHelper.hpp"
#include "GameGlobals.hpp"
namespace Bullet {
	class Player {
		private:
			float posX, posY, velocityX, velocityY = 0;
			int radius = 5;
			// Pixels per sec
			float VEL = 500.0;
			bool wBeingHeld = false;
			bool sBeingHeld = false;
			bool aBeingHeld = false;
			bool dBeingHeld = false;
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
	};
}
