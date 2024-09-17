/*
 ============================================================================
 Name        : print.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Getting size of the array given user input
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit=0, firstArr[limit];
	setbuf(stdout,NULL);
//	Getting Inputs
	printf("Enter a size of the array: ");
	scanf("%d", &limit);
	for(int i=0;i<limit;i++){
		printf("Enter the value of firstArr[%d]: ",i);
		scanf("%d", &firstArr[i]);
	}
//	Output
	printf("Entered value: ");
	for(int j=0; j<limit;j++){
		printf("\nfirstArr[%d]: %d",j,firstArr[j]);
	}
	return EXIT_SUCCESS;
}
