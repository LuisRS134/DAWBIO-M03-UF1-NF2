/*exercici 1:
1. Programa que lee por teclado una secuencia de 10 números enteros 
almacenándolos en un vector llamado “números” y los muestra en orden 
inverso al de entrada.*/
#include <stdio.h>
#define MAX 10

main(){
	int i,numeros[MAX];
	
	/*relleno el vector numeros*/
	for(i=0;i<MAX;i++){
		printf("\nDame el numero %d: ",i);
		scanf("%d",&numeros[i]);
	}
	
	/*muestro el vector al reves por la pantalla*/
	for(i=MAX-1;i>=0;i--){
		printf("%d ",numeros[i]);
	}
	

}
