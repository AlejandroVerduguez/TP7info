#include<stdio.h>
void strupr(char *t){
    int i;
    for(i=0;t[i]!='\0';i++){
        if((int)t[i]<123 && (int)t[i] > 96){
            int a=((int)t[i])-32;
            t[i]=(char)a;
        }
    }

}
int main()
{
    char palabra[]="hola mundo 2 MasDFaS\n";
    printf("la palabra es: %s",palabra);
    strupr(palabra);

    printf("haora la palabra es: %s\n",palabra);
    return 0;
}
