#include <stdlib.h>
#include "fun.h"
#include <stdio.h>

int main()
{
    
    struct datos *alumnos=NULL;
    
    alumnos=cargar(alumnos);
    printf("*alumnos apunta a %p\n",alumnos);
    printf("cantidad de alumnos: %i\n", contarAlumnos(alumnos));
    for (int i = 0; i < (contarAlumnos(alumnos)); i++)
    {
        printf("el nombre del alumno es: %s\n", (alumnos[i]).nombre);
        printf("el apellido del alumno es: %s\n", alumnos[i].apellido);
        printf("el legajo del alumno es: %li\n", alumnos[i].legajo);
        printf("----------------------------------------------------------------\n");
    }
    
    
    ordenarPorApellido(alumnos);
    for (int i = 0; i < (contarAlumnos(alumnos)); i++)
    {
        printf("el nombre del alumno es: %s\n", (alumnos[i]).nombre);
        printf("el apellido del alumno es: %s\n", alumnos[i].apellido);
        printf("el legajo del alumno es: %li\n", alumnos[i].legajo);
        printf("----------------------------------------------------------------\n");
    }
    //free(alumnos);
    
  
    return 0;
}
