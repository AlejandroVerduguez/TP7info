#include <stdio.h>

void myStrcpy(char *t,const char *s){
    int contador=0;
    while (t[contador] !='\0') {
        t[contador]=s[contador];
        contador+=1;
    }

}
void main()
{
    char palabra[30];
    char palabra2[30];
    printf("ingrese la palabra por la que se ba a reemplasar la segunda\n");
    scanf("%s",palabra);
    myStrcpy(palabra2,palabra);
    printf("la segunda cadena de caracteres ahora es %s\n",palabra2);




}
