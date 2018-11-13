#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

const unsigned long long MAX_FACT = 20;     // 20! is the largest factorial that fits in an llu

unsigned long long fact(unsigned long long n, unsigned long long tail)
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

int main(void)
{
    for (int l = 0; l < LOOPS; l++)
    {
        unsigned long long f = fact(MAX_FACT, 1);
        printf("%llu\n", f);
    }
}

