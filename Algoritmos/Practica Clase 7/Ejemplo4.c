#include <stdio.h>
#include <stdlib.h>

#define N_HAB 100;

// const int N_HAB = 100;
int N_HAB_MINUS = 0;
int h_count = 0;
int n_hab = 0;
int aux_hab = 0;
int des, des2;
int i, x;
int aux = 0;

struct Habitacion habitaciones[100];

struct Habitacion
{
    int n_habitacion;
    int piso;
    char tipo[20];
    float precioxdia;
    int comfort;
    char estado[10];
};

void MostrarHabitacion () {
    system ("cls");
    printf ("N° Habitaciones: %d", habitaciones[x].n_habitacion);
}

void CargarHabitacion () {
        system ("cls");
        printf ("El numero de habitacion es: %d\n", habitaciones[i].n_habitacion);
        printf ("Ingrese el numero de piso: "); 
        scanf ("%d", &habitaciones[i].piso);
        printf ("Ingrese el tipo de habitacion: ");
        gets (&habitaciones[i].tipo);
        printf ("Ingrese el precio por dia ($xx.xx): $");
        scanf ("%f", &habitaciones[i].tipo);
        printf ("Ingrese el comfort de la habitacion (X/5): ");
        scanf ("%d", &habitaciones[i].comfort);
        printf ("Ingrese el estado de la habitacion: ");
        gets (&habitaciones[i].estado);
        aux_hab++;
        N_HAB_MINUS = 100 - 1;
        i = aux;
}

void CargarHabitacionMenu () {
    system("cls");
    printf("Como desea cargar la habitacion?");
    printf("1)Siguiente Habitacion\n2)Habitacion Especifica(Por N° Habitacion)\n");
    printf ("Res: ");
    scanf ("%d", &des);

    if (des == 1) 
    {
        h_count++;
        for (i = 1; i <= h_count; i++) {
            CargarHabitacion();
        }
    }
    else if (des == 2)
    {
        aux = i;
        printf ("Ingrese el numero de habitacion: ");
        scanf ("%d", &n_hab);
        n_hab = i;
        CargarHabitacion();
    }
    
}

int main () {
    system ("cls");
    printf (" ===== Manager de Habitaciones =====\n");
    printf ("Bienvenido al manager de habitaciones\nPor favor, indique su operacion: \n");
    printf ("1)Confirmar habitaciones disponibles\n2)Listar datos\n3)Imprimir estado de las habitaciones (Ord. por tipo)\n4)Liquidar Habitacion\n5)Ingresar/Registrar habitacion\n");
    printf ("Res: ");
    scanf ("%d", &des);

    switch (des) 
    {
    case 1 : 
        system ("cls");
        printf ("Hay %d habitaciones disponibles", 100);
        break;
    
    case 2 :
        x = 0;
        printf(" ===== Listar Datos =====\n");
        MostrarHabitacion();
        scanf ("%d", &des2);
        if (des2 == 1) {
            x++;
        }
        else if (des == 2) {
            x--;
        }
        
        break;
    
    default:
        break;
    }
    return 0;
}