#include <stdio.h>
#include <stdlib.h>

float radio, ladoA, ladoB, aux, result;
int res;

void circulo() {
    system ("cls");
    printf ("Ingrese el radio del circulo: ");
    scanf ("%f", &radio);
    system ("cls");
    result = radio * 3.14;
    printf ("El area del circulo es: %.2f\n", result);
    system ("pause");
    volver();
}

void cuadrado() {
    system ("cls");
    printf ("Ingrese el lado A del cuadrado: ");
    scanf ("%f", &ladoA);
    printf ("Ingrese el lado B del cuadrado: ");
    scanf ("%f", &ladoB);
    system ("cls");
    result = ladoA * ladoB;
    printf ("El area del cuadrado es: %.2f\n", result);
    system ("pause");
    volver();
}

void rectangulo() {
    system ("cls");
    printf ("Ingrese el lado A (ancho) del rectangulo: ");
    scanf ("%f", &ladoA);
    printf ("Ingrese el lado B (largo) del rectangulo: ");
    scanf ("%f", &ladoB);
    system ("cls");
    result = ladoA * ladoB;
    printf ("El area del rectangulo es: %.2f\n", result);
    system ("pause");
    volver();
}

void triangulo() {
    system ("cls");
    printf ("Ingrese la base del triangulo: ");
    scanf ("%f", &ladoA);
    printf ("Ingrese la altura del triangulo: ");
    scanf ("%f", &ladoB);
    system ("cls");
    result = ladoA * ladoB;
    printf ("El area del triangulo es: %.2f\n", result);
    system ("pause");
    volver();
}

void trapecio() {
    system ("cls");
    printf ("Ingrese la longitud del lado A: ");
    scanf ("%f", &ladoA);
    printf ("Ingrese la longitud del lado B: ");
    scanf ("%f", &ladoB);
    printf ("Ingrese la altura: ");
    scanf ("%f", &aux);
    system ("cls");
    result = (ladoA + ladoB) * (aux / 2);
    printf ("El area del trapecio es: %.2f\n", result);
    system ("pause");
    volver();
}

void volver() {
    system ("cls");
    printf ("Desea ingresar otros valores?\n");
    printf ("1) Si\n2) No\n");
    printf ("Res: ");
    scanf ("%d", &res);
    
    if (res == 1) {
        main();
    }

    else {
        exit(0);
    }

}

int main () {
    system ("cls");
    printf ("===== MENU =====\n");
    printf ("Elija una opcion: \n");
    printf ("1) Area de un Circulo\n2) Area de un cuadrado\n3) Area de un rectangulo\n4) Area de un triangulo\n5) Area de un trapecio\n0) Salir\n");
    printf ("Res: ");
    scanf ("%d", &res);

    switch (res) {
        
    case 1:
        circulo();
        break;
    
    case 2:
        cuadrado();
        break;
    
    case 3:
        rectangulo();
        break;
    
    case 4:
        triangulo();
        break;
    
    case 5:
        trapecio();
        break;
    
    case 0:
        system ("cls");
        printf ("Hasta luego!");
        exit (0);
        break;

    default:
        printf ("Ingrese una opcion valida!");
        main();
        break;
    }
}