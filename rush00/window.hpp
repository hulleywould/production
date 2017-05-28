#ifndef WINDOW_H
# define WINDOW_H

# include <ncurses.h>
# include <locale.h>
# include <string>
# include <sstream>

// Dynamically allocates a new window object
WINDOW  *create_newwin(int height, int width, int starty, int startx);

// Destroy the window object
void    destroy_win(WINDOW *local_win);

#endif