#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int covid = 0;
int p_at = 0;
int p_asin = 0;
int p_dom = 0;
int p_inter = 0;
float p_prom = 0;
int  p_ti = 0;
int i;
int desb = 0;
int sdes = 0;
char des;

// Para Agus:
//          AY BLDA SAMEEEEEEEEEEEE
//                          atte: Cruz Lucas

void desicion() {
    system ("cls");
        des = getchar();
        p_at++;
        printf ("Lamentamos su situacion.\nPor favor, indique el tipo de atencion que desea: \n");
        printf ("A) Asintomatico\nD) Domiciliario\nI) Internacion\nT) Terapia Intensiva\n");
        printf ("Opcion: ");
        scanf ("%c", &des);

        switch (des) {
        case 'A':
            p_asin++;
            system ("cls");
            printf ("Usted ha elegido el tratamiento Asintomatico.\n");
            printf ("Su decision sera ingresada en nuestra base de datos.\n");
            printf ("Desea ingresar otro paciente?\n");
            printf ("1) Si\n2) No\n");
            printf ("Res: ");
            scanf ("%d", &sdes);
            if (sdes == 1) {
                main();
            } else {
                system ("cls");
                final();
                }
            break;
        
        case 'D':
            p_dom++;
            system ("cls");
            printf ("Usted ha elegido el tratamiento Domiciliario.\n");
            printf ("Su decision sera ingresada en nuestra base de datos.\n");
            printf ("Desea ingresar otro paciente?\n");
            printf ("1) Si\n2) No\n");
            printf ("Res: ");
            scanf ("%d", &sdes);
            if (sdes == 1) {
                main();
            } else {
                system ("cls");
                final();
                }
            break;
        
        case 'I':
            p_inter++;
            system ("cls");
            printf ("Usted ha elegido la Internacion.\n");
            printf ("Su decision sera ingresada en nuestra base de datos.\n");
            printf ("Desea ingresar otro paciente?\n");
            printf ("1) Si\n2) No\n");
            printf ("Res: ");
            scanf ("%d", &sdes);
            if (sdes == 1) {
                main();
            } else {
                system ("cls");
                final();
                }
            break;
        
        case 'T':
            p_ti++;
            system ("cls");
            printf ("Usted ha elegido el tratamiento de Terapia Intensiva.\n");
            printf ("Su decision sera ingresada en nuestra base de datos.\n");
            printf ("Desea ingresar otro paciente?\n");
            printf ("1) Si\n2) No\n");
            printf ("Res: ");
            scanf ("%d", &sdes);
            if (sdes == 1) {
                main();
            } else {
                system ("cls");
                final();
                }
            break;

        default:
            system ("cls");
            printf ("Ingrese un valor permitido >:(\n");
            printf ("Presione cualquier tecla para volver...");
            p_at--;
            getch();
            desicion();
            break;
        }
}

void final () {
        p_prom = (p_ti * 100) / p_at;
        printf ("==============================================================\n");
        printf ("Cantidad de pacientes atendidos: %d\n", p_at);
        printf ("Porcentae de pacientes en Terapia Intensiva: %c%.2f\n",37 , p_prom);
        printf ("Cantidad de pacientes en Tratamiento Asintomatico: %d\n", p_asin);
        printf ("Cantidad de pacientes en Tratamiento domiciliario: %d\n", p_dom);
        printf ("Cantidad de pacientes en Internacion: %d\n", p_inter);
        printf ("Cantidad de pacientes en Tratamiento de Terapia Intensiva:  %d\n", p_ti);
        printf ("==============================================================\n");
        exit (0);
 }
int main () {
    system ("color 0a");
    system ("cls");
    for (i=0; i<i+1;i++) {
    printf ("Hola!\nBienvenido al proceso de atencion de pacientes.\nAntes de empezar, usted viene Covid?\n");
    printf ("1) Si\n2) No\n");
    printf ("Res: ");
    scanf ("%d", &covid);

    if (covid == 1) {
        desicion();
    }
    else {
        system ("cls");
        printf ("Salud!\nDesea ingresar otro paciente?\n");
        printf ("1) Si\n2) No\n");
        printf ("Res: ");
        scanf ("%d", &desb);

        if (desb == 1) {
            main();
        } else {final();}
        }
    }
    return ('x');
}
