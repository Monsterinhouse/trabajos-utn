#include <stdio.h>
#include <stdlib.h>

float total = 0;
float venta = 0;
float prom = 0;
float m_max = 0;
int d_max = 0;
int i;
int des = 0;

int main () {
    system ("color 0a");
    for (i=1; i<8; i++) {
        system ("cls");
        printf("Ingrese las ventas del dia %d: \n", i);
        printf ("Recuerde que se permiten valores con 2 (dos) ceros luego del punto (Ej: $00.00)\n");
        printf ("Ventas: $");
        scanf ("%f", &venta);
        total = total + venta;
        if (venta>m_max) {
            m_max = venta;
            d_max = i;
        }
    }

    prom = total / 7;

    system ("cls");
    printf ("=======================================\n");
    printf ("La cantidad total de ventas son: $%.2f\n", total);
    printf ("El promedio de ventas es: $%.2f\n", prom);
    printf ("El dia %d fue el dia con mayor cantidad de ventas! ($%.2f)\n", d_max, m_max);
    printf ("=======================================\n");

    printf ("\nDesea ingresar otros valores?\n");
    printf ("1) Si\n2) No\n");
    printf ("Res: ");
    scanf ("%d", &des);

    if (des == 1) {
        main();
    }
    else {
        exit(0);
    }
}