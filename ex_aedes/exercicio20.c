#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadrado()
{
    float lado, area_quadrado;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf(" %f", &lado);

    area_quadrado = lado * lado;

    printf("A area do quadrado eh igual a : %f\n", area_quadrado);
}

void triangulo()
{
    float area_triangulo, base,altura;

    printf("digite a base do triangulo:");
    scanf(" %f",&base);

    printf("digite a altura do triangulo:");
    scanf(" %f",&altura);

    area_triangulo = (base*altura)/2;

   printf("A area do triangulo eh igual a : %f\n", area_triangulo); 
}

void circulo()
{
    float area_circulo, pi = 3,14,raio;

    printf("digite o raio do circulo:");
    scanf(" %f",&raio);

    area_circulo = pi*(pow(raio,2);

   printf("A area do circulo eh igual a : %f\n", area_circulo); 
}

void trapezio()
{
    float 
}

int main()
{
    quadrado();

    triangulo();

    circulo();

    trapezio();

    return 0;
}