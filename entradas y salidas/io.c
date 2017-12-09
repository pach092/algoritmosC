#include <stdio.h>

void main(){
    int numero = 5;
    float numeroFloat = 1000.1;
    char c;

    printf("Ingresa una letra: ");
    scanf("%c", &c);
    printf("La letra ingresada es: %c y el numero vale: %d y el numero flotante es: %1.1f\n", c, numero, numeroFloat);
}