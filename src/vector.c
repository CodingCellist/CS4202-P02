#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

int main(void)
{
    int length = 256;
    int myconst = 351;
    int res[length];
    for (int l = 0; l < LOOPS; l++)
    {
        for (int i = 0; i < length; i++)
        {
            res[i] += myconst;
        }
        for (int i = 0; i < length; i++)
        {
            printf("%d ", res[i]);
        }
        printf("\n");
    }
}

