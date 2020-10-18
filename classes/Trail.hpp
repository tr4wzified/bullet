#pragma once
#include <SDL2/SDL.h>
#include <list>
#include "Player.hpp"
#include "Circle.hpp"
namespace Bullet {
	class Trail {
		private:
			Player* player = nullptr;
			uint8_t length;
			std::list<Circle> circles;
		public:
			Trail(Player* player, uint8_t length);
			void Update();
			void Render();
	};
}
