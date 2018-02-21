#include <stdio.h>

#define ELEMENTOS	3

struct estructura_amigo {
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
	};

main()
{
	struct estructura_amigo amigo[ELEMENTOS], *p_amigo;
	int num_amigo;

	p_amigo = amigo;	/* apunta al primer elemento del array */

	/* Introducimos los datos mediante punteros */
	for( num_amigo=0; num_amigo<ELEMENTOS; num_amigo++ ) {
		printf( "\nDatos del amigo %i:\n", num_amigo+1 );

		printf( "Nombre: " );
		gets(amigo[num_amigo].nombre);
		printf( "Apellido: " );
		gets(amigo[num_amigo].apellido);
		printf( "Teléfono: " );
		gets(amigo[num_amigo].telefono);
		printf( "Edad: " );
		scanf( "%i", &amigo[num_amigo].edad );

		while(getchar()!= '\n');	/* Vacía el buffer de entrada */

		p_amigo++;			/* Siguiente elemento */

	}

	/* Imprimimos los datos */
	p_amigo = amigo;

	for( num_amigo=0; num_amigo<ELEMENTOS; num_amigo++ ) {

		printf( "Mi amigo %s ", p_amigo->nombre );
		printf( "%s tiene ", p_amigo->apellido );
		printf( "%i años ", p_amigo->edad );
		printf( "y su teléfono es el %s.\n" , p_amigo->telefono );

		p_amigo++;  
	}
}
