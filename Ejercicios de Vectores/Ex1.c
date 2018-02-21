#include<stdio.h>
#include<stdlib.h>
#define TAM 10

/*
	M03-Programación: UF1-NF2.
	Nombre:	Luis Ramos Santos.
	Fecha: 17/01/2018.
	
	Descripción:
			Vectores->Ex1. Programa que lee una secuencia de 10 números enteros sobre un vector y obtiene 
			e imprime cuáles son el mayor y el menor, y cuántas veces se repiten ambos. 
*/

/*****PSEUDOCÓDIGO*****/
	/*
		PROGRAMA menor_y_mayor_de_un_vector
			VAR
				array: numero[1..10] de enteros;
				max:entero;
				min:enteor;
				c_max:entero;
				c_min:entero;
			INICIO
				-Rellenar el vector de numeros.
				PARA i=1 hasta 10 HACER
					ESCRIBIR ("Dime un número");
					LEER(numero[i]);
				FIN PARA
				
				-Recorrer para adivinar el mayor numero y sus repeticiones.
				max=numero[1]; min=numero[1];
				PARA i=2 hasta 10 HACER
					SI (max<numero[i]) ENTONCES
						max=numero[i];
					FIN SI
					SI	(min>numero[i]) ENTONCES
						min=numero[i];
					FIN SI 
				FIN PARA
				
				-Recorrer para saber las repeticiones del max.
				c_max=0; c_min=0;
				PARA i=1 hasta 10 HACER
					SI max=numnero[i] ENTONCES
						c_max++;
					FIN SI;
					SI min=numero[i] ENTONCES
						c_min++;
					FIN SI
				FIN PARA
			
		
	*/
int main(){
	
	int numero[TAM];
	int max, min, c_max=0, c_min=0, i;
	
	for(i=0; i<TAM; i++)
	{
		printf("Dime un numero: ");
			scanf("%i",&numero[i]);
		
		if(max<numero[i])
		{
			max=numero[i];
		}
		
		if(min>numero[i])
		{
			min=numero[i];
		}
	}
		printf("Mayor:%i\tMenor: %i",max,min);
	for(i=0; i<TAM; i++)
	{
		if(max=numero[i])
		{
			c_max++;
		}
		if(min=numero[i])
		{
			c_min++;
		}
	}
	printf("Se repiten max: %i\tmin: %i",c_max,c_min);
	

	return 0;
}

