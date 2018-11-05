#include <stdlib.h>
#include <stdio.h>

void usage() {
    printf("USAGE: ./ptest n\n");
    printf("\tn - a positive integer to test for primality\n");
}

int ptest(int n) {
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
        int i = 5;
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
        int n = atoi(argv[1]);
        int isPrime = ptest(n);
        if (isPrime)
        {
            printf("%d is prime!\n", n);
        }
        else
        {
            printf("%d is not prime.\n", n);
        }
    }
    return 0;
}

