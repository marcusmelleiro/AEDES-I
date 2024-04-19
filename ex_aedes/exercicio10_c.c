#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fh;

    printf("Digite a temperatura em Celsius:");
    scanf(" %f", &celsius);

    fh = (celsius * 9 / 5) + 32;

    printf("Temperatura em Fahrenheit: %f", fh);

    return 0;
}