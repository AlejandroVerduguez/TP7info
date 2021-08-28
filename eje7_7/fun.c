#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fun.h"
int fin(struct datos *alumno){
    if ((alumno->legajo)==0)
    {
        return 0;
    }else{return 1;}
    
}
//no se si esta bien que la funcion cargar debuelva el array de los datos
struct datos * cargar(struct datos *alumno){
    printf("*alumno apunta a %p\n",alumno);
    int i=0;    
    do{
        alumno=(struct datos *) realloc(alumno,sizeof(struct datos)*(i+1));           
        printf("ingrese el nombre del alumno\n");
        scanf("%s",(alumno[i].nombre));
        printf("ingrese el apellido del alumno\n");
        scanf("%s",(alumno[i].apellido));
        printf("ingrese el legajo del alumno\n");
        scanf("%li",&(alumno[i].legajo));
        i++;
        
       // printf("*alumno apunta a %p\n",alumno);

   } while (fin (&alumno[i-1]));   
   return alumno;
}
int contarAlumnos(struct datos *alumnos){//con esta funcion cuento la cantidad de alumnos
    int cantidadDeAlumnos=0;
    do
    {
        cantidadDeAlumnos++;
    } while (alumnos[cantidadDeAlumnos].legajo!=0);
    return cantidadDeAlumnos;
}
void ordenarPorApellido(struct datos *alumnos){
    int a=0;
    int cantidadDeAlumnos=contarAlumnos(alumnos);
    for (a = 0; a < cantidadDeAlumnos; a++){
        int i=0;
        //le resto "a" a cantidadDeAlumnos por que el ultimo apellido va a ser el que sea el mas mayor de todos 
        //
        for ( i = 0; i < (cantidadDeAlumnos-a); i++){
            //alumnos[i].apellido[0]: primera letra del apellido del alumno de atras
            //alumnos[i+1].apellido[0]: primera letra del apellido del alumno de adelante
        if (alumnos[i].apellido[0]>alumnos[i+1].apellido[0]){
            struct datos aux=alumnos[i];
            alumnos[i]=alumnos[i+1];
            alumnos[i+1]=aux;
            }
        }
    }
    
    
}
