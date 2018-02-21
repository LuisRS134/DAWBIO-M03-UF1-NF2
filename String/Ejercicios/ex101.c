#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MSG 200

//Funciones.
void mensaje();
void encriptar(char msg[MSG]);
void desencriptar(char msg[MSG]);

//Main.
int main()
{
	//Instanciar.
	mensaje();
}

//Procesar Función 1-->Para escribir mensaje.
void mensaje()
{
	//Declarar variable string.
	char msg[MSG];
	
	//Pedimos el mensaje al usuario.
	printf("\n\t \376 Mensaje:\n\n\t  \20 ");// uso /20 y \376 de decorativo.
		/*Uso gets para que podamos recoger la cadena de caracteres
		que el usuario a introducido*/
		gets(msg);
		
	printf("\n");//Salto de línea.
	
	//Instanciar Función2 para encriptar.
	encriptar(msg);	
}

//Procesar Función 2-->Para encriptar el mensaje. 
void encriptar(char msg[MSG])
{
	//Iniciar variable.
	int i;
	
	printf("\n\t \376 Tu mensaje encriptado es:\n\n\t  \20 ");// uso /20 y \376 de decorativo.
	
	//Procesamos datos con FOR
		/*El bucle recorre  con la función strlen() que cogera el string y 
		dará la longitud de la cadena. Imprimiremos en ASCII*/
		for(i=0; i<strlen(msg); i++)
		{
			/*Condición IF-> Nos muestra hasta el final
			del caracter del string del mensaje del usuario*/
			if(msg[i]!='\0')
			{
				//Mostramos respuesta + 1.
				msg[i]=msg[i]+1;
				if(msg[i]=='z')
					msg[i]='a';
					else if(msg[i]=='Z')
						msg[i]='A';
				else
					msg[i]++;	
			}
			printf("%i",msg[i]);
		}
		printf("\n\n");//Salto de línea.	
	//Instanciar funcion para desencriptar.	
	desencriptar(msg);
}

void desencriptar(char msg[MSG])
{
	//Iniciar variable.
	int i;
	
	printf("\n\t \376 Tu mensaje desencriptado es:\n\n\t  \20 ");// uso /20 y \376 de decorativo.
	
	//Procesamos datos con FOR
		/*El bucle recorre el string con los datos en ASCII que obtuvo
		de la función encriptar() e imprimiremos*/
		for(i=0; strlen(msg); i++)
		{
			if(msg[i]=='a'){
				msg[i]='z';
			}
				else if(msg[i]=='A'){
					msg[i]='Z';
				}
			else{
				msg[i]--;
			}
				
				//Mostramos respuesta
			printf("%c",msg[i]);
		}	
		
						
		printf("\n\n");//Salto de línea.
}
