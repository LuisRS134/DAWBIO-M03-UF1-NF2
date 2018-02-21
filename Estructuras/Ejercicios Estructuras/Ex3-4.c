#include <stdio.h>
#define TAM 20
#define NUMPER 3
/*
	M03.PROG-UF1:NF2
		PT: Exercicis Estructures complexes.
		Nombre: Luis Ramos Santos.
		Fecha: 19/02/2018.
		
	Descripción:
		Ex3-Ex4.Realitzar un programa en el qual s'introdueixin totes les dades 
		dels empleats de l'empresa i a continuació els mostri per pantalla	(VERSIÓ MODULAR)

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
	Fecha fnacimiento;
	char dep[TAM];
	float salary;
}Empleado;

 typedef struct
 {
 	Empleado lista[NUMPER];
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

void getPersona(Empleado *e)
{
	//Definir una variable
	printf("\n\376 Datos Personales |\n");
	printf("  -----------------\n");
	 printf("\n\t\20 Nombre: ");
	fflush(stdin);
	gets(e->nombre);
	

	printf("\n\t\20 Apellido: ");
	fflush(stdin);
	gets(e->apellido);

	
	printf("\n\t\20 DNI: ");
	fflush(stdin);
	gets(e->dni);

	
	printf("\n\t\20 Edad: ");
	fflush(stdin);
	scanf("%i",&e->edad);
			
	getFecha(&e->fnacimiento);	
	
	printf("\n\376 Departamento |\n");
	printf("  -----------------\n");
	printf("\n\t\20 Departamento: ");
	fflush(stdin);
	gets(e->dep);
	
	printf("\n\t\20 Salario: ");
	fflush(stdin);
	scanf("%f",&e->salary);
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
				printf("\n\n\t\4 \4 \4 \4 \4 Bienvenido a la Empresa \4 \4 \4 \4 \4\n\n");
				printf("\t\t1. Resetear Registros\n\n");
				printf("\t\t2. Agregar Empleado\n\n");
				printf("\t\t3. Mostrar Datos de Empleados\n\n");
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
									printf("\t\4 Registraste %i empleados\n\n",persona.tam);
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
	printf("\n\376 Numero de Empleados: %i \n\n\n",a.tam);
	for(i=0; i<a.tam; i++)
	{
		printf("Empleado %i\n\n",i+1);
		printf("\t\20 Nombre: %s\t\20 Apellido: %s\n", a.lista[i].nombre, a.lista[i].apellido);
		printf("\t\20 DNI: %s\t\20 Edad: %i\n\t\20 Fecha de nacimiento : %i / %i / %i\n",a.lista[i].dni, a.lista[i].edad, a.lista[i].fnacimiento.dia, a.lista[i].fnacimiento.mes, a.lista[i].fnacimiento.any);
		printf("\t\20 Departamento: %s\t\20 Salario: %.2f\n",a.lista[i].dep,a.lista[i].salary);
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
		printf("\t\t \4 Empleado registrado \4");
		printf("\n\t\t  --------------------\n\n\n");
	}
	else
	{
		system("cls");
		printf("\n\t\t ----------------------------------\n");
		printf("\t\t\4 Alcanzo el limite de empleados!!! \4\n");
		printf("\t\t ----------------------------------\n\n\n");
		system("pause");system("cls");
	}
}
