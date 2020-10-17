#include "Player.hpp"
Bullet::Player::Player(float posX, float posY, int radius) {
	this->posX = posX;
	this->posY = posY;
	this->radius = radius;
}
void Bullet::Player::HandleEvent() {
	if (GameGlobals::sdlEvent.type == SDL_KEYDOWN) {
		switch(GameGlobals::sdlEvent.key.keysym.sym) {
			case SDLK_w: 
				velocityY = -VEL;
				wBeingHeld = true;
				break;
			case SDLK_s:
				velocityY = VEL;
				sBeingHeld = true;
				break;
			case SDLK_a:
				velocityX = -VEL;
				aBeingHeld = true;
				break;
			case SDLK_d:
				velocityX = VEL;
				dBeingHeld = true;
				break;
		}
	}
	else if (GameGlobals::sdlEvent.type == SDL_KEYUP) {
		switch (GameGlobals::sdlEvent.key.keysym.sym) {
			case SDLK_w: 
				wBeingHeld = false;
				if (!sBeingHeld) velocityY = 0; break;
			case SDLK_s:
				sBeingHeld = false;
				if (!wBeingHeld) velocityY = 0; break;
			case SDLK_a:
				aBeingHeld = false;
				if (!dBeingHeld) velocityX = 0; break;
			case SDLK_d:
				dBeingHeld = false;
				if (!aBeingHeld) velocityX = 0; break;
		}
	}
}

void Bullet::Player::Update(float timeStep) {
	int width;
	int height;
	SDL_GetWindowSize(GameGlobals::sdlWindow, &width, &height);
	posX += velocityX * timeStep;
	if (posX < 0) posX = 0;
	else if (posX > width) posX = width;

	posY += velocityY * timeStep;
	if (posY < 0) posY = 0;
	else if (posY > height) posY = height;
}

bool Bullet::Player::Dash() {

}

float Bullet::Player::GetPosX() {
	return posX;
}

float Bullet::Player::GetPosY() {
	return posY;
}

float Bullet::Player::GetVelocityX() {
	return velocityX;
}

float Bullet::Player::GetVelocityY() {
	return velocityY;
}

int Bullet::Player::GetRadius() {
	return radius;
}
