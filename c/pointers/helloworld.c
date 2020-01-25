// standard libraries
#include <stdio.h>  // printf()
#include <stdlib.h> // free()
#include <string.h> 

#include <linux/kernel.h>

/*
#include <linux/mm.h>
#include <linux/export.h>
#include <linux/sysctl.h>
#include <linux/nsproxy.h>

#include <net/sock.h>
*/

// my libraries
#include <helloworld/sample.h>

// To compile code execute makefile, run: make
//
// laptop:~/examples/c/pointers$ make
// cc -c -o obj/helloworld.o helloworld.c -Iinclude
// cc -o hellofoo obj/helloworld.o obj/hellofunc.o -Iinclude -lm

// note to self: Note that writing x[y] is shorthand for *(x + (y)).

const char ro_chr;
const int ro_int;

float rw_flt;
double rw_dbl;

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
int ex00(void) {

	int foo, bar;

	// assign value of 42 to variable foo
	foo = 42;

	// assign value of 42 to variable bar
	bar = 42;

	// display header
	printf("\n%-10s%-16s%-16s%-16s%-5s\n", "Variable", "Address", "Points to", "Value", "Length");

	// display info
	printf("%-10s%-16p%-16s%-16c%-5zu\n", "ro_chr", &ro_chr, "N/A", ro_chr, sizeof(ro_chr));
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "ro_int", &ro_int, "N/A", ro_int, sizeof(ro_int));
	printf("%-10s%-16p%-16s%-16.2f%-5zu\n", "rw_flt", &rw_flt, "N/A", rw_flt, sizeof(rw_flt));
	printf("%-10s%-16p%-16s%-16.2f%-5zu\n", "rw_dbl", &rw_dbl, "N/A", rw_dbl, sizeof(rw_dbl));

	printf("\n\n\n\n");
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "foo", &foo, "N/A", foo, sizeof(foo));
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "bar", &bar, "N/A", bar, sizeof(bar));

	// set value of bar to 11
	bar = 11;

	// display info
	printf("%-10s%-16p%-16s%-16c%-5zu\n", "ro_chr", &ro_chr, "N/A", ro_chr, sizeof(ro_chr));
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "ro_int", &ro_int, "N/A", ro_int, sizeof(ro_int));
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "foo", &foo, "N/A", foo, sizeof(foo));
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "bar", &bar, "N/A", bar, sizeof(bar));

	return 0;

}

int ex01(void) {

	int a, b, foo, *bar;

	a = 10;
	b = 20;

	printf("a + b = %d\n", add(a,b));

	// assign value of 42 to variable foo
	foo = 42;

	// assign memory address of foo to variable bar. ie - bar points to exclusive storage of foo.
	bar = &foo;

	// display header
	printf("\n%-10s%-16s%-16s%-16s%-5s\n", "Variable", "Address", "Points to", "Value", "Length");

	// display info
	printf("%-10s%-16p%-16s%-16c%-5zu\n", "ro_chr", &ro_chr, "N/A", ro_chr, sizeof(ro_chr));
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "ro_int", &ro_int, "N/A", ro_int, sizeof(ro_int));
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "foo", &foo, "N/A", foo, sizeof(foo));
	printf("%-10s%-16p%-16p%-16d%-5zu\n", "bar", &bar, bar, *bar, sizeof(*bar));

	// set value of bar to 11
	*bar = 11;

	// display info
	printf("%-10s%-16p%-16s%-16c%-5zu\n", "ro_chr", &ro_chr, "N/A", ro_chr, sizeof(ro_chr));
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "ro_int", &ro_int, "N/A", ro_int, sizeof(ro_int));
	printf("%-10s%-16p%-16s%-16d%-5zu\n", "foo", &foo, "N/A", foo, sizeof(foo));
	printf("%-10s%-16p%-16p%-16d%-5zu\n", "bar", &bar, bar, *bar, sizeof(*bar));

	return 0;

}

int main() {

	int rc = 0;

	rc = ex00();
	rc = ex01();
	rc = ex01();

	return(rc);

}
