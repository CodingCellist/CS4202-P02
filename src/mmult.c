#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

const int n = 10;

void printMatrix(int** m)
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

int** makeMatrix()
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

void mmult(int** result, int** a, int** b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = a[i][j] * b[j][i];
        }
    }
}

int main(void)
{
    int** a = makeMatrix();
    int** b = makeMatrix();
    int** result = makeMatrix();
    for (int l = 0; l < LOOPS; l++)
    {
        mmult(result, a, b);
        printMatrix(result);
    }
    return 0;
}    
