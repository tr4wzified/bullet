#pragma once
#include "helpers/DrawHelper.hpp"
namespace Bullet {
	class Player {
		private:
			int posX = 0;
			int posY = 0;
			int radius = 5;
		public:
			Player(int posX, int posY, int radius);
			bool Update();
			int GetPosX();
			int GetPosY();
			int GetRadius();
			void Render();
	};
}
