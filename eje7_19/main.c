#include <stdlib.h>
#include "fun.h"
#include <stdio.h>
int main()
{
    
    ip **ip_v4;
    ip_v4=(ip**) malloc(5); 
    ip_v4[0]=crearDireccionIP(244,252,211,001); 
    printf("la ip es:%i \n", ip_v4[0]->o1);
    //destruirDireccionIP(ip_v4[0]);
    printf("la ip es:%i \n", ip_v4[0]->o1);
    estableserDelimitador(ip_v4[0],'_');
    printf("el delimitador es:%c \n", ip_v4[0]->delim);
    delimitador a=obtenerDelimitadorIP(ip_v4[0]);
    printf("el delimitador es:%c \n", a);
    octeto b=obtenerOcteto(ip_v4[0],244);
    printf("el octeto es :%i \n", b);
    //estableserOcteto(ip_v4[0],)
    free(ip_v4);
    
    return 0;
}
