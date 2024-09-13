/*
 ============================================================================
 Name        : Pre.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Pre & Post Increment/Decrement
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	int a=11++;
	int x = 001, y=010, z=100;
	int i =--x + y++ - z-- - --z + ++y - --x + y-- - --x;
	printf("x=%d\ny=%d\nz=%d\ni=%d",x,y,z,i);

//	int b=++a; //preincrement
//	int b=a++; //postincrement
//	printf("Pre Increment: a=%d and b=%d",a,b);
//	printf("\nPost Increment: a=%d and b=%d",a,b);
//	printf("%d",a);
//	printf("a=%d",a++);
//	printf("\na=%d",++a);
	return EXIT_SUCCESS;
}
