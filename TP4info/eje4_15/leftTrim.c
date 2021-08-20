#include<stdio.h>
void leftTrim(char *s){
    int cantidadEspacios=0;
    int i;
    for(i=0;s[i]==' ';i++){
        cantidadEspacios+=1;
    }
    for(i=0;s[i+cantidadEspacios]!='\0';i++){
        if(s[i+cantidadEspacios+1]=='\0'){
            s[i+1]='\0';
        }
        s[i]=s[i+cantidadEspacios];
    }
}
int main()
{
    char palabra1[]="    hola mundo";

    printf("la palabra es:%s\n",palabra1);
    leftTrim(palabra1);
    printf("ahora la palabra es:%s\n",palabra1);

    return 0;
}
