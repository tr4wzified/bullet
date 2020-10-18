#include "Trail.hpp"
Bullet::Trail::Trail(Player* player, uint8_t length) {
   this->player = player;
   this->length = length;
}

void Bullet::Trail::Update() {
   if (circles.size() >= length) circles.pop_front();
   Circle trailPart(player->GetX(), player->GetY(), player->GetRadius(), player->GetColor());
   circles.push_back(trailPart);
   for (Circle& c : circles) {
      c.SetAlpha(c.GetColor().a - (255 / length));
      c.SetRadius(c.GetRadius() - (player->GetRadius() / length));
   }
}
void Bullet::Trail::Render() {
   for (Circle& c : circles) {
      c.Render();
   }
}

void Bullet::Trail::Reset() {
   length = GameGlobals::GetTrailLength();
}

