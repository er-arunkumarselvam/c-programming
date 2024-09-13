/*
 ============================================================================
 Name        : Find.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Find the Greater number in given 3 numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3;
	setbuf(stdout,NULL);
	printf("Enter 3 Numbers like Number1, Number2 and Number3: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	if(num1>num2 || num2<num3){
		if(num1>num3){
			printf("The greatest number is number1 : %d",num1);
		}
		else{
			printf("The greatest number is number3 : %d",num3);
		}
	}
	else{
		printf("The greatest number is number2 : %d",num2);
	}
	return EXIT_SUCCESS;
}
