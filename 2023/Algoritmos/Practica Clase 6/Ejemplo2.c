#include <stdio.h>
#include <stdlib.h>

// Declaracion de Variables
float total = 0;
float venta = 0;
float prom = 0;
float m_max = 0;
int d_max = 0;
int i;
int des = 0;

// Inicio del programa
int main () {
    system ("color 0a");  // Esto es solo un poco de color al texto
    for (i=1; i<8; i++) {
        system ("cls"); // Uso la libreria <stdlib.h> para usar comandos de cmd, como este para limpiar la pantalla
        printf("Ingrese las ventas del dia %d: \n", i);
        printf ("Recuerde que se permiten valores con 2 (dos) ceros luego del punto (Ej: $00.00)\n");
        printf ("Ventas: $");
        scanf ("%f", &venta);
        total = total + venta;
        if (venta>m_max) {  // La operacion que decide y remplaza los valores en caso de que
            m_max = venta;  // uno de los dias y ventas sea mayor al dia/ventas anterior
            d_max = i;
        }
    }

    prom = total / 7;

    // Formateo y Presentacion organizada de los valores
    system ("cls");
    printf ("=======================================\n");
    printf ("La cantidad total de ventas son: $%.2f\n", total);
    printf ("El promedio de ventas es: $%.2f\n", prom);
    printf ("El dia %d fue el dia con mayor cantidad de ventas! ($%.2f)\n", d_max, m_max);
    printf ("=======================================\n");

    // Simple funcion de repeticion que permite volver a iniciar el codigo desde el principio
    printf ("\nDesea ingresar otros valores?\n");
    printf ("1) Si\n2) No\n");
    printf ("Res: ");
    scanf ("%d", &des);

    if (des == 1) {
        main();
    }
    else {
        exit(0);
    }
}