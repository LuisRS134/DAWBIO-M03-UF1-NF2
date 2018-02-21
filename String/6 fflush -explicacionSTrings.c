
////////////////////////////////////
//fflush... el buffer del teclado también se ha quedado almacenada la secuencia de escape (\n)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 200

int main()
{

	char nombre[TAM];
	
	int i;
	//1. Desenvolupeu un programa que demani a l’usuari el seu nom 
	//i l’escrigui en majúscules 

	printf("Introduzca nombre:\n");
	fflush(stdin);
	gets(nombre);	

	for(i=0; i<strlen(nombre); i++)
	{
		printf("%c", toupper(nombre[i]));
	}
	
	
	return 0;
}
