#ifndef SPACESHIP_CLASS_HPP
# define SPACESHIP_CLASS_HPP

# include "Entities.class.hpp"

class Spaceship : public Entities {

	private:
		Vector	pos;
		int	hitpoints;
		bool	isAlive;	
	public:
		Spaceship( void );
        	Spaceship( Spaceship const & );
		Spaceship(Vector);
        	Spaceship& operator=( Spaceship const & );
        	~Spaceship( void );
		void	setHP(int);
		int	getHP(void);
		bool	getLife();
		void	setLife(bool);
};

#endif
