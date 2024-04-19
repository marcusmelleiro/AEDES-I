#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf(" %f", &a);

    printf("Digite o valor de B: ");
    scanf(" %f", &b);

    printf("Digite o valor de C: ");
    scanf(" %f", &c);

    delta = (pow(b, 2)) - 4 * (a * c);

    if (delta < 0)
    {
        printf("Nao existe raizes da equacao!");
    }
    else if (delta = 0)
    {
        x1 = (-b + (sqrt(delta))) / 2 * a;
        x2 = x1;

        printf("A raízes da equacao sai: %f e %f", x1, x2);
    }
    else
    {
        x1 = (-b + (sqrt(delta))) / 2 * a;
        x2 = (-b - (sqrt(delta))) / 2 * a;

        printf("A raízes da equacao sao: %f e %f", x1, x2);
    }

    return 0;
}