namespace Bullet {
	class Projectile {
		private:
		float x;
		float y;
		float rad;
		public:
		Projectile(float x, float y, float rad) {
			this->x = x;
			this->y = y;
			this->rad = rad;
		}
	};
}
