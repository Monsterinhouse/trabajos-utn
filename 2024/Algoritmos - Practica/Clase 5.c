#include <stdio.h>
#include <stdlib.h>

int x, d_max;
float cant, aux=0, prom, max_cant = 0;

int main () {
    for (x=0; x<7; x++) {
        system ("cls");
        printf ("===== Promedio de la semana =====\n");
        printf ("Ingrese las ventas del dia %d: ", x);
        scanf ("%f", &cant);

        aux += cant;

        if (cant > max_cant) {
            max_cant = cant;
            d_max = x;
        }
    }

    prom = (aux / 7);

    system ("cls");

    printf ("PROMEDIO: %.2f\n", prom);
    printf ("DIA MAXIMO: %d / CANTIDAD: %.2f\n", d_max, max_cant);
    
}