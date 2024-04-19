#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto = 1;

    for (int i = 1; i < 7; i++)
    {
        produto *= i;
    }

    printf(" %f", produto);

    return 0;
}