#include <stdio.h>
#include <stdlib.h>

char nya [30];
int notas = 0;
int n_max = 0;
float prom = 0;
int x = 0;
int i;

int main () {
    while (x<=50) {
        if (i > 0) {
            system ("cls");
            printf ("Nombre: %s ; Nota maxima: %d ; Promedio: %.2f", nya, n_max, prom);
        }
        printf ("Ingrese el nombre del alumno: ");
        fgets (nya, sizeof(nya), stdin);
            for (i=0;i<=7;i++) {
                system ("cls");
                printf ("Ingrese la nota N%c %d: ",169, i);
                scanf ("%d", &notas);

                if (notas > notas) {
                    n_max+=notas;
                }
            }
    }
}