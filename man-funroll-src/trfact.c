#include <stdlib.h>
#include <stdio.h>
#include "loops.h"
#define MAX_FACT 20     // 20! is the largest factorial that fits in an llu

int main(void)
{
    unsigned long long f;
    unsigned long long n;
    unsigned long long count;
    for (int l = 0; l < LOOPS; l++)
    {
        n = MAX_FACT;
        f = 1;
        // unrolled using Duff's Device
        count = (n + 7) / 8;
        switch (n % 8)
        {
            case 0: do { f *= n--;
            case 7:      f *= n--;
            case 6:      f *= n--;
            case 5:      f *= n--;
            case 4:      f *= n--;
            case 3:      f *= n--;
            case 2:      f *= n--;
            case 1:      f *= n--;
                } while (--count > 0);
        }
        printf("%llu\n", f);
    }
}

