#include <stdio.h>
#include "loops.h"
#define N 10000

int main(void)
{
    unsigned long int s;
    unsigned long int i;
    for (int l = 0; l < LOOPS; l++)
    {
        // inline
        s = 0;
        for (i = 1; i < N; i++)
        {
            s += i;
        }
        printf("%lu\n", s);
    }
    return 0;
}

