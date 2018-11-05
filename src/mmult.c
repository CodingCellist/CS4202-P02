#include <stdlib.h>
#include <stdio.h>

void usage()
{
    printf("USAGE: ./mmult <n>\n");
    printf("\tn - the dimension of the matrices: a positive, non-zero integer\n");
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

int** mmult(int n, int** a, int** b)
{
    int** result = makeMatrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = a[i][j] * b[j][i];
        }
    }
    return result;
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
        int** result = mmult(n, a, b);
        printMatrix(n, result);
    }
    return 0;
}    

