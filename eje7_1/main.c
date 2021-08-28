#include <stdio.h>
#include "fun.h"
#include <string.h>
#include <stdlib.h>

struct  dividir
    {
        float cosiente;
        float resto;
    };
int main()
{
    int dividendo, divisor;
    printf("ingrese dividendo\n");
    scanf("%i",&dividendo);
    printf("ingrese divisor\n");
    scanf("%i",&divisor);
    struct dividir a=divide(&dividendo,&divisor);

    printf("el resto es igual a %g\n",a.resto);
    printf("el cosiente es igual a %g\n",a.cosiente);
    return 0;
}
