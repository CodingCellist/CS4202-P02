#include <stdlib.h>
#include <stdio.h>
#define LOOPS 5
#define DIM 1024

int main(void)
{
    // counters
    int i;
    int j;
    int k;
    int l;
    // set up the matrices
    int* a = (int*) malloc(DIM * DIM * sizeof(int));
    for (i = 0; i < DIM * DIM; i++)
    {
        a[i] = rand();
    }
    int* b = (int*) malloc(DIM * DIM * sizeof(int));
    for (i = 0; i < DIM * DIM; i++)
    {
        b[i] = rand();
    }
    int* result = (int*) malloc(DIM * DIM * sizeof(int));
    // run
    for (l = 0; l < LOOPS; l++)
    {
        // mmult
        for (i = 0; i < DIM; i++)
        {
            for (j = 0; j < DIM; j++)
            {
                int sum = 0;
                for (k = 0; k < DIM; k++)
                {
                    sum += a[i * DIM + k] * b[k * DIM + j];
                }
                result[i * DIM + j] = sum;
            }
        }
        printf("%d\n", result[42]);
    }
    return 0;
}
