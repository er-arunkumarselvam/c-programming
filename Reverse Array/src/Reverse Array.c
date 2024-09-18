/*
 ============================================================================
 Name        : Reverse.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program to reverse an array.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit=0, arrayValues[limit], i, count=-1, temp=0;
	setbuf(stdout,NULL);
	printf("Enter a limit: ");
	scanf("%d",&limit);
	for(i=0;i<limit;i++){
		printf("arrayValue[%d] = ",i);
		scanf("%d",&arrayValues[i]);
	}
//	Reverse of array
	for(i=0;i<limit/2;i++){
		temp =arrayValues[i];
		arrayValues[i]=arrayValues[limit + count];
		arrayValues[limit + count] = temp;
		count--;
	}
	for(i=0;i<limit;i++){
		printf("%d ",arrayValues[i]);
	}
	return EXIT_SUCCESS;
}
