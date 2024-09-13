/*
 ============================================================================
 Name        : Sum.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Sum of n number given user input
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,result=0;
	setbuf(stdout,NULL);
	printf("Enter a any number: ");
	scanf("%d",&number);
	for(int i=1;i<=number;i++){
		result = result+i;
	}

	printf("The Sum of %d number is %d",number,result);
	return EXIT_SUCCESS;
}
