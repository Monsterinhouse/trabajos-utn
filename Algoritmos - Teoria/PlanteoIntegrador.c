#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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

void program () {
    for (i=i;i<7;i++) {
        system ("cls");
        printf ("==== El lugar de las Botellas ====\n\n"); // #humor
        if ((stock_caja<50)) {
            printf("\033[1;31m!!! ADVERTENCIA !!!\nQuedan 50 cajas para embalar.\033[0m\n\n");
        }
        printf ("Bienvenido!\nSeleccione que pedido desea hacer:\n\n");
        printf ("Dia: %d\n", i);
        printf ("Stock Cajas: %d\n\n", stock_caja);
        printf("1) Botella tipo A\n* Valor: $%.2f\n\n", cost_bot_a);
        printf("2) Botella tipo B\n* Valor: $%.2f\n\n", cost_bot_b);
        printf("3) Botella tipo C\n* Valor: $%.2f\n\n", cost_bot_c);
        printf("4) Salir / Pasar al siguiente dia\n\n");
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
            stock_bot_a = stock_bot_a - 6*compra;
            stock_caja = stock_caja - compra;
            if ((stock_bot_a = 0)) {
                printf ("\033[1;31mError - No se puede realizar la compra debido a la falta de stock de botellas\n\033[0m");
                printf ("\033[1;31mCerrando Operaciones - Pasando al siguiente dia >>>\033[0m");
                getch();
                program();
            } else {
                back();
                i++;
                }
            break;
        
        case 2: 
            system ("cls");
            printf ("Ingrese cuantas cajas desea comprar:\n");
            printf ("(Recuerde que las cajas contienen 6 botellas del tipo que haya seleccionado)\n");
            printf ("Cajas: ");
            scanf ("%d", &compra);
            stock_bot_b = stock_bot_b - 6*compra;
            stock_caja = stock_caja - compra;
            if ((stock_bot_b = 0)) {
                printf ("\033[1;31mError - No se puede realizar la compra debido a la falta de stock de botellas\n\033[0m");
                printf ("\033[1;31mCerrando Operaciones - Pasando al siguiente dia >>>\033[0m");
                getch();
                program();
            } else {
                back();
                i++;
                }
            break;

        case 3:
            system ("cls");
            printf ("Ingrese cuantas cajas desea comprar:\n");
            printf ("(Recuerde que las cajas contienen 6 botellas del tipo que haya seleccionado)\n");
            printf ("Cajas: ");
            scanf ("%d", &compra);
            stock_bot_c = stock_bot_c - 6*compra;
            stock_caja = stock_caja - compra;
            if ((stock_bot_c = 0)) {
                printf ("\033[1;31mError - No se puede realizar la compra debido a la falta de stock de botellas\n\033[0m");
                printf ("\033[1;31mCerrando Operaciones - Pasando al siguiente dia >>>\033[0m");
                getch();
                program();
            } else {
                back();
                i++;
                }
            break;
        
        case 4:
            system ("cls");
            printf ("Cambio de dia...\n");
            printf ("Presione cualquier tecla para continuar...");
            getch();
            i++;
            break;

        default:
            system ("cls");
            printf("No ha ingresado ningun valor >:| \n");
            printf("Presione cualquier tecla para continuar...");
            getch();
            program();
            break;
        }
}
}


int main () {
        system ("cls");
        printf ("==== Inicio de Semana ====\n");
        printf ("Bienvenido!\nIngrese los valores que se piden, con los cuales se realizaran las actividades el resto de la semana.\n\n");
        printf ("Presione una tecla para continuar...");
        getch();
        
        system ("cls");
        printf ("Ingrese el valor de la botella tipo A.\n");
        printf ("(Recuerde que se pueden ingresar valores con 2 (dos) ceros despues del punto. (Ej: $00.00))\n\n");
        printf ("Valor: $");
        scanf ("%f", &cost_bot_a);
        system ("cls");
        printf ("Ingrese su stock inicial/actual.\n\n");
        printf ("Stock: ");
        scanf ("%d", &stock_bot_a);

        system ("cls");
        printf ("Ingrese el valor de la botella tipo B.\n");
        printf ("(Recuerde que se pueden ingresar valores con 2 (dos) ceros despues del punto. (Ej: $00.00))\n\n");
        printf ("Valor: $");
        scanf ("%f", &cost_bot_b);
        system ("cls");
        printf ("Ingrese su stock inicial/actual.\n\n");
        printf ("Stock: ");
        scanf ("%d", &stock_bot_b);

        system ("cls");
        printf ("Ingrese el valor de la botella tipo C.\n");
        printf ("(Recuerde que se pueden ingresar valores con 2 (dos) ceros despues del punto. (Ej: $00.00))\n\n");
        printf ("Valor: $");
        scanf ("%f", &cost_bot_c);
        system ("cls");
        printf ("Ingrese su stock inicial/actual.\n\n");
        printf ("Stock: ");
        scanf ("%d", &stock_bot_c);

        system ("cls");
        printf ("=== CAJAS ===\n");
        printf ("Ingrese el stock de cajas actual/inicial.\n\n");
        printf ("Stock (Cajas): ");
        scanf ("%d", &stock_caja);

        program();
}

