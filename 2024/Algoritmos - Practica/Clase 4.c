#include <stdio.h>
#include <stdlib.h>

int c_mon = 0, mon2, mon5, mon10, aux, res;
float v1, v2, v3;

int main () {
    if (c_mon <= 129) {
        system ("cls");
        printf ("===== Maquina Expendedora =====\n");
        printf ("El costo de la bebida es $129\n");
        printf ("Ingrese la cantidad de monedas correspondientes\n");
        printf ("Solo admite monedas de $2 - $5 - $10\n");
        printf ("Ingrese la cantidad de monedas de $2: ");
        scanf ("%d", &mon2);
        c_mon += mon2 * 2 ;
        printf ("Ingrese la cantidad de monedas de $5: ");
        scanf ("%d", &mon5);
        c_mon += mon5 * 5;
        printf ("Ingrese la cantidad de monedas de $10: ");
        scanf ("%d", &mon10);
        c_mon += mon10 * 10;
    }
    if (c_mon >= 129) {
        printf ("Cantidad alcanzada!");
        aux = c_mon - 129;
        if (aux == 0) {
            system ("cls");
            printf ("Operacion sin Vuelto!\n");
            printf ("No hay nada mas para decir\n");
        }
        else if (aux / 2 || 5 || 10) {
            system ("cls");
            v1 = aux / 2;
            v2 = aux / 5;
            v3 = aux / 10; 
            printf ("Operacion con Vuelto!\n");
            printf ("Vuelto de $2: %.2f\n", v1);
            printf ("Vuelto de $5: %.2f\n", v2);
            printf ("Vuelto de $10: %.2f\n", v3);
        }
    }
    else if (c_mon < 129) {
        system ("cls");
        printf ("Cantidad insuficiente!\n");
        printf ("Ni hao!");
    }
}