#include "Trail.hpp"
Bullet::Trail::Trail(Player* player, uint8_t length) {
   this->player = player;
   this->length = length;
}

void Bullet::Trail::Update() {
   if (circles.size() >= length) circles.pop_front();
   Circle trailPart(player->GetPosX(), player->GetPosY(), player->GetRadius(), player->GetColor());
   circles.push_back(trailPart);
   for (Circle& c : circles) {
      c.color.a -= 255 / length;
      c.rad -= (float)player->GetRadius() / length;
   }
}
void Bullet::Trail::Render() {
   for (Circle& c : circles) {
      c.Render();
   }
}

