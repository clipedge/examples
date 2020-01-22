// public libraries
#include <stdio.h>  // printf()
#include <stdlib.h> // free()
#include <string.h> 

// my private libraries
#include <hellomake.h>

// To compile code execute makefile, run: make
//
// laptop:~/examples/c/pointers$ make
// cc -c -o obj/helloworld.o helloworld.c -Iinclude
// cc -o hellofoo obj/helloworld.o obj/hellofunc.o -Iinclude -lm

// note to self: Note that writing x[y] is shorthand for *(x + (y)).

/* 
 * functions 
*/

/* ex01: use pointer to write to same memory location

Variable  Address         Points to       Value           Length
foo       0x7ffde693142c  N/A             42              4    
bar       0x7ffde6931430  0x7ffde693142c  42              4    
foo       0x7ffde693142c  N/A             11              4    
bar       0x7ffde6931430  0x7ffde693142c  11              4
*/
int ex01(void) {

	int foo, *bar;

	// assign value of 42 to variable foo
	foo = 42;

	// assign memory address of foo to variable bar. ie - bar points to exclusive storage of foo.
	bar = &foo;

	// display header
	printf("%-10s%-16s%-16s%-16s%-5s\n", "Variable", "Address", "Points to", "Value", "Length");

	// display info
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "foo", &foo, "N/A", foo, sizeof(foo));
	printf("%-10s%-16p%-16p%-16d%-5zu\n", "bar", &bar, bar, *bar, sizeof(*bar));
	// printf("%-10s%-16p%-16p%-5zu\n", "bar", &bar, bar, sizeof(*bar));
	// printf("%-10s%-16p%-16d%-5zu\n", "bar", &bar, *bar, sizeof(*bar));

	// set value of bar to 11
	*bar = 11;

	// display info
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "foo", &foo, "N/A", foo, sizeof(foo));
	printf("%-10s%-16p%-16p%-16d%-5zu\n", "bar", &bar, bar, *bar, sizeof(*bar));
	// printf("%-10s%-16p%-16d%-5zu\n", "foo", &foo, foo, sizeof(foo));
	// printf("%-10s%-16p%-16d%-5zu\n", "bar", &bar, *bar, sizeof(*bar));

	return 0;

}

int main() {

	int rc = 0;

	rc = ex01();

	return(0);

}
