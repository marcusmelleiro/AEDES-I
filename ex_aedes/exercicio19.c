#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, resto;
    int min, max, numero_intevalo;
    int aux;
    double base, expoente, potencia;
    double numero_radiciacao, raiz_quadrada;

    printf("Digite o primeiro numero: ");
    scanf(" %d", &num1);
    printf("Digite o segundo numero: ");
    scanf(" %d", &num2);

    resto = num1 % num2;

    printf("O resto da divisao de %d por %d eh igual a: %d\n\n", num1, num2, resto);

    printf("Digite o numero incial do intervalo: ");
    scanf(" %d", &min);
    printf("Digite o numero final do intervalo: ");
    scanf(" %d", &max);

    aux = max - min;

    printf("Os numeros do intervalo entre %d e %d sao: ", min, max);

    for (int i = 1; i < aux; i++)
    {
        numero_intevalo = min + i;

        printf("%d \t", numero_intevalo);
    }

    printf("\n");

    printf("digite um numero decimal para a base: ");
    scanf(" %lf", &base);
    printf("digite um nuemeo decimal para o  exponte: ");
    scanf(" %lf", &expoente);

    potencia = pow(base, expoente);

    printf("O resultado de %.lf elevado a %lf eh igual a %lf\n", base, expoente, potencia);

    printf("Digite um numero decimal para descobrir sua raiz quadrada: ");
    scanf(" %lf", &numero_radiciacao);

    raiz_quadrada = sqrt(numero_radiciacao);

    printf(" A raiz quadrada de %lf e igual a %lf", numero_radiciacao, raiz_quadrada);

    return 0;
}