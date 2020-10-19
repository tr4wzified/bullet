#include "Trail.hpp"
Bullet::Trail::Trail(Player* player, uint8_t length) {
   this->player = player;
   this->length = length;
}

void Bullet::Trail::Update() {
   std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
   if (circles.size() >= length) circles.pop_front();
   Circle trailPart(player->GetX(), player->GetY(), player->GetRadius(), player->GetColor());
   circles.push_back(trailPart);
   for (Circle& c : circles) {
      c.SetAlpha(c.GetColor().a - (255 / length));
      c.SetRadius(c.GetRadius() - (player->GetRadius() / length));
   }
   std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
   std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double>>(t2 - t1);
}
void Bullet::Trail::Render() {
   for (Circle& c : circles) {
      c.Render();
   }
}

void Bullet::Trail::Reset() {
   length = GameGlobals::GetTrailLength();
}

