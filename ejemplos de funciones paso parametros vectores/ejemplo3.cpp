#include <stdio.h>

void prueba(int x);


int main() {
	int a=12;
	
	prueba(a); /* Se llama a la función prueba con el valor a */
	
	printf("%d",a); /* escribirá el valor 12 */
}

//funcion prueba
void prueba(int x){
	x=3;
}
