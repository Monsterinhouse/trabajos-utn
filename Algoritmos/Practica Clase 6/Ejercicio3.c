#include <stdio.h>
#include <stdlib.h>

int covid = 0;
int p_at = 0;
int p_asin = 0;
int p_dom = 0;
int p_inter = 0;
float p_prom = 0;
int  p_ti = 0;
int i;
char des;

int main () {
    system ("color 0a");
    system ("cls");
    for (i=0; i<i+1;i++) {
    printf ("Hola!\nBienvenido al proceso de atencion de pacientes.\nAntes de empezar, usted viene Covid?\n");
    printf ("1) Si\n2) No\n");
    printf ("Res: ");
    scanf ("%d", &covid);

    if (covid = 1) {
        p_at++;
        system ("cls");
        printf ("Lamentamos su situacion\nPor favor, indique el tipo de atencion que desea: \n");
        printf ("A) Asintomatico\nD) Domiciliario\nI) Internacion\nT) Terapia Intensiva");
        scanf ("%c", &des);

        switch (des) {
        case 'A':
            p_asin++;
            printf ("Usted ha elegido el tratamiento Asintomatico.");
            break;
        
        case 'D':
            p_dom++;
            printf ("Usted ha elegido el tratamiento Domiciliario.");
            break;
        
        case 'I':
            p_inter++;
            printf ("Usted ha elegido la Internacion.");
            break;
        
        case 'T':
            p_ti++;
            printf ("Usted ha elegido el tratamiento de Terapia Intensiva.");
            break;
        
        case 'X':
            p_prom = (p_ti * 100) / p_at;
            printf ("========================\n");
            printf ("Cantidad de pacientes atendidos: %d\n", p_at);
            printf ("Porcentae de pacientes en Terapia Intensiva: %.2f\n", p_prom);
            printf ("Cantidad de pacientes atendidos: %d\n", p_at); // ?????????????? me falta camviar este
        default:
            printf ("Ingrese un valor permitido >:(");
            break;
        }
    }
    else {printf ("Salud!\nPresione una tecla para continuar...");}
    }
    return ('x');
}
