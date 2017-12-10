// Esta es una tienda que vende productos de Platzi *en la terminal

#include <stdio.h>
#include <string.h>

char opcion[8];
int gorras;
int totalGorras = 0;
int termo;
int totalTermo = 0;
int playera;
int totalPlayera = 0;
int taza;
int totalTaza = 0;
int seguirComprando = 1;

void main(){
    while(seguirComprando == 1){
        printf("Elije el producto que buscas\n");
        printf("Ingrese gorra para comprar una\n");
        printf("Ingrese termo para comprar uno\n");
        printf("Ingrese playera para comprar una\n");
        printf("Ingrese taza para comprar una\n");
        scanf("%s", opcion);

        if(strcmp(opcion, "gorra") == 0){
            printf("Cada gorra cuesta $5, cuantas quieres?: ");
            scanf("%d", &gorras);
            totalGorras = totalGorras + (gorras * 5);
            printf("Su total de gorras es: %d\n", totalGorras);
        }else if(strcmp(opcion, "termo") == 0){
            printf("Cada termo cuesta $10, cuantos quieres?: ");
            scanf("%d", &termo);
            totalTermo = totalTermo + (termo * 10);
            printf("Su total de gorras es: %d\n", totalTermo);
        }else if(strcmp(opcion, "playera") == 0){
            printf("Cada playera cuesta $15, cuantas quieres?: ");
            scanf("%d", &playera);
            totalPlayera = totalPlayera + (playera * 15);
            printf("Su total de gorras es: %d\n", totalPlayera);
        }else if(strcmp(opcion, "taza") == 0){
            printf("Cada taza cuesta $20, cuantas quieres?: ");
            scanf("%d", &taza);
            totalTaza = totalTaza + (taza * 15);
            printf("Su total de gorras es: %d\n", totalTaza);
        }else{
            printf("El producto especificado no existe, prueba otra opcion\n");
            printf("En caso de querer otro producto presion 1, para salir presione cualquier numero\n");
            scanf("%d", &seguirComprando);
        }
        printf("Gracias por comprar.\n");
    }
}