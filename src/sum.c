#include <stdio.h>
#include "loops.h"

const unsigned long int n = 10000;

unsigned long int sum()
{
    unsigned long int s = 0;
    for (unsigned long int i = 1; i <= n; i++)
    {
        s += i;
    }
    return s;
}

int main(void)
{
    for (int i = 0; i < LOOPS; i++)
    {
        unsigned long s = sum();
        printf("%lu\n", s);
    }
    return 0;
}
