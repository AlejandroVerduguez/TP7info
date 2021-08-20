#include<stdio.h>
void replace(char *s,char nuevo, char viejo){
    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i] == viejo){
            s[i]=nuevo;
        }
    }
}
int main()
{
    char palabra1[]="hace frio en la primabera";

    printf("la palabra es: %s\n",palabra1);
    replace(palabra1,'b','a');
    printf("ahora la palabra es: %s\n",palabra1);

    return 0;
}
