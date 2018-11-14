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
    // matrices
    int** a = (int**) malloc(DIM * sizeof(int*));
    for (i = 0; i < n; i++)
    {
        a[i] = (int*) malloc(DIM * sizeof(int));
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand();
        }
    }
    int** b = (int**) malloc(DIM * sizeof(int*));
    for (i = 0; i < n; i++)
    {
        b[i] = (int*) malloc(DIM * sizeof(int));
        for (int j = 0; j < n; j++)
        {
            b[i][j] = rand();
        }
    }
    int** result = (int**) malloc(DIM * sizeof(int*));
    for (i = 0; i < n; i++)
    {
        result[i] = (int*) malloc(DIM * sizeof(int));
    }
    // run
    for (l = 0; l < LOOPS; l++)
    {
        // mmult
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                int sum = 0;
                for (k = 0; k < n; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                result[i][j] = sum;
            }
        }
        printf("%d\n", result[42][97]);
    }
    return 0;
}
