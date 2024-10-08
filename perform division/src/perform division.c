/*
 ============================================================================
 Name        : perform.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Accept two numbers from the user and perform division.

Variable Name : Datatype
Num1		  :	Integer
Num2		  : Integer
Result		  : Float

 Implicit conversion = two integer value perform to division to get integer value with decimal point.
 To get exact values, use type conversion (type casting) like (float)num1 or float(num2).

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	float result;
	setbuf(stdout, NULL);
	printf("Enter a Two Numbers : ");
	scanf("%d%d",&num1,&num2);
	result = num1/num2; // Implicit Conversion
	result = (float)num1/(float)num2; //type casting
	printf("Result is %0.2f",result);
	return EXIT_SUCCESS;
}
