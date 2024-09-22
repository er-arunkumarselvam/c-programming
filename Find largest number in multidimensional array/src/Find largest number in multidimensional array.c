/*
 ============================================================================
 Name        : Find.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : find the largest element in a multidimensional array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit1, limit2, rows, cols, arrValues[10][10], largest=0;
	setbuf(stdout, NULL);
	printf("Enter a rows & columns: ");
	scanf("%d%d",&limit1, &limit2);
	printf("Enter the values:\n");
	for(rows=0;rows<limit1;rows++){
		for(cols=0;cols<limit2;cols++){
			printf("[%d] [%d] : ",rows, cols);
			scanf("%d",&arrValues[rows][cols]);
		}
	}
	for(rows=0;rows<limit1;rows++){
		for(cols=0;cols<limit2;cols++){
			printf("%d\t",arrValues[rows][cols]);
		}
		printf("\n");
	}
//	Find Largest Value
	for(rows=0;rows<limit1;rows++){
		for(cols=0;cols<limit2;cols++){
			if(arrValues[rows][cols] > largest){
				largest = arrValues[rows][cols];
			}
		}
	}
	printf(" The largest element in the array is %d",largest);
	return EXIT_SUCCESS;
}
