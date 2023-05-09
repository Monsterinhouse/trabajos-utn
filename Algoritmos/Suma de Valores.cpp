// Suma de Valores simple

#include <stdio.h>  // Se añaden las librerias

int a = 0;        // Se declara la variable A
int b = 0;       // Se declara la variable B
int res = 0;    // Se declara la variable C (Res)

int main () {       // Se declara la funcion Main
    printf("Ingrese el primer valor (A): ");    // Se imprime el primer enunciado
    scanf ("%d", &a);       // Se escanea el primer valor ingresado
    printf("Ingrese el segundo valor (B): ");   // Se imprime el segundo enunciado
    scanf ("%d", &b);       // Se escanea el segundo valor ingresado

    res = a + b;    // Se realiza la operacion matematica, sumando la variable A y la variable B, la cual se almacena en la variable Res

    printf("\nEl resultado del valor A y B es: %d", res);   // Se imprime el ultimo enunciado junto con el resultado de la variable
}
// C'est Fini