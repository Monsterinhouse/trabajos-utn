#include <stdio.h>
#include <stdlib.h>

char nya [30];
int notas = 0;
int n_max = 0;
float prom = 0;
int x;
int i;

int main () {
    while (x<3) {
        fflush (stdin);
        system ("cls");
        printf ("Ingrese el nombre del alumno: ");
        fgets (nya, sizeof(nya), stdin);
            for (i=0;i<=7;i++) {
                system ("cls");
                printf ("Ingrese la nota N%c %d: \n\n",169, i);
                if ((i > 7)) {} {
                    printf ("Nombre: %sNota maxima: %d ; Promedio: %.2f\n", nya, n_max, prom);
                    getch();
                }
                scanf ("%d", &notas);
                n_max+=notas;
                if (n_max<notas) {
                    n_max = notas;
                    }
            }
    }
}