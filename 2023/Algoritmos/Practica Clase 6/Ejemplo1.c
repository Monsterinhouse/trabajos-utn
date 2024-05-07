#include <stdio.h>
#include <stdlib.h>

int notas[40];
int sum = 0;
int prom = 0;
int i;
int len = sizeof(notas);

int main () {
    for (i=0;i<41;i++) {
        printf ("Ingrese las notas a promediar (%d/40): ", i);
        scanf ("%d", &notas[i]);
    }

    for (i = 0; i < len; i++) {     
       sum = sum + notas[i];    
    } 

    // Hay un error con alguna de las cuentas, que no me da los valores
    // que deberia darme. Si saben arreglarlo, mandenmelo.
    prom = sum / 40;

    system ("cls");
    printf ("La suma de las notas es: %d\n", sum);
    printf ("Las notas son: ");
    for (i=0;i<41;i++) {
        printf ("%d, ", notas[i]);
    }

    printf ("\nEl promedio es: %d", prom);
}