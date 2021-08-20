#include <stdio.h>
#include "fun.h"
int main(int argc, char **argv)
{
	int tamanoDelVector;
	printf("ingrese el tamaño del vector\n");
	scanf("%i",&tamanoDelVector);
	float vector[tamanoDelVector];
	printf("ingrese los numeros del vector\n");
	for(int i=0; i<tamanoDelVector ;i++){
		scanf("%f",&vector[i]);
	}
	float promedi=(promedio(vector,tamanoDelVector));
	printf("el promedio del vector es %g  \n", promedi);
	
	return 0;
}

