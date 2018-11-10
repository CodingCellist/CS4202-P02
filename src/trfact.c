#include <stdlib.h>
#include <stdio.h>
#define MAX_FACT 20     // 20! is the largest number that fits in an ul
#define LOOPS 100000

void usage()
{
    printf("Calculates the factorial of the given integer using tail recursion.\n");
    printf("USAGE: ./trfact n\n");
    printf("\tn - a non-negative integer\n");
}

unsigned long fact(unsigned long n, unsigned long tail)
{
   if (n == 0)
   {
      return tail;
   }
   else
   {
       return fact(n - 1, n * tail);
   }
}

int main(int argc, const char** argv)
{
    for (int l = 0; l < LOOPS; l++)
    {
        unsigned long f = fact(MAX_FACT, 1);
        printf("%lu\n", f);
    }
}

