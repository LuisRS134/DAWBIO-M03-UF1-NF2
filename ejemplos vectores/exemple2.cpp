/*exercici 2:
2. Programa que carga el vector sqrs con los cuadrados de los n�meros 
del 1 al 10 y despu�s los muestra por pantalla.*/
#include <stdio.h>
#define MAX 10

main(){
	int i,sqrs[MAX];
	
	/*relleno el vector de cuadrados*/
	for(i=0;i<MAX;i++){
		sqrs[i]=(i+1)*(i+1);
	}
	
	/*muestro el vector por la pantalla*/
	for(i=0;i<MAX;i++){
		printf("%d ",sqrs[i]);
	}
	

}
