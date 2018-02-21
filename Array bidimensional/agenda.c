#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

void borrar_contacto(char nombre[][50]);
void buscar_contac_telfo(unsigned long int telefono[]);
void listar_contacto(char nombre[][50], unsigned long int telefono[]);
void alta_contacto(char nombre[][50], unsigned long int telefono[]);
void imprimir_menu();
void inicializar_agenda(char nombre[][50]);

int main(){
	char nombre[TAM][50];
	unsigned long int telefono[TAM];
	
	int opcion;
	inicializar_agenda(nombre);
	do{
		imprimir_menu(nombre);
		scanf("%d",&opcion);
		
		switch(opcion){
			case 1:listar_contacto(nombre,telefono);break;
			case 2:alta_contacto(nombre, telefono); break;
			case 3:break;
			case 4:break;
			case 5:break;
			case 6:break;
			case 7:borrar_contacto(nombre);break;
			default:printf("Error");
		}
			
	}while(opcion!=7);
	
	return 0;
}
void modificar_contacto(){
	char aux[50];
	printf("%s",&aux);
	
	int i;
	for(i=0; i<TAM;i++){
		if(strcmp(nombre[i],aux)==0){
			printf("INtruducde el nuevo telefono: ");
			scanf("%lu", &telefono[i]);
		}
	}
}
void imprimir_menu(){
	printf("\t\tAgenda\n");
	printf("\t\t---------\n");
	printf("\t1.Listar contactos\n");
	printf("\t2.Dar de alta contacto\n");
	printf("\t3.Modificar tlfo de contacto\n");
	printf("\t4.Buscar contacto por tlfo\n");
	printf("\t5.Buscar tlfo por contacto\n");
	printf("\t6.Borrar contacto\n");
	printf("\t7.Salir\n");
	printf("\nIntroduce una opcion: ");
}	
void borrar_contacto(char nombre[][50]);
void inicializar_agenda(char nombre[][50]){
	int i;
	for(i=0; i<TAM; i++){
		strcpy(nombre[i],"");
	}
}
int nextContactID(char nombre[][50]){
	int i;
	for(i=0;i<TAM;i++){
		if(strcmp(nombre[i],"")==0)return i;
	}
	return -1;
}	
void alta_contacto(char nombre[][50], unsigned long int telefono[]){
	int id=nextContactID(nombre);
	if(id==-1){
		printf("La agenda esta llena\n");
	}else{
		printf("\nIntroduce el nombre: ");
		scanf("%s",&nombre[id]);
		
		printf("\nIntroduce el telefono: ");
		scanf("%lu",&telefono[id]);
	}
}
	
void listar_contacto(char nombre[][50], unsigned long int telefono[]){
		int i;
		for(i=0;i<TAM;i++){
			if(strcmp(nombre[i],"")!=0){
				printf("Nombre: %s-----Telefono: %lu\n",nombre[i],telefono[i]);
			}
		}
	}

void buscar_contac_telfo(unsigned long int telefono[]){
	unsigned long int tlfo;
	int i;
	
	printf("Introduce el tlfo a buscar: ");
	scanf("%lu",&tlfo);
	for(i=0;i<TAM;i++)
	if(telefono[i]==tlfo{}){
		if(strcmp(nombre[i],"")!=0){
			printf("Nombre: %s\n", nombre[i]);
			found=1;
		}	
	}
	if(!found){
		printf("");
	}
}
