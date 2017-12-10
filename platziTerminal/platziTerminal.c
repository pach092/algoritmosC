#include <stdio.h>
#include <string.h>

void main(){
    char userName[25];
    int decision;
    int bucle = 1;
    int estudiando = 1;

    while(bucle == 1){
        printf("Bienvenidos a Platzi Terminal\n");
        printf("Ingresa tu nombre de Usuario: ");
        scanf("%s", userName);
        printf("Bienvenido %s, vamos a acceder a tu seccion\n", userName);

        if(strcmp(userName, "julian") == 0){
            while(estudiando == 1){
                printf("Esto es PlatziTerminal Free Edition, que deseas hacer?\n");
                printf("Ingrese:\n1 para estudiar\n2 para leer el blog\nIngrese cualquier otro valor para salir\n");
                scanf("%d", &decision);
                if(decision == 1){
                    printf("Estas en la seccion de estudios, saca el maximo provecho\n");
                }else if(decision == 2){
                    printf("Estas en el blog, aprovecha!\n");
                }else{
                    printf("Adios, %s\n", userName);
                    estudiando = 2;
                }
            }
        }else if(strcmp(userName, "juliana") == 0){
            while(estudiando == 1){
                printf("Esto es PlatziTerminal Standard Edition, que deseas hacer?\n");
                printf("Ingrese:\n1 para estudiar\n2 para leer el blog\nIngrese cualquier otro valor para salir\n");
                scanf("%d", &decision);
                if(decision == 1){
                    printf("Estas en la seccion de estudios, saca el maximo provecho\n");
                }else if(decision == 2){
                    printf("Estas en el blog, aprovecha!\n");
                }else{
                    printf("Adios, %s\n", userName);
                    estudiando = 2;
                }
            }
        }else if(strcmp(userName, "paula") == 0){
            while(estudiando == 1){
                printf("Esto es PlatziTerminal Premium Edition, que deseas hacer?\n");
                printf("Ingrese:\n1 para estudiar\n2 para leer el blog\n3 para mentoria\nIngrese cualquier otro valor para salir\n");
                scanf("%d", &decision);
                if(decision == 1){
                    printf("Estas en la seccion de estudios, saca el maximo provecho\n");
                }else if(decision == 2){
                    printf("Estas en el blog, aprovecha!\n");
                }else if(decision == 3){
                    printf("Estas en la seccion de solicitud de mentorias\n");
                }else{
                    printf("Adios, %s\n", userName);
                    estudiando = 2;
                }
            }
        }else{
            printf("No eres un usuario registrado, o escribiste mal tu nombre\n");
            printf("Prueba de nuevo por favor");
        }
    }
}