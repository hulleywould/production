#ifndef KeyInput_H
# define KeyInput_H

# include "GameEntity.class.hpp"

class KeyInput : public GameEntity {

	private:
		const int&	_escape;
		const int&	_up;
		const int&	_down;
		const int&	_left;
		const int&	_right;
		const int&	_speedUp;
		const int&	_speedDown;
		const int&	_spin;

		// Set to void for now
		void		_moveForward( void ) const;
		void		_moveLeft( void ) const;
		void		_moveRight( void ) const;
		void		_slowDownObject( void ) const;
		void		_speedUpObject( void ) const;
		Character&	_spinObject( void ) const;

	public:
	    KeyInput( void );
        KeyInput( std::string level );
        KeyInput( KeyInput const & );
        KeyInput& operator=( KeyInput const & );
        ~KeyInput( void );
};

#endif