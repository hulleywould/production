#include "Bullet.class.hpp"

Bullet::Bullet(void){
	setAvatar("-");
}

Bullet::~Bullet(void){}

Bullet::Bullet(Bullet const &copy)
{
	*this = copy;
}

bool	Bullet::getHitStatus(void)
{
	return hitStatus;
}

void	Bullet::setHitStatus(bool hasHit)
{
	hitStatus = hasHit;
}

int	Bullet::getNumBullets(void)
{
	return numOfBullets;
}

void	Bullet::setNumBullets(int bullets)
{
	numOfBullets = bullets;
}

void	Bullet::createBullets(int x, int y)
{
	setX(x);
	setY(y);
}


