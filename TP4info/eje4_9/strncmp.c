#include <stdio.h>
int myStrcmp(const char *t,const char *s, int n){
    int i;
    int comp=0;
    for(i=0; t[i] != '\0' && s[i] != '\0' && comp==0 && i<n;i++){
        if(t[i] != s[i]){
            if(t[i]<s[i]){
                comp = 1;
            }
            if(t[i]>s[i]){
                comp = -1;
            }
        }
    }
    return comp;
}
int main()
{
    char palabra1[]="holz mundo";
    char palabra2[]="hola mundo";

    int num1=4;

    //printf("la palabra1 es igual a %s\n",palabra1);
    //printf("la palabra2 es igual a %s\n",palabra2);
    if(myStrcmp(palabra1,palabra2,num1) == 0){
        printf("las primeras %i letras son iguales a las\n",num1);
}   else if(myStrcmp(palabra1,palabra2,num1)< 0){
        printf("palabra1 es mayor que palabra2, en las primeras %i letras\n", num1);
}   else{printf("palabra2 es mayor palabra1, en las primeras %i letras \n",num1);}
    return 0;
}
