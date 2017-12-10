#include <stdio.h>

void main(){
    int decision = 1;
    int incrementador = 0;

    while(decision == 1){
        incrementador++;
        printf("Ejecucion #%d\n", incrementador);
        printf("Si desea continuar presione 1 o cualquier otra para salir: ");
        scanf("%d", &decision);
    }
    printf("Gracias, adios");
}