/*
 ============================================================================
 Name        : Merge.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program to merge two arrays.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit1 = 0, limit2 = 0, limit3 =0, firstArray[limit1], secondArray[limit2],
			thirdArray[limit3], count = 0, i;
	setbuf(stdout, NULL);
	printf("Enter a limit1: ");
	scanf("%d", &limit1);
	for (i = 0; i < limit1; i++) {
		printf("firstArray[%d] = ",i);
		scanf("%d", &firstArray[i]);
	}
	printf("Enter a limit2: ");
	scanf("%d", &limit2);
	for (i = 0; i < limit2; i++) {
		printf("secondArray[%d] = ",i);
		scanf("%d", &secondArray[i]);
	}
	limit3 = limit1 + limit2;
	for(i=0;i<limit1;i++){
		thirdArray[i]=firstArray[i];
		count++;
	}
	for(i=0;i<limit2;i++){
		thirdArray[count]=secondArray[i];
		count++;
	}
	for(i=0;i<limit3;i++){
		printf("%d ",thirdArray[i]);
	}
	return EXIT_SUCCESS;
}
