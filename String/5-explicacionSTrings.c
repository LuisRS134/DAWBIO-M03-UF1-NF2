
//FORMAS DE DECLARAR CADENAS

////////////////////////////////////
//Version 5. con gets

#include <STDIO.h>
#include <CONIO.h>

main()
{
   
      char nombre[20];
      
      printf("Introduce nombre y apellidos : ");
      gets(nombre);

      printf("%s", nombre);
      getch();            
      
}
