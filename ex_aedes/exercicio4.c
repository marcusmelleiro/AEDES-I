#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Insira o primeiro numero: ");
    scanf(" %d", &num1);

    printf("Insira o segundo numero: ");
    scanf(" %d", &num2);

    if (num1 == num2)
    {
        printf("Os numeros são iguais!");
    }
    else if (num1 > num2)
    {
        printf("O maior numero eh: %d", num1);
    }
    else
    {
        printf("O maior numero eh: %d", num2);
    }

    return 0;
}
