#include <stdio.h>
#include <stdlib.h>

// Declaracion de Variables
float total = 0;
float notas = 0;
float prom = 0;
float ap = 0;
float desap = 0;
float porc_ap = 0;
float porc_desap = 0;
int i;
int des = 0;

// Inicio del programa
int main () {
    system ("color 0a");
    for (i=1; i<41; i++) {
        system ("cls");
        // El contador de dias es un detalle para que el usuario sepa exactamente que dia deberia ingresar que valor
        printf ("Ingrese las notas de los alumnos a promediar ( %d/40 )\n", i); 
        printf ("(Recuerde que se pueden ingresar valores con hasta 2 (dos) valores luego del punto. (Ej: 00.00))\n");
        printf ("Nota: ");
        scanf ("%f", &notas);
        total = total + notas;
        if (notas>=4) {
            ap++;       // La estructura de decision If verifica que si los valores son mayores a 4, 
        } else {        // se le sume a la variable 'ap'. Sino, se le suma a la variable 'desap'
            desap++;
        }
        }

        prom = total / ap;
        porc_ap = (40 * ap) / 100;      // Cuentas logicas
        porc_desap = (40 * desap) / 100;

        // Simple formateo y presentacion ordenada de los valores
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

