#include "Environment.class.hpp"

Environment::Environment(void)
{

}

Environment::Environment(Environment const &copy)
{
	*this = copy;
}

Environment::~Environment(void)
{
	std::cout << "env destroyed" << std::endl;	
}

void		Environment::setPlayer(Spaceship newPlayer)
{
	player = newPlayer;	
}

Spaceship	Environment::getPlayer(void)
{
	return player;
}

/*void		Environment::setBullet(Bullet newBullet)
{
	bullet = newBullet;
}

Bullet		Environment::getBullet(void)
{
	return bullet;
}*/
