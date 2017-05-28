#include "window.hpp"

int main()
{	WINDOW *my_win;
	int startx, starty, width, height;
	int ch;

	initscr();			/* Start curses mode 		*/
	cbreak();			/* Line buffering disabled, Pass on
					 * everty thing to me 		*/
	keypad(stdscr, TRUE);		/* I need that nifty F1 	*/

	height = 3;
	width = 10;
	starty = (LINES - height) / 2;	/* Calculating for a center placement */
	startx = (COLS - width) / 2;	/* of the window		*/
	printw("Press F1 to exit");
	refresh();
	my_win = create_newwin(height, width, starty, startx);

	while((ch = getch()) != KEY_F(1))
	{	switch(ch)
		{	case KEY_LEFT:
				destroy_win(my_win);
				my_win = create_newwin(height, width, starty,--startx);
				break;
			case KEY_RIGHT:
				destroy_win(my_win);
				my_win = create_newwin(height, width, starty,++startx);
				break;
			case KEY_UP:
				destroy_win(my_win);
				my_win = create_newwin(height, width, --starty,startx);
				break;
			case KEY_DOWN:
				destroy_win(my_win);
				my_win = create_newwin(height, width, ++starty,startx);
				break;	
		}
	}
		
	endwin();			/* End curses mode		  */
	return 0;
}
/*int     main() {

    setlocale (LC_ALL,"");
    
    // Initialise window variables
    //int startx(0), starty(0), width(100), height(80);
    int ch;
    int run(1);

    // Initialises the ncurses library
    // stdscr initialised
    // Line buffering enabled
    // Keypad enabled
    initscr();raw();noecho();keypad(stdscr, TRUE);

    // Initiates a new window pointer
    
    // Center of the window
    //starty = (LINES - height) / 2;
    //startx = (COLS - width) / 2;

    // Exit key
    printw("Press F1 to exit");
    while (run) {
        ch = getch();
        printw("%d\n", ch);
        if (ch == KEY_F(1)) {
            // Closes the ncurses window and frees memory taken by the
            // ncurses sub-system.
            endwin();
            run = 0;
        }
    }

    return 0;
}*/

/*
 * CTRL-Z and CTRL-C
 * 
 * raw() - these characters are directly passed to the program
 * cbreak() - treats these characters as any other character
 *
 * noecho(); - stops echoing of typed characters by the user
 *
 * keypad() - enables function keys like F1, F2 and arrow keys.
 *
 * halfdelay() - waits 'X' tenths of a second for input and then returns ERR
 *
 * attron and attroff - this turns attributes on and off.
 *
 *  * getch() - gets user input
 *
 * addch(ch | A_BOLD | A_UNDERLINE)
 * ACS_
 * mvaddch(row, col, ch) - to move the cursor to row or column
 *
 * mvprintw()
 * printw() - similar to printf()
 * addstr(y, x)
 *
 * getch() class: Get a character
 * scanw() class: Get formatted input
 * getstr() class: Get strings
 */
