
//FORMAS DE DECLARAR CADENAS

////////////////////////////////////
//Version 2. leeemos caracer por caracter

//2. sin tama�o. diferencia: no especifico tama�o, 
//se asigna implicitamente \0. el numeros de caracteres + \0
#include <STDIO.h>

main(){
	char cadena[]= "Hola mundo";
	
	printf("La cadena es: %s", cadena);
}

