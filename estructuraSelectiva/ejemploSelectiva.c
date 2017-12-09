#include <stdio.h>

void main(){
/*
    int a = 10;
    int b = 0;

    if(a > b){
        printf("Efectivamente, a es mayor que b\n");
        printf("Saludos.");
    }

    printf("El programa se va a cerrar.\n");
*/
/*  
    int a = 1;
    int b = 0;

    if(a == 0){
        printf("a es un numero igual a 0");
    } else {
        printf("a puede ser cualquier otro numero diferente de 0");
    }
*/
/*
    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if (a > b){
        printf("a es mayor que b\n");
    } else if (a > c){
        printf("a es mayor que c\n");
    } else if (a > d){
        printf("a es mayor que d\n");
    } else{
        printf("a no es mayor que b, c o d\n");
    }
*/

    int x, a, b, c, d;

    scanf("%d", &x);

    switch(x){
        case 1:
            printf("Se cumplio el caso 1\n");
            break;
        case 2:
            printf("Se cumplio el caso 2\n");
            break;
        case 3:
            printf("Se cumplio el caso 3\n");
            break;
        default:
            printf("No se cumplio ninguno de los casos previos\n");
            break;
    }
}