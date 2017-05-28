#ifndef GAME_ENTITY_H
# define GAME_ENTITY_H

# include <iostream>
# include <string>

class GameEntity {

    private:
        int             _level;
        int             _difficulty;
        Character&      _character;  

        // Space Environment
        float           _velocity;
        float const&    _perspective;


    public:
        GameEntity( void );
        GameEntity( std::string level );
        GameEntity( GameEntity const & );
        GameEntity& operator=( GameEntity const & );
        ~GameEntity( void );

        // Game Generation
        void            createWindow( void ) const;
        Character&      createPlayer( void );
        Character**     generateRandomMonsters( void );
        void            generateEnvironment( void ) const;

        // Game Play
        void    playerMovement( void );
        void    monsterMovement( void );

        // Game End
        void    destroyEnvironment( void ) const;
};

#endif