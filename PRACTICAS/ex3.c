#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define ALUM 3
#define ASIG 4
/*

	M03.PROG-UF1:NF2
		PT1: Práctica de NF2.
		Nombre: Luis Ramos Santos.
		Fecha: 13/02/2018.
		
	Descripción:
		Ex3
			   
*/

/***PROTOTIPOS******/
void rellenar_notas(int notas[][ASIG]);
void imprimir_notas(int notas[][ASIG]);
int media_notas_fila(int notas[ALUM][ASIG]); 
int media_notas_colum(int notas[][ASIG]);
void buscar_alumne(int notas[][ASIG]);

/*******MAIN*******/
int main()
{
	
	printf("\n\t\4 \4 \4 \4 \4 NOTAS DE ALUMNOS \4 \4 \4 \4 \4\n\n\n");
	srand(time(NULL));
	int notas[ALUM][ASIG];
	rellenar_notas(notas);
	imprimir_notas(notas);
	media_notas_fila(notas);
	media_notas_colum(notas);
	buscar_alumne(notas);
	
	
}

/******FUNCIONES*******/
void rellenar_notas(int notas[ALUM][ASIG]){
   
    int i,j;

    for(i=0; i<ALUM; i++) {
        for(j=0; j<ASIG; j++) {
            notas[i][j] = rand()%10+1;
        }
    }
}
void imprimir_notas(int notas[ALUM][ASIG]){
	int i, j;
	
	printf("\n");
	printf("\t          |M01\tM02\tM03\tM04");
	printf("\n------------------+------------------------");
	for(i=0;i<ALUM;i++){
		printf("\nFILA %i - ALUMNE %i | ",i+1,i+1);
		for(j=0;j<ASIG;j++){
			printf("%i\t", notas[i][j]);
		}
		printf("\n");
	}
	printf("\n------------------+------------------------");
	printf("\n\n\n");
}
int media_notas_fila(int notas[ALUM][ASIG]){
	float media, vector_media[ALUM];
    int i,j;
  	printf("\t\376 NOTAS DE ALUMNOS\n\n");
  	for(i=0;i<ALUM;i++){
  		
  		for(j=0;j<ASIG;j++){
  			
  				media+=notas[i][j];	  
		  }
		 
  		media=media/j;
  		vector_media[j]=media;
  		media=0;
  		if(i%2==1)
  		printf("  \20 ALUMNE %i - media %.2f\n",i+1,vector_media[j]);
	  }
	    printf("\n");
}
int media_notas_colum(int notas[][ASIG]){
	float media, vector_media[ASIG];
    int i,j;
    printf("\t\376 NOTAS DE MODULOS\n\n");
    for(j=0;j<ASIG;j++){
        for(i=0;i<ALUM;i++){
           media+=notas[i][j];
        }
        media=media/i;
        vector_media[j]=media;
        media=0;
        if(j%2==0)
        printf("  \20 M0%i - media %.2f\n",j+1,vector_media[j]);
    }
    printf("\n");
}

void buscar_alumne(int notas[][ASIG]){
	int alum,i,j,nota_mayor,nota_menor;
	printf("Dime el numero del ALUMNE : ");
	scanf("%i",&alum);
	printf("\n");
    int found=0;
    printf("ALUMNE %i | ",alum);
    for(i=0;i<ALUM;i++){
  		for(j=0;j<ASIG;j++){
  			if(i+1==alum)
  			{
  				printf("%i\t",notas[i][j]);
  				if(nota_mayor<notas[i][j])
  					nota_mayor=notas[i][j];
  				
  				if(nota_menor>=notas[i][j])
  					nota_menor=notas[i][j];
  				found=1;
			}
  		}
  		
  	}
	 if(!found)
        printf("No se ha encontrado el ALUMNE %i",alum);
    
    else{
    	printf("\nLa nota mayor es: %i",nota_mayor);
    	printf("\nLa nota menor es: %i",nota_menor);
	}

}
