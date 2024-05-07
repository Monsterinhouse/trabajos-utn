#include <stdio.h>
#include <stdlib.h>

int dni;
int reclamos;
int cR, cA, cB, res, tres;;

int main() {
    system ("cls");
    printf("==== Reclamos ====");
    printf("Existen Reclamos?: ");
    scanf("%d", &res);
    while (res = 1) {
        printf ("Ingrese su DNI (8 caracteres): ");
        scanf ("%d", &dni);
        printf ("Ingrese el tipo de reclamo: ");
        printf ("1) Alta");
        printf ("2) Baja");
        printf ("3) Revolucion");
        scanf ("%d", &tres);|
    }
    
}
