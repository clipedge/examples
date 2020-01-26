#include <ncurses.h>
#include <stdio.h>

int main() {

	initscr();
	keypad(stdscr, TRUE);
	cbreak();
	noecho();

	clear();

	printw("Hello World!");
	refresh();
	getch();
	endwin();

	return 0;

}
