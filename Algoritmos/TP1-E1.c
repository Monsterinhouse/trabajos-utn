#include <stdio.h>
#include <stdlib.h>

char nya[50];
float sb = 0;
float sh = 0;
float sd = 0;
float sn = 0;
// ===========
int des1 = 0;
int des2 = 0;
int des3 = 0;
int des4 = 0;
int desf = 0;
// ===========
int d_aus = 0;
float val_aus = 1000;
float tot_aus = 0;
float premio = 0;
float comida = 0;
float viaticos = 0;
// ===========
float o_s = 0;
float ley = 0;
float jubi = 0;

int main () {
    system("cls");
    fflush(stdin);
    printf("===Recibo de Sueldo===\n");
    printf("Ingrese su nombre y apellido: ");
    fgets (nya, sizeof(nya), stdin);
    printf("Ingrese el sueldo basico: ");
    scanf("%f", &sb, &sh, &sd);

    system("cls");
    printf("\nEl empleado goza de premio?");
    printf("\n1) Si\n2) No\nRes: ");
    scanf("%d", &des1);

    if (des1 == 1) {
        printf ("Ingrese el monto del premio: $");
        scanf("%f", &premio);
        system("cls");
    }
    else {system("cls");}

    printf ("\nEl Empleado goza de comida?: ");
    printf("\n1) Si\n2) No\nRes: ");
    scanf("%d", &des2);

    if (des2 == 1) {
        printf ("Ingrese el monto de la comida: $");
        scanf("%f", &comida);
        system("cls");
    }
    else {system("cls");}

    printf("\nEl Empleado goza de viaticos?: ");
    printf("\n1) Si\n2) No\nRes: ");
    scanf("%d", &des3);

    if (des3 == 1) {
        printf ("Ingrese el monto de los viaticos: $");
        scanf ("%f", &viaticos);
        system("cls");
    }
    else {system("cls");}

    printf ("El Empleado ha estado ausente?");
    printf("\n1) Si\n2) No\nRes: ");
    scanf("%d", &des4);

    if (des4 == 1) {
        printf ("Ingrese la cantidad de dias ausentes %c\n", 187);
        printf("(Recuerde que los dias ausentes significan una deduccion de $%.2f)\n", val_aus);
        printf ("Dias: ");
        scanf ("%d", &d_aus);
        tot_aus += d_aus * val_aus;
        sd += tot_aus;
        system("cls");
    }
    else {system("cls");}

    // Cuentas totalmente 

    o_s += (sb * 3) / 100;
    ley += (sb * 3) / 100;
    jubi += (sb * 11) / 100;

    sh += premio + comida + viaticos;
    sd += tot_aus + o_s + ley + jubi;

    sn += (sb + sh) - sd;

    system("cls");
    printf("====Recibo de Sueldo====\n");
    printf("Nombre y Apellido: %s", nya);
    printf ("Sueldo Basico: $%.2f\n", sb);
    printf("=========================\n");
    printf("(+) Premio: $%.2f\n", premio);
    printf("(+) Comida: $%.2f\n", comida);
    printf("(+) Viaticos: $%.2f\n", viaticos);
    printf("(+=) Haberes Totales: $%.2f\n", sh);
    printf("=========================\n");
    printf("(-) Dias Ausentes: %d\n", d_aus);
    printf("(-) Descuento por %d dias ausente: -$%.2f\n", d_aus, tot_aus);
    printf("(-) Obra Social (%3): $%.2f\n", o_s);
    printf("(-) Ley xxxxxx (%3): $%.2f\n", ley);
    printf("(-) Jubilacion (%11): $%.2f\n", jubi);
    printf("(-=) Deducciones Totales: $%.2f\n", sd);
    printf("=========================\n");
    printf("(*=*) Sueldo Neto: $%.2f\n", sn);
    printf("=========================\n\n\n");

    printf("Desea ingresar los datos de otro empleado?: ");
    printf("\n1) Si\n2) No\nRes: ");
    scanf("%d", &desf);

    if (desf == 1) {
        system("cls");
        main();
    }
    else{
        exit(0);
    }
    return('x');
    // Jesus Fucking Christ
    // Juancito, si lees esto, no me quemes flaco. Half a battery te pido troesma.
    // Despues con tiempo lo dejo mas comentado y bonito y esas cosas
;}