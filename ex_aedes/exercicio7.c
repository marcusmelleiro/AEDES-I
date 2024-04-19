#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaração de variaveis.
    int num1;
    float num2, soma;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num1);

    printf("Insira um numero decimal: ");
    scanf("%f", &num2);

    soma = num1 + num2;

    printf("A soma dos numeros inseridos eh: %f", soma);

    return 0;
}