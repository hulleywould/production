#include "Entities.class.hpp"

Entities::Entities()
{
	std::cout << "Entities run" << std::endl;
}

Entities::~Entities(void)
{
	std::cout << "Entity died" << std::endl;
}

Entities::Entities(Vector vec)
{
	Vector pos;
	pos = vec;
}

Entities::Entities(Entities const &copy)
{
	
	Vector pos;
	pos = copy.pos;
}

const char*	Entities::getAvatar()
{
	return avatar;
}

void	Entities::setAvatar(const char *av)
{
	avatar = av;
}

int	Entities::getX()
{
	return pos.x;
}

int	Entities::getY()
{
	return pos.y;
}

void	Entities::setX(int xpos)
{
	pos.x = xpos;
}

void	Entities::setY(int ypos)
{
	pos.y = ypos;
}

void	Entities::moveUp()
{
	pos.y--;	
}

void	Entities::moveDown()
{
	pos.y++;	
}

void	Entities::moveLeft()
{
	pos.x--;
}

void	Entities::moveRight()
{
	pos.x++;
}
