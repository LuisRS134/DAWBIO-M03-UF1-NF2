#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

//Prototipo de funci�n.
void alreves(char nombre[TAM]);

//Main
int main()
{
	//Iniciar variable.	
	char nombre[TAM];
	
	//T�tulo.
	printf("\n\t\t\4 \4 \4 \4 \4 Strings - Ex6 \4 \4 \4 \4 \4\n\n");
	
	//Introducci�n.
	printf("\n\t\4 Programa que pone al reves el nombre.\n\n");
	
	//Pedimos al usuario datos.
	printf("\n\t\t\376 Escribe un nombre: ");
		gets(nombre);
	
	//Instanciamos funci�n.	
	alreves(nombre);		
}

//Desarrollo de la funcion.
void alreves(char nombre[TAM])
{
	//Iniciar variable.
	int i;
	
	//Inicio una variable y le doy el valor de la longitud del array.
	int alreves=strlen(nombre)-1;
	
	printf("\n\t \20 %s al reves es ",nombre);
	
	/*Bucle FOR,donde el inicio es la lonmgitud total del array hasta el primera posici�n del array.*/
	//for(i=alreves-1; i>=0; i--)
	for(i=alreves; i>=0; i--)
	{
		//Mostramos respuesta.
		putchar(nombre[i]);//imprime toda la cadena.
	}
	
	printf("\n\n");//Salto de l�nea.
}
