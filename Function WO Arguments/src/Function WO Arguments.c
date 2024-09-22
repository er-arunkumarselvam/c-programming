/*
 ============================================================================
 Name        : Function.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Function without arguments and without return value
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	sum();
	return EXIT_SUCCESS;
}
void sum(){
	int num1,num2,sum=0;
	setbuf(stdout, NULL);
	printf("Enter a number1 & number2:");
	scanf("%d%d",&num1,&num2);
	sum= num1+num2;
	printf("sum is %d",sum);
}
