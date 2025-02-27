#include <stdlib.h>
#include <stdio.h>
#define LOOPS 5
#define DIM 1024

int** makeMatrix(int n)
{
    int** matrix = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        matrix[i] = malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = rand();
        }
    }
    return matrix;
}

void mmult(int** result, int** a, int** b, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
        }
    }
}

int main(void)
{
    int** a = makeMatrix(DIM);
    int** b = makeMatrix(DIM);
    int** result = makeMatrix(DIM);
    for (int l = 0; l < LOOPS; l++)
    {
        mmult(result, a, b, DIM);
        printf("%d\n", result[42][97]);
    }
    return 0;
}
