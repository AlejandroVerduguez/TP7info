#include <stdio.h>
int myStrcmp(const char *t, char *s){
    int i;
    int comp=0;
    for(i=0; t[i] != '\0' && s[i] != '\0' && comp==0;i++){
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

    if(myStrcmp(palabra1,palabra2) == 0){
        printf("palabra1 es igual que palabra2");
}   else if(myStrcmp(palabra1,palabra2)< 0){
        printf("palabra1 es mayor que palabra2");
}   else{printf("palabra2 es mayor palabra1");}
    return 0;
}

