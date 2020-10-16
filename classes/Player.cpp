#include "Player.hpp"
Bullet::Player::Player(int posX, int posY, int radius) {
	this->posX = posX;
	this->posY = posY;
	this->radius = radius;
}
bool Bullet::Player::Update() {
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
