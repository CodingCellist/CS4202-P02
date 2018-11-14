#include <stdlib.h>
#include <stdio.h>
#include "loops.h"
#define MAX_FACT 20     // 20! is the largest factorial that fits in an llu

int main(void)
{
    unsigned long long f;
    unsigned long long n;
    for (int l = 0; l < LOOPS; l++)
    {
        n = MAX_FACT;
        f = 1;
        while (n > 0)
        {
            f *= n--;
        }
        printf("%llu\n", f);
    }
}

