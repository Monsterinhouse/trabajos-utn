#include <stdio.h>
#include <stdlib.h>

int n = 0;
int c_10 = 0;
int c_20 = 0;
int c_30 = 0;
int c_40 = 0;
int c_dif = 0;
int min1 = 0;
int des = 0;
int i;

int main () {
    system ("color 0a");
    for (i=0;i<i+1;i++) {
        system ("cls");
        printf ("Ingrese los numeros a identificar (N%c: %d): \n", 167, i);
        printf ("(Si desea salir, escriba 3 veces el numero '-1' (%d/3) )\n", min1);
        printf ("Numeros: ");
        scanf ("%d", &n);

        if (n == 10) {
            c_10++;
        }
        else if (n == 20) {
            c_20++;
        }
        else if (n == 30) {
            c_30++;
        }
        else if (n == 40) {
            c_40++;
        }
        else if (n < 0) {
            min1++;
        }
        else if (n != 10 || 20 || 30 || 40) {
            c_dif++;
        }
        else {}

        if (min1 == 3) {
            system ("cls");
            printf ("==========================================================\n");
            printf ("La cantidad de veces que se ingreso el N%c 10 es: %d veces\n", 167, c_10);
            printf ("La cantidad de veces que se ingreso el N%c 20 es: %d veces\n", 167, c_20);
            printf ("La cantidad de veces que se ingreso el N%c 30 es: %d veces\n", 167, c_30);
            printf ("La cantidad de veces que se ingreso el N%c 40 es: %d veces\n", 167, c_40);
            printf ("La cantidad de numeros diferentes a los especificados son: %d veces\n", c_dif);
            printf ("==========================================================\n\n");
            printf ("Desea identificar otros valores?\n");
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
    }
    return ('x');
}