#include "main.h"
int main(int argc, char* argv[]) {
	// initialize SDL
	SDL_Init(SDL_INIT_VIDEO) == 0 ? SDL_Log("SDL Initialized.") : SDL_Log("SDL failed to initialize! Error: %s", SDL_GetError());
	sdlWindow = SDL_CreateWindow(gameTitle, 0, 0, 1280, 720, SDL_WINDOW_BORDERLESS);
	sdlRenderer = SDL_CreateRenderer(sdlWindow, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(sdlRenderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(sdlRenderer);
	SDL_RenderPresent(sdlRenderer);
	while (gameRunning) {
	}
	return 0;
}
