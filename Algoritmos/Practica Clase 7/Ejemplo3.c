#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr1[9][11];
int arr2[9][11];
int i, j;
int sum1 = 0;
int sum2 = 0;
int len1 = sizeof(arr1);
int len2 = sizeof(arr2);

void fill_random (int arr1[9][11], int arr2[9][11], int max);

void fill_random (int arr1[9][11], int arr2[9][11], int max) {
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 11; j++) {
            arr1[i][j] = (rand() % max) + 1;
            arr2[i][j] = (rand() % max) + 1;
        }
    }

        for (i = 0; i < 9; i++) {
        for (j = 0; j < 11; j++) {
            sum1 += arr1[i][j];
            sum2 += arr2[i][j];
        }
    }
}

void printall () {
    system ("cls");
    printf ("Valores Arreglo M1: \n");           
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 11; j++) {
                printf("%3d ", arr1[i][j]);
            }
            printf ("\n");
        }

        printf ("\nValorez Arreglo M2: \n");
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 11; j++) {
                printf("%3d ", arr2[i][j]);
            }
            printf ("\n");
        }
    
    printf("\nLa suma de los valores del arreglo M1 es: %d\n", sum1);
    printf("La suma de los valores del arreglo M1 es: %d\n", sum2);
}

int main (void) {
    system("cls");
    printf("Bienvenido al confirmador de matrices.\n");
    printf("Al presionar una tecla, se cargaran automaticamente valores enteros\n");
    printf("entre [1] y [100] en las posiciones del array.\n");
    printf("Al finalizar, se informara si la suma de los valores del primer arreglo es identica a");
    printf("la suma de los valores del segundo arreglo.\n");
    printf("\nPresione una tecla para continuar...");
    getch();

    srand (time(NULL));

    fill_random(arr1, arr2, 100);

    printall();

    if (sum1 == sum2) {
        printf ("La suma de las matrices M1 y M2 es igual");
    } else {printf("La suma de las matrices M1 y M2 no es igual");}

    return 'x';
}

