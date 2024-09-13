/*
 ============================================================================
 Name        : Sum.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : sum of prime numbers between 0 to limit.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit, sum=0;
	setbuf(stdout, NULL);
	printf("Enter a any number: ");
	scanf("%d",&limit);
	for(int i=2;i<=limit;i++){
		if(limit%i!=0){
			sum=sum+i;
		}
	}
	printf("Sum of prime numbers: %d",sum);
	return EXIT_SUCCESS;
}
