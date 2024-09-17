/*
 ============================================================================
 Name        : Print.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Printing an array in given input
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int firstArr[5];
	setbuf(stdout, NULL);
//	Input getting from user
	for(int i =0;i<5;i++){
		printf("Enter a %d value: ",i);
		scanf("%d",&firstArr[i]);
	}
//	Output Printing an array
	for(int j=0;j<5;j++){
		printf("\nfirstArr[%d] = %d",j,firstArr[j]);
	}
	return EXIT_SUCCESS;
}
