#include "Player.hpp"
Bullet::Player::Player(float x, float y, float radius) : Circle(x, y, radius, GameGlobals::colorCollection.at(15)) {
	this->x = x;
	this->y = y;
	this->radius = radius;
	this->color = GameGlobals::colorCollection.at(15);
	VEL = (GameGlobals::screenWidth / 100) * 40;
	dashMultiplier = (GameGlobals::screenWidth / 8);
	dashing = false;
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

	this->x += velocityX * timeStep;
	if (this->x < 0) this->x = 0;
	else if (this->x > GameGlobals::screenWidth) this->x = GameGlobals::screenWidth;

	this->y += velocityY * timeStep;
	if (this->y < 0) this->y = 0;
	else if (this->y > GameGlobals::screenHeight) this->y = GameGlobals::screenHeight;

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

float Bullet::Player::GetVelocityX() {
	return velocityX;
}

float Bullet::Player::GetVelocityY() {
	return velocityY;
}

bool Bullet::Player::IsDashReady() {
	return elapsed >= dashCooldown;
}

void Bullet::Player::Reset() {
	this->x = GameGlobals::screenWidth / 2;
	this->y = GameGlobals::screenHeight / 2;
	this->radius = GameGlobals::screenWidth * 0.004;
	this->color = GameGlobals::colorCollection.at(15);
	VEL = GameGlobals::screenWidth * 0.40;
	dashMultiplier = GameGlobals::screenWidth / 8;
	dashing = false;
}
