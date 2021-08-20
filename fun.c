float promedio(float *f,int longitud){
	float total=0;
	int i=0;
	for( i=0; i<longitud; i++){
		total+=f[i];
	}
	return (total/longitud);
}
