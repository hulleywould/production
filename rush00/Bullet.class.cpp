#include "Bullet.class.hpp"

Bullet::Bullet(void){
	setAvatar("-");
	setNumBullets(20);
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

void	Bullet::setHitStatus(bool isHit)
{
	hitStatus = isHit;
}

int	Bullet::getNumBullets(void)
{
	return numOfBullets;
}

void	Bullet::setNumBullets(int bullets)
{
	numOfBullets = bullets;
}

void	Bullet::createBullet(int x, int y)
{
	setX(x);
	setY(y);
}


