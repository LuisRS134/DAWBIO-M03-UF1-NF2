/* Implementa un algoritmo en C que almacene 12
 * números aleatorios en una matriz de 3*4 y que
 * de como resultado:
 * a) Imprimir la suma de los números almacenados
 * en la matriz.
 * b) Imprimir el número mayor almacenado en
 * la matriz
 * c) Calcula la suma de cada fila y
 * almacenala en un vector. Imprime
 * el vector resultante.
 * d) Calcula la media de cada columna y
 * almacenala en un vector. Imprime el
 * vector resultante.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int media_matriz(int matriz[3][4]);

void rellenar_matriz(int matriz[][4]) {
    time_t t;
    srand((unsigned) time(&t));
    
    int i,j;

    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            matriz[i][j] = rand()%10;
        }
    }
}

int suma_numeros_matriz(int matriz[][4]) {
    int i, j, suma=0;

    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            suma += matriz[i][j];
        }
    }

    return suma;
}

void imprimir_maximo(int matriz[][4]) {
    int mayor=matriz[0][0];
    
    int i, j;
    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            if(mayor<matriz[i][j]) {
                mayor=matriz[i][j];
            }
        }
    }
    
    printf("El mayor de la matriz es: %d\n", mayor);
}

void suma_fila(int matriz[][4]){
    
    int i, j;
    int vector[3];
    int suma=0;
    
    for(i=0; i<=2; i++){
        for(j=0; j<=3; j++){
            suma+=matriz[i][j];
        }
        vector[i]=suma;
        suma=0;
        printf("Vector resultante %d\n", vector[i]);
    } 
}

int main() {

    int matriz[3][4];
    
    rellenar_matriz(matriz);
    int suma = suma_numeros_matriz(matriz);
    printf("La suma es %d\n", suma);
    
    imprimir_maximo(matriz);
    media_matriz(matriz);
    
    
}

int media_matriz(int matriz[3][4]){
    float media, vector_media[4];
    int i,j;
    for(j=0;j<4;j++){
        for(i=0;i<3;i++){
           media+=matriz[i][j];
        }
        media=media/i;
        vector_media[j]=media;
        media=0;
        printf("columna %i - media de %.2f\n",j+1,vector_media[j]);
    }
    printf("\n");
}
