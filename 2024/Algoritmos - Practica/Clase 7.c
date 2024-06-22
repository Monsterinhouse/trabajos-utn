#include <stdio.h>
#include <stdlib.h>

int i, v = 0, cv, cv1, cv2, cv3, maxcv, maxc_v, maxv_v;
float mv, mv1, mv2, mv3, maxmv; 

void reciboDia(int vendedor, int dia) {
    system ("cls");
    printf ("Nro Vendedor: %d\n", vendedor);
    printf ("Importe de Venta: %.2f\n");
    printf ("Dia de Venta: %d", dia);
}

int masCantidad () {
    int mascantidadvendedor = maxc_v;
    return mascantidadvendedor;
}

float masVentas () {
    float masventasvendedor = maxv_v;
    return masventasvendedor;
}

void resumenDia () {
    printf ("=== SOBRE EL DIA ===");
    printf ("Nro Vendedor (Mas Ventas): %d");
}

int main () {
    printf ("===== MENU DE VENTAS =====");
    for (i=0; i < 6; i++) {
        printf ("Dia %d", i);
        printf ("Ingrese las ventas del vendedor 1: ");
        scanf ("%d", &cv1);
        printf ("Ingrese el monto de las ventas del vendedor 1: ");
        scanf ("%f", &mv1);
        reciboDia(v,i);

         if (cv1 > maxcv) {
            maxcv = cv1;

        }

        if (mv1 > maxmv) {
            maxmv = mv1;
        }

        printf ("Dia %d", i);
        printf ("Ingrese las ventas del vendedor 2: ");
        scanf ("%d", &cv2);
        printf ("Ingrese el monto de las ventas del vendedor 2: ");
        scanf ("%f", &mv2);
        reciboDia(v,i);

         if (cv2 > maxcv) {
            maxcv = cv2;
        }

        if (mv2 > maxmv) {
            maxmv = mv2;
        }

        printf ("Dia %d", i);
        printf ("Ingrese las ventas del vendedor 3: ");
        scanf ("%d", &cv3);
        printf ("Ingrese el monto de las ventas del vendedor 3: ");
        scanf ("%f", &mv3);
        reciboDia(v,i);

        if (cv3 > maxcv) {
            maxcv = cv3;
        }

        if (mv3 > maxmv) {
            maxmv = mv3;
        }
    }
}