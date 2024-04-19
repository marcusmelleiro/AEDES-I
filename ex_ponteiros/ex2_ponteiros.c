#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m;
    int *ab;

    m = 29;
    printf("Endereco de m: %p\n",&m);
    printf("valor de m: %d \n\n",m);

    printf("Agora o ab eh atribuido o end de m.\n");
    ab = &m;
    printf("O endereco do ponteiro ab: %p\n", ab);
    printf("Conteudo do ponteiro ab: %d\n\n", *ab);

    printf("O valor atribuido a m agora eh 34.\n");
    m = 34;
    printf("O endereco do ponteiro ab: %p\n", ab);
    printf("Conteudo do ponteiro ab: %d\n\n", *ab);

    printf("A variavel ab recebe o valor 7 agora.\n");
    *ab = 7;
    printf("Endereco de m: %p\n", &m);
    printf("valor de m: %d \n\n", m);
}