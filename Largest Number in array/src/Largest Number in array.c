/*
 ============================================================================
 Name        : Largest.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program to find the largest value in array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit=0,setArray[limit],largest=0,i;
	setbuf(stdout,NULL);
	printf("Enter a limit: ");
	scanf("%d",&limit);
	for(i=0;i<limit;i++){
		printf("setArray[%d] =",i);
		scanf("%d",&setArray[i]);
	}
//	Find Largest
	for(i=0;i<limit;i++){
		if(setArray[i]>=largest){
			largest = setArray[i];
		}
	}
	printf("The largest number is %d",largest);
	return EXIT_SUCCESS;
}
