#include <stdio.h>
#include <stdlib.h>

int main()
{
    int produto = 1;

    for (int i = 1; i < 10; i++)
    {
        produto *= i;
    }
    printf(" %d", produto);

    return 0;
}

// resposta a letra d eh um produtotio.