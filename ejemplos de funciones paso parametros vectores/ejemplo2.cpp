//Ejemplo de funcion con array

//calcular la media de un vector de enteros,
// mediante una funcion media

#include <stdio.h>
#define TAMANYO 8


//funcion  media

int media(int v[],int tamanyo){
	int i,suma=0,media;
	
	//recorrer el vector para acumular la suma
	for(i=0;i<=tamanyo-1;i++){
		
		suma=v[i]+suma;//4+6..
	}
	printf("\n La suma es:  %i",suma);
	media=suma/tamanyo;	
	
	return media;
	
}


int main()
{
	int mimedia;
	int nota[TAMANYO]={4,6,7,6,8,9,8,4};
	
	mimedia=media(nota,TAMANYO);
	
	printf("\n La media es : %i",mimedia);
	
	return 0;
}
