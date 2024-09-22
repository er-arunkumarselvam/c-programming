/*
 ============================================================================
 Name        : Function.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Function with arguments and with return value
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, result;
	setbuf(stdout, NULL);
	printf("Enter number1 and number2: ");
	scanf("%d%d",&num1,&num2);
	result = sum(num1,num2);
	printf("Result is %d", result);
	return EXIT_SUCCESS;
}
int sum(int a, int b){
	int sum;
	sum = a+b;
	return sum;
}
