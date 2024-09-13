/*
 ============================================================================
 Name        : Switch.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Menu Card Selected using Switch Case
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout, NULL);
	printf("\nPANDIYAN HOTEL MENU CARD\n1.Biriyani\n2.Non-Veg Meals\n3.Veg Meals\n4.Parotta\n5.Curd Rice\nEnter your choice: ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("You have selected Biriyani.");
		break;
	case 2:
		printf("You have selected Non-Veg Meals.");
		break;
	case 3:
		printf("You have selected Veg Meals.");
		break;
	case 4:
		printf("You have selected Paratta.");
		break;
	case 5:
		printf("You have selected Curd Rice.");
		break;
	default:
		printf("Invalid Entry. Please choose valid option.");
	}
	return EXIT_SUCCESS;
}
