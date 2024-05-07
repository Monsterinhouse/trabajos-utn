#include <stdio.h>
#include <stdlib.h>

int mins, hojas;
float c_hojas, c_mins, porc, seguro;

int main () {
    printf ("==== Libreria ====\n");
    printf ("Ingrese los minutos utilizados: ");
    scanf ("%d", &mins);
    printf ("Ingrese las hojas utilizadas: ");
    scanf ("%d", &hojas);

    c_hojas = hojas * 15;
    c_mins = mins * 10;
    porc = (mins * 1) / 100;
    seguro = (porc * 5);

    system ("cls");

    printf ("==== Recibos ====\n");
    printf ("(-) Minutos Utilizdos: %d\n", mins);
    printf ("(-) Hojas Utilizadas: %d\n", hojas);
    printf ("(-) Costo total de minutos: $%.2f\n", c_mins);
    printf ("(-) Costo total de hojas: $%.2f\n", c_hojas);
    printf ("(-) Costo por servicio (Seguro): $%.2f\n", seguro);
}