#include <ncurses.h>
#include <stdio.h>

#include <clipedge/game.h>

int main() {

	char ch;

	initscr();
	keypad(stdscr, TRUE);
	cbreak();
	noecho();

	clear();

	printw("Use this to find a key code without a manual.  Press 'q' to quit.");
	refresh();

	do {

		// wait for a key press
		ch = getch();

		clear();

		// use this to find a key code without a manual
		printw("Keycode = %d", ch);

		refresh();

		printf("Keycode = %d\n", ch);

	}
	while (( ch != 'q' && ch != 'Q' ));

	endwin();

	// sample include custom header
        int a = 10;
        int b = 20;

        printf("a + b = %d\n", add(a,b));

	return 0;

}
