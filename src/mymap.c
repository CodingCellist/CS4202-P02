#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

typedef int (*FUNPTR)(int j);

int myFun(int a)
{
    return a * a;
}

void mymap(int* dest, FUNPTR ptr, int* arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        dest[i] = ((*ptr)(arr[i]));
    }
}

int main(void)
{
    const int length = 256;
    int res[length];
    int arr[length];
    for (int l = 0; l < LOOPS; l++)
    {
        mymap(res, &myFun, arr, length);
        printf("%d\n", res[42]);
    }
}

