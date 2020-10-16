#include "main.hpp"
int main(int argc, char* argv[]) {
	Init();
	while (gameRunning) {
		SDL_PollEvent(&event);
		switch(event.type) {
			case SDL_QUIT:
				Quit();
		}
	}
	return 0;
}
int Init() {
	// initialize SDL
	SDL_Init(SDL_INIT_VIDEO) == 0 ? SDL_Log("SDL Initialized.") : SDL_Log("SDL failed to initialize! Error: %s", SDL_GetError());
	// create SDL window
	sdlWindow = SDL_CreateWindow(gameTitle, 0, 0, 640, 480, SDL_WINDOW_FULLSCREEN_DESKTOP);
	// create SDL renderer
	sdlRenderer = SDL_CreateRenderer(sdlWindow, -1, SDL_RENDERER_ACCELERATED);
	ColorHelper colorHelper = ColorHelper();
	colorHelper.ReadColorsFromFile(colorFile);
	std::vector<SDL_Color> cc = colorHelper.GetCurrentColors();
	SDL_Log("R: %d G: %d B: %d", cc.at(0).r, cc.at(0).g, cc.at(0).b);
	SDL_SetRenderDrawColor(sdlRenderer, cc.at(0).r, cc.at(0).g, cc.at(0).b, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(sdlRenderer);
	SDL_RenderPresent(sdlRenderer);
	return 0;
}

int Quit() {
	gameRunning = false;
	SDL_DestroyRenderer(sdlRenderer);
	SDL_DestroyWindow(sdlWindow);
	SDL_Quit();
	return 0;
}
