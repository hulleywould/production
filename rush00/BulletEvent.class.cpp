#include "BulletEvent.class.hpp"

BulletEvent::BulletEvent(void) {

	BulletEvent	bullet[100];

}

BulletEvent::BulletEvent(int numBullets)
{
	setNumBullets(numBullets);
}

BulletEvent::~BulletEvent(void) {}

BulletEvent::BulletEvent(BulletEvent const &copy)
{
	*this = copy;
}

void	BulletEvent::updateBullets(void)
{
	int	i = 0;
	while (i < getNumBullets())
	{
		bullet[i].moveRight();
		i++;
	}
}

void	BulletEvent::createBullets(int x, int y)
{
	bullet[numOfBullets].setX(x);
	bullet[numOfBullets].setY(y);
	setNumBullets(getNumBullets() +  1);
}
