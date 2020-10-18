#include "Player.hpp"
Bullet::Player::Player() {
	this->Reset();
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
			case SDLK_SPACE:
				if (IsDashReady()) {
					dashing = true;
				}
		}
	}
	else if (GameGlobals::sdlEvent.type == SDL_KEYUP) {
		switch (GameGlobals::sdlEvent.key.keysym.sym) {
			case SDLK_w: 
				wBeingHeld = false;
				if (!sBeingHeld) velocityY = 0;
				break;
			case SDLK_s:
				sBeingHeld = false;
				if (!wBeingHeld) velocityY = 0;
				break;
			case SDLK_a:
				aBeingHeld = false;
				if (!dBeingHeld) velocityX = 0;
				break;
			case SDLK_d:
				dBeingHeld = false;
				if (!aBeingHeld) velocityX = 0;
				break;
		}
	}
}

void Bullet::Player::Update(float timeStep) {
	elapsed = clock() - start;
	if (IsDashReady()) color = GameGlobals::colorCollection.at(10);
	if (dashing) {
		velocityX *= dashMultiplier;
		velocityY *= dashMultiplier;
	}

	posX += velocityX * timeStep;
	if (posX < 0) posX = 0;
	else if (posX > GameGlobals::screenWidth) posX = GameGlobals::screenWidth;

	posY += velocityY * timeStep;
	if (posY < 0) posY = 0;
	else if (posY > GameGlobals::screenHeight) posY = GameGlobals::screenHeight;

	if (dashing) {
		// Reset Velocity
		velocityX /= dashMultiplier;
		velocityY /= dashMultiplier;
		// Stop dashing state
		dashing = false;
		// Reset color
		color = GameGlobals::colorCollection.at(15);
		// Reset cooldown
		start = clock();
	}
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

SDL_Color Bullet::Player::GetColor() {
	return color;
}

bool Bullet::Player::IsDashReady() {
	return elapsed >= dashCooldown;
}

void Bullet::Player::Reset() {
	VEL = (GameGlobals::screenWidth / 100) * 40;
	posX = (GameGlobals::screenWidth / 100) * 50;
	posY = (GameGlobals::screenHeight / 100) * 50;
	radius = (GameGlobals::screenWidth / 100) * 0.4;
	dashMultiplier = (GameGlobals::screenWidth / 8);
}
void Bullet::Player::Render() {
	filledCircleRGBA(GameGlobals::sdlRenderer, posX, posY, radius, color.r, color.g, color.b, 255);
}
