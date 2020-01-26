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

	printw("Hello World!");
	refresh();

	ch = getch();

	endwin();

	// use this to find a key code without a manual
	printf("Keycode = %d\n", ch);

        int a = 10;
        int b = 20;

        printf("a + b = %d\n", add(a,b));

	return 0;

}
