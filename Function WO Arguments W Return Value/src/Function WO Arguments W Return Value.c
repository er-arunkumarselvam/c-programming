/*
 ============================================================================
 Name        : Function.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Function without arguments with return value
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int result;
	result=sum();
	printf("Result is %d",result);
	return EXIT_SUCCESS;
}
int sum(){
	int num1, num2, sum;
	setbuf(stdout, NULL);
	printf("Enter number1 & number2: ");
	scanf("%d%d",&num1,&num2);
	sum = num1+num2;
	return sum;
}
