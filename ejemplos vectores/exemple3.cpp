
/*exercici 3:
3. Algoritmo que lee una secuencia de 10 n�meros enteros carg�ndolos en un 
vector y a continuaci�n encuentra y muestra la posici�n que ocupa el primer 
n�mero negativo en caso de existir. En caso contrario escribir� un mensaje 
indic�ndolo.*/

#include <stdio.h>
#include <conio.h>


main(){
int vec[10],i,posicion=-1;
printf ("Dame 10 numeros por teclado:\n ");

//iniciamos el vector
for(i=0;i<10;i++){
    printf("n.%d: ",i);
    scanf("%d",&vec[i]); 
                        
} 
//recorremos el vector para ver si hay alguno negativo
for(i=0;i<10;i++){
    if (vec[i]<0 && posicion==-1){
       posicion=i;
    }                         
}  


//comparo si hay negativos y miro la posicion
if(posicion==-1) printf("\nNo hay ninguno negativo");
else printf("El primer negativo est� en la poscion: %d",posicion);
    
    
//imprimo el vector    
printf("Tu vector: ");
for (i=0;i<10;i++) printf(" %d ",vec[i]);

getch();    

}





