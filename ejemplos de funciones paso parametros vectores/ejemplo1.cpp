
//Ejemplo de direccion de vector, y su valor.


#include <stdio.h>

int main (){
	
	int nota[8]={4,6,7,6,8,9,8,4};
	
	printf("la direcci�n de memoria mostrando: &nota[0]: %d\n",&nota[0]); /* Escribe una direcci�n de memoria */
	printf("la direcci�n de memoria mostrando: nota:     %d\n",nota); /* Escribe la misma direcci�n */
	printf("la direcci�n de memoria mostrando: &nota:    %d\n",&nota); /* De nuevo escribe la misma direcci�n */
	printf("Valor de la posici�n 0 --->  nota[0]:  %d\n",nota[0]); //Imprimo el valor de nota[2]
	return 0;
	
}


