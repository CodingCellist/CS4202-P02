#include <stdlib.h>
#include <stdio.h>
#define LOOPS 100000

void usage() {
    printf("A simple primality test\n");
    printf("USAGE: ./ptest n\n");
    printf("\tn - a positive integer to test for primality\n");
}

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
                    

int main(int argc, const char** argv) {
    if (argc != 2) {
        usage();
    }
    else
    {
        unsigned long int n = strtoul(argv[1], NULL, 10);
        for (int l = 0; l < LOOPS; l++)
        {
            int isPrime = ptest(n);
            if (isPrime)
            {
                printf("%lu is prime!\n", n);
            }
            else
            {
                printf("%lu is not prime.\n", n);
            }
        }
    }
    return 0;
}

