/*
 ============================================================================
 Name        : AverageMarks.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Student Marks Average find out
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float tamil, english, maths, science, social, total, average;
	setbuf(stdout, NULL);
	printf("Enter a marks in subject wise (5): ");
	scanf("%f%f%f%f%f",&tamil,&english,&maths,&science,&social);
	total = tamil+english+maths+science+social;
	average = total/5;
	printf("Your average is %0.2f",average);
	return EXIT_SUCCESS;
}
