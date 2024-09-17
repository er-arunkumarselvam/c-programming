/*
 ============================================================================
 Name        : Sort.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Sorting of an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit=0,sortArr[limit],i,j,temp;
	setbuf(stdout,NULL);
	printf("Enter a limit: ");
	scanf("%d",&limit);
	for(i=0;i<limit;i++){
		printf("sortArr[%d] = ",i);
		scanf("%d",&sortArr[i]);
	}
	printf("The given array is sortArr = [ ");
	for(i=0;i<limit;i++){
		printf("%d ",sortArr[i]);
	}
	printf("]");
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(sortArr[i]>sortArr[j]){
				temp = sortArr[i];
				sortArr[i] = sortArr[j];
				sortArr[j] = temp;
			}
		}
	}
	printf("\nThe sorted array is = [ ");
	for(i=0;i<limit;i++){
		printf("%d ",sortArr[i]);
	}
	printf("]");
	return EXIT_SUCCESS;
}
