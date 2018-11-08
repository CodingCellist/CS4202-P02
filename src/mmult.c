#include <stdlib.h>
#include <stdio.h>
#define LOOPS 100000

void usage()
{
    printf("Naïve matrix multiplication of two pseudorandom NxN matrices\n");
    printf("USAGE: ./mmult <N>\n");
    printf("\tN - the dimension of the matrices: a positive, non-zero integer\n");
}

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
    if (argc != 2)
    {
        usage();
    }
    else
    {
        int n = atoi(argv[1]);
        int** a = makeMatrix(n);
        int** b = makeMatrix(n);
        int** result = makeMatrix(n);
        for (int l = 0; l < LOOPS; l++)
        {
            mmult(result, a, b, n);
            printMatrix(n, result);
        }
    }
    return 0;
}    

