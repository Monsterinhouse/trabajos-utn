#include <stdio.h>
#include <stdlib.h>

int c_mesas = 51;
int c_monto = 51;
int des = 0;
float cubierto = 100;
float monto = 0;
int arr_mesas[51];
float arr_monto[51];
int i,x;

void IngresarMesa() {
    system ("cls");
    arr_mesas[-1];
    c_mesas -= 1;
    for (i=0; i<1; i++) {
        printf("Se ha registrado una nueva mesa, y se ha añadido el costo del cubierto.\n");
        arr_mesas[i] = i;
        arr_monto[i] = cubierto;
        printf ("Presione una tecla para continuar...");
        getch();
        main();
    }
}

void AddMonto() {
    system ("cls");
    printf ("Ingrese la mesa la cual se le va a añadir el monto: ");
    scanf ("%d", &x);
    printf ("Ingrese el monto ($xx.xx): $");
    scanf ("%f", &monto);
    arr_monto[x] + monto;
    system ("cls");
    printf ("Se ha añadido el monto a la mesa!\n");
    printf ("Presione una tecla para continuar...");
    getch();
    main();
}

void ValorCubierto() {
    system("cls");
    printf("Ingrese el nuevo valor del Cubierto (Actual: $%.2f): $", cubierto);
    scanf ("%f", &cubierto);
    printf ("Se ha cambiado el valor del cubierto actual!\n");
    printf ("Presione una tecla para continuar...");
    getch();
    main();
}

void LiquidarMesa() {
    system ("cls");
    printf ("Ingrese la mesa a liquidar: ");
    scanf ("%d", &x);
    arr_mesas[x] = 0;
    arr_monto[x] = 0;
    arr_mesas[+1];
    c_mesas += 1;
    printf ("Se ha liquidado la mesa!\n");
    printf ("La mesa esta disponible nuevamente."); 
    getch();
    main();
}

int main () {
    system ("cls");
    if (c_mesas <= 0) {
        printf ("\033[1;31mNO QUEDAN MESAS DISPONIBLES!\033[1;0m\n");
    }
    printf (" ===== Controlador de Mesas ===== \n");
    printf ("Ingrese su tipo de operacion:\n");
    printf ("1)Ingresar nueva mesa\n2)Añadir monto a mesa\n3)Cambiar valor del cubierto (Actual: %.2f)\n4)Liquidar Mesa\n5)Salir\n\n", cubierto);
    printf ("(!) Mesas disponibles: %d\n", c_mesas);
    printf ("Res: ");
    scanf ("%d", &des);

    switch (des)
    {
    case 1:
        IngresarMesa();
        break;
    
    case 2:
        AddMonto();
        break;
    
    case 3:
        ValorCubierto();
        break;
    
    case 4:
        LiquidarMesa();
        break;
    
    case 5:
        system ("cls");
        printf ("Hasta Luego!");
        exit(0);
        break;

    default:
        break;
    }
}