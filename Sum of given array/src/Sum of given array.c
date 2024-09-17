/*
 ============================================================================
 Name        : Sum.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Sum of given array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit=0, array[limit], sum=0;
	setbuf(stdout, NULL);
	printf("Enter a Limit :");
	scanf("%d", &limit);
//	Input
	for(int i=0; i<limit;i++){
		printf("array[%d] = ",i);
		scanf("%d", &array[i]);
	}
// Output
	for(int j=0;j<limit;j++){
		sum +=array[j];
	}
	printf("Sum of given array is %d",sum);
	return EXIT_SUCCESS;
}
