# include <stdio.h>

int main()
{
    char string[8192]="abAZZZZdabcdabcd";
    int cantidadLetras[25]={0};
    int i=0;
    for(i=0; string[i]!='\0';i++){
        if(string[i]>='a' && string[i]<='z'){
            cantidadLetras[(int)string[i]-65]+=1;
        }else if (string[i]>='A' && string[i]<='Z') {
            cantidadLetras[(int)string[i]-97]+=1;
}
    }
    for(i=0;i<26;i++){
        printf("la letra %c:",(char)(i+97));
        printf("%i\n",cantidadLetras[i]);
    }
    return 0;
}
