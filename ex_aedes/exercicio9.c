#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto = 0;

    for (int i = 0; i < 5; i++)
    {
        produto *= (float)(i / (i + 1));
    }
   
    printf(" %f", produto);
   
   
    return 0;
}