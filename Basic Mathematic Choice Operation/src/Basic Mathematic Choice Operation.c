/*
 ============================================================================
 Name        : Basic.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : User Choose the option to perform the mathematic operation.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, choice;
	float result;
	setbuf(stdout, NULL);
	printf("Enter 2 two numbers: ");
	scanf("%d%d",&num1, &num2);
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division \nEnter a your choice (1-4) : ");
	scanf("%d",&choice);
	if(choice ==1){
		printf("You choose for Addition");
		result=num1+num2;
		printf("\nResult is %0.2f",result);
	}
	else if(choice ==2){
		printf("You choose for Subtraction");
		result=num1-num2;
		printf("\nResult is %0.2f",result);
	}
	else if(choice ==3){
		printf("You choose for Multiplication");
		result=num1*num2;
		printf("\nResult is %0.2f",result);
	}
	else if(choice ==4){
		printf("You choose for Division");
		result=(float)num1/(float)num2;
		printf("\nResult is %0.2f", result);
	}
	else{
		printf("Invalid Entry. Please choose the option any one.");
	}
	return EXIT_SUCCESS;
}
