/*
 ============================================================================
 Name        : calculate.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : calculate area of rectangular element

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float lenght, width, area;
	setbuf(stdout, NULL);
	printf("Enter a length and width: ");
	scanf("%f%f",&lenght,&width);
	area = lenght * width;
	printf("Area of rectangle is %0.2f",area);
	return EXIT_SUCCESS;
}
