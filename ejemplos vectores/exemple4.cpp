/*  4. Programa que lee una secuencia de 10 números enteros sobre un vector y obtiene y muestra cuáles son el mayor y el menor, 
y cuántas veces se repiten ambos.*/

#include <stdio.h>
#include <conio.h>


main(){
int vec[10],i,max,min,repmax=0,repmin=0;
printf ("Dame 10 numeros por teclado:\n ");

//iniciamos el vector
for(i=0;i<10;i++){
    printf("n.%d: ",i);
    scanf("%d",&vec[i]); 
                        
} 

//inicializo las primeras variables max i min al primer elemento
max=vec[0];
min=vec[0];

//buscamos mayores y menores
for(i=0;i<10;i++){
    if (vec[i]>max){
      max=vec[i];
      repmax=0;  //repeticion de numero max
    } 
    if (vec[i]<min){
      min=vec[i];
      repmin=0; //repeticion de numero min
    } 
    if (vec[i]==max) repmax++;
    if (vec[i]==min) repmin++;
       
}  
printf("el maximo es %d y sale %d veces\n y el minimo %d y sale %d veces",max,repmax,min,repmin);

getch();    

}

