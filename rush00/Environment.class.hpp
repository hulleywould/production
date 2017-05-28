#ifndef ENVIRONMENT_CLASS_HPP
# define ENVIRONMENT_CLASS_HPP

#include "Spaceship.class.hpp"
#include "Bullet.class.hpp"

class Environment {
	private:
		Spaceship	player;
	//	Bullet		bullet;
		int		frames;
		int		level;
		int		score;
	public:
		Environment();
		Environment(Environment const &copy);
		~Environment(void);
		Environment(Spaceship);
		void		setLevel(int);
		void		setScore(int);
		void		setFrames(int);
		int		getLevel(void);
		int		getScore(void);
		int		getFrames(void);
		void		setPlayer(Spaceship);
		Spaceship	getPlayer(void);
	//	void		setBullet(Bullet);
	//	Bullet		getBullet(void);
};

#endif
