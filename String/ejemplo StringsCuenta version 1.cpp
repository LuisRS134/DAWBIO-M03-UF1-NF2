#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Descripció:  estudio de STRINGs
 * 
 * */


int main() {

	
	int index;
	char cadena1[6] = {'H','e','l','l','o','\0'};
	char cadena2[50] = "Hola que tal";
	char cadena3[10];
	cadena3[0]='A';
	cadena3[1]='d';
	cadena3[2]='e';
	cadena3[3]='u';
	cadena3[4]='\0';
	char cadena4[20]="Hello";
		
	// Printar strings
	printf("Cadena 1 %s \n", cadena1);
	printf("Cadena 2 %s \n", cadena2);
	printf("Cadena 3 %s \n", cadena3);
	printf("Cadena 4 %s \n", cadena4);
	
	// Printar i/o accedir als caràcters de la cadena
	printf("Printa el segon caracter de la cadena1 %c \n", cadena1[1]);
	printf("Printa el sisè caracter de la cadena2 %c \n", cadena2[5]);
	
	// Longitud de caràcters d'una cadena
	int longitud = strlen(cadena2);
	printf("Longitud de la cadena2 es %d \n", longitud);
	
	// Printar en columna
	printf("%c \n", cadena1[0]);
	printf("%c \n", cadena1[1]);
	printf("%c \n", cadena1[2]);
	printf("%c \n", cadena1[3]);
	printf("%c \n", cadena1[4]);
	// Printar en columna amb un for la cadena1
	for(index=0; index < strlen(cadena1); index++){
		printf("%c \n", cadena1[index]);
	}	
	// Modificar els valors d'una cadena
	cadena2[0]='A';
	cadena2[1]='d';
	cadena2[2]='e';
	cadena2[3]='u';
	cadena2[4]='\0';
	//Printar en columna con un while la cadena2
	index=0;
	while(index < strlen(cadena2) ) {
		printf("Index(posicion): %d,  Valor: %c \n", index, cadena2[index]);
		index++;
	}
	
	//otros ejercicios:
	//* Imprimir la cadena 2 empezando por el final
	//* Volver a poner en cadena 2 "Hola que tal"
	//* Hacer una funcion que me diga cuantas vocales tiene una cadena
	

}
