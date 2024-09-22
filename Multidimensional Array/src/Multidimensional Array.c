/*
 ============================================================================
 Name        : Multidimensional.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Multidimensional Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row, col, matrix[3][3];
	setbuf(stdout, NULL);
	printf("Enter a values of 3x3 Matrix:\n");
	for(row=0; row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d",&matrix[row][col]);
		}
	}
	for(row=0; row<3;row++){
			for(col=0;col<3;col++){
				printf("%d\t",matrix[row][col]);
			}
			printf("\n");
		}
	return EXIT_SUCCESS;
}
