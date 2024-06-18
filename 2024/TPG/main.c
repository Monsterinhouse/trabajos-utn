#include <stdio.h>
#include <stdlib.h>

// Contadores
int res, clienteFrec;
float y;

// Variables


void menu(int contador) {
    system ("cls");
    printf ("===== VETERINARIA =====\n");
    printf ("Dia %d\n", contador);
    printf ("Elija una opcion: \n");
    printf ("1) Consulta Medica\n2) Peluqueria Canina\n3) Venta de Alimento\n4) Cerrar Dia\nRes: ");
    scanf ("%d", &res);

    switch (res) {
    case 1:
        break;
    
    default:
        break;
    }
}

int main () {

}