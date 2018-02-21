
//FORMAS DE DECLARAR CADENAS

////////////////////////////////////
//Version 3. con puntero a la direccion del  primer caracter de la cadena

#include <STDIO.h>

main(){
	char *punt_cadena= "Hola Mundo";
	
	printf("La cadena es: %s", punt_cadena);
	
	punt_cadena++;
	printf("La cadena es: %s", punt_cadena);
}
