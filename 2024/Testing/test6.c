#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int data;
    struct nodo *psig;
} 
Nodo;

struct nodo *head = NULL;

void agregarNodo(int data) {

    struct nodo *nuevo = NULL;

    if (head == NULL) {
        struct nodo *nuevo = malloc(sizeof(Nodo));
        nuevo->data = data;
        head = nuevo;
        nuevo->psig = NULL;
    }
    else {
        struct nodo *nuevo = malloc(sizeof(Nodo));
        nuevo->data = data;
        nuevo->psig = head;
        head = nuevo;
    }
    return nuevo;
}

void imprimirLista() {
    system ("cls");
    struct nodo *cor = head;
    while (cor != NULL) {
        printf ("%d -> ", cor->data);
        cor = cor->psig;
    }
    printf("\n");
    system ("pause");
}

int main () {
    int res = 0;
    while (res != 3) {
        system ("cls");
        printf ("===== MENU =====\n");
        printf ("1. Agregar Nodo\n");
        printf ("2. Imprimir Lista\n");
        printf ("Res: ");
        scanf ("%d", &res);

        switch (res) {
        case 1:
            system ("cls");
            printf ("Ingrese el valor a ingresar en el nodo: ");
            scanf ("%d", &res);
            agregarNodo(res);
            break;
        
        case 2:
            printf ("Lista:\n");
            imprimirLista();
            break;
        
        default:
            break;
        }
    }
    
}