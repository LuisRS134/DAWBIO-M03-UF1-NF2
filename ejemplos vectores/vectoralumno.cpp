//mi primer vector de notas

#include <stdio.h>

int main(){
	
//	# defino variables
	
	int i,N=5;
	int notas[5];
	int sumaauxiliar=0,media=0;
	/* otra declaracion 
	int notas[longitud]
	#define longitud 10;*/
	
//	#leer las 10 calificaciones del alumno
	 //	#almacenar las notas en un vector notas[10]
	 for (i=0; i<N; i++){
	  printf("Dame una nota\n");
	  scanf("%i",&notas[i]);
	 }
	  
		
//	#calcular la suma del vector

for (i=0;i<N;i++){
	 sumaauxiliar=sumaauxiliar+notas[i];
	}
	printf(" suma vector= %i",sumaauxiliar);
	
//	#calcular la media
	
	media=sumaauxiliar/N;
	 
	
//	#imprime la media
	printf(" la media de las notas del alumno es = %i",media);
		
return 0;	
}
