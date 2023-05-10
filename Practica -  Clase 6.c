#include <stdio.h>
#include <stdlib.h>

float venta = 0;
float total = 0;
float prom = 0;
float monto_max = 0;
int dia_max = 0;
int i;

int main () {
    system ("0a");
    for(i = 1; i<8; i++) {
        system ("cls");
        printf ("Ingrese las ventas del dia N° %d\n(Solo se permiten valores con dos (2) decimales despues de la coma)\n", i);
        printf ("Ventas:");
        scanf("%f", &venta);

        total = total + venta;

        if (venta > monto_max) {
            monto_max = venta;
            dia_max = i;
        }
    }

    prom = total / 7;

    system ("cls");
    printf ("El promedio de ventas es: %.2f\n", prom);
    printf ("El dia con mas recaudacion fue: %d\nCon un total recaudado de: $%.2f", dia_max, monto_max);
}