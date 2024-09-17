/*
 ============================================================================
 Name        : Sum.c
 Author      : Arunkumar
 Version     :
 Copyright   : Your copyright notice
 Description : sum of prime numbers between 0 to limit.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * C program to find sum of prime numbers between 1 to n
 */

#include <stdio.h>

int main()
{
    int i, j, end, isPrime, sum=0;
    setbuf(stdout,NULL);
    /* Input upper limit from user */
    printf("Find sum of all prime between 1 to : ");
    scanf("%d", &end);

    /* Find all prime numbers between 1 to end */
    for(i=2; i<=end; i++)
    {

        /* Check if the current number i is Prime or not */
        isPrime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                /* 'i' is not prime */
                isPrime = 0;
                break;
            }
        }

        /*
         * If 'i' is Prime then add to sum
         */
        if(isPrime==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to %d = %d", end, sum);

    return 0;
}
