/*
 ============================================================================
 Name        : Swapping.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program to swap two numbers without using temp variable

 Addition & Subtraction
 a=a+b
 b=a-b
 a=a-b
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=10,b=3;
	printf("Before Swapping a=%d and b=%d.",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swapping a=%d and b=%d.",a,b);
	return EXIT_SUCCESS;
}
