#include <stdio.h>
#include <stdlib.h>

char nombre[30];
char apellido[30];
char nya[50];
float sb;

int main () {
    system ("cls");
    printf ("Ingrese su nombre: \n");
    gets (nya);
    // scanf ("%s", nombre);
    // printf ("Ingrese su apellido: \n");-
    // scanf ("%s", apellido);
    printf ("Ingrese el sueldo basico: \n");
    scanf ("%f", &sb);
    // printf ("Nombre y apellido: %s %s\n", nombre, apellido);
    printf ("Nombre y apellido: ");
    puts (nya);
    printf ("Sueldo Basico: %.2f\n", sb);
}