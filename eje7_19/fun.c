#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <stdio.h>
#include "fun.h"
ip* crearDireccionIP(octeto o1,octeto o2,octeto o3,octeto o4){
    ip *ip_v4;
    //creo direccion de memoria para que cuando termine la funcion no se elimine la variable *ip_v4 
    ip_v4=(ip *) malloc(sizeof(ip));

    ip_v4->o1=o1;
    ip_v4->o2=o2;
    ip_v4->o3=o3;
    ip_v4->o4=o4;

    return ip_v4;
      
}

void destruirDireccionIP(ip *ip){
    free(ip);
}

ip* estableserDelimitador(ip *ip_v4, delimitador delimitadorIP){
    ip_v4->delim=delimitadorIP;
    return ip_v4;
}

delimitador obtenerDelimitadorIP(ip *ip_v4){
    return ip_v4->delim;
}
octeto obtenerOcteto(ip *ip_v4,int octeto){
    if (ip_v4->o1==octeto)
    {
        return ip_v4->o1;
    }else if (ip_v4->o2==octeto)
    {
        return ip_v4->o2;
    }else if (ip_v4->o3==octeto)
    {
        return ip_v4->o3;
    }else if (ip_v4->o4==octeto)
    {
        return ip_v4->o4;
    }
    return 0;
    
}

ip* estableserOcteto(ip *ip_v4,octeto oct){
    if (ip_v4->o1==oct)
    {
        ip_v4->o1=oct;
    }else if (ip_v4->o2==oct)
    {
        ip_v4->o2=oct;
    }else if (ip_v4->o3==oct)
    {
        ip_v4->o3=oct;
    }else if (ip_v4->o4==oct)
    {
        ip_v4->o4=oct;
    }
    return ip_v4;
}