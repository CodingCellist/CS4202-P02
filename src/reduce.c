#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

int main(void)
{
    const int length = 16384;
    long int reduction = 0;
    int arr[length];
    for (int l = 0; l < LOOPS; l++)
    {
        for (int i = 0; i < length; i++)
        {
            reduction += arr[i];
        }
        printf("%li\n", reduction);
    }
    return 0;
}
