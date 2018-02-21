
//FORMAS DE DECLARAR CADENAS

////////////////////////////////////
//Version 2. leeemos caracer por caracter

#include <STDIO.h>
#include <CONIO.h>


main()
{
   
      char nombre[10];
      int i;
      
      printf("Introduce nombre y apellidos : ");

      //LEE los caracteres, uno por uno, 20 en total
      for (i=0; i<10; i++) {
          scanf("%c",&nombre[i]);
      }
      
      printf("\n\n Este es el nombre:  ");
      
	  //IMPRIME en pantalla los caracteres, uno a uno
	  for (i=0; i<10; i++) {
          printf("%c",nombre[i]);
      }
      
      getch();            
      
}
