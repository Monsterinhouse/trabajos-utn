#include <stdio.h>
#include <stdlib.h>

float sb, sf, premio, comida, viatico, p_aus, os, ley, jubi, desc_aus;
int aus, res;
char nya[50];

int main () {
    system ("cls");
    printf ("Ingrese su nombre y apellido: ");
    gets (nya);
    printf ("Ingrese el sueldo basico: $");
    scanf ("%f", &sb);

    sf = sb;

    printf ("El empleado goza de premio? (1: Si / 2: No): ");
    scanf ("%d", &res);
    if (res == 1) {
        printf ("Indique la cantidad de premio: $");
        scanf ("%f", &premio);
        sf -= premio;
    }
    else {}

    printf ("El empleado goza de viaticos? (1: Si / 2: No): ");
    scanf ("%d", &res);
    if (res == 1) {
        printf ("Indique el importe de viaticos: $");
        scanf ("%f", &viatico);
        sf -= viatico;
    }
    else {}

    printf ("El empleado goza de comida? (1: Si / 2: No): ");
    scanf ("%d", &res);
    if (res == 1) {
        printf ("Indique el costo de comida: $");
        scanf ("%f", &comida);
        sf -= comida;
    }
    else {}

    printf ("Ingrese el costo de ausencia: ");
    scanf ("%f", &p_aus);
    printf ("Ingrese la cantidad de ausentes: ");
    scanf ("%d", &aus);

    system("cls");

    os = (sb*3) / 100;
    ley = (sb*11) / 100;
    jubi = (sb*3) / 100;
    desc_aus = aus * p_aus;

    printf ("==== Recibo de sueldo ====\n");
    printf ("(#) Nombre y apellido: ");
    puts (nya);
    printf ("\n(#) Sueldo Basico: $%.2f\n", sb);
    printf ("(-) Viaticos: $%.2f\n", viatico);
    printf ("(-) Comida: $%.2f\n", comida);
    printf ("(-) Premio: $%.2f\n", premio);    
    printf ("(-) Obra social (%c3): %.2f$\n", 37, os);
    printf ("(-) Jubilacion (%c11): %.2f$\n", 37, jubi);
    printf ("(-) Ley 19032 (%c3): %.2f$\n", 37, ley);
    printf ("(#) Cantidad de Ausentes: %d\n", aus);
    printf ("(-) Coste de ausencia: %.2f\n", desc_aus);
    sf -= os;
    sf -= ley;
    sf -= jubi;
    sf -= desc_aus;
    printf ("(!) Sueldo Final: %.2f", sf);
}