#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m = 10, n, o;
    int *z = &m;

    printf("Ponteiro: mostra a declaracao basica do ponteiro:\n");
    printf("---------------------------------------\n\n");
    printf("z armazena o endereco de m = %p\n", z);
    printf("*z armazena o valor de m= %d\n", *z);
    printf("&m é o endereço de m = %p\n", &m);
    printf("&n é o endereço de n = %p\n", &n);
    printf("&o armazena o endereço de o = %p\n", &o);
    printf("&z armazena o endereço de z = %p\n", &z);
}
