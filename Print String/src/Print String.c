/*
 ============================================================================
 Name        : Print.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Print a String
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[20];
	setbuf(stdout, NULL);
	printf("Enter your name: ");
	scanf("%s",name);
	printf("Your name is %s",name);
	return EXIT_SUCCESS;
}
