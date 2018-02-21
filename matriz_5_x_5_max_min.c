// Programa que carga una matriz de cinco filas
// y 5 columnas con n�meros enteros, imprimiendo
// los valores m�ximo y m�nimo y sus posiciones
// dentro de la tabla.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void rellenar_matriz(int m[] [SIZE]){
	int i, j;
	
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			m[i][j] = rand()%10001;
		}
	}
}

void calcularmaxmin(int m[][SIZE], int *max, int *min, int *fila_max, int *col_max, int *fila_min, int *col_min){
	*max = m[0][0];
	*min = m[0][0];
	*fila_min = *fila_max = *col_min = *col_max = 0;
	
	int i, j;
	
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			if(m[i][j]<*min){
				*min = m[i][j];
				*fila_min = i;
				*col_min = j;
			}
			if(m[i][j]>*max){
				*max = m[i][j];
				*fila_max = i;
				*col_max = j;
			}
		}
	}
}

void imprimir_matriz(int m[][SIZE]){
	int i, j;
	
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int max, min;
	int fila_max, col_max, fila_min, col_min;
	int matriz[SIZE][SIZE];
	
	time_t t;
	srand((unsigned) time(&t));
	
	// Rellenar matriz
	rellenar_matriz(matriz);
	
	// M�ximo y m�nimo
	calcularmaxmin(matriz, &max, &min, &fila_max, &col_max, &fila_min, &col_min);
    
    // Imprimir matriz
    imprimir_matriz(matriz);
    printf("\n");
	printf("El numero maximo es %d - matriz[%d][%d]\n", max, fila_max, col_max);
    printf("El numero minimo es %d - matriz[%d][%d]\n", min, fila_min, col_min);
}
