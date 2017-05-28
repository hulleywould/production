#ifndef	BULLET_CLASS_HPP
# define BULLET_CLASS_HPP

#include "Entities.class.hpp"

class Bullet : public Entities {
	
	private:
		bool	hitStatus;
		Vector	pos;
		int	numOfBullets;
	public:
		Bullet(void);
		~Bullet(void);
		Bullet(Bullet const &copy);
		int	getNumBullets(void);
		bool	getHitStatus(void);
		void	setNumBullets(int);
		void	setHitStatus(bool);
		void	createBullet(int, int);
};

#endif
