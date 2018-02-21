/*Rellenar una mariz de 4x4 con numeros alearoeios de 
0 a 10 y muestrala por pantalla.*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	int array [4][4];
	srand(time(NULL));

	
	int i,j;
	for(i=0; i<4; i++){//filas
		
		for(j=0; j<4; j++){//columnas
			
			array[j][i]=rand()%10+1;
		}
	}
		
		
		for(i=0; i<4; i++){//filas
		
		for(j=0; j<4; j++){//columnas
			printf("%i \t", array[j][i]);
		}
		printf("\n");	
	}
}
