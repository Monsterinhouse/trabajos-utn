#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char n_vendedor[11][35];
float v_vendedor[11];
float monto = 0;
float monto_max = 0;
float vendedor_max = 0;
float venta_total = 0;
int sum = 0;
int i, x, des;

void RealizarVenta() {
    system ("cls");
    printf ("Ingrese el N%c de empleado que ha realizado la venta: ", 248);
    scanf ("%d", &x);
    if (x > 10) {
        printf ("El valor no puede ser mayor a 10.");
        x = 0;
        RealizarVenta();
    }
    printf ("Empleado N%c %d: %s\n", 248, x, n_vendedor[x]);
    printf ("Ingrese el monto de la venta: $");
    scanf ("%f", &monto);

    v_vendedor[x] += monto;
    
    if (monto > monto_max) {
        monto_max += monto;
    }
    else if (v_vendedor[x] > monto_max)
    {
        monto_max = v_vendedor[x];
        vendedor_max = x;
    }
    system ("cls");
    printf ("Se ha añadido la venta al vendedor N%c %d\n", 248, x);
    system ("pause");
    Menu();
}

void MostrarVentas() {
    system ("cls");
    printf ("Indique el N%c de vendedor a listar: ", 248);
    scanf ("%d", &x);
    system ("cls");
    printf ("\n=============================== \n");
    printf ("N%c de Vendedor: %d\n", 248, x);
    printf ("Nombre del Vendedor: %s\n", n_vendedor[x]);
    printf ("Ventas totales: $%.2f\n", v_vendedor[x]);
    printf ("=============================== \n");
    system ("pause");
    Menu();
}

void CerrarDia() {
    system ("cls");
    for (x = 0; x >= 11; x++) {
        sum = sum + v_vendedor[x];
        printf ("Ventas del vendedor N%c (%s): ", 248, n_vendedor[x]);
    }
    printf ("");
}

void Menu() {
    system ("cls");
    printf (" ===== Manejador de Ventas ===== \n");
    printf ("Ingrese su operacion: \n");
    printf ("1)Realizar Ventas\n2)Listar Empleado y Ventas\n3)Cerrar Dia\n4)Salir\n");
    printf ("Res: ");
    scanf ("%d", &des);

    switch (des)
    {
    case 1:
        RealizarVenta();
        break;
    
    case 2:
        MostrarVentas();
        break;
    
    case 3:
        CerrarDia();
        break;
    
    case 4:
        system ("cls");
        printf ("Hasta Luego!");
        exit(0);
        break;

    default:
        break;
    }
}

int main () {
    system ("cls");
    for (i=0;i<11;i++) {
        printf("Ingrese el nombre del empleado N%c%d: ", 248, i);
        scanf ("%s", &n_vendedor[i]);
    }
    Menu();
}