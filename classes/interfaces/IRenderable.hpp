#include <SDL2/SDL.h>
namespace Bullet {
	class IRenderable {
		public:
			virtual void Render() = 0;
	};
}
