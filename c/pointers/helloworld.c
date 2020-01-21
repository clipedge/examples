#include <stdio.h> 
#include <string.h> 

// cc helloworld.c -o helloworld

void main() {

 char x;

 // assign 10 to x
 x = 65;

 printf("%-10s%-16s%-16s%-5s\n", "Variable", "Address", "Value", "Length");

 printf("%-10s%-16p%-16c%-5zu\n", "x", &x, x, sizeof(x));

 char *ptrx;

 printf("%-10s%-16p%-16c%-5zu\n", "ptrx", &ptrx, *ptrx, sizeof(*ptrx));

 // 
 ptrx = &x;

 printf("%-10s%-16p%-16c%-5zu\n", "ptrx", &ptrx, *ptrx, sizeof(*ptrx));

}
