#include <stdlib.h>
#include "fun.h"
#include <stdio.h>

typedef struct {
        long legajo;
        char apellido[31];
        char nombre[31];
    }datos;

/*int fin(datos *alumno){
    if ((alumno->legajo)==0)
    {
        return 0;
    }}
    
void cargar(datos *alumno){
    do
    {
        printf("ingrese el nombre del alumno\n");
        scanf("%s",(alumno->nombre));
        printf("ingrese el apellido del alumno\n");
        scanf("%s",(alumno->apellido));
        printf("ingrese el legajo del alumno\n");
        scanf(" %li",&alumno->legajo);

    } while (fin (alumno));
    
}
*/
int main(int argc, char const *argv[])
{
    
    datos alumnos,*alumno;
    alumno=&alumnos;

    cargar(alumno);
    
    printf("el nombre del alumno es: %s\n", alumno->nombre);
    printf("el apellido del alumno es: %s\n", alumno->apellido);
    printf("el legajo del alumno es: %li\n", alumno->legajo);
    return 0;
}
