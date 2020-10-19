#pragma once
#include <SDL2/SDL.h>
#include <deque>
#include "Player.hpp"
#include "Circle.hpp"

// benchmark
#include <chrono>
#include <ctime>
#include <ratio>

namespace Bullet {
	class Trail {
		private:
			Player* player = nullptr;
			uint8_t length;
			std::deque<Circle> circles;
		public:
			Trail(Player* player, uint8_t length);
			void Update();
			void Render();
			void Reset();
	};
}
