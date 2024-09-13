/*
 ============================================================================
 Name        : Count.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program to count the minimum number of notes in an amount.
Input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.

Input:
amount = 575

Output:
The Total Number of Notes:
500 : 1
100 : 0
50	: 1
20	: 1
10	: 0
5	: 1
2	: 0
1	: 0
--------
₹ 575
--------

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int amount, note500=0, note100=0, note50=0, note20=0, note10=0, coin5=0, coin2=0, coin1=0;
	setbuf(stdout, NULL);
	printf("Enter your amount ₹ ");
	scanf("%d",&amount);
	if(amount>=500){
		note500 = amount/500;
		amount = amount%500;
	}
	if(amount>=100){
		note100 = amount/100;
		amount= amount%100;

	}
	if(amount >=50){
		note50 = amount/50;
		amount = amount%50;
	}
	if(amount >=20){
		note20 = amount/20;
		amount = amount%20;
	}
	if(amount >=10){
		note10 = amount/10;
		amount = amount%10;
	}
	if(amount >=5){
		coin5 = amount/5;
		amount = amount%5;
	}
	if(amount >=2){
		coin2 = amount/2;
		amount = amount%2;
	}
	if(amount >=1){
		coin1 = amount/1;
		amount = amount%1;
	}
	printf("\nTotal Number of Notes:\n500:%d\n100:%d\n50:%d\n20:%d\n10:%d\n5:%d\n2:%d\n1:%d",note500,note100,note50,note20,note10,coin5,coin2,coin1);
	return 0;
}
