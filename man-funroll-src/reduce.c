#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

int main(void)
{
    const int length = 16384;
    long int reduction = 0;
    int count;
    int i;
    int arr[length];
    for (int l = 0; l < LOOPS; l++)
    {
        i = 0;
        // unrolled using Duff's Device
        count = (length + 7) / 8;
        switch (length % 8)
        {
            case 0: do { reduction += arr[i++];
            case 7:      reduction += arr[i++];
            case 6:      reduction += arr[i++];
            case 5:      reduction += arr[i++];
            case 4:      reduction += arr[i++];
            case 3:      reduction += arr[i++];
            case 2:      reduction += arr[i++];
            case 1:      reduction += arr[i++];
                } while (--count > 0);
        }
        printf("%li\n", reduction);
    }
    return 0;
}
