#ifndef	BULLET_CLASS_HPP
# define BULLET_CLASS_HPP

#include "Entities.class.hpp"

class Bullet : public Entities {
	
	protected:
		bool	hitStatus;
		Vector	pos;
		int	numOfBullets;
	public:
		Bullet(void);
		~Bullet(void);
		Bullet(Bullet const &copy);
		virtual int		getNumBullets(void);
		bool		getHitStatus(void);
		void		setNumBullets(int);
		void		setHitStatus(bool);
		virtual void		createBullets(int, int);
};

#endif
