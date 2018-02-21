/*Programa que carga una matriz de cinco filas y 5 columnas con numeros enteros, 
imprimiendo los valores maximo y minimo y sus posiciones dentro de la tabla*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	int array [5][5];
	int mayor,menor;
	int poscion;
	int filasmayor, colmayor, filasmenor, colmenor;
	srand(time(NULL));
	
	int i,j;
	printf("\n\n");
	printf("|-----+------+-------+-------+-------+-------|\n");
	printf("\t1 \t2 \t3 \t4\t5\n");
	printf("|-----+------+-------+-------+-------+-------|\n\n");
	for(i=0; i<5; i++){//filas
		printf("| %i   |",i+1);
		for(j=0; j<5; j++){//columnas
			
			array[j][i]=rand()%10;
			
			printf("\t%i    | ", array[j][i]);
		}
		
		printf("\n");
	}
	printf("|-----+------+-------+-------+-------+-------|\n\n");
		
		printf("\n");
		
		for(i=0; i<5; i++){//filas
		
		for(j=0; j<5; j++){//columnas
			
			if(mayor<array[j][i]){
				
				mayor=array[j][i];
				
				filasmayor=i;
				colmayor=j;
					
			}
			
			if(menor>=array[j][i]){
				
				menor=array[j][i];
				
				filasmenor=i;
				colmenor=j;
			}
		}
			
	}
		
		printf("El mayor numero es: %i Y su posicion esta en %i, %i\n",mayor,filasmayor+1,colmayor+1);
		printf("\nEl menor numero es: %i Y su posicion esta en %i, %i\n",menor,filasmenor+1,colmenor+1);
		printf("\n");
}
