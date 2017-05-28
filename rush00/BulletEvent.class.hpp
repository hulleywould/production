#ifndef BULLETEVENT_CLASS_HPP
# define BULLETEVENT_CLASS_HPP

#include "Bullet.class.hpp"

class BulletEvent : public Bullet {
	private:
		Bullet	bullet[100];
		Vector	pos;
	public:
		BulletEvent(void);
		~BulletEvent(void);
		BulletEvent(int);
		BulletEvent(BulletEvent const &copy);
		void	updateBullets(void);
		void	createBullets(int, int);
};

#endif
