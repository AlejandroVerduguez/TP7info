# include <stdio.h>

void stringReverse (char *palabra1){

    int i=0;
    int c=0;
    int cantidadDeLetras=0;
    while(palabra1[c] != '\0'){
        cantidadDeLetras+=1;
        c+=1;
    }
    cantidadDeLetras=c;
    char palabra[c+1];
    for(i=0;i<cantidadDeLetras;i++){
        palabra[i]=palabra1[(c-1)];
        c-=1;
    }
    printf("la palabra es: %s\n", palabra);
    printf("la palabra invertida es es: %s\n", palabra1);
    printf("la c es %i\n", c);
}

void main()
{

    char palabra2[]="";
    printf("ingrese una palabra \n");
    scanf("%s", palabra2);
    stringReverse(palabra2);

}
