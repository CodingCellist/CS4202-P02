#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

const int length = 256;
const int myconst = 418;

int main(void)
{
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

