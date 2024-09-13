/*
 ============================================================================
 Name        : Positive.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Find a number positive or negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	setbuf(stdout, NULL);
	printf("Enter a any number: ");
	scanf("%d",&num);
	if(num>=0){
		printf("The given number is positive.");
	}
	else{
		printf("The given number is negative.");
	}
	return EXIT_SUCCESS;
}
