#include <stdio.h>
#include "loops.h"
#define N 10000

unsigned long int sum(unsigned long int n)
{
    unsigned long int s = 0;
    unsigned long int i = 1;
    unsigned long int count = (n + 7) / 8;
    switch (n % 8) {
        case 0: do { s += i++;
        case 7:      s += i++;
        case 6:      s += i++;
        case 5:      s += i++;
        case 4:      s += i++;
        case 3:      s += i++;
        case 2:      s += i++;
        case 1:      s += i++;
            } while (--count > 0);
    }
    return s;
}

int main(void)
{
    for (int i = 0; i < LOOPS; i++)
    {
        unsigned long s = sum(N);
        printf("%lu\n", s);
    }
    return 0;
}

