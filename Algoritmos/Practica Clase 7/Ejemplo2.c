#include <stdio.h>
#include <stdlib.h>

float rad = 0;
float lado1 = 0;
float lado2 = 0;
float res = 0;
int des = 0;

float a_circ(float rad) {
    res = rad * rad;
    return res;
}

void a_cuadra (float lado1, float lado2) {
    res = lado1 + lado2;

}

void a_recta () {

}

void a_tria () {

}

void a_trap () {

}

int main () {
    system ("clear");
    printf ("===== Calculadora de Area =====\n\n");
    printf ("Seleccione una de las figuras geometricas sobre la cual realizar la operacion\n\n");
    printf ("1)Circulo\n2)Cuadrado\n3)Rectangulo\n4)Triangulo\n5)Trapecio\n6)Salir\n\nRes: ");

    
    scanf ("%d", &des);

    switch (des) {

    case 1:
        system ("clear");
        printf ("Ingrese el radio del circulo. (Ej: 0.00): ");
        scanf ("%f", &rad);
        res = a_circ(rad);
        printf ("El area de un circulo de radio %.2f es: %.2f",rad, res);
        break;
    
    case 2:
        system ("clear");
        printf ("Ingrese el primero lado del cuadrado. (Ej: 0.00): ");
        scanf ("%f", &lado1);
        printf ("Ingrese el segundo lado del cuadrado. (Ej: 0.00): ");
        scanf ("%f", &lado2);
        res = a_cuadra(lado1, lado2);    
        break;
    
    case 3:
        a_recta();
        break;
    
    case 4:
        a_tria();
        break;
    
    case 5:
        a_trap();
        break;
    
    default:
        printf ("Ingrese una opcion valida >:|\n");
        printf ("Presione cualquier tecla para continuar....");
        break;
    }
}