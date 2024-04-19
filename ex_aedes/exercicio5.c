#include <stdio.h>

int main()
{
    int num1, num2, produto, media, soma;

    printf("Insira o primeiro numero: ");
    scanf(" %d", &num1);
    printf("Insira o segundo numero: ");
    scanf(" %d", &num2);

    // indetificando o maior numero.
    if (num1 > num2)
    {
        printf("maior numero: %d\n", num1);
    }
    else if (num2 > num1)
    {
        printf("maior numero: %d\n", num2);
    }
    else
    {
        printf("maior numero: Os dois numeros tem o mesmo valor\n");
    }

    // produto dos numeros.
    produto = num1 * num2;
    printf("produto: %d\n", produto);

    // média aritimetica.
    media = (num1 + num2) / 2;
    printf("media: %d\n", media);

    // soma do antecessor do primeiro com o sucessor do segundo.
    soma = (num1 - 1) + (num2 + 1);
    printf("soma do antecessor do primeiro com o sucessor do segundo: %d\n", soma);

    return 0;
}