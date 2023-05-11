#include <stdio.h>
#include <stdlib.h>

float total = 0;
float notas = 0;
float prom = 0;
float ap = 0;
float desap = 0;
float porc_ap = 0;
float porc_desap = 0;
int nn = 0; 
int i;
int des = 0;

int main () {
    system ("cls");
    system ("color 04"); // Habia que aclarar los cambios en rojo :D
    printf ("Ingrese cuantas notas hay que promediar: ");
    scanf ("%d", &nn);
    system ("color 0a");
    for (i=0; i<nn; i++) {
        system ("cls");
        // A diferencia del ejemplo 3, este contador en vez de ser un valor fijo, 
        // ahora se rige por el valor que haya ingresado el usuario
        printf ("Ingrese las notas de los alumnos a promediar ( %d/%d )\n", i, nn);
        printf ("(Recuerde que se pueden ingresar valores con hasta 2 (dos) valores luego del punto. (Ej: 00.00))\n");
        printf ("Nota: ");
        scanf ("%f", &notas);
        total = total + notas;
        if (notas>4) {
            ap++;
        } else {
            desap++;
        }
        }

        prom = total / ap;
        porc_ap = (40 * ap) / 100;
        porc_desap = (40 * desap) / 100;

        system ("cls");
        printf ("=======================================\n");
        printf ("(Recordatorio: Se aprueba con 4 o mas.)\n");
        printf ("El promedio de notas es: %.2f\n", prom);
        printf ("Porcentaje de alumnos aprobados: %.2f\n", porc_ap);
        printf ("Porcentaje de alumnos desaprobados: %.2f\n", porc_desap);
        printf ("=======================================\n");

        printf ("\nDesea ingresar otros valores?\n");
        printf ("1) Si\n2) No\n");
        printf ("Res: ");
        scanf ("%d", &des);

        if (des == 1) {
            main();
        }
        else {
            system ("cls");
            printf ("Hasta Luego!");
            exit(0);
        }
    }

