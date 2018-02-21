#include <stdio.h>
#define ELEMENTOS 100
struct estructura_amigo {	/* Definimos la estructura estructura_amigo */
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
	}amigo;

//struct estructura_amigo amigo;	/* Declaramos la variable amigo con esa estructura */

main()
{
	printf( "Escribe el nombre del amigo: " );	
	gets(amigo.nombre);
	printf( "Escribe el apellido del amigo: " );
	gets(amigo.apellido);
	printf( "Escribe el número de teléfono del amigo: " );
	gets(amigo.telefono);
	printf( "Mi amigo %s %s tiene el número: %s.\n", amigo.nombre,
		amigo.apellido, amigo.telefono );
}
