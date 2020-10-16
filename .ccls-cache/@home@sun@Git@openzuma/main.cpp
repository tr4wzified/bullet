#include "main.h"
int main(int argc, char* argv[]) {
	// initialize SDL
	SDL_Init(SDL_INIT_VIDEO) ? SDL_Log("SDL Initialized.") : SDL_Log("SDL failed to initialize!");
	sdlWindow = SDL_CreateWindow(gameTitle, 0, 0, 1280, 720, SDL_WINDOW_BORDERLESS);
	return 0;
}
