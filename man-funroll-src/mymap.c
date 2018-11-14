#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

int main(void)
{
    int i;
    int count;
    const int length = 256;
    int res[length];
    int arr[length];
    // run
    for (int l = 0; l < LOOPS; l++)
    {
        i = 0;
        // unrolled using Duff's Device
        count = (length + 7) / 8;
        switch (length % 8)
        {
            case 0: do { res[i] = arr[i] * arr[i]; i++;
            case 7:      res[i] = arr[i] * arr[i]; i++;
            case 6:      res[i] = arr[i] * arr[i]; i++;
            case 5:      res[i] = arr[i] * arr[i]; i++;
            case 4:      res[i] = arr[i] * arr[i]; i++;
            case 3:      res[i] = arr[i] * arr[i]; i++;
            case 2:      res[i] = arr[i] * arr[i]; i++;
            case 1:      res[i] = arr[i] * arr[i]; i++;
                } while (--count > 0);
        }
        for (i = 0; i < length; i++)
        {
            res[i] = arr[i] * arr[i];
        }
        printf("%d\n", res[42]);
    }
}

