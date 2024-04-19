#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int somatorio = 0;

    for (int i = 0; i < 10; i++)
    {
        somatorio += i + 1;
    }
    printf("%d\n", somatorio);

    return 0;
}