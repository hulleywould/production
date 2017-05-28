#ifndef DRAW_CLASS_HPP
# define DRAW_CLASS_HPP

#include <ncurses.h>
#include "Spaceship.class.hpp"
#include "BulletEvent.class.hpp"

class Draw {
	
	private:
		int		delay;
		Vector		pos;
		Vector		max;
		Vector		next;
		Spaceship	player;
		BulletEvent	bullet[100];
		int		direction;
		int		c;
	public:
		Draw();
		Draw(Vector);
		Draw(Draw const &copy);
		~Draw(void);
		void	gameLoop();
		void	handleEvents(int c, Spaceship *, Bullet *);
		void	draw(Spaceship *, Bullet *);
		void	moveBullet(Bullet *);
};

#endif
