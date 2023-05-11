#include <stdio.h>
#include <stdlib.h>

float cost_bot_a = 0;
float cost_bot_b = 0;
float cost_bot_c = 0;
int stock_bot_a = 0;
int stock_bot_b = 0;
int stock_bot_c = 0;
int stock_caja = 0;
int compra = 0;
int des = 0;
int desback = 0;
int i;

void back () {
    system("cls");
    printf ("Gracias por su compra!\nDesea realizar otra compra?\n");
    printf ("1)Si\n2)No\n");
    printf ("Res: ");
    scanf ("%d", &desback);
    if (desback == 1) {
        program();
    }
    else {}
}
void inicioSemana () {
    system ("cls");
    printf ("==== Inicio de Semana ====\n");
    printf ("Bienvenido!\nIngrese los valores que se piden, con los cuales se realizaran las actividades el resto de la semana.\n");
    printf ("Presione una tecla para continuar...");
    getch();
    
    system ("cls");
    printf ("Ingrese el valor de la botella tipo A.\n");
    printf ("(Recuerde que se pueden ingresar valores con 2 (dos) ceros despues del punto. (Ej: $00.00))\n");
    printf ("Valor: $");
    scanf ("%f", &cost_bot_a);
    system ("cls");
    printf ("Ingrese su stock inicial/actual.\n");
    printf ("Stock: ");
    scanf ("%d", &stock_bot_a);

    system ("cls");
    printf ("Ingrese el valor de la botella tipo B.\n");
    printf ("(Recuerde que se pueden ingresar valores con 2 (dos) ceros despues del punto. (Ej: $00.00))\n");
    printf ("Valor: $");
    scanf ("%f", &cost_bot_b);
    system ("cls");
    printf ("Ingrese su stock inicial/actual.\n");
    printf ("Stock: ");
    scanf ("%d", &stock_bot_b);

    system ("cls");
    printf ("Ingrese el valor de la botella tipo C.\n");
    printf ("(Recuerde que se pueden ingresar valores con 2 (dos) ceros despues del punto. (Ej: $00.00))\n");
    printf ("Valor: $");
    scanf ("%f", &cost_bot_c);
    system ("cls");
    printf ("Ingrese su stock inicial/actual.\n");
    printf ("Stock: ");
    scanf ("%d", &stock_bot_c);

    system ("cls");
    printf ("Ingrese el stock de cajas actual/inicial.\n");
    printf ("Stock (Cajas): ");
    scanf ("%d", &stock_caja);
}

void program () {
    system ("cls");
    printf ("==== El lugar de las Botellas ====\n"); // #humor
    printf ("Bienvenido!\nSeleccione que pedido desea hacer:\n\n");
    printf("1) Botella tipo A\n* Valor: %.2f\n\n", cost_bot_a);
    printf("2) Botella tipo B\n* Valor: %.2f\n\n", cost_bot_b);
    printf("3) Botella tipo C\n* Valor: %.2f\n\n", cost_bot_c);
    printf ("Opcion: ");
    scanf ("%d", &des);
    
    switch (des)
    {
    case 1:
        system ("cls");
        printf ("Ingrese cuantas cajas desea comprar:\n");
        printf ("(Recuerde que las cajas contienen 6 botellas del tipo que haya seleccionado)\n");
        printf ("Cajas: ");
        scanf ("%d", &compra);
        stock_bot_a - 6;
        stock_caja - 1;
        back();
        break;
    
    case 2: 
        system ("cls");
        printf ("Ingrese cuantas cajas desea comprar:\n");
        printf ("(Recuerde que las cajas contienen 6 botellas del tipo que haya seleccionado)\n");
        printf ("Cajas: ");
        scanf ("%d", &compra);
        stock_bot_b - 6;
        stock_caja - 1;
        back();
        break;

    case 3:
        system ("cls");
        printf ("Ingrese cuantas cajas desea comprar:\n");
        printf ("(Recuerde que las cajas contienen 6 botellas del tipo que haya seleccionado)\n");
        printf ("Cajas: ");
        scanf ("%d", &compra);
        stock_bot_c - 6;
        stock_caja - 1;
        back();

    default:
        break;
    }
}



int main () {
inicioSemana();
    for (i = 0;i<7;i++) {
        program();
}
}

