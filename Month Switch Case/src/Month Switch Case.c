/*
 ============================================================================
 Name        : Month.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Using the ‘switch case’ write a program to accept an input number from the user and output the months
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int month;
	setbuf(stdout, NULL);
	printf("Enter a month number (1-12): ");
	scanf("%d", &month);
	switch (month) {
	case 1:
		printf("You selected January.");
		break;
	case 2:
		printf("You selected February.");
		break;
	case 3:
		printf("You selected March.");
		break;
	case 4:
		printf("You selected April.");
		break;
	case 5:
		printf("You selected May.");
		break;
	case 6:
		printf("You selected June.");
		break;
	case 7:
		printf("You selected July.");
		break;
	case 8:
		printf("You selected August.");
		break;
	case 9:
		printf("You selected September.");
		break;
	case 10:
		printf("You selected October.");
		break;
	case 11:
		printf("You selected November.");
		break;
	case 12:
		printf("You selected December.");
		break;
	default:
		printf("Invalid Entry.");

	}
	return EXIT_SUCCESS;
}
