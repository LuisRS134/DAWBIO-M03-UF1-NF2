#include <stdio.h>
#define TAM 20
#define NUMPER 3

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
	printf("\t\t-----------Fecha de Nacimiento-------------\n");
	do
	{
		printf("Dia: ");
		fflush(stdin);
		scanf("%i",&num);
	}while(num>31 || num<1);
	f->dia=num;
	
	do
	{
		printf("Mes: ");
		fflush(stdin);
		scanf("%i",&num);
	}while(num>12 || num<1);
	f->mes=num;
	
	do
	{
		printf("Any: ");
		fflush(stdin);
		scanf("%i",&num);
	}while(num<1);
	f->any=num;
	
}

void getPersona(Persona *p)
{
	//Definir una variable
	printf("\t\t-----------Datos Personales--------\n");
	 printf("Nombre: ");
	fflush(stdin);
	gets(p->nombre);
	

	printf("Apellido: ");
	fflush(stdin);
	gets(p->apellido);

	
	printf("DNI: ");
	fflush(stdin);
	gets(p->dni);

	
	printf("Edad: ");
	fflush(stdin);
	scanf("%i",&p->edad);
			
	getFecha(&p->cumple);		
}

void resetAgenda(Agenda *a);
void listarAgenda(Agenda a);
void insertarAgenda(Agenda *a);

void setPersona(Persona p)
{
	printf("\nTus datos son: %s, %s\t%s\t%i\n",p.apellido, p.nombre, p.dni, p.edad);
	printf("Tu cumple es: %i / %i / %i",p.cumple.dia, p.cumple.mes, p.cumple.any);
}


int main (int argc, char **argv)
{

		Agenda clase;
		
		resetAgenda(&clase);
		int opcion;
			do
			{
				printf("\t----------Bienvenido a la Agenda--------------\n");
				
				printf("1)Resetear Agenda\n");
				printf("2)Insertar Datos\n");
				printf("3)Mostrar Datos de Agenda\n");
				printf("4)Salir\n");
				do
				{
					fflush(stdin);
					scanf("%i",&opcion);
				}while(opcion<1|| opcion>4);
			
						switch(opcion)
						{
							case 1:	resetAgenda(&clase);
									printf("Reseteado!\n");
									break;
									
							case 2: insertarAgenda(&clase);
									printf("Alumno registrado\n");
									break;
							
							case 3:listarAgenda(clase);
									break;
							
							case 4:	
									printf("Salio de la agenda\n");
									break;
									
							default:printf("Error!!\n");break;
						};
			}while(opcion!=4);
		printf("Gracias, Vuelva pronto!\n");
		
		printf("Personas %i\n",clase.tam);	
	return 0;
}
void buscaredad(Agenda a)
{
	int edad;
	int i;
	printf("Que edad busca?");
	fflush(stdin);
	scanf("%i",&edad);
	printf("Buscando personas con %i anys....\n\n",edad);
	for(i=0; i<a.tam; i++)
	{
		//compruebas la edad 
		if(a.lista[i].edad == edad)
		{
			//imprimes datos de la persona
			printf("Apellido: %s, Nombre: %s\n",a.lista[i].apellido, a.lista[i].nombre);
			printf("DNI: %s, Edad: %i\ntu cumple es : %i / %i / %i\n",a.lista[i].dni, a.lista[i].edad, a.lista[i].cumple.dia, a.lista[i].cumple.mes, a.lista[i].cumple.any);
		}
	}
}
void resetAgenda(Agenda *a)
{
	a->tam=0;
}
void listarAgenda(Agenda a)
{
	
	int i ;
	printf("Numero de entradas: %i \n\n",a.tam);
	for(i=0; i<a.tam; i++)
	{
		printf("Apellido: %s, Nombre: %s\n",a.lista[i].apellido, a.lista[i].nombre); //de la agenda a "quiero" tam
		printf("DNI: %s, Edad: %i\ntu cumple es : %i / %i / %i",a.lista[i].dni, a.lista[i].edad, a.lista[i].cumple.dia, a.lista[i].cumple.mes, a.lista[i].cumple.any);
	}
}
void insertarAgenda(Agenda *a)
{
	int ultima;
	if(a->tam < NUMPER)
	{
		//insertamos a->lista[ultima]
		getPersona(&a->lista[ultima]);
		a->tam=a->tam+1;
	}
	else
	{
		//mostramos mensaje de error
		printf("Alcanzo el limite de personas\n");
	}
}
