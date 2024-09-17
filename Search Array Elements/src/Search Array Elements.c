/*
 ============================================================================
 Name        : Search.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Search Elements for array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit=0,searchArr[limit],key,flag=0, i,j;
	setbuf(stdout,NULL);
	printf("Enter a size of array: ");
	scanf("%d",&limit);
//	Input Array
	for(i=0;i<limit;i++){
		printf("searchArr[%d] = ",i);
		scanf("%d",&searchArr[i]);
	}
	printf("\nEnter Search Key: ");
	scanf("%d",&key);
//	Output
	for(j=0;j<limit;j++){
		if(key == searchArr[j]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("The key position is %d",j+1);
	}
	else{
		printf("The key is not found.");
	}
	return EXIT_SUCCESS;
}
