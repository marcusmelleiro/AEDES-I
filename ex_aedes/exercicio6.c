#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int somatorio = 0;

    for (int i = 1; i < 10; i++)
    {
        somatorio += i;
    }
    printf("A soma dos numeros naturais eh: %d\n", somatorio);

    return 0;
}