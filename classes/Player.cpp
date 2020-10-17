#include "Player.hpp"
Bullet::Player::Player(int posX, int posY, int radius) {
	this->posX = posX;
	this->posY = posY;
	this->radius = radius;
}
bool Bullet::Player::Update(SDL_Event& event, SDL_Window* window) {
	int width = 0;
	int height = 0;
	SDL_GetWindowSize(window, &width, &height);
	switch(event.key.keysym.sym) {
		case SDLK_w: 
			if (posY > 0) posY--;
			break;
		case SDLK_s:
			if (posY < height) posY++;
			break;
		case SDLK_a:
			if (posX > 0) posX--;
			break;
		case SDLK_d:
			if (posX < width) posX++;
			break;
	}
	return true;
}

int Bullet::Player::GetPosX() {
	return posX;
}
int Bullet::Player::GetPosY() {
	return posY;
}
int Bullet::Player::GetRadius() {
	return radius;
}
