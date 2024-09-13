/*
 ============================================================================
 Name        : Prime.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Find the given number is prime or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,flag=0;
	setbuf(stdout, NULL);
	printf("Enter a any number: ");
	scanf("%d",&number);
	for(int i=2;i<=number/2;i++){
		if(number%i==0){
			flag+=1;
			break;
		}
	}
	if(flag==0){
		printf("The given number (%d) is prime number.",number);
	}
	else{
		printf("The given number (%d) is not prime number.",number);
	}
	return EXIT_SUCCESS;
}
