#include <stdlib.h>
#include <stdio.h>

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

int main(int argc, const char** argv)
{
    int length = 4;
    int res[length];
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d ", arr[i]);
    }
    printf("\n");
    mymap(res, &myFun, arr, length);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", res[i]);
    }
    printf("\n");
}

