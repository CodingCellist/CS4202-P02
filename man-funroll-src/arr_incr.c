#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

int main(void)
{
    int i;
    int count;
    const int length = 256;
    const int myconst = 351;
    int res[length];
    for (int l = 0; l < LOOPS; l++)
    {
        i = 0;
        // unrolled using Duff's Device
        count = (length + 7) / 8;
        switch (length % 8)
        {
            case 0: do { res[i++] += myconst;
            case 7:      res[i++] += myconst;
            case 6:      res[i++] += myconst;
            case 5:      res[i++] += myconst;
            case 4:      res[i++] += myconst;
            case 3:      res[i++] += myconst;
            case 2:      res[i++] += myconst;
            case 1:      res[i++] += myconst;
                } while (--count > 0);
        }
        printf("%d\n", res[42]);
    }
}

