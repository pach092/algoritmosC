#include <stdio.h>

void main(){
    int itemMenu;

    printf("Menu de tienda\n");
    printf("--------------\n");
    printf("   Productos  \n");
    printf("--------------\n");
    printf("1. Lata de atun\n");
    printf("2. Pan\n");
    printf("3. Gaseosas\n");
    printf("4. Arroz\n");
    printf("5. Queso\n");
    printf("--------------\n");
    printf("Por favor selecciona un item: ");
    scanf("%d", &itemMenu);

    switch(itemMenu){
        case 1:
            printf("Has escogido lata de atun");
            break;
        case 2:
            printf("Has escogido pan");
            break;
        case 3:
            printf("Has escogido gaseosa");
            break;
        case 4:
            printf("Has escogido arroz");
            break;
        case 5:
            printf("Has escogido queso");
            break;
        default:
            printf("Lo sentimos opcion no disponible");
            break;
    }
}