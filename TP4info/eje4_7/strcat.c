#include <stdio.h>

void myStrcat(char *t,const char *s){
    int letrasS=0;
    int cantidadDeLetras=0;
    while (t[cantidadDeLetras] !='\0') {
        cantidadDeLetras+=1;}
    t[cantidadDeLetras]=' ';
    while (s[letrasS]!='\0') {
        cantidadDeLetras+=1;
        t[cantidadDeLetras]=s[letrasS];
        letrasS+=1;
    }
//Nota: solo funciona ingresando una palabra sin espacios
//taves tenga que usar el solucionador del profe
//solucionar
}
int main(){
    char palabra1[30];
    char palabra2 [30];

    printf("ingrese la primera palabra\n");
    scanf(" %s",palabra1);
    setbuf(stdin,NULL);// no me lo soluciona del todo
    printf("ingrese la palabra que se agregara a la primera palabra\n");
    scanf(" %s",palabra2);
    setbuf(stdin,NULL);// no me lo soluciona del todo
    myStrcat(palabra1,palabra2);
    printf("ahora palabra 1 es igual a %s\n",palabra1);
}
