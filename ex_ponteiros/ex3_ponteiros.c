#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m = 300;
    double fx = 300.600006;
    char cht = 'z';

    int *pont_int = &m;
    double *pont_double = &fx;
    char *pont_char = &cht;

    printf("Ponteiros - Demonstre o uso de & e *.\n");
    printf("-------------------------------------------\n");
    printf("m = %d\n", m);
    printf("FX = %lf\n", fx);
    printf("cht = %c\n\n", cht);

    printf("Usando & operador\n");
    printf("-------------------------------------------\n");
    printf("Endereco de m: %p\n", &m);
    printf("Endereco de FX: %p\n", &fx);
    printf("Endereco de cht: %p\n\n", &cht);

    printf("Usando & e * operador\n");
    printf("-------------------------------------------\n");
    printf("valor de m: %d\n", *(&m));
    printf("valor de FX: %lf\n", *(&fx));
    printf("valor de cht: %c\n\n", *(&cht));

    printf("Usando apenas variavel do ponteiro: \n");
    printf("-------------------------------------------\n");
    printf("Endereco de m: %p\n", pont_int);
    printf("Endereco de FX: %p\n", pont_double);
    printf("Endereco de cht: %p\n\n", pont_char);

    printf("Usando apenas variavel do ponteiro: \n");
    printf("-------------------------------------------\n");
    printf("valor de m: %d\n", *pont_int);
    printf("valor de FX: %lf\n", *pont_double);
    printf("valor de cht: %c\n\n", *pont_char);

    printf("Usando apenas o operador ponteiro: \n");
    printf("-------------------------------------------\n");
    printf("valor de m: %d\n", *pont_int);
    printf("valor de FX: %lf\n", *pont_double);
    printf("valor de cht: %c\n\n", *pont_char);
}