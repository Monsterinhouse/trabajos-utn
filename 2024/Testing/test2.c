#include <stdio.h>
#include <stdlib.h>

char nya[50];
char nya2[50];

int main () {
    printf ("Ingrese su nombre: ");
    gets (nya);
    printf ("Ingrese su nombre (char): ");
    scanf ("%c", &nya2);
    printf ("Nombre: ");
    puts (nya);
    printf ("Nombre (char): %c", &nya2);
}