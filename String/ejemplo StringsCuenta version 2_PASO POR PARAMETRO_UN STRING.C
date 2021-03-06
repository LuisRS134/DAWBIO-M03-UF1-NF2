#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* EJEMPLOS DE PASO DE PARAMETROS DE UN STRING 
 * Descripci�: Funci� que conta el n�mero de car�cters sense contar els espais
 * 
 * @param cadena:  Cadena on contem el n� de car�cter
 * 
 * @return: N�mero sencer 
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
// mateixa funci� que p�t rebre una cadena de diferents tamanys
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
// Pas de la cadena per refer�ncia
int contaCaractersPunter(char *s) {
	int num = 0;
	int i;
	for(i=0; i< strlen(s); i++) {
		//printf("Car�cter %c posici� de mem�ria %p \n" , s[i], &s[i]);
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
	printf("Numero car�cters:   %d \n" , numeroCars);
	numeroCars = contaCaracters2("Una altra cadena");	
	printf("Numero car�cters:  %d \n" , numeroCars);
	numeroCars=contaCaractersPunter(lamevaCadena);
	printf("Numero car�cters:   %d \n" , numeroCars);

}
