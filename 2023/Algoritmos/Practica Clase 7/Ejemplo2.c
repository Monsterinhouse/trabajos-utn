#include <stdio.h>
#include <stdlib.h>

float rad = 0;
float lado1 = 0;
float lado2 = 0;
float altura = 0;
float res = 0;
float i, x;
int des = 0;

float a_circ(float rad) {
    res = rad * rad;
    return res;
}

float a_cuadra (float lado1, float lado2) {
    res = lado1 * lado2;
    return res;
}

float a_recta (float lado1, float lado2) {
    res = lado1 * lado2;
    return res;
}

float a_tria (float lado1, float lado2) {
    res = (lado1 * lado2) / 2;
    return res;
}

float a_trap (float lado1, float lado2, float altura) {
    i = (lado1 * lado2) / 2 ;
    res = i * altura;
    return res;
}

int cont () {
    int x = 0;
    system ("cls");
    printf ("Desea calcular otras figuras geometricas?\n");
    printf ("1)Si\n2)No\n\nRes: ");
    scanf ("%d", &x);
    if (x == 1) {
        main();
    }else {printf("Hasta luego!");}
}

int main () {               // Si se corre el programa en Linux, hay que cambiar los "cls" de windows
    system ("cls");         // con los "clear" de Linux
    printf ("===== Calculadora de Area =====\n\n");
    printf ("Seleccione una de las figuras geometricas sobre la cual realizar la operacion\n\n");
    printf ("1)Circulo\n2)Cuadrado\n3)Rectangulo\n4)Triangulo\n5)Trapecio\n6)Salir\n\nRes: ");
    scanf ("%d", &des);

    switch (des) {

    case 1:
        system ("cls");
        printf ("Ingrese el radio del circulo. (Ej: 0.00): ");
        scanf ("%f", &rad);
        res = a_circ(rad);
        system ("cls");
        printf ("El area de un circulo de radio %.2f es: %.2f\n\n",rad, res);
        printf ("Presione cualquier tecla para continuar...");
        getch();
        cont();
        break;
 
    case 2:
        system ("cls");
        printf ("Ingrese el primer lado del cuadrado (Base). (Ej: 0.00): ");
        scanf ("%f", &lado1);
        system ("cls");
        printf ("Ingrese el segundo lado del cuadrado (Altura). (Ej: 0.00): ");
        scanf ("%f", &lado2);
        res = a_cuadra(lado1, lado2);
        system ("cls");
        printf ("El area de un cuadrado de Base %.2f y Altura %.2f es: %.2f\n\n", lado1, lado2, res);
        printf ("Presione cualquier tecla para continuar...");
        getch();
        cont();
        break;
    
    case 3:
        system ("cls");
        printf ("Ingrese el primer lado del rectangulo (Base). (Ej: 0.00): ");
        scanf ("%f", &lado1);
        system ("cls");
        printf ("Ingrese el segundo lado del rectangulo (Altura). (Ej: 0.00): ");
        scanf ("%f", &lado2);
        res = a_recta(lado1, lado2);
        system ("cls");
        printf ("El area de un rectangulo de Base %.2f y Altura %.2f es: %.2f\n\n", lado1, lado2, res);
        printf ("Presione cualquier tecla para continuar...");
        getch();
        cont();
        break;
    
    case 4:
        system ("cls");
        printf ("Ingrese el primer lado del triangulo (Base). (Ej: 0.00): ");
        scanf ("%f", &lado1);
        system ("cls");
        printf ("Ingrese el segundo lado del triangulo (Altura). (Ej: 0.00): ");
        scanf ("%f", &lado2);
        res = a_tria(lado1, lado2);
        system ("cls");
        printf ("El area de un triangulo de Base %.2f y Altura %.2f es: %.2f\n\n", lado1, lado2, res);
        printf ("Presione cualquier tecla para continuar...");
        getch();
        cont();
        break;
    
    case 5:
        system ("cls");
        printf ("Ingrese el primer lado del trapecio (Base Mayor). (Ej: 0.00): ");
        scanf ("%f", &lado1);
        system ("cls");
        printf ("Ingrese el segundo lado del triangulo (Base Menor). (Ej: 0.00): ");
        scanf ("%f", &lado2);
        system ("cls");
        printf ("Ingrese la altura del trapecio. (Ej: 0.00): ");
        scanf ("%f", &altura);
        res = a_trap(lado1, lado2, altura);
        system ("cls");
        printf ("El area de un trapecio de Base Mayor (%.2f), Base Menor (%.2f) y Altura %.2f es: %.2f\n\n", lado1, lado2, altura, res);
        printf ("Presione cualquier tecla para continuar...");
        getch();
        cont();
        break;
    
    case 6: 
        printf ("Hasta Luego!");
        break;
    
    default:
        system ("cls");
        printf ("Ingrese una opcion valida >:|\n");
        printf ("Presione cualquier tecla para continuar....");
        break;
    }
}