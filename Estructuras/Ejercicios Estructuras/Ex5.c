#include <stdio.h>
#define TAM 40
#define NUMSOCI 5
/*
	M03.PROG-UF1:NF2
		PT: Exercicis Estructures complexes.
		Nombre: Luis Ramos Santos.
		Fecha: 19/02/2018.
		
	Descripción:
		Ex5.Crea un programa per realitzar la gestió dels socis d'un club. 
			L'estructura del soci té id_soci, nom i edat.
			El programa tindrà les següents funcions:
			 • Alta soci
			 • Consulta un soci
			 • Consulta massiva (Mostra tots els socis)
			 • Esborra soci
			 • Ordenar per número
			 • Ordenar per inicial del nom
			 • Ordenar per edat
			 • Eliminar tots els socis
			 • Sortir
*/
typedef struct{
	int id_soci;
	char nom[TAM];
	int edad;
}Soci;

typedef struct{
	Soci lista[NUMSOCI];
	int tam;
}Registro;

void getSoci(Soci *s)
{
	//Definir una variable
	printf("\n\376 Datos Personales |\n");
	printf("  -----------------\n");
	
	printf("\n\t\20 ID: ");
	fflush(stdin);
	scanf("%i",&s->id_soci);
	
	printf("\n\t\20 Nombre: ");
	fflush(stdin);
	gets(s->nom);

	printf("\n\t\20 Edad: ");
	fflush(stdin);
	scanf("%i",&s->edad);
}
/******PROTOTIPOS******/
void AltaSoci(Registro r[], int *tam);
void ConsultaSoci(Registro r[], int tam);
void MostraSoci(Registro r[], int tam);
void BorrarSoci(Registro r[], int *tam);
void Ordenar_Id(Registro r[], int tam);
void Ordenar_IniNom(Registro r[], int tam);
void Ordenar_edad(Registro r[], int tam);
void BorrarRegistros(Registro r[], int *tam);

/******MAIN******/
int main(){
	Registro socio;
	Registro socios[NUMSOCI];
	int tam=0;	
		BorrarRegistros(&socio);
		int opcion;
			do
			{
				system("cls");
				printf("\n\n\t\4 \4 \4 \4 \4 Bienvenido al Club \4 \4 \4 \4 \4\n\n");
				printf("\t\t1. Alta socio\n\n");
				printf("\t\t2. Consultar socio\n\n");
				printf("\t\t3. Mostrar socios\n\n");
				printf("\t\t4. Borrar socio\n\n");
				printf("\t\t5. Ordenar por Id\n\n");
				printf("\t\t6. Ordenar por inicial nombre\n\n");
				printf("\t\t7. Ordenar por edad\n\n");
				printf("\t\t8. Borrar todos los socios\n\n");
				printf("\t\t9. Salir\n\n");
				printf("\t\4 Introduzca su opcion: ");
					fflush(stdin);
					scanf("%i",&opcion);
						switch(opcion)
						{
							case 1:	system("cls");printf("\n\t\20 Agregando...\n\n");
									AltaSoci(&socio);
									system("pause");system("cls");
									break;
									
							case 2: system("cls");printf("\n\t\20 Mostrando...\n\n");
									ConsultaSoci(socio);
									system("pause");system("cls");
									break;
							
							case 3:	system("cls");printf("\n\t\20 Mostrando...\n\n");
									MostraSoci(socio);
									system("pause");system("cls");
									break;
							
							
							case 4:	system("cls");printf("\n\t\20 Borrando...\n\n");
									BorrarSoci(socios,&tam);
									system("pause");system("cls");
									break;
									
							case 5:	system("cls");printf("\n\t\20 Ordenando...\n\n");
									Ordenar_Id(socio);
									system("pause");system("cls");
									break;
							
							case 6:	system("cls");printf("\n\t\20 Ordenando...\n\n");
									Ordenar_IniNom(socio);
									system("pause");system("cls");
									break;
									
							case 7:	system("cls");printf("\n\t\20 Ordenando...\n\n");
									Ordenar_edad(socio);
									system("pause");system("cls");
									break;
									
							case 8:	system("cls");printf("\n\t\20 Borrando...\n\n");
									BorrarRegistros(&socio);
									printf("\n\t\t ----------\n");
									printf("\t\t\4 Borrado! \4");
									printf("\n\t\t ----------\n");
									system("pause");system("cls");
									break;
							
							case 9:	system("cls");printf("\n\t\20 Saliendo...\n\n");
									printf("\t\4 Registraste %i socios\n\n",socio.tam);
									printf("\n\t\t  -----------------------\n");
									printf("\t\t \3 Gracias por su visita \3 ");
									printf("\n\t\t  -----------------------\n\n\n");
									system("pause");system("cls");
									break;
							
									
							default:printf("Error!!\n");break;
						};
			}while(opcion!=9);
			
	return 0;
	
}
void AltaSoci(Registro r[], int *tam){
	int ultima;
	if(r->tam < NUMSOCI)
	{
		getSoci(&r->lista[ultima]);
		r->tam=r->tam+1;
		system("cls");
		printf("\n\t\t  -----------------\n");
		printf("\t\t \4 Soci registrado \4");
		printf("\n\t\t  -----------------\n\n\n");
	}
	else
	{
		system("cls");
		printf("\n\t\t ----------------------------------\n");
		printf("\t\t\4 Alcanzo el limite de socios!!! \4\n");
		printf("\t\t ----------------------------------\n\n\n");
		system("pause");system("cls");
	}
}
void ConsultaSoci(Registro r){
	int id,i;
	
	printf("\n\tDime el ID del soci a consultar: ");
		scanf("%i",&id);
	printf("\n\n\tBuscando el %i socio",id);	
	for(i=0;i<r.tam;i++){
		if(r.lista[i].id_soci==id){
			printf("\n\tID: %i\n",r.lista[i].id_soci);
			printf("\n\tNombre: %s\n", r.lista[i].nom);
			printf("\n\tEdad: %i\n", r.lista[i].edad);		
		}
	}	
}
void MostraSoci(Registro r){
	int i ;
	printf("\n\376 Numero de socios: %i \n\n\n",r.tam);
	for(i=0; i<r.tam; i++)
	{
		printf("\t\20 ID %i\n",r.lista[i].id_soci);
		printf("\t\20 Nombre: %s\n", r.lista[i].nom);
		printf("\t\20 Edad: %i\n",r.lista[i].edad);
	}
	printf("\n\n");
}
void BorrarSoci(Registro r[],int *tam){
	int id,i,pos;
	
	printf("\n\tDime el ID del soci a borrar: ");
		scanf("%i",&id);
	pos=-1;
	for(i=0;i<*tam;i++)
	{
		if(r->lista[i].id_soci==id) pos=i;
	}
	if(pos>=0)
	{
		for(i=pos;i<*tam -1 ;i++)
		{
			printf("\n\tSocio: %s\n",r->lista[i].id_soci);
			printf("\n\tNombre: %s\n", r->lista[i].nom);
			printf("\n\tEdad: %i\n", r->lista[i].edad);
		}	
		*tam=*tam-1;
	}
	
}
void Ordenar_Id(Registro r){
	
}
void Ordenar_IniNom(Registro r){
	
}
void Ordenar_edad(Registro r){
	
}
void BorrarRegistros(Registro *r){
	r->tam=0;
}


