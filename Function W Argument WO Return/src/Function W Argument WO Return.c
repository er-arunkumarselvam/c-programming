/*
 ============================================================================
 Name        : Function.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Function with arguments without return value
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2;
	setbuf(stdout,NULL);
	printf("Enter number1 and number2: ");
	scanf("%d%d",&num1,&num2);
	sum(num1,num2);
	return EXIT_SUCCESS;
}
void sum(int value1,int value2){
	int result;
	result = value1+value2;
	printf("Result is %d", result);
}
