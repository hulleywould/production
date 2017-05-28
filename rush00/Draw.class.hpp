#ifndef DRAW_CLASS_HPP
# define DRAW_CLASS_HPP

#include <ncurses.h>
#include "Spaceship.class.hpp"
#include "Bullet.class.hpp"

class Draw {
	
	private:
		int		delay;
		Vector		pos;
		Vector		max;
		Vector		next;
		Spaceship	player;
		Bullet		bullet;
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
