#include <stdlib.h>
#include <stdio.h>
#define DIM 100
#define LOOPS 100000

void printMatrix(int n, int** m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",  m[i][j]);
        }
        printf("\n");
    }
}

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
            result[i][j] = a[i][j] * b[j][i];
        }
    }
}

int main(int argc, const char** argv)
{
    int** a = makeMatrix(DIM);
    int** b = makeMatrix(DIM);
    int** result = makeMatrix(DIM);
    for (int l = 0; l < LOOPS; l++)
    {
        mmult(result, a, b, DIM);
        printMatrix(DIM, result);
    }
    return 0;
}    

