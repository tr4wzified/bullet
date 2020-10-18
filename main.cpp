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
				case SDL_WINDOWEVENT:
					if (GameGlobals::sdlEvent.window.event == SDL_WINDOWEVENT_RESIZED) {
						// Scale speed to resolution
						SDL_Log("Window %d resized to %dx%d", GameGlobals::sdlEvent.window.windowID, GameGlobals::sdlEvent.window.data1, GameGlobals::sdlEvent.window.data2);
						GameGlobals::screenWidth = GameGlobals::sdlEvent.window.data1;
						GameGlobals::screenHeight = GameGlobals::sdlEvent.window.data2;
						player.Reset();
					}
					break;
			}
			player.HandleEvent();
		}
		float timeStep = stepTimer.getTicks() / 1000.f;
		player.Update(timeStep);
		playerTrail.Update();
		stepTimer.start();
		Draw();
	}
	return 0;
}
int Init() {
	// initialize SDL
	SDL_Init(SDL_INIT_VIDEO) == 0 ? SDL_Log("SDL Initialized.") : SDL_Log("SDL failed to initialize! Error: %s", SDL_GetError());
	// create SDL window
	/* GameGlobals::sdlWindow = SDL_CreateWindow(GameGlobals::gameTitle, 0, 0, 640, 480, SDL_WINDOW_FULLSCREEN_DESKTOP); */
	GameGlobals::sdlWindow = SDL_CreateWindow(GameGlobals::gameTitle, 0, 0, GameGlobals::screenWidth, GameGlobals::screenHeight, SDL_WINDOW_BORDERLESS);
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
	SDL_SetRenderDrawColor(GameGlobals::sdlRenderer, GameGlobals::colorCollection.at(0).r, GameGlobals::colorCollection.at(0).g, GameGlobals::colorCollection.at(0).b, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(GameGlobals::sdlRenderer);
	player.Render();
	playerTrail.Render();
	SDL_RenderPresent(GameGlobals::sdlRenderer);
	return 0;
}
