#include<stdio.h>
void leftTrim(char *s){
    int cantidadEspacios=0;
    int i;
    int cantidadCaracteres=0;
    for(i=0;s[i]!='\0';i++){
        cantidadCaracteres+=1;
    }
    for(i=0;s[i+cantidadCaracteres-1]==' ';i--){
        cantidadEspacios+=1;
    }
    s[cantidadCaracteres-cantidadEspacios]='\0';
}
int main()
{
    char palabra1[]="hola mundo       ";
    char palabra2[]="continuacion";

    printf("la palabra es:%s %s\n",palabra1, palabra2);
    leftTrim(palabra1);
    printf("ahora la palabra es:%s %s\n",palabra1,palabra2);

    return 0;
}
