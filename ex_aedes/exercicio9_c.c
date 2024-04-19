#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;

    for (int i = 4; i < 17; i++)
    {
        soma += (i + 1);
    }

    printf(" %d", soma);

    return 0;
}