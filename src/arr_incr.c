#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

int main(void)
{
    const int length = 256;
    const int myconst = 351;
    int res[length];
    for (int l = 0; l < LOOPS; l++)
    {
        for (int i = 0; i < length; i++)
        {
            res[i] += myconst;
        }
        printf("%d\n", res[42]);
    }
}

