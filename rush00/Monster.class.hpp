#ifndef MONSTER_H
# define MONSTER_H

# include "Character.class.hpp"

class Monster : public Character {

	private:

	public:
	    Monster( void );
        Monster( std::string level );
        Monster( Monster const & );
        Monster& operator=( Monster const & );
        ~Monster( void );
};

#endif