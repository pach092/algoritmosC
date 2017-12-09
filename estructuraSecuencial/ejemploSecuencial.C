#include <stdio.h>

#define k 9
#define m 2

float x;
float aux;
float f;

void main(){
    printf("introduzca el valor de x.\n");
    scanf("%f", &x);

    aux= k*(x-m)*(x-m);
    f= aux/(1+aux);

    printf("el resultado de su operacion es: %f\n", f);
}
