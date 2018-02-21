/*El programa principal contendra 2 llamadas leerMatriz, 
despues hara una llamada a la funcion MatricesIdenticas que devuelve un booleano 
y por ultimo mostrara las 2 matrices (haciendo 2 llamadas a MostrarMatriz y un mensaje diciendo si son o no identicas).*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define TAM 5

 /*****PROTOTIPOS*****/
void leerMatriz(int matrix1[TAM][TAM],int matrix2[TAM][TAM]);
int matricesIdenticas();
void mostrarMatriz(int matrix1[TAM][TAM], int matrix2[TAM][TAM]);

int main(){
	int matrix1[5][5], matrix2[5][5];
	
}

void leerMatriz(int matrix1[][TAM], int matrix2[][TAM]){
	int i,j;
	for(i=0; i<TAM; i++){//filas
		
		for(j=0; j<TAM; j++){//columnas
			
			matrix1[j][i]=rand()%10+1;
			matrix2[j][i]=rand()%10+1;
		}
	}
	
}

int matricesIdenticas(){
	
}

void mostrarMatriz(int matrix1[TAM][TAM], int matrix2[TAM][TAM]){
	int i,j;
	for(i=0; i<TAM; i++){//filas
		
		for(j=0; j<TAM; j++){//columnas
		}
			printf("%i\t", matrix1[j][i]);		
			printf("%i\t", matrix2[j][i]);
		}
		printf("\n");	
}
