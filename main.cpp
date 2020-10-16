#include "main.hpp"
int main(int argc, char* argv[]) {
	Init();
	while (gameRunning) {
		SDL_PollEvent(&event);
		Draw();
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
	SDL_SetRenderDrawColor(sdlRenderer, colorCollection.at(0).r, colorCollection.at(0).g, colorCollection.at(0).b, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(sdlRenderer);
	return 0;
}

int Quit() {
	gameRunning = false;
	SDL_DestroyRenderer(sdlRenderer);
	SDL_DestroyWindow(sdlWindow);
	SDL_Quit();
	return 0;
}

int Draw() {
	// Draw player
	SDL_SetRenderDrawColor(sdlRenderer, colorCollection.at(15).r, colorCollection.at(15).g, colorCollection.at(15).b, SDL_ALPHA_OPAQUE);
	Bullet::DrawHelper::DrawCircle(sdlRenderer, player.GetPosX(), player.GetPosY(), player.GetRadius());
	SDL_RenderPresent(sdlRenderer);
}
