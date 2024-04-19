#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    printf("Digite a primeira nota: ");
    scanf(" %f", &nota1);
    printf("Agora digite o peso correspondente: ");
    scanf(" %d", &peso1);

    printf("Digite a segunda nota: ");
    scanf(" %f", &nota2);
    printf("Agora digite o peso correspondente: ");
    scanf(" %d", &peso2);

    printf("Digite a terceira nota: ");
    scanf(" %f", &nota3);
    printf("Agora digite o peso correspondente: ");
    scanf(" %d", &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf(" A media ponderada das notas digitadas eh: %f", media);

    return 0;
}