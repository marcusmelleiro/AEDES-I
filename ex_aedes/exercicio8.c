#include <stdio.h>
#include <stdalign.h>

int main()
{
    int cor1, cor2;

    printf("Digite o cod correspondente a primeira cor da bola:\n");
    printf("BRANCO DIGITE - 1\n");
    printf("AZUL DIGITE - 2\n");
    printf("AMARELO DIGITE - 3\n");
    print("COD: ");
    scanf(" %d", &cor1);

    printf("Digite o cod correspondente a segunda cor da bola:\n");
    printf("BRANCO DIGITE - 1\n");
    printf("AZUL DIGITE - 2\n");
    printf("AMARELO DIGITE - 3\n");
    scanf(" %d", &cor2);

    if (cor1 == 1 || 2 && cor2 == 1 || 2)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}