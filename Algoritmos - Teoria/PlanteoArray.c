#include <stdio.h>
#include <stdlib.h>

char *cal[12] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
float gastos[12];
float sum = 0;
float prom = 0;
int overflow = 0;
int i;

int main () {
    for (i=0;i<12;i++) {
    system("clear");
    printf ("Ingrese los gastos del mes %s: ", cal[i]);
    scanf ("%f", &gastos[i]);

    sum += gastos[i];
    prom = sum / 11;

    if (gastos[i] > (prom*1.10)) {
        overflow++;
    }
}

    system ("clear");

    for (i=0;i<12;i++) {
    printf ("Gastos del mes %s: %.2f\n", cal[i], gastos[i]);
    }

    printf ("\nEl promedio de gasto mensual es: %.2f\n", prom);
    printf ("Hubo %d meses donde el gasto supero en un 10%c al promedio mensual.\n", overflow, 37);
}