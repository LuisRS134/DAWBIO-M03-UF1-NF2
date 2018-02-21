#include <stdio.h>
#define TAM 20
#define NUMPER 3

/*
	M03.PROG-UF1:NF2
		PT: Exercicis Estructures complexes.
		Nombre: Luis Ramos Santos.
		Fecha: 19/02/2018.
		
	Descripción:
		Ex1-Ex2.Programa que emmagatzemi la informació d'una persona 
		en una estructura i ho mostri per pantalla.	(VERSIÓ MODULAR)

*/
/******ESTRUCTURA******/
typedef struct
{
	int dia;
	int mes;
	int any;
}Fecha;

typedef struct
{
	char nombre[TAM];
	char apellido[TAM];
	char dni[TAM];
	int edad;
	Fecha cumple;
}Persona;

 typedef struct
 {
 	Persona lista[NUMPER];
 	int tam;
 }Agenda;


void getFecha(Fecha *f)
{
	int num;
	printf("\n\376 Fecha de Nacimiento |\n");
	printf("  --------------------\n");
	do
	{
		printf("\n\t\20 Dia: ");
		fflush(stdin);
		scanf("%i",&num);
	}while(num>31 || num<1);
	f->dia=num;
	
	do
	{
		printf("\n\t\20 Mes: ");
		fflush(stdin);
		scanf("%i",&num);
	}while(num>12 || num<1);
	f->mes=num;
	
	do
	{
		printf("\n\t\20 Any: ");
		fflush(stdin);
		scanf("%i",&num);
	}while(num<1);
	f->any=num;
	
}

void getPersona(Persona *p)
{
	//Definir una variable
	printf("\n\376 Datos Personales |\n");
	printf("  -----------------\n");
	 printf("\n\t\20 Nombre: ");
	fflush(stdin);
	gets(p->nombre);
	

	printf("\n\t\20 Apellido: ");
	fflush(stdin);
	gets(p->apellido);

	
	printf("\n\t\20 DNI: ");
	fflush(stdin);
	gets(p->dni);

	
	printf("\n\t\20 Edad: ");
	fflush(stdin);
	scanf("%i",&p->edad);
			
	getFecha(&p->cumple);		
}
/******PROTOTIPOS******/
void resetAgenda(Agenda *a);
void listarAgenda(Agenda a);
void insertarAgenda(Agenda *a);
/******MAIN******/
int main(){
	Agenda persona;
		
		resetAgenda(&persona);
		int opcion;
			do
			{
				system("cls");
				printf("\n\n\t\4 \4 \4 \4 \4 Bienvenido a la Agenda \4 \4 \4 \4 \4\n\n");
				printf("\t\t1. Resetear Agenda\n\n");
				printf("\t\t2. Insertar Datos\n\n");
				printf("\t\t3. Mostrar Datos de Agenda\n\n");
				printf("\t\t4. Salir\n\n");
				printf("\t\4 Introduzca su opcion: ");
					fflush(stdin);
					scanf("%i",&opcion);
						switch(opcion)
						{
							case 1:	system("cls");printf("\n\t\20 Reseteando...\n\n");
									resetAgenda(&persona);
									printf("\n\t\t ------------\n");
									printf("\t\t\4 Reseteado! \4");
									printf("\n\t\t ------------\n");
									system("pause");system("cls");
									break;
									
							case 2: system("cls");printf("\n\t\20 Agregando...\n\n");
									insertarAgenda(&persona);
									system("pause");system("cls");
									break;
							
							case 3:	system("cls");printf("\n\t\20 Mostrando...\n\n");
									listarAgenda(persona);
									system("pause");system("cls");
									break;
							
							case 4:	system("cls");printf("\n\t\20 Saliendo...\n\n");
									printf("\t\4 Registraste %i personas\n\n",persona.tam);
									printf("\n\t\t  -----------------------\n");
									printf("\t\t \3 Gracias por su visita \3 ");
									printf("\n\t\t  -----------------------\n\n\n");
									system("pause");system("cls");
									break;
									
							default:printf("Error!!\n");break;
						};
			}while(opcion!=4);
			
	return 0;
	
}
/******FUNCIÓN******/
void resetAgenda(Agenda *a)
{
	a->tam=0;
}
void listarAgenda(Agenda a)
{
	int i ;
	printf("\n\376 Numero de entradas: %i \n\n\n",a.tam);
	for(i=0; i<a.tam; i++)
	{
		printf("Persona %i\n\n",i+1);
		printf("\t\20 Nombre: %s\t\20 Apellido: %s\n", a.lista[i].nombre, a.lista[i].apellido);
		printf("\t\20 DNI: %s\t\20 Edad: %i\n\t\20 Fecha de nacimiento : %i / %i / %i\n",a.lista[i].dni, a.lista[i].edad, a.lista[i].cumple.dia, a.lista[i].cumple.mes, a.lista[i].cumple.any);
	}
	printf("\n\n");
}
void insertarAgenda(Agenda *a)
{
	int ultima;
	if(a->tam < NUMPER)
	{
		getPersona(&a->lista[ultima]);
		a->tam=a->tam+1;
		system("cls");
		printf("\n\t\t  --------------------\n");
		printf("\t\t \4 Persona registrado \4");
		printf("\n\t\t  --------------------\n\n\n");
	}
	else
	{
		system("cls");
		printf("\n\t\t ----------------------------------\n");
		printf("\t\t\4 Alcanzo el limite de personas!!! \4\n");
		printf("\t\t ----------------------------------\n\n\n");
		system("pause");system("cls");
	}
}
