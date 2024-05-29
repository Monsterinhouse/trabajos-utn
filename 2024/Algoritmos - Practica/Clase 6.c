#include <stdio.h>
#include <stdlib.h>

float radio, ladoA, ladoB, result;

void circulo() {
    printf ("Ingrese el radio del circulo: ");
    scanf ("%f", radio);
    system ("cls");
    result = radio * 3.14;
    printf ("El area del circulo es: %.2f", result);
    system ("pause");
    volver();
}

void cuadrado() {
    printf ("Ingrese el lado A del cuadrado: ");
    scanf ("%f", &ladoA);
    printf ("Ingrese el lado B del cuadrado: ");
    scanf ("%f", &ladoB);
    system ("cls");
    result = ladoA * ladoB;
    printf ("El area del cuadrado es: %.2f", result);
    system ("pause");
    volver();
}

void rectangulo() {
    printf ("Ingrese el lado A (ancho) del rectangulo: ");
    scanf ("%f", &ladoA);
    printf ("Ingrese el lado B (largo) del rectangulo: ");
    scanf ("%f", &ladoB);
    system ("cls");
    result = ladoA * ladoB;
    printf ("El area del rectangulo es: %.2f", result);
    system ("pause");
    volver();
}

void triangulo() {
    printf ("Ingrese la base del triangulo: ");
    scanf ("%f", &ladoA);
    printf ("Ingrese la altura del triangulo: ");
    scanf ("%f", &ladoB);
    system ("cls");
    result = ladoA * ladoB;
    printf ("El area del triangulo es: %.2f", result);
    system ("pause");
    volver();
}

void trapecio() {

}

void volver() {

}
int main () {

}