#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAM 20
/*

	M03.PROG-UF1:NF2
		PT1: Práctica de NF2.
		Nombre: Luis Ramos Santos.
		Fecha: 13/02/2018.
		
	Descripción:
		Ex1
			   
*/

/***PROTOTIPOS******/
void nombre();
void nombre_reves(char nombre[TAM]);




/*******MAIN*******/
int main()
{
	nombre();
}

/******FUNCIONES*******/
void nombre(){
	char nombre[TAM];
	
	printf("Dime el nombre: ");
	gets(nombre);
	
	nombre_reves(nombre);
}
void nombre_reves(char nombre[TAM]){
	char reves[TAM];
	strcpy(reves,nombre);
	int i;
	int alreves=strlen(reves)-1;
	
	for(i=alreves; i>=0; i--)
	{
		
		putchar(reves[i]);
	}
	printf("\n\n");
	
	if(strcmp(reves,nombre)==0){
		printf("No lo es");
	}
	else{
		printf("Es palindromo");
	}
}
