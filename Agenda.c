
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void imprimir_menu() {
    printf("AGENDA\n");
    printf("------\n");
    printf("1. Listar contactos\n");
    printf("2. Dar de alta contacto\n");
    printf("3. Modificar tlfo de contacto\n");
    printf("4. Buscar contacto por tlfo\n");
    printf("5. Buscar tlfo por contacto\n");
    printf("6. Borrar contacto\n");
    printf("7. Salir\n");
    printf("Introduce una opcion: ");
}

void inicializar_agenda(char nombre[][50]) {
    int i;
    for(i=0; i<MAX; i++) {
        strcpy(nombre[i], "");
    }
}

int nextContactID(char nombre[][50]) {
    int i;
    
    for(i=0; i<MAX; i++) {
        if(strcmp(nombre[i], "")==0) {
            return i;
        }
    }
    
    return -1;
}

void alta_contacto(char nombre[][50], unsigned long int telefono[]) {
    int id = nextContactID(nombre);
    
    if(id==-1) {
        printf("\nLa agenda esta llena\n");
    } else {
        printf("\nIntroduce el nombre: ");
        scanf("%s", &nombre[id]);
        printf("\nIntroduce el telefono: ");
        scanf("%lu", &telefono[id]);
    }
}

void listar_contactos(char nombre[][50], unsigned long int telefono[]) {
    int i;
    
    for(i=0; i<MAX; i++) {
        if(strcmp(nombre[i], "") != 0) {
            printf("Nombre: %s --- Telefono: %lu\n", nombre[i], telefono[i]);
        }
    }
}

void findContactbyPhone(char nombre[][50], unsigned long int telefono[]) {
    unsigned long int tlfo;
    printf("Introduce el tlfo a buscar: ");
    scanf("%lu", &tlfo);
    
    int i;
    int found=0;
    
    for(i=0; i<MAX; i++) {
        if(telefono[i] == tlfo) {
            if(strcmp(nombre[i],"")!=0) {
                printf("Nombre: %s\n", nombre[i]);
                found=1;
            }
        }
    }
    
    if(!found) {
        printf("No se ha encontrado el telefono");
    }
}

void findContactbyName(char nombre[][50], unsigned long int telefono[]) {
    char aux[50];
    printf("Introduce el nombre a buscar: ");
    scanf("%s", &aux);
    printf("Introduce el nuevo telefono: ");
            scanf("%lu", &telefono[i]);
    int found=0;
    int id;
    
    int i;
    for(i=0; i<MAX; i++) {
        if(strcmp(nombre[i], aux)==0) {
            printf("El telefono es: %lu\n", telefono[i]);
            found=1;
        }
    }
    
    if(!found) {
        printf("No se ha encontrado el nombre\n");
    }
}

void modificar_contacto(char nombre[][50], unsigned long int telefono[]) {
    char aux[50];
    printf("Introduce el nombre a modificar: ");
    scanf("%s", &aux);
    
    int found=0;
    
    int i;
    for(i=0; i<MAX; i++) {
        if(strcmp(nombre[i], aux)==0) {
            printf("Introduce el nuevo telefono: ");
            scanf("%lu", &telefono[i]);
            found=1;
        }
    }
    
    if(!found) {
        printf("No se ha encontrado el contacto\n");
    }
}

void borrar_contacto(char nombre[][50], unsigned long int telefono[]) {
    char aux[50];
    printf("Introduce el nombre a borrar: ");
    scanf("%s", &aux);
    
    int found=0;
    
    int i;
    for(i=0; i<MAX; i++) {
        if(strcmp(nombre[i], aux)==0) {
            strcpy(nombre[i], "");
            telefono[i]=0;
            found=1;
        }
    }
    
    if(!found) {
        printf("No se ha encontrado el contacto\n");
    }
}

int main() {
    char nombre[MAX][50];
    unsigned long int telefono[MAX];
    
    int opcion;
    
    inicializar_agenda(nombre);
    
    do {
        imprimir_menu();
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1: listar_contactos(nombre, telefono);
                    break;
            case 2: alta_contacto(nombre, telefono);
                    break;
            case 3: modificar_contacto(nombre, telefono);
                    break;
            case 4: findContactbyPhone(nombre, telefono);
                    break;
            case 5: findContactbyName(nombre, telefono);
                    break;
            case 6: borrar_contacto(nombre, telefono);
                    break;
        }
    } while(opcion>=1 && opcion<=6);
    
}

