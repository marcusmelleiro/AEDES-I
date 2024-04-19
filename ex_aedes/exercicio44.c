#include <stdio.h>
#include <stdlib.h>

#define TAXA_DE_AGUA 305.55
#define TAXA_DE_ESGOTO 226.05

int main()
{
    float consumo, conta = 0;
    int i;

    printf("Digite o consumo de agua da edificacao no mes (em litros): ");
    scanf("%f", &consumo);

    consumo = consumo / 1000;

    printf("%f", consumo);

    if (0 > consumo <= 75)
    {
        conta = TAXA_DE_AGUA + TAXA_DE_ESGOTO + ((consumo * 2.11) + (consumo * 1.56));
    }
    else if (consumo <= 150)
    {
        conta = TAXA_DE_AGUA + TAXA_DE_ESGOTO + ((75 * (2.11)) + (75 * 1.56)) + (((consumo - 75) * 4.496) + ((consumo - 75) * 3.327));
    }
    else if (consumo <= 225)
    {
        conta = TAXA_DE_AGUA + TAXA_DE_ESGOTO + (75 * (2.11 + 1.56)) + (75 * (4.496 + 3.327)) + ((consumo - 150) * (6.968 + 5.156));
    }
    else
    {
        conta = TAXA_DE_AGUA + TAXA_DE_ESGOTO + (75 * (2.11 + 1.56)) + (75 * (4.496 + 3.327)) + (75 * (6.968 + 5.156)) + ((consumo - 225) * (9.512 + 7.039));
    }

    printf("O valor da conta de agua eh: %f\n", conta);

    return 0;
}