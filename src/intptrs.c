#include <stdlib.h>
#include <stdio.h>

void addTo(int length, int* b)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d", *b);
    }
}

int main(int argc, const char** argv)
{
    int l = 5;
    int c = 1;
    addTo(l, &c);
    printf("\n");
    return 0;
}

