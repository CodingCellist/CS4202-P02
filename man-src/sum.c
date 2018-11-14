#include <stdio.h>
#include "loops.h"
#define N 10000

int main(void)
{
    unsigned long int s;
    unsigned long int i;
    unsigned long int count;
    for (int l = 0; l < LOOPS; l++)
    {
        // inline
        s = 0;
        i = 1;
        // unrolled using Duff's Device
        count = (N + 7) / 8;
        switch (N % 8) {
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
        printf("%lu\n", s);
    }
    return 0;
}

