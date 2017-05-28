/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spaceship.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 11:17:30 by shulley           #+#    #+#             */
/*   Updated: 2017/05/27 16:34:50 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Spaceship.class.hpp"

Spaceship::Spaceship()
{
	setX(50);
	setY(50);
	setAvatar(">");
	setLife(true);
	setHP(3);
}

Spaceship::~Spaceship()
{
}

Spaceship::Spaceship(Vector vec)
{
	Vector pos;
	pos = vec;
}

Spaceship::Spaceship(Spaceship const &copy)
{
	Vector pos;
	pos = copy.pos;
}

void	Spaceship::setHP(int health)
{
	hitpoints = health;
}

int	Spaceship::getHP(void)
{
	return hitpoints;
}

void	Spaceship::setLife(bool islive)
{
	isAlive = islive;
}

bool	Spaceship::getLife(void)
{
	return isAlive;
}
