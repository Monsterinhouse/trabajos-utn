/*
Ejercicio 4 - TP2
Un empleado de banco tiene un sistema que imprime un ticket cada vez que un cliente realiza una compra de dólares.
La operación tiene una comisión administrativa según la cantidad de dólares que se venden, lo que representa un sobre costo para el cliente:
a. 2% si es más de 501 y menos de 1501
b. 2,5% si es mayor de 1501 y menos que 3501
c. 4 % si es mayor a 3501
El ticket muestra discriminados: la cantidad de dólares que se compraron, 
el valor de cada dólar, el monto de la comisión y el monto total que el cliente debe abonar por la compra.
Hacer un programa que simule la compra e imprima el ticket.
*/

#include <stdio.h>
#include <stdlib.h>

float c_dol, valdol, tot_dol, com;

int main () {
    system ("cls");
    printf ("Ingrese el valor del dolar hoy: U$D ");
    scanf ("%f", &valdol);
    system ("cls");
    printf ("===== Compra de Dolares =====\n");
    printf ("Ingrese la cantidad de dolares que desea comprar: \n(Recuerde que existe un recargo a partir de los U$D 501)\nValor del dolar hoy: U$D %.2f\n", valdol);
    printf ("Cantidad: $");
    scanf ("%f", &c_dol);
    
    tot_dol += c_dol * valdol;

    if (c_dol > 501) {
        tot_dol += (2/100) * tot_dol;
        com = tot_dol - c_dol;
    }
    else if (c_dol > 1501) {
        tot_dol += (2.5/100) * tot_dol;
        com = tot_dol - c_dol;
    }
    else if (c_dol > 3501) {
        tot_dol += (4/100) * tot_dol;
        com = tot_dol - (4/100) * tot_dol;
    }

    system ("cls");

    printf ("===== Recibo de compra =====\n");
        printf ("(#) Cantidad de dolares comprados: %.2f\n", c_dol);
        printf ("(#) Valor del dolar actual: %.2f\n", valdol);
        if (c_dol > 501) {
            printf ("(+) Comision por compra mayor: %.2f\n", com);
        }
        printf ("(#) Cantidad total a abonar: U$D %.2f\n", tot_dol);
        return 'x';
    }
