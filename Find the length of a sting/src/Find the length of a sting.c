/*
 ============================================================================
 Name        : Find.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program to find the length of a string?
	1. Program should not use built in functions.
	2. Program should accept a string from the user.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char string[100]="";
	int length=0;
	setbuf(stdout, NULL);
	printf("Enter a string:");
	scanf("%s",string);
	for(int i=0;string[i]!='\0';i++){
		length++;
	}
	printf("Length of the string is %d",length);
	return EXIT_SUCCESS;
}
