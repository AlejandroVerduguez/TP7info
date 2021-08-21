#include <stdlib.h>
#include <string.h>
#include <stdio.h>
//#include "main.c"

int fin(struct *alumno){
    if ((alumno->legajo)==0)
    {
        return 0;
    }
    
}
void cargar(struct *alumno){

    do
    {
        printf("ingrese el nombre del alumno\n");
        scanf("%s",(alumno->nombre));
        printf("ingrese el apellido del alumno\n");
        scanf("%s",(alumno->apellido));
        printf("ingrese el legajo del alumno\n");
        scanf("%ln",&(*alumno).legajo);

    } while (fin (alumno));
    
}
