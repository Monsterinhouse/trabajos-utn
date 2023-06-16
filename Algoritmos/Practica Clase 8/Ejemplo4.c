#include <stdio.h>
#include <stdlib.h>

// const int CANT_ELEM = 10;
int i,x,cp,c,t,des;

int productos[10][4];
int stock[10];
float precios[10];
float total_ventas[10];
float precio_total = 0;

void Venta() {
    printf ("==== VENTA ====");
    printf ("Ingrese el codigo de producto: N%c", 248);
    scanf ("%d", &cp);
    printf ("Ingrese el talle: ");
    scanf ("%d", &t);
    printf ("Cantidad: ");
    scanf ("%d", &c);
    system ("cls");

    precio_total = precios[cp] * c;

    printf ("==== RECIBO ====\n");
    printf ("Codigo: N%c%d\n", 248, cp);
    printf ("Talle: %d\n", 248, t);
    printf ("Cantidad Vendida: %d\n", c);
    printf ("Precio Total: $%.2f\n\n", precio_total);

    system ("pause");
}

void Menu() {
    system ("cls");
    printf (" ===== Menu de Venta de Ropa ===== \n");
    printf ("Seleccione la operacion a realizar:\n");
    printf ("1)Realizar Venta\n2)Cerrar Dia\nRes: ");
    scanf ("%d", &des);

    switch (des)
    {
    case 1:
        Venta();
        break;
    
    default:
        break;
    }
}

int main () {
    system ("cls");
    for (i = 0; i < 3; i++) {
        for (x = 0; x < 4; x++) {
            system ("cls");
            printf("Ingrese el stock del producto N%c%d / Talle %d:\nStock: ", 248, i, x);
            scanf ("%d", &stock[i]);
            printf ("Ingrese el precio del producto%c%d:\nPrecio: ", 248, i);
            scanf ("%f", &precios[i]);
            productos[i][x] + i;
            productos[i][x] + x;
        }
    }
    Menu();
}