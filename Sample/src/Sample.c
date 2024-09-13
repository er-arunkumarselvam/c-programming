/*
 ============================================================================
 Name        : Sample.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, sum;
	setbuf(stdout, NULL);
	printf("Enter a number1 and number2: ");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("Sum of two number is %d",sum);
	return EXIT_SUCCESS;
}
