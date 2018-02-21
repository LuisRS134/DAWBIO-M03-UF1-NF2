#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* EJEMPLOS DE PASO DE PARAMETROS DE UN STRING 
 * Descripció: Funció que conta el número de caràcters sense contar els espais
 * 
 * @param cadena:  Cadena on contem el nº de caràcter
 * 
 * @return: Número sencer 
 *  
 * */
int contaCaracters(char cadena[100]) {
	int num = 0;
	int i;
	char espai=' ';
	for(i=0; i<strlen(cadena);i++) {
		if(cadena[i]!=espai) {
			num++;
		}
	}
	return num;
}
// mateixa funció que pòt rebre una cadena de diferents tamanys
int contaCaracters2(char cadena[]) {
	int num = 0;
	int i;
	char espai=' ';
	for(i=0; i<strlen(cadena);i++) {
		if(cadena[i]!=espai) {
			num++;
		}
	}
	return num;
}
// Pas de la cadena per referència
int contaCaractersPunter(char *s) {
	int num = 0;
	int i;
	for(i=0; i< strlen(s); i++) {
		//printf("Caràcter %c posició de memòria %p \n" , s[i], &s[i]);
		if(s[i]!=' ') {
			num ++;
		}
	}
	return num;
}


int main() {
	char lamevaCadena[100] = "a e i o u";
	int numeroCars;
	
	numeroCars = contaCaracters(lamevaCadena);
	printf("Numero caràcters:   %d \n" , numeroCars);
	numeroCars = contaCaracters2("Una altra cadena");	
	printf("Numero caràcters:  %d \n" , numeroCars);
	numeroCars=contaCaractersPunter(lamevaCadena);
	printf("Numero caràcters:   %d \n" , numeroCars);

}
