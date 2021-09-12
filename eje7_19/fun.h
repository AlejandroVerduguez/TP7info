typedef char delimitador;
//creo "unsigned char octeto" por que en el tipo de dato "int" va de 0 a 255
typedef unsigned char octeto;
typedef struct {
    octeto o1;
    octeto o2;
    octeto o3;
    octeto o4;
    delimitador delim;
}ip;

ip* crearDireccionIP(octeto o1,octeto o2,octeto o3,octeto o4); 
void destruirDireccionIP(ip *ip);

ip* estableserDelimitador(ip *ip_v4, delimitador delimitadorIP);

delimitador obtenerDelimitadorIP(ip *ip_v4);

octeto obtenerOcteto(ip *ip_v4,int octeto);

ip* estableserOcteto(ip *ip_v4,octeto oct);