#include <stdio.h>

void prueba(int x);


int main() {
	int a=12;
	
	prueba(a); /* Se llama a la funci�n prueba con el valor a */
	
	printf("%d",a); /* escribir� el valor 12 */
}

//funcion prueba
void prueba(int x){
	x=3;
}
