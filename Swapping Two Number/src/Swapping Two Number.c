/*
 ============================================================================
 Name        : Swapping.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Swapping two numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a=10,b=20,temp;
	printf("Before Swapping a=%d and b=%d. ",a,b);
	temp =a;
	a=b;
	b=temp;
	printf("\nAfter Swapping a=%d and b=%d.",a,b);
	return EXIT_SUCCESS;
}
