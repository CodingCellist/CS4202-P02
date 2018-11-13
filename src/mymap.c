#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

typedef int (*FUNPTR)(int j);

const int length = 256;

int myFun(int a)
{
    return a * a;
}

void mymap(int* dest, FUNPTR ptr, int* arr)
{
    for (int i = 0; i < length; i++)
    {
        dest[i] = ((*ptr)(arr[i]));
    }
}

int main(void)
{
    int res[length];
    int arr[length];
    for (int l = 0; l < LOOPS; l++)
    {
        mymap(res, &myFun, arr);
        for (int i = 0; i < length; i++)
        {
            printf("%d ", res[i]);
        }
        printf("\n");
    }
}

