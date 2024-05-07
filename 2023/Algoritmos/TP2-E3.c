#include <stdio.h>

int valor = 129;
int res = 0;

int main () {
    printf ("Ingrese el monto a pagar: $129\n");
    printf ("(Recuerde que solo se admiten monedas de $2, $5 y $10)\n");
    printf("Res: $");
    scanf("%d", &res);

    if (res == valor) {
        printf("Se ha realizado la transacion con exito!\nVuelto: $0.00");
    }
    else if (res > valor){
        printf ("Se ha ingresado una cantidad mayor al monto a abonar.\nVuelto: $");
    }
    else if (res < valor) {
        printf ("Se ha ingresado una cantidad menor al monto a abonar.\nSe cancela la compra");
    }
    
}