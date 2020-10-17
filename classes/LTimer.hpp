#include <stdint.h>
#include <SDL2/SDL.h>
//The application time based timer (from Lazy Foo Productions)
namespace Bullet {
	class LTimer
	{
		public:
			LTimer();

			// The various clock actions
			void start();
			void stop();
			void pause();
			void unpause();

			// Gets the time
			uint32_t getTicks();

			// Checks the status of the timer
			bool isStarted();
			bool isPaused();

		private:
			//The clock time when the timer started
			uint32_t mStartTicks;

			//The ticks stored when the timer was paused
			uint32_t mPausedTicks;

			//The timer status
			bool mPaused;
			bool mStarted;
	};
}
