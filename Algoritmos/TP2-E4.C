#include <stdio.h>
#include <stdlib.h>

float val_dol = 0;
float val_dol_tot = 0;
float comision = 0;
float val_com_tot = 0;
int cant_dol = 0;
float mont_tot = 0;
int des = 0;

int main () {
    system ("color 0a");
    system("cls");
    printf ("Ingrese la cantidad de dolares comprados: ");
    scanf ("%d", &cant_dol);
    system("cls");

    printf ("Cual es el valor del dolar hoy?\n(En caso de tener decimales, el programa solo admite dos (2) valores despues del punto (.)\n");
    printf ("Valor: $");
    scanf ("%f", &val_dol);
    system("cls");

    if (cant_dol>501 && cant_dol<1501) {
        comision = 2;
    }
    else if (cant_dol>1501 && cant_dol<3501) {
        comision = 2.5;
    }
    else if (cant_dol>3501) {
        comision = 4;
    }
    else{}

    val_dol_tot = cant_dol * val_dol;
    val_com_tot = (val_dol_tot * comision) / 100;
    mont_tot = val_dol_tot - val_com_tot;

    printf ("===== Compra de dolares =====\n");
    printf ("- Cantidad de Dolares comprados: %d\n", cant_dol);
    printf ("- Valor del Dolar: $%.2f\n", val_dol);
    printf ("- Comision Operativa (%c %.2f): %.2f\n", 37, comision, val_com_tot);
    printf ("================================\n");
    printf ("- Monto total a Abonar: ARS$ %.2f\n\n", mont_tot);

    printf("Desea realizar otra operacion?\n");
    printf("1) Si\n2) No\n");
    printf("Res: ");
    scanf ("%d", &des);

    if (des == 1) {
        main();
    }
    else {
        exit(0);
    }
}