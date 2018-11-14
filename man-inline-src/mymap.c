#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

int main(void)
{
    int i;
    const int length = 256;
    int res[length];
    int arr[length];
    // run
    for (int l = 0; l < LOOPS; l++)
    {
        // apply functions inline
        for (i = 0; i < length; i++)
        {
            res[i] = arr[i] * arr[i];
        }
        printf("%d\n", res[42]);
    }
}

