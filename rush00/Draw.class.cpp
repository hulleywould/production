#include "Draw.class.hpp"

Draw::Draw() : delay(30000)
{
	initscr();
	noecho();
	cbreak();
	keypad(stdscr, true);
	curs_set(false);
	std::cout << "init screen" << std::endl;
	getmaxyx(stdscr, max.y, max.x);
}

Draw::Draw(Vector vec)
{
	Vector pos;
	pos = vec;	
}

Draw::Draw(Draw const &copy)
{
	Vector pos;
	pos = copy.pos;
}

Draw::~Draw(void)
{
	endwin();
}

void	Draw::handleEvents(int c, Spaceship *player, Bullet *bullet)
{
	switch(c)
	{
		case KEY_UP:
			if (player->getY() != 0)
				player->moveUp();
			break;
		case KEY_DOWN:
			if (player->getY() < max.y)
				player->moveDown();
			break;
		case KEY_RIGHT:
			if (player->getX() < max.x)
				player->moveRight();
			break;
		case KEY_LEFT:
			if (player->getX() != 0)
				player->moveLeft();
			break;
		case 32:
			bullet->createBullet(player->getX() + 1, player->getY());
			break;
		default:
			break;
	}		
}

void	Draw::draw(Spaceship *player, Bullet *bullet)
{
	clear();
	mvprintw(player->getY(), player->getX(), player->getAvatar());
	mvprintw(bullet->getY(), bullet->getX(), bullet->getAvatar());
	refresh();
}

void	Draw::gameLoop()
{
	Spaceship	player;
	Bullet		bullet;
	draw(&player, &bullet);
	while(true)
	{
		nodelay(stdscr, true);
		c = getch();
		handleEvents(c, &player, &bullet);
		bullet.moveRight();
		draw(&player, &bullet);
		usleep(20000);
	}
}
