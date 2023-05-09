#include <stdio.h>;
#include <stdlib.h>;

float n1 = 0;
float n2 = 0;
float res = 0;
int des = 0;

int main () {
    printf("==== Calculadora ====\n");
    printf ("Ingrese el primer valor: \n");
    scanf ("%f", &n1);
    printf ("Ingrese el segundo valor: \n");
    scanf ("%f", &n2);
    system("cls");

    printf("Que operacion desea realizar?\n");
    printf ("1) Suma\n");
    printf ("2) Resta\n");
    printf ("3) Multiplicacion\n");
    printf ("4) Division\n");
    printf ("5) Potencia\n");
    printf ("6) Raiz\n");
    printf("Res: ");
    scanf("%d", &des);

    switch (des) {
        case 1 :
        res = n1 + n2;
        printf ("El resultado de la suma entre %.2f y %.2f es: %.2f", n1, n2, res);
        break;

        case 2:
        res = n1 - n2;
        printf ("El resultado de la resta entre %.2f y %.2f es: %.2f", n1, n2, res);
        break;

        default :
        printf("Error! No ingresaste una opcion valida");
    }
    return ('x');
}