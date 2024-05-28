#include <stdio.h>
#include <stdlib.h>

int res, ca, cd, ci, ct, pa;

int main () {
    while (res != 0) {
        printf ("==== Atencion Covid =====\n");
        printf ("Ingrese el tipo de paciente: \n");
        printf ("1) Covid POSITIVO\n2) Covid NEGATIVO");
        scanf ("%d", &res);

        if (res = 1) {
            printf ("Ingrese el tipo de COVID: \n");
            printf ("1) Asintomatico\n2) Domiciliario\n3) Internacion\n4) Terapia Intensiva");
            scanf ("%d", &res);

            switch (res) {
            case 1:
                ca++;
                pa++;
                break;
            
            case 2:
                cd++;
                pa++;
                break;
            
            case 3:
                ci++;
                pa++;
                break;
            
            case 4:
                ct++;
                pa++;
                break;

            default:
                break;
            }
        }
    }
    
}