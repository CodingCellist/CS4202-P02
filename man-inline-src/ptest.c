#include <stdlib.h>
#include <stdio.h>
#include "loops.h"
#define N 1296557UL

int main(void) {
    unsigned long int i;
    int isPrime = 0;
    // run
    for (int l = 0; l < LOOPS; l++)
    {
        // inline
        if (N <= 1)
        {
            isPrime = 0;
        }
        else if (N <= 3)
        {
            isPrime = 1;
        }
        else if ((N % 2 == 0) || (N % 3 == 0))
        {
            isPrime = 0;
        }
        else
        {
            i = 5;
            while (i * i <= N)
            {
                if ((N % i == 0) || (N % (i + 2) == 0))
                {
                    isPrime = 0;
                    break;
                }
                i += 6;
            }
            isPrime = 1;
        }
        // handle result
        if (isPrime)
        {
            printf("%lu is prime!\n", N);
        }
        else
        {
            printf("%lu is not prime.\n", N);
        }
    }
    return 0;
}
