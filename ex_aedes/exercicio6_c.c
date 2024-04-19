#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int produto = 0;

    for (int i = 1; i < 15; i++)
    {
        produto *= i;
    }
    printf("O produto dos numeros naturais eh: %d\n", produto);

    return 0;
}