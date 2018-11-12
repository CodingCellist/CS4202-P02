#include <stdlib.h>
#include <stdio.h>
#include "loops.h"
#define N 1296557

int ptest(unsigned long int n) {
    if (n <= 1) 
    {
        return 0;
    }
    else if (n <= 3)
    {
        return 1;
    }
    else if ((n % 2 == 0) || (n % 3 == 0))
    {
        return 0;
    }
    else
    {
        unsigned long int i = 5;
        while (i * i <= n)
        {
            if ((n % i == 0) || (n % (i + 2) == 0))
            {
                return 0;
            }
            i += 6;
        }
        return 1;
    }
}

int main(void) {
    for (int l = 0; l < LOOPS; l++)
    {
        int isPrime = ptest(N);
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
