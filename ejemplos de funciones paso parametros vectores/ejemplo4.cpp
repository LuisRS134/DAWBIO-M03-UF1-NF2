#include <stdio.h>

void prueba(int x[]);


int main(){
	int a[4];
	a[0]=12;
	
	prueba(a); /* Se llama a la funci�n prueba con el valor a */
	
	printf("%d",&a[0]); /* escribir� el valor 3 */
}


void prueba(int x[]){
	x[0]=3;
}
