/*
 ============================================================================
 Name        : Find.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Find the larger number in given two numbes
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2;
	setbuf(stdout,NULL);
	printf("Enter Number1 and Number2: ");
	scanf("%d%d", &num1, &num2);
	if(num1>num2){
		printf("Number1 (%d) is Larger Number.",num1);
	}
	else{
		printf("Number2 (%d) is Larger Number.",num2);
	}

	return EXIT_SUCCESS;
}
