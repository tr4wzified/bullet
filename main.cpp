#include "main.hpp"
int main(int argc, char* argv[]) {
	Init();
	while (gameRunning) {
		while (SDL_PollEvent(&GameGlobals::sdlEvent) != 0)
		{
			switch(GameGlobals::sdlEvent.type) {
				case SDL_QUIT:
					Quit();
					break;
			}
			player.HandleEvent();
		}
		float timeStep = stepTimer.getTicks() / 1000.f;
		player.Update(timeStep);
		stepTimer.start();
		Draw();
	}
	return 0;
}
int Init() {
	// initialize SDL
	SDL_Init(SDL_INIT_VIDEO) == 0 ? SDL_Log("SDL Initialized.") : SDL_Log("SDL failed to initialize! Error: %s", SDL_GetError());
	// create SDL window
	/* GameGlobals::sdlWindow = SDL_CreateWindow(gameTitle, 0, 0, 640, 480, SDL_WINDOW_FULLSCREEN_DESKTOP); */
	GameGlobals::sdlWindow = SDL_CreateWindow(gameTitle, 0, 0, 1280, 720, SDL_WINDOW_BORDERLESS);
	// create SDL renderer
	GameGlobals::sdlRenderer = SDL_CreateRenderer(GameGlobals::sdlWindow, -1, SDL_RENDERER_ACCELERATED);
	return 0;
}

int Quit() {
	gameRunning = false;
	SDL_DestroyRenderer(GameGlobals::sdlRenderer);
	SDL_DestroyWindow(GameGlobals::sdlWindow);
	SDL_Quit();
	return 0;
}

int Draw() {
	// Draw background
	SDL_SetRenderDrawColor(GameGlobals::sdlRenderer, colorCollection.at(0).r, colorCollection.at(0).g, colorCollection.at(0).b, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(GameGlobals::sdlRenderer);
	// Draw player
	if (!player.IsDashReady())
		filledCircleRGBA(GameGlobals::sdlRenderer, player.GetPosX(), player.GetPosY(), player.GetRadius(), colorCollection.at(15).r, colorCollection.at(15).g, colorCollection.at(15).b, 255);
	else
		filledCircleRGBA(GameGlobals::sdlRenderer, player.GetPosX(), player.GetPosY(), player.GetRadius(), colorCollection.at(10).r, colorCollection.at(10).g, colorCollection.at(10).b, 255);
	SDL_RenderPresent(GameGlobals::sdlRenderer);
	return 0;
}
